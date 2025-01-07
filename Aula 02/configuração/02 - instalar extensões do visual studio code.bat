@ECHO OFF

REM Arquivo de lotes do Windows para instalação das extensões do
REM Visual Studio Code.
REM 
REM Autor: Prof. Dr. David Buzatto

CALL code --install-extension ms-vscode.cpptools-extension-pack --install-extension jeff-hykin.better-cpp-syntax --install-extension danielpinto8zz6.c-cpp-compile-run --force
ECHO tudo ok, agora essa janela pode ser fechada.
PAUSE