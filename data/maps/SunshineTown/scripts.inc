SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineTown/scripts.pory"
	playbgm MUS_HELP, TRUE
# 5 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_KUROSAWA
# 6 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 12, 11
# 7 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 8 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 1, 14
# 9 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
	.2byte 0


SunshineTown_Eventscript_Kurosawa::
# 21 "data/maps/SunshineTown/scripts.pory"
	lock
# 22 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 23 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 29 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 30 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 31 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 32 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 33 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 34 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 37 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 39 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Kurosawa_2:
# 24 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 25 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 42 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 43 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 44 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 48 "data/maps/SunshineTown/scripts.pory"
	lockall
# 49 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 51 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 52 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 53 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 58 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 59 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 60 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 62 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 63 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 64 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 68 "data/maps/SunshineTown/scripts.pory"
	lockall
# 69 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 71 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 72 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 73 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 75 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 80 "data/maps/SunshineTown/scripts.pory"
	lock
# 81 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 82 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 83 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 89 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
SunshineTown_Eventscript_FatMan_1:
# 92 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_FatMan_2:
# 84 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
	goto SunshineTown_Eventscript_FatMan_1


SunshineTown_Eventscript_Boy::
# 96 "data/maps/SunshineTown/scripts.pory"
	lock
# 97 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 98 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 99 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 106 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
SunshineTown_Eventscript_Boy_1:
# 110 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Boy_2:
# 100 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
	goto SunshineTown_Eventscript_Boy_1


SunshineTown_Eventscript_DirerctionSign::
# 114 "data/maps/SunshineTown/scripts.pory"
	lock
# 115 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 118 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_TownSign::
# 122 "data/maps/SunshineTown/scripts.pory"
	lock
# 123 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 125 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OnFrame16::
# 129 "data/maps/SunshineTown/scripts.pory"
	lockall
# 130 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 131 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 135 "data/maps/SunshineTown/scripts.pory"
	lockall
# 136 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 137 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 138 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 142 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 143 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 144 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 146 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 147 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 148 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


# 151 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 152 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 153 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 153 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 154 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 157 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 158 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 158 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 158 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 159 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 159 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 160 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 164 "data/maps/SunshineTown/scripts.pory"
	lockall
# 165 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 166 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 169 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 170 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 174 "data/maps/SunshineTown/scripts.pory"
	lock
# 175 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 176 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 177 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 178 "data/maps/SunshineTown/scripts.pory"
	release
	return


testQuestmenu::
# 182 "data/maps/SunshineTown/scripts.pory"
	lock
# 183 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 184 "data/maps/SunshineTown/scripts.pory"
	msgbox testQuestmenu_Text_0
# 185 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 186 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_Kurosawa_Text_0:
# 25 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 29 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 34 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 49 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 82 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 84 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion\l"
	.string "sound.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 89 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 98 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 100 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 106 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lived in this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 115 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\p"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 123 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 139 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 167 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

testQuestmenu_Text_0:
# 184 "data/maps/SunshineTown/scripts.pory"
	.string "Activated Quest$"
