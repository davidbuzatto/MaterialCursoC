# Script do Windows PowerShell para atualização da variável de ambiente PATH,
# Adicionando o diretório padrão da instalação do GCC do MinGW via MSYS2.
#
# Autor: Prof. Dr. David Buzatto

Write-Host criando ou atualizando a variavel de ambiente PATH...

$gccTempMSYSSetting = [System.Environment]::GetEnvironmentVariable( "PATH", "User" )
$gccDir = "C:\msys64\ucrt64\bin"

if ( Test-Path $gccDir ) {
    if ( $null -eq $gccTempMSYSSetting ) {
        $gccTempMSYSSetting = "C:\msys64\ucrt64\bin"
    } else {
        $gccTempMSYSSetting = "C:\msys64\ucrt64\bin;" + $gccTempMSYSSetting
    }
    [Environment]::SetEnvironmentVariable( "PATH", $gccTempMSYSSetting, "User" )
    Write-Host "conteudo da variavel PATH:" $gccTempMSYSSetting
    Write-Host tudo ok, agora essa janela pode ser fechada. -f Green
} else {
    Write-Host "O diretorio" $gccDir "nao existe!" -f Red
}


PAUSE