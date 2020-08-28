@echo off 

mkdir ..\build
pushd ..\build
cl -FC -Zi /EHsc ..\StructuralPatterns\Facade.cpp user32.lib
popd