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

$out = "// AUTOMATICALLY GENERATED. DO NOT EDIT MANUALLY.
class XtdGearModels
{
	class CfgWeapons
	{";
$tpls = [];

$tpls['metaitem'] = file_get_contents(__DIR__."/tpl/metaitem.tpl");

foreach ($groups as $k => $v) {
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
};";
file_put_contents(__DIR__."/config.cpp", $out);
