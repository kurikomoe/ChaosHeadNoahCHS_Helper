-- add_requires("microsoft-proxy 2.4.0")
add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate")

set_languages("cxx11", "c++11")

add_requires("minhook")

local name = "dbghelp"
target(name)
    set_kind("shared")
    add_files("src/*.cpp")
    add_packages("minhook")
    add_links("user32", "gdi32")
    add_linkdirs("$(projectdir)/lib")
    add_files(string.format("lib/%s.def", name), string.format("lib/%s.asm", name))
