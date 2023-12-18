. ./vars.ps1

if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "KAT_*";
}

Remove-Item "temp" -Force  -Recurse -ErrorAction SilentlyContinue
mkdir "temp";

# preprocessor stuff
$oldPreference = $ErrorActionPreference
$ErrorActionPreference = 'stop'
try {if(Get-Command php){
	php KAT_ARMOR/_preprocessor/makeArmor.php
	php KAT_Gear/tictacs/csvToTictac.php
}}
catch {Write-Host "[WARN] php not found. skipping armor and tictac generation" -ForegroundColor yellow}
finally {$ErrorActionPreference = $oldPreference}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear -temp=temp;
}
