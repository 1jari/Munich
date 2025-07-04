workspace "Lunoversis"
configurations { "Debug", "Release" }
location "build"

project "Munich"
kind "ConsoleApp"
language "C"
architecture "x64"
location "build/ProjSetup"
targetdir "bin/%{cfg.buildcfg}"

files { "src/**.h", "src/**.c" }
