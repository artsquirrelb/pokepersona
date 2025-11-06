Mansion_MitsurusRoom2F_MapScripts::
# 2 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_ge Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
	return

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, Mansion_MitsurusRoom2F_Eventscript_OnWarp0
	.2byte 0

Mansion_MitsurusRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 0, Mansion_MitsurusRoom2F_Eventscript_OnFrame0
	.2byte 0


Mansion_MitsurusRoom2F_Eventscript_OnWarp0::
# 16 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Mansion_MitsurusRoom2F_Eventscript_OnFrame0::
# 20 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 1
# 21 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking
	return


Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking::
# 25 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 26 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0
# 27 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_0
# 29 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 30 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 31 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_1
# 33 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 40
# 34 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_2
# 35 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 36 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1
# 38 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 39 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setcaughtmon SPECIES_VULPIX_DELTA
# 40 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 41 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 42 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 43 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special EnableNationalPokedex
# 44 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 45 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2
# 47 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 48 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 50 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3
# 52 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3
# 54 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 8
# 55 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, faceleft
# 56 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 57 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 40
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 59 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_MACH_BIKE, 1
# 60 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_EXP_ALL, 1
# 61 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_ESCAPE_ROPE, 1
# 62 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 63 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POTION, 2
# 64 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_REPEL, 5
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4
# 67 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 68 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 20
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4
# 70 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 72 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 73 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 74 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 76 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5
# 78 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 79 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 80 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, emotemusic
# 81 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 83 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 84 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setobjectnewmovementtype LOCALID_VULPIX, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 85 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
# 86 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Eventscript_StarterPokemonTips
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	end


Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball::
# 92 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 93 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0, MSGBOX_YESNO
# 94 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 95 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2
# 128 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0
# 130 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 131 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5
# 132 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1:
# 134 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 135 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call Eventscript_CutsceneEnds
# 136 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2:
# 96 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 2
# 97 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	givemon SPECIES_VULPIX_DELTA, 7, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_MODEST, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ECHOED_VOICE, MOVE_POWDER_SNOW, MOVE_DISARMING_VOICE, MOVE_GROWL, SHINY_MODE_RANDOM, TRUE
# 98 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6
# 107 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7
# 116 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5:
# 118 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3
# 120 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 121 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	manuallysettime WEEKDAY_THU, 22, 32, 0
# 122 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 123 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 124 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4
# 125 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6:
# 99 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 101 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 102 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 103 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 104 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call NicknamePartyMon
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7:
# 108 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 110 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 111 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 112 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 113 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call NicknameBoxMon
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5


Eventscript_CutsceneStarts::
# 141 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 142 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 143 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Eventscript_CutsceneEnds::
# 147 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 148 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 149 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix::
# 153 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 154 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0
# 155 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 156 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0
# 157 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 158 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix::
# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 164 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0
# 167 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 168 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return


Mansion_MitsurusRoom2F_Eventscript_PC::
# 172 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	checkplayergender
# 174 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PC_2
# 178 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_RivalPC
Mansion_MitsurusRoom2F_Eventscript_PC_1:
# 180 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PC_2:
# 175 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_PlayerPC
	goto Mansion_MitsurusRoom2F_Eventscript_PC_1


Mansion_MitsurusRoom2F_Eventscript_PlayerPC::
# 185 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PC_ON
# 186 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 187 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special BedroomPC
# 188 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitstate
# 189 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	releaseall
	end


Mansion_MitsurusRoom2F_Eventscript_RivalPC::
# 194 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lockall
# 195 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0
# 196 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	releaseall
	end


Mansion_MitsurusRoom2F_Eventscript_Piano::
# 201 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 202 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_2
# 217 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2
Mansion_MitsurusRoom2F_Eventscript_Piano_1:
# 219 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return

Mansion_MitsurusRoom2F_Eventscript_Piano_2:
# 204 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0, MSGBOX_YESNO
# 205 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 206 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_5
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1

Mansion_MitsurusRoom2F_Eventscript_Piano_5:
# 207 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playbgm MUS_SUNSHINE_ORPHANAGE, FALSE
# 208 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 1800
# 209 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	fadenewbgm MUS_KIRIJOS_MANSION
# 210 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	savebgm MUS_KIRIJOS_MANSION
# 211 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1
# 212 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 213 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1


Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft::
# 223 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 224 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0
# 227 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 228 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_BookshelfRight::
# 233 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 234 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0
# 235 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 236 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_Notebooks::
# 241 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 242 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0
# 246 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 247 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	return


# 26 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0:
# 26 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	emote_pensive
	step_end

# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_1:
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_left
	step_end

# 34 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_2:
# 34 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_left
# 34 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_up
	step_end

# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3:
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4:
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	jump_in_place_up
	step_end

# 129 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0:
# 129 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	emote_question_mark
	step_end

# 154 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0:
# 154 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_right
# 154 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_down
	step_end

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_0:
# 28 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I'll need this... and a spare pair of\n"
	.string "boots...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1:
# 36 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}My Pokédex... Repels...\p"
	.string "And the map to Thundershards Cliff.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2:
# 46 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What else...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3:
# 51 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh right.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4:
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll definitely need this while outdoors.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Hmm, I figure that should be everything.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5:
# 76 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I know, I know. I'll never leave you\n"
	.string "behind, Vulpix.\p"
	.string "Let's get you inside the Pokéball now,\n"
	.string "shall we?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0:
# 93 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Hold out the Pokéball to Vulpix?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1:
# 101 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix's pushed the Pokéball button\n"
	.string "with its nose and went inside.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2:
# 116 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Party full.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3:
# 118 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already 10:32PM.\p"
	.string "If I don't go now, I won't be arriving at\n"
	.string "the cliff's foot before midnight.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4:
# 124 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{COLOR GREEN}{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Tips: Check your bag for various QoL\n"
	.string "items.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5:
# 131 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix is wondering why you're\n"
	.string "hesitating.$"

Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0:
# 156 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Vulpix is waiting for me.)$"

Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0:
# 164 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's an Alolan Vulpix doll.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}...\p"
	.string "(This reminds me of how my Vulpix used\n"
	.string "to look like...)$"

Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0:
# 195 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's Mitsuru's PC. It's the latest model\n"
	.string "from Kirijo Electronics.$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0:
# 204 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Play a song? {COLOR GREEN}(It will take roughly 30\n"
	.string "seconds.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1:
# 211 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(It's time to go.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2:
# 217 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I really need to get going.)$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0:
# 224 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Documents about various big companies\n"
	.string "in Kitoha region.\p"
	.string "Eleki Express's is circled in red. Beside\n"
	.string "said document are several photos of\l"
	.string "delivery trucks.\p"
	.string "They seem to be in a mountain area.$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0:
# 234 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Various books about human's and\n"
	.string "Pokémon's biology, geology and\l"
	.string "genecology.$"

Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0:
# 242 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "College materials for the previous term.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Luckily, it's summer break right now.\p"
	.string "Otherwise it'd be hard for me to go\n"
	.string "travel.\p"
	.string "Well, I figure I can always request a\n"
	.string "leave of absence until this matter is\l"
	.string "sort out.)$"
