#![allow(non_snake_case, dead_code, unused_imports)]
#![allow(clippy::single_match)]

use std::ffi::{c_void, CStr};

use anyhow::Result;
use windows::core::{h, s, w, PCWSTR};
use windows::Win32::Foundation::{HINSTANCE, HMODULE};
use windows::Win32::System::LibraryLoader::{GetProcAddress, LoadLibraryW};
use windows::Win32::System::SystemServices::DLL_PROCESS_ATTACH;
use windows::Win32::UI::WindowsAndMessaging::{CreateWindowExW, MessageBoxW, MB_OK};

include!(concat!(env!("OUT_DIR"), "/exports.rs"));

static mut orig_CreateWindowExW: *mut c_void = std::ptr::null_mut();

type CreateWindowExWFnT = unsafe extern "system" fn(
    dw_ex_style: u32,
    lp_class_name: PCWSTR,
    lp_window_name: PCWSTR,
    dw_style: u32,
    x: i32,
    y: i32,
    n_width: i32,
    n_height: i32,
    h_wnd_parent: *mut std::ffi::c_void, // HWND is typically represented as a raw pointer
    h_menu: *mut std::ffi::c_void,       // HMENU is also a raw pointer
    h_instance: *mut std::ffi::c_void,   // HINSTANCE is usually represented as a raw pointer
    lp_param: *mut std::ffi::c_void,     // LPVOID is a raw pointer to a void type
);

unsafe extern "system" fn detour_CreateWindowExW(
    dw_ex_style: u32,
    lp_class_name: PCWSTR,
    lp_window_name: PCWSTR,
    dw_style: u32,
    x: i32,
    y: i32,
    n_width: i32,
    n_height: i32,
    h_wnd_parent: *mut std::ffi::c_void, // HWND is typically represented as a raw pointer
    h_menu: *mut std::ffi::c_void,       // HMENU is also a raw pointer
    h_instance: *mut std::ffi::c_void,   // HINSTANCE is usually represented as a raw pointer
    lp_param: *mut std::ffi::c_void,     // LPVOID is a raw pointer to a void type
) {
    let f: CreateWindowExWFnT = std::mem::transmute(orig_CreateWindowExW);

    f(
        dw_ex_style,
        lp_class_name,
        w!("Test"),
        dw_style,
        x,
        y,
        n_width,
        n_height,
        h_wnd_parent,
        h_menu,
        h_instance,
        lp_param,
    );
}

unsafe fn payload() -> Result<()> {
    proxy::setupRedirection();

    let (pp_orig, pp_target) = minhook::MinHook::create_hook_api_ex(
        "user32",
        "CreateWindowExW",
        detour_CreateWindowExW as *mut c_void,
    ).unwrap();

    orig_CreateWindowExW = pp_orig;

    minhook::MinHook::enable_all_hooks().unwrap();

    Ok(())
}

#[no_mangle]
extern "system" fn DllMain(_: HINSTANCE, reason: u32, _reserved: isize) -> i32 {
    match reason {
        DLL_PROCESS_ATTACH => {
            unsafe {
                // MessageBoxW(None, w!("Hello, World!"), w!("Dll Loaded"), MB_OK);
                payload().ok();
            }
        }
        _ => {}
    }

    1
}
