workspace "Test"
configurations { "Debug", "Release" }
location "build"

project "Test"
kind "ConsoleApp"
language "C"
includedirs "./src/Lunoversis/"
libdirs "./bin/Debug/"
links "Munich.lib"
location "build/Test"
targetdir "bin/%{cfg.buildcfg}"

files { "./src/Test/**.h", "./src/Test//**.c" }
