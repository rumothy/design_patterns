@echo off 

mkdir ..\build
pushd ..\build
cl -FC -Zi /EHsc ..\BehavioralPatterns\%1 user32.lib
popd