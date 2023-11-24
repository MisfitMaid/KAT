. ./vars.ps1

if ($args.count -gt 0) {
	$dirs = $args[0];
} else {
	$dirs = "KAT_*";
}

# preprocessor stuff
php KAT_Gear/tictacs/csvToTictac.php

Get-ChildItem . -Directory $dirs | Foreach-Object {
	$fn = $_.FullName;
	$signArg = "-sign=" + $privKey;
	$whitelistArg = "-include=" + $( Get-Location ) + "\addonBuilderWhitelist.txt";
	
	& $addonBuilder $fn $destination $signArg $whitelistArg -binarizeFullLogs -binarizeAllTextures;
}
