@echo off 

mkdir ..\build
pushd ..\build
cl -FC -Zi /EHsc ..\BehavioralPatterns\Strategy.cpp user32.lib
popd