BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 3 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 0
	goto_if_gt BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 7 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 8 "data/maps/BlankMap/scripts.pory"
	playbgm MUS_END, TRUE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 14 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
# 15 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineOrphanage_Burning_Eventscript_OnFrame19
# 16 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnFrame20
# 17 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 22, SunshineTownRiverbank_Eventscript_OnFrame22
# 18 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 24, Route2_Eventscript_AkihikoOnFrame24
# 19 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 26, Route2_Eventscript_AkihikoOnFrame26
# 20 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 28, Route2_House_Eventscript_AkihikoOnFrame28
# 21 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 31, Route2_House_Eventscript_AkihikoOnFrame31
# 22 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnFrame34
# 23 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 36, SunshineMeadow_Eventscript_AkihikoOnFrame36
# 24 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38
# 25 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_Eventscript_AkihikoOnFrame42
# 27 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 4, MansionsGarden_Eventscript_Onframe4
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 33 "data/maps/BlankMap/scripts.pory"
	lock
# 34 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 35 "data/maps/BlankMap/scripts.pory"
	closemessage
# 36 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 37 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 38 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 39 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 43 "data/maps/BlankMap/scripts.pory"
	lockall
# 44 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 45 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 46 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 50 "data/maps/BlankMap/scripts.pory"
	lock
# 51 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 52 "data/maps/BlankMap/scripts.pory"
	closemessage
# 53 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 54 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 55 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 56 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 60 "data/maps/BlankMap/scripts.pory"
	lock
# 61 "data/maps/BlankMap/scripts.pory"
	delay 30
# 62 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 5
# 63 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 64 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 68 "data/maps/BlankMap/scripts.pory"
	lock
# 69 "data/maps/BlankMap/scripts.pory"
	delay 30
# 70 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 71 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 13, 0
# 72 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 76 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 77 "data/maps/BlankMap/scripts.pory"
	closemessage
# 78 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 79 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
# 80 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_Eventscript_AkihikoOnFrame24::
# 85 "data/maps/BlankMap/scripts.pory"
	lock
# 86 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2, 37, 11
# 87 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 25
# 88 "data/maps/BlankMap/scripts.pory"
	release
	return


Route2_Eventscript_AkihikoOnFrame26::
# 92 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 27
# 93 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 94 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame28::
# 98 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 29
# 99 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 100 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame31::
# 104 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 32
# 105 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 106 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineMeadow_Eventscript_AkihikoOnFrame34::
# 110 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 35
# 111 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
	return


SunshineMeadow_Eventscript_AkihikoOnFrame36::
# 115 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 37
# 116 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame36_2
# 120 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1
SunshineMeadow_Eventscript_AkihikoOnFrame36_1:
# 122 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
	return

SunshineMeadow_Eventscript_AkihikoOnFrame36_2:
# 117 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0
	goto SunshineMeadow_Eventscript_AkihikoOnFrame36_1


Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38::
# 126 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2
# 130 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 39
# 131 "data/maps/BlankMap/scripts.pory"
	fwdtime 22, 30
# 132 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0
# 133 "data/maps/BlankMap/scripts.pory"
	closemessage
# 134 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 11
	return

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2:
# 127 "data/maps/BlankMap/scripts.pory"
	goto SunshineMeadow_Eventscript_GameOver
	end


Route2_Eventscript_AkihikoOnFrame42::
# 138 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 139 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 140 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 141 "data/maps/BlankMap/scripts.pory"
	closemessage
# 142 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 11
	return


SunshineMeadow_Eventscript_GameOver::
# 146 "data/maps/BlankMap/scripts.pory"
	lock
# 147 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_0
# 150 "data/maps/BlankMap/scripts.pory"
	closemessage
# 151 "data/maps/BlankMap/scripts.pory"
	delay 30
# 152 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_1
# 155 "data/maps/BlankMap/scripts.pory"
	closemessage
# 156 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 157 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 158 "data/maps/BlankMap/scripts.pory"
	waitstate
# 159 "data/maps/BlankMap/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Onframe4::
# 164 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 5
# 165 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 18
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 34 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 51 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 76 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0:
# 117 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro didn't stand a slightest\n"
	.string "chance and was completely wiped out by\l"
	.string "Mitsuru.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1:
# 120 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0:
# 132 "data/maps/BlankMap/scripts.pory"
	.string "Later that night...$"

Route2_Eventscript_AkihikoOnFrame42_Text_0:
# 140 "data/maps/BlankMap/scripts.pory"
	.string "The next morning...$"

SunshineMeadow_Eventscript_GameOver_Text_0:
# 147 "data/maps/BlankMap/scripts.pory"
	.string "Mitsuru Kirijo walked away without\n"
	.string "turning back.\p"
	.string "Her Vulpix trotted along her lonesome\n"
	.string "yet determined silhouette.\p"
	.string "The Inteleon gave you one last\n"
	.string "disappointed look before trailing\l"
	.string "behind its two companions.$"

SunshineMeadow_Eventscript_GameOver_Text_1:
# 152 "data/maps/BlankMap/scripts.pory"
	.string "You and Shinjiro continued your search\n"
	.string "for Miki to no avail.\p"
	.string "Not long after, both of you ended up\n"
	.string "getting captured by the men in black\l"
	.string "and suffered endless nightmares.\p"
	.string "Only darkness awaits...$"
