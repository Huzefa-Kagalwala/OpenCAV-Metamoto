echo off
set API_HOME=..\..\..\Common\API
call %API_HOME%\build\compile-protos.bat "%~dp0\generated" cpp 1
