SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 12 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 12 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 19 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 19 "data/maps/SunshineTown/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 5, 19, 7
# 5 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 6 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 6, 23, 3
# 7 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 13 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 14 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 14, 11
# 15 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 16 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 14
# 17 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 20 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 25 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
	.2byte 0


SunshineTown_Eventscript_Kurosawa::
# 30 "data/maps/SunshineTown/scripts.pory"
	lock
# 31 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 32 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 38 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 39 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 40 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 41 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 42 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 46 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 48 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Kurosawa_2:
# 33 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 34 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 51 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 52 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 53 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 57 "data/maps/SunshineTown/scripts.pory"
	lockall
# 58 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 59 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 60 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 61 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 66 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 67 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 68 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 70 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 71 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 72 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 76 "data/maps/SunshineTown/scripts.pory"
	lockall
# 77 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 78 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 79 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 80 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 82 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 87 "data/maps/SunshineTown/scripts.pory"
	lock
# 88 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 89 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 90 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 90 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 96 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
SunshineTown_Eventscript_FatMan_1:
# 98 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_FatMan_2:
# 91 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 93 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_FatMan_1


SunshineTown_Eventscript_Boy::
# 102 "data/maps/SunshineTown/scripts.pory"
	lock
# 103 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 104 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 105 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 105 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 112 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
SunshineTown_Eventscript_Boy_1:
# 115 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Boy_2:
# 106 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 109 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_Boy_1


SunshineTown_Eventscript_DirerctionSign::
# 119 "data/maps/SunshineTown/scripts.pory"
	lock
# 120 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 122 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_TownSign::
# 126 "data/maps/SunshineTown/scripts.pory"
	lock
# 127 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 128 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OnFrame16::
# 132 "data/maps/SunshineTown/scripts.pory"
	lockall
# 133 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 134 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 138 "data/maps/SunshineTown/scripts.pory"
	lockall
# 139 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 140 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 141 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 144 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 145 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 146 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 148 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 149 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 150 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 151 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


# 154 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 155 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 156 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 156 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 157 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 160 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 161 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 161 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 161 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 162 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 162 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 163 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 167 "data/maps/SunshineTown/scripts.pory"
	lockall
# 168 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 169 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 171 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 172 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 176 "data/maps/SunshineTown/scripts.pory"
	lock
# 177 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 179 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 180 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 181 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 185 "data/maps/SunshineTown/scripts.pory"
	lock
# 186 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 187 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 188 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 189 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointLeavingTown::
# 193 "data/maps/SunshineTown/scripts.pory"
	lock
# 194 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 195 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 196 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 197 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 201 "data/maps/SunshineTown/scripts.pory"
	lock
# 202 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 203 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 204 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 205 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 206 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 207 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 211 "data/maps/SunshineTown/scripts.pory"
	lockall
# 212 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 219 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 220 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 221 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 222 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 223 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 224 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 213 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 214 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 215 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_OnFrame23::
# 231 "data/maps/SunshineTown/scripts.pory"
	lock
# 232 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 235 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 236 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 237 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 238 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 239 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 240 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 245 "data/maps/SunshineTown/scripts.pory"
	lock
# 246 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 247 "data/maps/SunshineTown/scripts.pory"
	goto_if_unset FLAG_SYS_QUEST_MENU_GET, SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 253 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 255 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 259 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 262 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 248 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
# 249 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 256 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 267 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 268 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 269 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 275 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 276 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 285 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 277 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 278 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 279 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 280 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 281 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 290 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 291 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 298 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 300 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 301 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 302 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 305 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 306 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 307 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 292 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 293 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 294 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_ExpertF_PreQuest::
# 314 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 315 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 316 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 321 "data/maps/SunshineTown/scripts.pory"
	lock
# 322 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 323 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 329 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 330 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 324 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 325 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_HiddenGrotto::
# 335 "data/maps/SunshineTown/scripts.pory"
	lock
# 336 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 337 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 338 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 341 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 339 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 346 "data/maps/SunshineTown/scripts.pory"
	lock
# 347 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 348 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 349 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 350 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/SunshineTown/scripts.pory"
	release
	end


unlockcharacters::
# 357 "data/maps/SunshineTown/scripts.pory"
	msgbox unlockcharacters_Text_0
# 358 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 359 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_MITSURU
# 360 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 361 "data/maps/SunshineTown/scripts.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 362 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_MITSURU
# 363 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 364 "data/maps/SunshineTown/scripts.pory"
	makecharaAvailable CHARACTER_SHINJIRO
	end


makecharagrayout::
# 369 "data/maps/SunshineTown/scripts.pory"
	msgbox makecharagrayout_Text_0
# 370 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 371 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 372 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 373 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_0, 0
# 374 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 375 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 376 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


SunshineTown_Eventscript_Kurosawa_Text_0:
# 34 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 38 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 43 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 58 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 89 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 91 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 96 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 104 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 106 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 112 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lived on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 120 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 127 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 142 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 170 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 187 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 213 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 232 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in {START_BUTTON} Menu {RIGHT_ARROW} {L_BUTTON}.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 246 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 267 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 277 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 292 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 298 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 302 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 314 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 322 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"

SunshineTown_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 347 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I have no business in Sunshine Woods\n"
	.string "right now.)$"

unlockcharacters_Text_0:
# 357 "data/maps/SunshineTown/scripts.pory"
	.string "unlocked & made available all charas$"

makecharagrayout_Text_0:
# 369 "data/maps/SunshineTown/scripts.pory"
	.string "Marking prologue to completed & reset\n"
	.string "all temp vars$"
