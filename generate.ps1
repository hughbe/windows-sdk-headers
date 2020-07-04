$path = "${Env:ProgramFiles(x86)}\Windows Kits\10\Include"

if (!(Test-Path $path)) {
    Write-Error "Windows SDK not installed"
    return
}

echo $path
Copy-Item -Path $path -Destination "." -Recurse

// Update latest
Remove-Item "Include/latest" -Recurse
$latest = Get-ChildItem -Directory "Include" | Sort-Object -Property $_.Name| Select-Object -First 1
echo "Latest: $latest"
Copy-Item -Path "Include/$latest" -Destination "Include/latest" -Recurse