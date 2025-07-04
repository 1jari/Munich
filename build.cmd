@echo off
premake5 vs2022
msbuild .\build\Lunoversis.sln
msbuild .\build\Test.sln
