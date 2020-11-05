set API_HOME=../../API

set API=
pushd %~dp0
cd %API_HOME%
set API=%cd%
popd

for /F %%A in ('dir /s /b %API%\*.proto') do python -m grpc_tools.protoc -I%API% --python_out=. --grpc_python_out=. %%A
