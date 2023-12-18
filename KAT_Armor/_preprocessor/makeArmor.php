<?php

$configGroups = json_decode(file_get_contents(__DIR__."/../groups.json"), true);
$configPlayers = json_decode(file_get_contents(__DIR__."/../config.json"), true);

$groups = [];
foreach($configGroups as $group) {
    $x = [];
    $x['name'] = $group['name'];
    $x['members'] = [];
    $groups[$group['id']] = $x;
}

foreach($configPlayers as $player) {
    $groups[$player['group']]['members'][] = $player;
}

// build metaitems
$out = "// AUTOMATICALLY GENERATED. DO NOT EDIT MANUALLY.
class CfgPatches
{
	class KAT_Armor
	{
		author = \"MisfitMaid\";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			\"A3_Characters_F\",
			\"OPTRE_Core\"
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{";
$tpls = [];

$tpls['metaitem'] = file_get_contents(__DIR__."/tpl/metaitem.tpl");

foreach ($groups as $k => $v) {
    echo sprintf("[KAT_Armor] Group %s has %s members found\n", $k, count($v['members']));
    uasort($v['members'], function ($a, $b) {
        return $a['weight'] <=> $b['weight'];
    });

    $cL = [];
    $cC = [];
    foreach ($v['members'] as $member) {
        $cL[] = '"'.$member['id'].'"';
        $cC[] = sprintf('class %s { label = "%s"; };', $member['id'], $member['name']);
    }


    $out .= str_replace(
        [
            "{{ClassName}}",
            "{{DisplayName}}",
            "{{ChildsList}}",
            "{{ChildsClasses}}"
        ],
        [
            $k,
            $v['name'],
            implode(",", $cL),
            implode("\n", $cC)
        ],
        $tpls['metaitem']
    );
}
$out .= "	};
};
";

// build armors
$tpls['armor'] = [];
foreach(glob(__DIR__."/tpl/armor/*.tpl") as $v) {
    $tpls['armor'][basename($v, ".tpl")] = file_get_contents($v);
}

$out .= "class CfgWeapons
{
    class ItemInfo;
";

foreach ($groups as $group) {
    foreach ($group['members'] as $member) {
        echo sprintf("[KAT_Armor] %s armor %s\n", $member['name'], $member['tpl_armor']);
        $tpl = $tpls['armor'][$member['tpl_armor']];
        $vars = [];
        $vars['{{id}}'] = $member['id'];
        $vars['{{name}}'] = $member['name'];
        $vars['{{author}}'] = $member['author'];
        $vars['{{group}}'] = $member['group'];
        foreach ($member['paths'] as $k => $v) {
            $vars[sprintf("{{%s}}", $k)] = $v;
        }
        $out .= str_replace(array_keys($vars), array_values($vars), $tpl);
    }
}



// build helmets
$tpls['helmet'] = [];
foreach(glob(__DIR__."/tpl/helmet/*.tpl") as $v) {
    $tpls['helmet'][basename($v, ".tpl")] = file_get_contents($v);
}

foreach ($groups as $group) {
    foreach ($group['members'] as $member) {
        echo sprintf("[KAT_Armor] %s helmet %s\n", $member['name'], $member['tpl_helmet']);
        $tpl = $tpls['helmet'][$member['tpl_helmet']];
        $vars = [];
        $vars['{{id}}'] = $member['id'];
        $vars['{{name}}'] = $member['name'];
        $vars['{{author}}'] = $member['author'];
        $vars['{{group}}'] = $member['group'];
        foreach ($member['paths'] as $k => $v) {
            $vars[sprintf("{{%s}}", $k)] = $v;
        }
        $out .= str_replace(array_keys($vars), array_values($vars), $tpl);
    }
}


$out .= "};
";
file_put_contents(__DIR__."/../config.cpp", $out);
