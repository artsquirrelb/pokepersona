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
	call EventScript_TellTheTimeDayHourMinute
# 24 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking
	return


Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking::
# 28 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 29 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0
# 30 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setspeaker SP_NAME_MITSURU
# 32 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_MITSURU, EMOTE_NORMAL
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
	createfieldmugshot MUGSHOT_MITSURU, EMOTE_NORMAL
# 42 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1
# 44 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 45 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setcaughtmon SPECIES_VULPIX_DELTA
# 46 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_2
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_1:
# 53 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HELP_WINDOW_GET
# 54 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 55 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 56 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setspeaker SP_NAME_MITSURU
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2
# 59 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 60 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 62 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3
# 64 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3
# 66 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 8
# 67 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, faceleft
# 68 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 69 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 40
# 70 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 71 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_5
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_4:
# 75 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	giveitem ITEM_CAMP_GEARS
# 76 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 77 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_EXP_SHARE
# 78 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_EXP_SHARE
# 79 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POKE_BALL, 20
# 80 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_POTION, 2
# 81 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_REPEL, 5
# 82 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	addmoney 15000
# 83 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4
# 85 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 86 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 20
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4
# 88 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 90 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 91 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 92 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 30
# 94 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5
# 96 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 97 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 98 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, emotemusic
# 99 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmoncry
# 101 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 102 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setobjectnewmovementtype LOCALID_VULPIX, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 103 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 104 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_8
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_7:
# 108 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_2:
# 47 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call EventScript_ShowHelpPokedex
# 48 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 49 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special SetUnlockedPokedexFlags
# 50 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 51 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special EnableNationalPokedex
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_1

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_5:
# 73 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	additem ITEM_MACH_BIKE
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_4

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_8:
# 105 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call EventScript_ShowHelpShinyChance
# 106 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call EventScript_ShowHelpStarter
	goto Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_7


Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball::
# 113 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 114 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0, MSGBOX_YESNO
# 115 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 116 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2
# 150 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PIN
# 151 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_VULPIX, Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0
# 152 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 153 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_6
# 154 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1:
# 156 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 157 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_2:
# 117 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 2
# 118 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	givemon SPECIES_VULPIX_DELTA, 7, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_MODEST, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ECHOED_VOICE, isStoryStarter = TRUE
# 119 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6
# 129 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7
# 139 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5:
# 140 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4
# 142 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 143 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	fwdtime 22, 32
# 144 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5
# 145 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 146 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setfriendship 0, 200
# 147 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	updatefollowingmon
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_1

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_6:
# 120 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 122 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 123 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 124 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 125 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2
# 126 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_7:
# 130 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitfanfare
# 132 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1
# 133 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject LOCALID_VULPIX
# 134 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 135 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2
# 136 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	goto Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_5


Eventscript_CutsceneStarts::
# 162 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 163 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Eventscript_CutsceneEnds::
# 167 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 168 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix::
# 172 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0
# 174 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitmovement
# 175 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0
# 176 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 177 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix::
# 182 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 183 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0
# 186 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 187 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_PC::
# 192 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 193 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	checkplayergender
# 194 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_PC_2
# 198 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call Mansion_MitsurusRoom2F_Eventscript_RivalPC
Mansion_MitsurusRoom2F_Eventscript_PC_1:
# 200 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_PC_2:
# 195 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call Mansion_MitsurusRoom2F_Eventscript_PlayerPC
	goto Mansion_MitsurusRoom2F_Eventscript_PC_1


Mansion_MitsurusRoom2F_Eventscript_PlayerPC::
# 205 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playse SE_PC_ON
# 206 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 207 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	special BedroomPC
# 208 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	waitstate
	return


Mansion_MitsurusRoom2F_Eventscript_RivalPC::
# 212 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0
# 213 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
	return


Mansion_MitsurusRoom2F_Eventscript_Piano::
# 217 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 218 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_2
# 235 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2
Mansion_MitsurusRoom2F_Eventscript_Piano_1:
# 237 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end

Mansion_MitsurusRoom2F_Eventscript_Piano_2:
# 220 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0, MSGBOX_YESNO
# 221 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 222 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Mansion_MitsurusRoom2F_Eventscript_Piano_5
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1

