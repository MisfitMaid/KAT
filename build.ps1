. ./vars.ps1

if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "KAT_*";
}

# preprocessor stuff
$oldPreference = $ErrorActionPreference
$ErrorActionPreference = 'stop'
try {if(Get-Command php){
	php KAT_Gear/tictacs/csvToTictac.php

	curl "https://docs.google.com/spreadsheets/d/1ZKEbKNlRvx0r0isqFN1tWX5DEFEw8uWWZIFkfc99PQI/gviz/tq?tqx=out:csv&sheet=Names" > misc/ribbonboard/orbat.csv
	rm KAT_Gear/dressuniforms/uniform_*.png
	rm KAT_Gear/dressuniforms/uniform_*.paa
	rm misc/ribbonboard/out/*.png
	php misc/ribbonboard/gen.php
	cp misc/ribbonboard/out/uniform_*.png KAT_Gear/dressuniforms/
	cp misc/ribbonboard/config.cpp KAT_Gear/dressuniforms/config.cpp
}}
catch {Write-Host "[WARN] php not found. skipping tictac generation" -ForegroundColor yellow}
finally {$ErrorActionPreference = $oldPreference}

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures -clear;
}
