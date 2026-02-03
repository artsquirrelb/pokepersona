BlankMap_MapScripts::
# 2 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/BlankMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlankMap_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

BlankMap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineWoods_Eventscript_WarpBackToOrphanage
# 7 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom
# 8 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 13, SunshineTown_PokemonCenter_Eventscript_Onframe13
# 9 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 19, SunshineOrphanage_Burning_Eventscript_OnFrame19
# 10 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 20, SunshineTownRiverbank_Eventscript_OnFrame20
# 11 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 22, SunshineTownRiverbank_Eventscript_OnFrame22
# 12 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 24, Route2_Eventscript_AkihikoOnFrame24
# 13 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 26, Route2_Eventscript_AkihikoOnFrame26
# 14 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 28, Route2_House_Eventscript_AkihikoOnFrame28
# 15 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 31, Route2_House_Eventscript_AkihikoOnFrame31
# 16 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnFrame34
# 17 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 36, SunshineMeadow_Eventscript_AkihikoOnFrame36
# 18 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 38, Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38
# 19 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 42, Route2_Eventscript_AkihikoOnFrame42
# 21 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 4, MansionsGarden_Eventscript_Onframe4
# 22 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 7, SunshineMeadow_Eventscript_MitsuruOnframe7
# 23 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 9, Route2_House_Eventscript_MitsuruOnFrame9
# 24 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 26, SunshineTown_Eventscript_MitsuruOnFrame26
# 25 "data/maps/BlankMap/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 32, Route2_House_Eventscript_MitsuruOnFrame32Warp
	.2byte 0


SunshineWoods_Eventscript_WarpBackToOrphanage::
# 32 "data/maps/BlankMap/scripts.pory"
	lock
# 33 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0
# 34 "data/maps/BlankMap/scripts.pory"
	closemessage
# 35 "data/maps/BlankMap/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 36 "data/maps/BlankMap/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_MAIN_HALL, 12, 22
# 37 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 38 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_WarpBackToAkihikosRoom::
# 42 "data/maps/BlankMap/scripts.pory"
	lockall
# 43 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 44 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 45 "data/maps/BlankMap/scripts.pory"
	releaseall
	return


SunshineTown_PokemonCenter_Eventscript_Onframe13::
# 49 "data/maps/BlankMap/scripts.pory"
	lock
# 50 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0
# 51 "data/maps/BlankMap/scripts.pory"
	closemessage
# 52 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 14
# 53 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 54 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 55 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_OnFrame19::
# 59 "data/maps/BlankMap/scripts.pory"
	lock
# 60 "data/maps/BlankMap/scripts.pory"
	delay 30
# 61 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 17, 5
# 62 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 63 "data/maps/BlankMap/scripts.pory"
	release
	return


SunshineTownRiverbank_Eventscript_OnFrame20::
# 67 "data/maps/BlankMap/scripts.pory"
	lock
# 68 "data/maps/BlankMap/scripts.pory"
	delay 30
# 69 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 21
# 70 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_RIVERBANK, 17, 0
# 71 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineTownRiverbank_Eventscript_OnFrame22::
# 75 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 76 "data/maps/BlankMap/scripts.pory"
	closemessage
# 77 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 23
# 78 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_KUROSAWAS_HOUSE, 4, 4
	return


Route2_Eventscript_AkihikoOnFrame24::
# 83 "data/maps/BlankMap/scripts.pory"
	lock
# 84 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2, 37, 11
# 85 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 25
# 86 "data/maps/BlankMap/scripts.pory"
	release
	return


Route2_Eventscript_AkihikoOnFrame26::
# 90 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 27
# 91 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 92 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame28::
# 96 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 29
# 97 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 98 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


Route2_House_Eventscript_AkihikoOnFrame31::
# 102 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 32
# 103 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 7
# 104 "data/maps/BlankMap/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
	return


SunshineMeadow_Eventscript_AkihikoOnFrame34::
# 108 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 35
# 109 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
	return


SunshineMeadow_Eventscript_AkihikoOnFrame36::
# 113 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 37
# 114 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame36_2
# 118 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1
SunshineMeadow_Eventscript_AkihikoOnFrame36_1:
# 120 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
	return

SunshineMeadow_Eventscript_AkihikoOnFrame36_2:
# 115 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0
	goto SunshineMeadow_Eventscript_AkihikoOnFrame36_1


Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38::
# 124 "data/maps/BlankMap/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2
# 128 "data/maps/BlankMap/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 39
# 129 "data/maps/BlankMap/scripts.pory"
	fwdtime 22, 30
# 130 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0
# 131 "data/maps/BlankMap/scripts.pory"
	closemessage