Mansion_MitsurusRoom2F_Eventscript_Piano_5:
# 223 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 224 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	playbgm MUS_XC2_GARFONT_MERCERNARIES_NIGHT, FALSE
# 225 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	delay 1800
# 226 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	fadenewbgm MUS_XC2_TORIGOTH_NIGHT
# 227 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	savebgm MUS_XC2_TORIGOTH_NIGHT
# 228 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1
# 229 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 230 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	addtime 0, 0, 10
# 231 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Mansion_MitsurusRoom2F_Eventscript_Piano_1


Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft::
# 242 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 243 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0
# 246 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 247 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_BookshelfRight::
# 252 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 253 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0
# 254 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 255 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Mansion_MitsurusRoom2F_Eventscript_Notebooks::
# 260 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	lock
# 261 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	msgbox Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0
# 265 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	closemessage
# 266 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


Eventscript_OptionsTips::
# 271 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	call EventScript_ShowHelpSpeedUp
# 272 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	setflag FLAG_HELP_SPEEDUP
# 273 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 274 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	release
	end


# 29 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_0:
# 29 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
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

# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_3:
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_down
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_left
# 65 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Movement_4:
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_fast_left
# 87 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	jump_in_place_up
	step_end

# 151 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Movement_0:
# 151 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	emote_question_mark
	step_end

# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Movement_0:
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	walk_right
# 173 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	face_down
	step_end

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_0:
# 33 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "I'll need this... and a spare pair of\n"
	.string "boots...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_1:
# 42 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}My Pokédex, wallet... Repels...\p"
	.string "And the map to Thundershards Cliff.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_2:
# 58 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}What else...$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_3:
# 63 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Oh right.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_4:
# 83 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'll definitely need this while outdoors.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Hmm, that should be everything.$"

Mansion_MitsurusRoom2F_Eventscript_MitsuruPacking_Text_5:
# 94 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I know, I know. I'll never leave you\n"
	.string "behind, Vulpix.\p"
	.string "Let's get you inside the Pokéball now,\n"
	.string "shall we?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_0:
# 114 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Hold out the Pokéball to Vulpix?$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_1:
# 122 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix's pushed the Pokéball button\n"
	.string "with its nose and went inside.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_2:
# 125 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can rename a Pokémon in its\n"
	.string "summary screen.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_3:
# 139 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Party full.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_4:
# 140 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already 10:32PM.\p"
	.string "If I don't go now, I won't be arriving at\n"
	.string "the cliff's foot before midnight.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_5:
# 144 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{COLOR GREEN}{SPEAKER NAME_NONE}{DESTROY_MUGSHOT}Tips: Check your bag for various QoL\n"
	.string "items.$"

Mansion_MitsurusRoom2F_Eventscript_PuttingVulpixInPokeball_Text_6:
# 153 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Vulpix is wondering why you're\n"
	.string "hesitating.$"

Mansion_MitsurusRoom2F_Eventscript_MustPickUpVulpix_Text_0:
# 175 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Vulpix is waiting for me.)$"

Mansion_MitsurusRoom2F_Eventscript_DollAlolanVulpix_Text_0:
# 183 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's an Alolan Vulpix doll.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}...\p"
	.string "(This reminds me of how my Vulpix used\n"
	.string "to look...)$"

Mansion_MitsurusRoom2F_Eventscript_RivalPC_Text_0:
# 212 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "It's Mitsuru's PC. It's the latest model\n"
	.string "from Kirijo Electronics.$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_0:
# 220 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Play a song? {COLOR GREEN}(It will take roughly 30\n"
	.string "seconds.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_1:
# 228 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(It's time to go.)$"

Mansion_MitsurusRoom2F_Eventscript_Piano_Text_2:
# 235 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I really need to get going.)$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfLeft_Text_0:
# 243 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Documents about various big companies\n"
	.string "in Kitoha region.\p"
	.string "Eleki Express's is circled in red. Beside\n"
	.string "said document are several photos of\l"
	.string "delivery trucks.\p"
	.string "They seem to be in a mountain area.$"

Mansion_MitsurusRoom2F_Eventscript_BookshelfRight_Text_0:
# 253 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "Various books about human's and\n"
	.string "Pokémon's biology, geology and\l"
	.string "genealogy.$"

Mansion_MitsurusRoom2F_Eventscript_Notebooks_Text_0:
# 261 "data/maps/Mansion_MitsurusRoom2F/scripts.pory"
	.string "College materials from the previous\n"
	.string "term.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Luckily, it's summer break right now.\p"
	.string "Otherwise it'd be hard for me to travel.\p"
	.string "Well, I figure I can always request a\n"
	.string "leave of absence until this matter is\l"
	.string "sorted out.)$"
