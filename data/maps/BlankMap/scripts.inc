BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 4 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 6 "data/maps/BlankMap/scripts.pory"
	playbgm MUS_END, TRUE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
# 14 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineOrphanage_Burning_Eventscript_OnFrame19
# 15 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnFrame20
# 16 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 22, SunshineTownRiverbank_Eventscript_OnFrame22
# 17 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 24, Route2_Eventscript_AkihikoOnFrame24
# 18 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 26, Route2_Eventscript_AkihikoOnFrame26
# 19 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 28, Route2_House_Eventscript_AkihikoOnFrame28
# 20 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 31, Route2_House_Eventscript_AkihikoOnFrame31
# 21 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnFrame34
# 22 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 36, SunshineMeadow_Eventscript_AkihikoOnFrame36
# 23 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38
# 24 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_Eventscript_AkihikoOnFrame42
# 26 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 4, MansionsGarden_Eventscript_Onframe4
# 27 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 7, SunshineMeadow_Eventscript_MitsuruOnframe7
# 28 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 9, Route2_House_Eventscript_MitsuruOnFrame9
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 35 "data/maps/BlankMap/scripts.pory"
	lock
# 36 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 37 "data/maps/BlankMap/scripts.pory"
	closemessage
# 38 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 39 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 40 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 41 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 45 "data/maps/BlankMap/scripts.pory"
	lockall
# 46 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 47 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 48 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 52 "data/maps/BlankMap/scripts.pory"
	lock
# 53 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 54 "data/maps/BlankMap/scripts.pory"
	closemessage
# 55 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 56 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 57 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 58 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 62 "data/maps/BlankMap/scripts.pory"
	lock
# 63 "data/maps/BlankMap/scripts.pory"
	delay 30
# 64 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 5
# 65 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 66 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 70 "data/maps/BlankMap/scripts.pory"
	lock
# 71 "data/maps/BlankMap/scripts.pory"
	delay 30
# 72 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 73 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 0
# 74 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 78 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 79 "data/maps/BlankMap/scripts.pory"
	closemessage
# 80 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 81 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
# 82 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_Eventscript_AkihikoOnFrame24::
# 87 "data/maps/BlankMap/scripts.pory"
	lock
# 88 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2, 37, 11
# 89 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 25
# 90 "data/maps/BlankMap/scripts.pory"
	release
	return


Route2_Eventscript_AkihikoOnFrame26::
# 94 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 27
# 95 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 96 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame28::
# 100 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 29
# 101 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 102 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame31::
# 106 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 32
# 107 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 108 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineMeadow_Eventscript_AkihikoOnFrame34::
# 112 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 35
# 113 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
	return


SunshineMeadow_Eventscript_AkihikoOnFrame36::
# 117 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 37
# 118 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame36_2
# 122 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1
SunshineMeadow_Eventscript_AkihikoOnFrame36_1:
# 124 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
	return

SunshineMeadow_Eventscript_AkihikoOnFrame36_2:
# 119 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0
	goto SunshineMeadow_Eventscript_AkihikoOnFrame36_1


Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38::
# 128 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2
# 132 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 39
# 133 "data/maps/BlankMap/scripts.pory"
	fwdtime 22, 30
# 134 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0
# 135 "data/maps/BlankMap/scripts.pory"
	closemessage
# 136 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 11
	return

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2:
# 129 "data/maps/BlankMap/scripts.pory"
	goto SunshineMeadow_Eventscript_GameOver
	end


Route2_Eventscript_AkihikoOnFrame42::
# 140 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 141 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 142 "data/maps/BlankMap/scripts.pory"
	delay 60
# 143 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 145 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 11
	return


SunshineMeadow_Eventscript_GameOver::
# 149 "data/maps/BlankMap/scripts.pory"
	lock
# 150 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_0
# 153 "data/maps/BlankMap/scripts.pory"
	closemessage
# 154 "data/maps/BlankMap/scripts.pory"
	delay 30
# 155 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_1
# 158 "data/maps/BlankMap/scripts.pory"
	closemessage
# 159 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 160 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 161 "data/maps/BlankMap/scripts.pory"
	waitstate
# 162 "data/maps/BlankMap/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Onframe4::
# 167 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 5
# 168 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 18
	return


SunshineMeadow_Eventscript_MitsuruOnframe7::
# 172 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 8
# 173 "data/maps/BlankMap/scripts.pory"
	fwdtime 0, 40
# 174 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 15, 15
	return


Route2_House_Eventscript_MitsuruOnFrame9::
# 178 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 25
# 179 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 10
# 180 "data/maps/BlankMap/scripts.pory"
	playse MUS_HEAL
# 181 "data/maps/BlankMap/scripts.pory"
	special HealPlayerParty
# 182 "data/maps/BlankMap/scripts.pory"
	delay 50
# 183 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
# 184 "data/maps/BlankMap/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE2_HOUSE
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 36 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 53 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 78 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0:
# 119 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro didn't stand a slightest\n"
	.string "chance and was completely wiped out by\l"
	.string "Mitsuru.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1:
# 122 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0:
# 134 "data/maps/BlankMap/scripts.pory"
	.string "Later that night...$"

Route2_Eventscript_AkihikoOnFrame42_Text_0:
# 143 "data/maps/BlankMap/scripts.pory"
	.string "The next morning...$"

SunshineMeadow_Eventscript_GameOver_Text_0:
# 150 "data/maps/BlankMap/scripts.pory"
	.string "Mitsuru Kirijo walked away without\n"
	.string "turning back.\p"
	.string "Her Vulpix trotted along her lonesome\n"
	.string "yet determined silhouette.\p"
	.string "The Inteleon gave you one last\n"
	.string "disappointed look before trailing\l"
	.string "behind its two companions.$"

SunshineMeadow_Eventscript_GameOver_Text_1:
# 155 "data/maps/BlankMap/scripts.pory"
	.string "You and Shinjiro continued your search\n"
	.string "for Miki to no avail.\p"
	.string "Not long after, both of you ended up\n"
	.string "getting captured by the men in black\l"
	.string "and suffered endless nightmares.\p"
	.string "Only darkness awaits...$"
