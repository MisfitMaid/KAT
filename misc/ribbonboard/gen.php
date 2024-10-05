<?php

require_once "vendor/autoload.php";

use Intervention\Image\ImageManager;
use Intervention\Image\Drivers\Gd\Driver;

$ribbons = [];
$ribbons['Legion of Honor']         = 'img/01 legion of honor.png';
$ribbons['Colonial Cross']          = 'img/02 collie cross.png';
$ribbons['Silver Star']             = 'img/04 silver star.png';
$ribbons['Bronze Star']             = 'img/08 bronze star.png';
$ribbons['Purple Heart']            = 'img/09 purple heart.png';
$ribbons['Colonial Defense Ribbon'] = 'img/21 colonial defense.png';

$handle = fopen("ribbons.csv", "r");
$awards = [];
fgetcsv($handle, 1000, ","); // skip header row
while ($v = fgetcsv($handle, 1000, ",")) {
    $awards[] = $v;
}
fclose($handle);

$chars = [];
foreach ($awards as $award) {
    if (!array_key_exists($award[0], $chars)) {
        $chars[$award[0]] = [];
        foreach (array_keys($ribbons) as $r) $chars[$award[0]][$r] = 0;
    }
    $chars[$award[0]][$award[1]]++;
}

var_dump($chars);

$manager = new ImageManager(new Driver());
$devices = [
    0 => [],
    1 => [120],
    2 => [80, 160],
    3 => [60, 120, 180],
    4 => [48, 96, 144, 192],
    5 => [40, 80, 120, 160, 200],
];


foreach ($chars as $name => $char) {
    $img = $manager->create(960,ceil(count($char)/4)*65);
    $row = 0;
    $col = 0;
    foreach ($char as $k => $v) {
        if ($v == 0) continue;
        $v--; // first medal doesnt have devices
        
        $img->place($ribbons[$k], "top-left", 240 * $col, 65 * $row);
        $img->place("img/ribbon-overlay.png", "top-left", 240 * $col, 65 * $row);

        $silver = floor($v / 5);
        $gold = $v % 5;

        $offsets = $devices[$gold + $silver];
        foreach ($offsets as $index => $offset) {
            $device = ($gold > $index) ? "img/device-goldstar.png" : "img/device-silverstar.png";
            $img->place($device, "top-left", (240 * $col) + $offset - 16, (65 * $row) + 16);
        }


        $col++;
        if ($col == 4) {
            $row++;
            $col = 0;
        }
    }
    $img->save(sprintf("out/%s.png", $name));
}
