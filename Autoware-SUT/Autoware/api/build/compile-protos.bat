rem Usage: compile-protos.bat <destination> <language> <compile-grpc-flag>

set DEST=%1%
mkdir %DEST%

pushd %~dp0\..
set PROTOS=%cd%
popd

FOR /F "tokens=* USEBACKQ" %%F IN (`where protoc.exe`) DO (
SET PROTOC_DIR=%%~dpF
)

echo Destination Directory: %DEST%
echo Protoc Directory: %PROTOC_DIR%
echo Protos Directory: %PROTOS%

if "%2"=="csharp" (
  del /q "%DEST%\*.cs"
  set OUT_OPTION=--csharp_out
  set GRPC_PLUGIN=grpc_csharp_plugin.exe
)

if "%2"=="cpp" (
  rmdir /q /s "%DEST%\metamoto"
  set OUT_OPTION=--cpp_out
  set GRPC_PLUGIN=grpc_cpp_plugin.exe
)

for /r "%PROTOS%\metamoto\messages" %%i in (*.proto) do (
  echo Compiling %%i...
  "%PROTOC_DIR%\protoc.exe" -I="%PROTOS%" %OUT_OPTION%=%DEST% "%%i"
)

for /r "%PROTOS%\metamoto\types" %%i in (*.proto) do (
  echo Compiling %%i...
  "%PROTOC_DIR%\protoc.exe" -I="%PROTOS%" %OUT_OPTION%=%DEST% "%%i"
)

if "%3"=="1" (
  for /r "%PROTOS%\metamoto\services" %%i in (*.proto) do (
    echo Compiling %%i...
    "%PROTOC_DIR%\protoc.exe" -I="%PROTOS%" %OUT_OPTION%=%DEST% --grpc_out=%DEST% --plugin=protoc-gen-grpc="%PROTOC_DIR%\%GRPC_PLUGIN%" "%%i"
  )
)

echo Done
