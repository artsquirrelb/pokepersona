Mansion_MitsurusRoom2F_MapScripts::
# 2 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setrespawn HEAL_LOCATION_MANSION_MITSURUS_ROOM2F
# 4 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_ge Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, Mansion_MitsurusRoom2F_Eventscript_OnWarp0
	.2byte 0

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, Mansion_MitsurusRoom2F_Eventscript_OnFrame0
	.2byte 0


Mansion_MitsurusRoom2F_Eventscript_OnWarp0::
# 17 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Mansion_MitsurusRoom2F_Eventscript_OnFrame0::
# 21 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 1
# 22 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 23 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_OnFrame0_Text_0
# 24 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 25 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	pausefakertc
# 26 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking
	return


Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking::
# 30 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 31 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_0
# 34 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 35 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 36 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_1
# 38 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 40
# 39 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_2
# 40 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 41 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1
# 43 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 44 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setcaughtmon SPECIES_VULPIX_DELTA
# 45 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 46 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 47 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 48 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special EnableNationalPokedex
# 49 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 50 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2
# 52 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 55 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3
# 57 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3
# 59 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 8
# 60 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, faceleft
# 61 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 62 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 40
# 63 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 64 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_MACH_BIKE
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 66 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_EXP_SHARE
# 67 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 68 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POTION, 2
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_REPEL, 5
# 70 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_EXP_SHARE
# 71 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4
# 73 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 74 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 20
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4
# 76 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 78 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 79 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 80 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 82 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5
# 84 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 85 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 86 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, emotemusic
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 89 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 90 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setobjectnewmovementtype LOCALID_VULPIX, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 91 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
# 92 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Eventscript_StarterPokemonTips
# 93 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	end


Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball::
# 98 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 99 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0, MSGBOX_YESNO
# 100 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 101 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2
# 137 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 138 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0
# 139 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 140 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_6
# 141 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1:
# 143 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 144 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call Eventscript_CutsceneEnds
# 145 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2:
# 102 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 2
# 103 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	givemon SPECIES_VULPIX_DELTA, 7, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_MODEST, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ECHOED_VOICE, MOVE_POWDER_SNOW, MOVE_DISARMING_VOICE, MOVE_GROWL, SHINY_MODE_RANDOM, TRUE
# 104 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6
# 114 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7
# 124 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5:
# 126 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4
# 128 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 129 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 32, 0
# 130 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 131 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 132 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5
# 133 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	updatefollowingmon
# 134 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6:
# 105 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 107 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 108 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 109 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 110 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2
# 111 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7:
# 115 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 117 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 118 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 119 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 120 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2
# 121 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5


Eventscript_CutsceneStarts::
# 150 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 151 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 152 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Eventscript_CutsceneEnds::
# 156 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 157 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 158 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix::
# 162 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0
# 164 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 165 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0
# 166 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 167 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix::
# 172 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0
# 176 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 177 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return


Mansion_MitsurusRoom2F_Eventscript_PC::
# 181 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 182 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	checkplayergender
# 183 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PC_2
# 187 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_RivalPC
Mansion_MitsurusRoom2F_Eventscript_PC_1:
# 189 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PC_2:
# 184 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_PlayerPC
	goto Mansion_MitsurusRoom2F_Eventscript_PC_1


Mansion_MitsurusRoom2F_Eventscript_PlayerPC::
# 194 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PC_ON
# 195 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 196 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special BedroomPC
# 197 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitstate
# 198 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	releaseall
	end


Mansion_MitsurusRoom2F_Eventscript_RivalPC::
# 203 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lockall
# 204 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0
# 205 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	releaseall
	end


Mansion_MitsurusRoom2F_Eventscript_Piano::
# 210 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 211 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_2
# 226 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2
Mansion_MitsurusRoom2F_Eventscript_Piano_1:
# 228 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return

Mansion_MitsurusRoom2F_Eventscript_Piano_2:
# 213 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0, MSGBOX_YESNO
# 214 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 215 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_5
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1

Mansion_MitsurusRoom2F_Eventscript_Piano_5:
# 216 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playbgm MUS_SUNSHINE_ORPHANAGE, FALSE
# 217 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 1800
# 218 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	fadenewbgm MUS_KIRIJOS_MANSION
# 219 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	savebgm MUS_KIRIJOS_MANSION
# 220 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1
# 221 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 222 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1


Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft::
# 232 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 233 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0
# 236 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 237 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_BookshelfRight::
# 242 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 243 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0
# 244 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 245 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_Notebooks::
# 250 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 251 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0
# 255 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 256 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return


# 31 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0:
# 31 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	emote_pensive
	step_end

# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_1:
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 37 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_left
	step_end

# 39 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_2:
# 39 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_left
# 39 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_up
	step_end

# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3:
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
	step_end

# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4:
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	jump_in_place_up
	step_end

# 138 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0:
# 138 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	emote_question_mark
	step_end

# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0:
# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_right
# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_down
	step_end

Mansion_MitsurusRoom2F_Eventscript_OnFrame0_Text_0:
# 23 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Thursday, 10:30PM$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_0:
# 33 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'll need this... and a spare pair of\n"
	.string "boots...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1:
# 41 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My Pokédex... Repels...\p"
	.string "And the map to Thundershards Cliff.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2:
# 51 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What else...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3:
# 56 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh right.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4:
# 71 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll definitely need this while outdoors.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Hmm, I figure that should be everything.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5:
# 82 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I know, I know. I'll never leave you\n"
	.string "behind, Vulpix.\p"
	.string "Let's get you inside the Pokéball now,\n"
	.string "shall we?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0:
# 99 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Hold out the Pokéball to Vulpix?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1:
# 107 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix's pushed the Pokéball button\n"
	.string "with its nose and went inside.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2:
# 110 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can rename a Pokémon in its\n"
	.string "summary screen.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3:
# 124 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Party full.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4:
# 126 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already 10:32PM.\p"
	.string "If I don't go now, I won't be arriving at\n"
	.string "the cliff's foot before midnight.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5:
# 132 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{COLOR GREEN}{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Tips: Check your bag for various QoL\n"
	.string "items.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_6:
# 140 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix is wondering why you're\n"
	.string "hesitating.$"

Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0:
# 165 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Vulpix is waiting for me.)$"

Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0:
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's an Alolan Vulpix doll.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}...\p"
	.string "(This reminds me of how my Vulpix used\n"
	.string "to look like...)$"

Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0:
# 204 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's Mitsuru's PC. It's the latest model\n"
	.string "from Kirijo Electronics.$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0:
# 213 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Play a song? {COLOR GREEN}(It will take roughly 30\n"
	.string "seconds.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1:
# 220 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(It's time to go.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2:
# 226 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I really need to get going.)$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0:
# 233 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Documents about various big companies\n"
	.string "in Kitoha region.\p"
	.string "Eleki Express's is circled in red. Beside\n"
	.string "said document are several photos of\l"
	.string "delivery trucks.\p"
	.string "They seem to be in a mountain area.$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0:
# 243 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Various books about human's and\n"
	.string "Pokémon's biology, geology and\l"
	.string "genecology.$"

Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0:
# 251 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "College materials for the previous term.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Luckily, it's summer break right now.\p"
	.string "Otherwise it'd be hard for me to go\n"
	.string "travel.\p"
	.string "Well, I figure I can always request a\n"
	.string "leave of absence until this matter is\l"
	.string "sort out.)$"
