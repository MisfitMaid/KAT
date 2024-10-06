<?php

require_once "vendor/autoload.php";

use Intervention\Image\ImageManager;
use Intervention\Image\Drivers\Gd\Driver;

$ribbons = [];
$ribbons['Legion of Honor']          = '/img/01 legion of honor.png';
$ribbons['Colonial Cross']           = '/img/02 collie cross.png';
$ribbons['Silver Star']              = '/img/04 silver star.png';
$ribbons['Bronze Star']              = '/img/08 bronze star.png';
$ribbons['Purple Heart']             = '/img/09 purple heart.png';
$ribbons['Prisoner of War Medal']    = '/img/17 pow.png';
$ribbons['Naval Intelligence Medal'] = '/img/20 naval intelligence.png';
$ribbons['Colonial Defense Ribbon']  = '/img/21 colonial defense.png';

$handle = fopen(dirname(__FILE__) . "/orbat.csv", "r");
$orbat = [];
fgetcsv($handle, 1000, ","); // skip header row
while ($v = fgetcsv($handle, 1000, ",")) {
    $orbat[] = $v;
}
fclose($handle);

$handle = fopen(dirname(__FILE__) . "/ribbons.csv", "r");
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

// add chars without ribbons
foreach ($orbat as $v) {

}

$manager = new ImageManager(new Driver());
$devices = [
    0 => [],
    1 => [120],
    2 => [80, 160],
    3 => [60, 120, 180],
    4 => [48, 96, 144, 192],
    5 => [40, 80, 120, 160, 200],
];

$cpp = [];
$cpp[] = [
    'safe' => 'Generic',
    'name' => 'Generic',
    'image' => '_uniform_generic'
];
$uniformBase = $manager->read(dirname(__FILE__) . "/img/uniform_tpl.png");

ksort($chars);

foreach ($chars as $name => $char) {
    echo $name;
    $surname = explode(",", $name)[0];
    $h = 4*65; // ceil(count($char)/4)*65
    $img = $manager->create(960,$h);
    $row = 0;
    $col = 0;
    foreach ($char as $k => $v) {
        if ($v == 0) continue;
        $v--; // first medal doesnt have devices
        
        $img->place(dirname(__FILE__) . $ribbons[$k], "top-left", 240 * $col, 65 * $row);
        $img->place(dirname(__FILE__) . "/img/ribbon-overlay.png", "top-left", 240 * $col, 65 * $row);

        $silver = floor($v / 5);
        $gold = $v % 5;

        $offsets = $devices[$gold + $silver];
        foreach ($offsets as $index => $offset) {
            $device = ($gold > $index) ? "/img/device-goldstar.png" : "/img/device-silverstar.png";
            $img->place(dirname(__FILE__) . $device, "top-left", (240 * $col) + $offset - 16, (65 * $row) + 16);
        }


        $col++;
        if ($col == 4) {
            $row++;
            $col = 0;
        }
    }
    $img->save(sprintf(dirname(__FILE__) . "/out/ribbon_%s.png", $name));
    echo ".";

    // get rank from orbat
    $bestscore = PHP_INT_MAX;
    $bestname = "";
    $bestrank = "";
    foreach ($orbat as $row) {
        if ($row[1] == "") continue;
        $score = levenshtein($surname, substr(str_replace("├ñ", "ä", $row[1]), 3)); // gsheets is not exporting utf-8 despite what it says, idk whats happening.
        if ($score <= $bestscore) {
            $bestrank = trim(mb_strtolower($row[0]));
            $bestscore = $score;
        }
    }

    // uniform and config.cpp generation
    $safename = str_replace([",", " ", "-"], "", idn_to_ascii($surname));
    $cpp[] = [
        'safe' => $safename,
        'name' => $surname,
        'image' => sprintf("uniform_%s", $safename),
    ];

    $uniform = clone $uniformBase;
    $uniform->text(mb_strtoupper($surname), 698, 502, function ($font) {
        $font->filename(dirname(__FILE__) . '/../GOTHICB.TTF');
        $font->size(36);
        $font->color('fff');
        $font->align('center');
        $font->valign('middle');
    });

    // find matching icon
    $rankpath = false;
    $unicom = dirname(__FILE__) . sprintf("/../ranks_unicom/%s.png", $bestrank);
    $navcom = dirname(__FILE__) . sprintf("/../ranks_navcom/%s.png", $bestrank);
    if (file_exists($unicom)) {
        $rankpath = $unicom;
    } elseif (file_exists($navcom)) {
        $rankpath = $navcom;
    } else {
        $rankpath = dirname(__FILE__) . "/../azrael.png";
    }

    if ($rankpath) {
        $rank = $manager->read($rankpath);
        if (!str_ends_with($rankpath, "azrael.png")) $rank->brightness(100);
        $rank->pad(72,72, "00000000");
        $uniform->place($rank, "top-left", 466, 466);
    }
    echo ".";

    $ribbonboard = clone $img;
    $ribbonboard->resize(477,142);
    $uniform->place($ribbonboard, "top-left", 514, 23);

    $uniform->save(sprintf(dirname(__FILE__) . "/out/uniform_%s.png", $safename));
    echo ".";
    echo "\n";
}

// echo out config.cpp

$classes = [];
$types = [];
$xtdWeapons = [];
$cfgWeapons = [];
$cfgVehicles = [];
foreach ($cpp as $v) { // safe, name, image
    $classes[]     = sprintf("\t\t\t\"KAT_Dress_Uniform_%s\"", $v['safe']);
    $types[]       = sprintf("\"%s\"", $v['name']);
    $xtdWeapons[]  = sprintf("\t\tclass KAT_Dress_Uniform_%s {model = \"KAT_DressUniforms\"; type = \"%s\";};", $v['safe'], $v['name']);
    $cfgWeapons[]  = sprintf("\tclass KAT_Dress_Uniform_%s: OPTRE_UNSC_Dress_Uniform_gray {\n\t\tdisplayName = \"[Azrael] Dress Uniform (%s)\";\n\t\tclass ItemInfo: ItemInfo { uniformClass = \"KAT_Dress_Uniform_%s_Soldier\"; };\n\t};", $v['safe'], $v['name'], $v['safe']);
    $cfgVehicles[] = sprintf("	class KAT_Dress_Uniform_%s_Soldier: KAT_Base_Uniform
	{
		dlc = \"OPTRE\";
		author = \"MisfitMaid\";
		uniformClass = \"KAT_Dress_Uniform_%s\";
		model = \"\\OPTRE_UNSC_Units\\Army\\officer.p3d\";
		hiddenSelections[] = {\"camo1\",\"camo2\",\"insignia\",\"clan\"};
		hiddenSelectionsTextures[] = {\"OPTRE_UNSC_Units\\Army\\data\\dress_uniform_odst_co.paa\",\"KAT_Gear\\dressuniforms\\%s.paa\"};
	};", $v['safe'], $v['safe'], $v['image']);
}

$base = file_get_contents(dirname(__FILE__) . "/config.cpp.tpl");
$filled = sprintf($base,
	"AUTOGENERATED FILE. Edit config.cpp.tpl instead. This file will be overwritten by the build script",
	implode(",\n", $classes),
	implode(", ", $types),
    implode("\n", $xtdWeapons),
	implode("\n", $cfgWeapons),
	implode("\n", $cfgVehicles)
);
file_put_contents(dirname(__FILE__) . "/config.cpp", mb_convert_encoding($filled, "Windows-1252"));
