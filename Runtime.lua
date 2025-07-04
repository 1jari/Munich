workspace "Lunoversis"
configurations { "Debug", "Release" }
location "build"

project "Munich"
kind "SharedLib"
language "C"
location "build/Munich"
targetdir "bin/%{cfg.buildcfg}"
objdir "build/obj/%{prj.name}/%{cfg.buildcfg}"

files {
    "src/Lunoversis/**.h",
    "src/Lunoversis/**.c"
}

includedirs { "src/Lunoversis" }

filter "system:windows"
defines { "MUNICH_EXPORT" }
-- Enable symbol export
characterset "Unicode"

filter "configurations:Debug"
defines { "DEBUG" }
symbols "On"

filter "configurations:Release"
defines { "NDEBUG" }
optimize "On"
