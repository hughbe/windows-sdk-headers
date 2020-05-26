$path = "${Env:ProgramFiles(x86)}\Windows Kits\10\Include"

if (!(Test-Path $path)) {
    Write-Error "Windows SDK not installed"
    return
}

echo $path
Copy-Item -Path $path -Destination "." -Recurse