# 132 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
	return

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_2:
# 125 "data/maps/BlankMap/scripts.pory"
	goto SunshineMeadow_Eventscript_GameOver
	end


Route2_Eventscript_AkihikoOnFrame42::
# 136 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 137 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 138 "data/maps/BlankMap/scripts.pory"
	delay 60
# 139 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 141 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
	return


SunshineMeadow_Eventscript_GameOver::
# 145 "data/maps/BlankMap/scripts.pory"
	lock
# 146 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_0
# 149 "data/maps/BlankMap/scripts.pory"
	closemessage
# 150 "data/maps/BlankMap/scripts.pory"
	delay 30
# 151 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineMeadow_Eventscript_GameOver_Text_1
# 154 "data/maps/BlankMap/scripts.pory"
	closemessage
# 155 "data/maps/BlankMap/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 156 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 157 "data/maps/BlankMap/scripts.pory"
	waitstate
# 158 "data/maps/BlankMap/scripts.pory"
	release
	end


MansionsGarden_Eventscript_Onframe4::
# 163 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 5
# 164 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_MANSIONS_GARDEN, 43, 18
	return


SunshineMeadow_Eventscript_MitsuruOnframe7::
# 168 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 8
# 169 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 15, 15
	return


Route2_House_Eventscript_MitsuruOnFrame9::
# 173 "data/maps/BlankMap/scripts.pory"
	fwdtime 7, 50
# 174 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 10
# 175 "data/maps/BlankMap/scripts.pory"
	playse MUS_HEAL
# 176 "data/maps/BlankMap/scripts.pory"
	special HealPlayerParty
# 177 "data/maps/BlankMap/scripts.pory"
	delay 50
# 178 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 4, 4
	return


SunshineTown_Eventscript_MitsuruOnFrame26::
# 182 "data/maps/BlankMap/scripts.pory"
	msgbox SunshineTownRiverbank_Eventscript_OnFrame22_Text_0
# 183 "data/maps/BlankMap/scripts.pory"
	closemessage
# 184 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 185 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


Route2_House_Eventscript_MitsuruOnFrame32Warp::
# 189 "data/maps/BlankMap/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 33
# 190 "data/maps/BlankMap/scripts.pory"
	fwdtime 6, 20
# 191 "data/maps/BlankMap/scripts.pory"
	fwdweekday WEEKDAY_MON
# 192 "data/maps/BlankMap/scripts.pory"
	delay 60
# 193 "data/maps/BlankMap/scripts.pory"
	msgbox Route2_Eventscript_AkihikoOnFrame42_Text_0
# 194 "data/maps/BlankMap/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 5
# 195 "data/maps/BlankMap/scripts.pory"
	waitstate
	return


SunshineWoods_Eventscript_WarpBackToOrphanage_Text_0:
# 33 "data/maps/BlankMap/scripts.pory"
	.string "{DESTROY_MUGSHOT} Akihiko picked up the Pawmi and hurried\n"
	.string "back to the orphanage.$"

SunshineTown_PokemonCenter_Eventscript_Onframe13_Text_0:
# 50 "data/maps/BlankMap/scripts.pory"
	.string "10 minutes later...$"

SunshineTownRiverbank_Eventscript_OnFrame22_Text_0:
# 75 "data/maps/BlankMap/scripts.pory"
	.string "A few days later.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_0:
# 115 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro didn't stand a slightest\n"
	.string "chance and was completely wiped out by\l"
	.string "Mitsuru.$"

SunshineMeadow_Eventscript_AkihikoOnFrame36_Text_1:
# 118 "data/maps/BlankMap/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"

Route2_HouseToBlankMap_Eventscript_AkihikoOnFrame38_Text_0:
# 130 "data/maps/BlankMap/scripts.pory"
	.string "Later that night...$"

Route2_Eventscript_AkihikoOnFrame42_Text_0:
# 139 "data/maps/BlankMap/scripts.pory"
	.string "The next morning...$"

SunshineMeadow_Eventscript_GameOver_Text_0:
# 146 "data/maps/BlankMap/scripts.pory"
	.string "Mitsuru Kirijo walked away without\n"
	.string "turning back.\p"
	.string "Her Vulpix trotted along her lonesome\n"
	.string "yet determined silhouette.\p"
	.string "The Inteleon gave you one last\n"
	.string "disappointed look before trailing\l"
	.string "behind its two companions.$"

SunshineMeadow_Eventscript_GameOver_Text_1:
# 151 "data/maps/BlankMap/scripts.pory"
	.string "You and Shinjiro continued your search\n"
	.string "for Miki to no avail.\p"
	.string "Not long after, both of you ended up\n"
	.string "getting captured by the men in black\l"
	.string "and suffered endless nightmares.\p"
	.string "Only darkness awaits...$"
