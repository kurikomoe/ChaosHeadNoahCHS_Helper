use std::{env, fs};
use std::ffi::CStr;
use std::io::{BufWriter, Write};
use std::path::Path;

use anyhow::Result;
use exe::{ExportDirectory, VecPE};
use exe::Address;
use serde_json::json;

macro_rules! p {
    ($($tokens: tt)*) => {
        println!("cargo:warning={}", format!("{:?}", $($tokens)*))
    }
}

fn build_def_file(data: &serde_json::Value) -> String {
    let reg= handlebars::Handlebars::new();
    let template = fs::read_to_string("lib/exports_def.hbs").unwrap();
    reg.render_template(&template, &data).unwrap()
}

fn build_rs_file(data: &serde_json::Value) -> String {
    let reg= handlebars::Handlebars::new();
    let template = fs::read_to_string("lib/exports_rs.hbs").unwrap();
    reg.render_template(&template, &data).unwrap()
}


fn main() -> Result<()> {
    let image = VecPE::from_disk_file(r#"C:\windows\system32\dbghelp.dll"#)?;

    let out_dir = env::var_os("OUT_DIR").unwrap();
    let def_file_path = Path::new(&out_dir).join("exports.def");
    let rs_file_path = Path::new(&out_dir).join("exports.rs");

    let image_export_dir = ExportDirectory::parse(&image)?;

    let export_functions = image_export_dir.get_names(&image)?;

    let mut names = Vec::new();
    for chunk in export_functions {
        let name = unsafe { CStr::from_ptr(chunk.as_ptr(&image).unwrap() as *const _) };
        let name = name.to_str().unwrap().trim_end().to_owned();
        names.push(name);
    }

    let func_names: Vec<serde_json::Value> = names
        .into_iter()
        .enumerate()
        .map(|(idx, name)| json!({
            "name": name,
            "ord": idx+1,
        }))
        .collect();

    let data = json!({
        "dll_name": "dbghelp",
        "func_names": func_names,
    });

    let def_file = std::fs::File::create(&def_file_path)?;
    let mut writer = BufWriter::new(def_file);
    writer.write_all(build_def_file(&data).as_bytes())?;

    let rs_file = std::fs::File::create(&rs_file_path)?;
    let mut writer = BufWriter::new(rs_file);
    writer.write_all(build_rs_file(&data).as_bytes())?;

    println!("cargo:rustc-cdylib-link-arg=/DEF:{}", def_file_path.display());
    Ok(())
}
