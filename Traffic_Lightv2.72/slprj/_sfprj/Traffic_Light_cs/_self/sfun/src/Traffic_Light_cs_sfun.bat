@echo off
set COMPILER=cl
                set COMPFLAGS=/c /Zp8 /GR /W3 /EHs /nologo /MD /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0   /DMATLAB_MEX_FILE  /DMATLAB_MEX_FILE
                set OPTIMFLAGS=/O2 /Oy- /DNDEBUG
                set DEBUGFLAGS=/Z7
                set LINKER=link
                set LINKFLAGS=/nologo /manifest  /export:%ENTRYPOINT% /DLL /LIBPATH:"D:\MATLAB\R2019b\extern\lib\win64\microsoft" libmx.lib libmex.lib libmat.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /EXPORT:mexFunction
                set LINKDEBUGFLAGS=/debug /PDB:"%OUTDIR%%MEX_NAME%.mexw64.pdb"
                set NAME_OUTPUT=/out:"%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\HostX64\x64\;D:\Microsoft Visual Studio\2017\Community\Common7\IDE\VC\vcpackages;D:\Microsoft Visual Studio\2017\Community\Common7\IDE;D:\Microsoft Visual Studio\2017\Community\Common7\Tools;D:\Windows Kits\10\\Bin\10.0.17763.0\x64;D:\Windows Kits\10\\Bin\10.0.17763.0\x86;D:\Windows Kits\10\\Bin\x64;D:\Windows Kits\10\\Bin\x86;;%MATLAB_BIN%;%PATH%
set INCLUDE=D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\include;D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\atlmfc\include;D:\Windows Kits\10\\include\10.0.17763.0\ucrt;D:\Windows Kits\10\\include\10.0.17763.0\shared;D:\Windows Kits\10\\include\10.0.17763.0\um;D:\Windows Kits\10\\include\10.0.17763.0\winrt;D:\MATLAB\R2019b\extern\include;%INCLUDE%
set LIB=D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\lib\x64;D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\atlmfc\lib\x64;D:\Windows Kits\10\\Lib\10.0.17763.0\ucrt\x64;D:\Windows Kits\10\\lib\10.0.17763.0\um\x64;D:\MATLAB\R2019b\lib\win64;%LIB%
set LIBPATH=D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\lib\x64;D:\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\atlmfc\lib\x64;%LIBPATH%

nmake -f Traffic_Light_cs_sfun.mak
