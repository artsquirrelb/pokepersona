SunshineTown_MapScripts::
# 2 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/SunshineTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 23
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 13 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_lt SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 20 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 23
	goto_if_ge SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
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
# 8 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 15 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 2, 14, 11
# 16 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 17 "data/maps/SunshineTown/scripts.pory"
	setobjectxyperm 1, 3, 14
# 18 "data/maps/SunshineTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	goto SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 21 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 16, SunshineTown_Eventscript_OnFrame16
# 26 "data/maps/SunshineTown/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 23, SunshineTown_Eventscript_OnFrame23
	.2byte 0


SunshineTown_Eventscript_Kurosawa::
# 31 "data/maps/SunshineTown/scripts.pory"
	lock
# 32 "data/maps/SunshineTown/scripts.pory"
	setspeaker SP_NAME_KUROSAWA
# 33 "data/maps/SunshineTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineTown_Eventscript_Kurosawa_2
# 39 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_1
# 40 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 41 "data/maps/SunshineTown/scripts.pory"
	playse SE_PIN
# 42 "data/maps/SunshineTown/scripts.pory"
	applymovement 3, KurosawaNoticed
# 43 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_2
# 47 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_1
SunshineTown_Eventscript_Kurosawa_1:
# 49 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Kurosawa_2:
# 34 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 35 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Kurosawa_Text_0
	goto SunshineTown_Eventscript_Kurosawa_1


# 52 "data/maps/SunshineTown/scripts.pory"
KurosawaNoticed:
# 53 "data/maps/SunshineTown/scripts.pory"
	emote_exclamation_mark
# 54 "data/maps/SunshineTown/scripts.pory"
	face_player
	step_end

SunshineTown_Eventscript_GoGetPackage0::
# 58 "data/maps/SunshineTown/scripts.pory"
	lockall
# 59 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 60 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 61 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 62 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


# 67 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroPreventFromLeaving0:
# 68 "data/maps/SunshineTown/scripts.pory"
	walk_left
# 69 "data/maps/SunshineTown/scripts.pory"
	face_right
	step_end

# 71 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroJoinsback0:
# 72 "data/maps/SunshineTown/scripts.pory"
	walk_up
# 73 "data/maps/SunshineTown/scripts.pory"
	walk_right
	step_end

SunshineTown_Eventscript_GoGetPackage1::
# 77 "data/maps/SunshineTown/scripts.pory"
	lockall
# 78 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_GoGetPackage0_Text_0
# 79 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 80 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 81 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 83 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_FatMan::
# 88 "data/maps/SunshineTown/scripts.pory"
	lock
# 89 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 90 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_FatMan_Text_0
# 91 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 91 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_FatMan_2
# 97 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_2
SunshineTown_Eventscript_FatMan_1:
# 99 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_FatMan_2:
# 92 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_FatMan_Text_1
# 94 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_FatMan_1


SunshineTown_Eventscript_Boy::
# 103 "data/maps/SunshineTown/scripts.pory"
	lock
# 104 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 105 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_Boy_Text_0
# 106 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 106 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineTown_Eventscript_Boy_2
# 113 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_2
SunshineTown_Eventscript_Boy_1:
# 116 "data/maps/SunshineTown/scripts.pory"
	release
	return

SunshineTown_Eventscript_Boy_2:
# 107 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Boy_Text_1
# 110 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
	goto SunshineTown_Eventscript_Boy_1


SunshineTown_Eventscript_DirerctionSign::
# 120 "data/maps/SunshineTown/scripts.pory"
	lock
# 121 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DirerctionSign_Text_0
# 123 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_TownSign::
# 127 "data/maps/SunshineTown/scripts.pory"
	lock
# 128 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_TownSign_Text_0
# 129 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OnFrame16::
# 133 "data/maps/SunshineTown/scripts.pory"
	lockall
# 134 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExitingPC
# 135 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_ExitingPC::
# 139 "data/maps/SunshineTown/scripts.pory"
	lockall
# 140 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_Eventscript_AkihikoExitingPC
# 141 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, SunshineTown_Eventscript_ShinjiroExitingPC
# 142 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExitingPC_Text_0
# 145 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 146 "data/maps/SunshineTown/scripts.pory"
	applymovement 4, walkup
# 147 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/SunshineTown/scripts.pory"
	removeobject 4
# 149 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_2
# 150 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 17
# 151 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 152 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


# 155 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_AkihikoExitingPC:
# 156 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 157 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 157 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 158 "data/maps/SunshineTown/scripts.pory"
	face_down
	step_end

# 161 "data/maps/SunshineTown/scripts.pory"
SunshineTown_Eventscript_ShinjiroExitingPC:
# 162 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 162 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 162 "data/maps/SunshineTown/scripts.pory"
	walk_fast_down
# 163 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 163 "data/maps/SunshineTown/scripts.pory"
	walk_fast_right
# 164 "data/maps/SunshineTown/scripts.pory"
	face_up
	step_end

SunshineTown_Eventscript_DontLeaveTown::
# 168 "data/maps/SunshineTown/scripts.pory"
	lockall
# 169 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 170 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_DontLeaveTown_Text_0
# 172 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 173 "data/maps/SunshineTown/scripts.pory"
	releaseall
	return


SunshineTown_Eventscript_WarpToBurningOrphanage::
# 177 "data/maps/SunshineTown/scripts.pory"
	lock
# 178 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 179 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 180 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 181 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 182 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointEnteringPC::
# 186 "data/maps/SunshineTown/scripts.pory"
	lock
# 187 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 188 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 189 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 190 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_NoPointLeavingTown::
# 194 "data/maps/SunshineTown/scripts.pory"
	lock
# 195 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 196 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_NoPointEnteringPC_Text_0
# 197 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 198 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_WarpToBurningOrphanage2::
# 202 "data/maps/SunshineTown/scripts.pory"
	lock
# 203 "data/maps/SunshineTown/scripts.pory"
	playse SE_EXIT
# 204 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 18
# 205 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 206 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_BURNING, 16, 23
# 207 "data/maps/SunshineTown/scripts.pory"
	delay 30
# 208 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_OW_Happiny::
# 212 "data/maps/SunshineTown/scripts.pory"
	lockall
# 213 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_OW_Happiny_1
# 220 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 221 "data/maps/SunshineTown/scripts.pory"
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
# 222 "data/maps/SunshineTown/scripts.pory"
	startoverworldencounter 6
# 223 "data/maps/SunshineTown/scripts.pory"
	removeobject 6
# 224 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_TEMP_A
# 225 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end

SunshineTown_Eventscript_OW_Happiny_1:
# 214 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OW_Happiny_Text_0
# 215 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 216 "data/maps/SunshineTown/scripts.pory"
	releaseall
	end


SunshineTown_Eventscript_OnFrame23::
# 232 "data/maps/SunshineTown/scripts.pory"
	lock
# 233 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_OnFrame23_Text_0
# 236 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 237 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 238 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 239 "data/maps/SunshineTown/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 24
# 240 "data/maps/SunshineTown/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 241 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL::
# 246 "data/maps/SunshineTown/scripts.pory"
	lock
# 247 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 248 "data/maps/SunshineTown/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2
# 254 "data/maps/SunshineTown/scripts.pory"
	faceplayer
# 255 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 256 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5
# 260 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward
SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1:
# 263 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_2:
# 249 "data/maps/SunshineTown/scripts.pory"
	goto SunshineTown_Eventscript_ExpertF_PreQuest
# 250 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_5:
# 257 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted
	goto SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_1


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted::
# 268 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0
# 269 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 270 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward::
# 276 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 277 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1
# 286 "data/maps/SunshineTown/scripts.pory"
	call SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive
	return

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_1:
# 278 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0
# 279 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 280 "data/maps/SunshineTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 281 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 282 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive::
# 291 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 292 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1
# 299 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1
# 301 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 302 "data/maps/SunshineTown/scripts.pory"
	setspeaker SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0
# 303 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2
# 306 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 307 "data/maps/SunshineTown/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL
# 308 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_1:
# 293 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0
# 294 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 295 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_ExpertF_PreQuest::
# 315 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_ExpertF_PreQuest_Text_0
# 316 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 317 "data/maps/SunshineTown/scripts.pory"
	release
	end


SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24::
# 322 "data/maps/SunshineTown/scripts.pory"
	lock
# 323 "data/maps/SunshineTown/scripts.pory"
	msgbox SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0, MSGBOX_YESNO
# 324 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1
# 330 "data/maps/SunshineTown/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 331 "data/maps/SunshineTown/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_1:
# 325 "data/maps/SunshineTown/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 326 "data/maps/SunshineTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/SunshineTown/scripts.pory"
	release
	return


SunshineTown_Eventscript_HiddenGrotto::
# 336 "data/maps/SunshineTown/scripts.pory"
	lock
# 337 "data/maps/SunshineTown/scripts.pory"
	msgbox Eventscript_HiddenGrotto, MSGBOX_YESNO
# 338 "data/maps/SunshineTown/scripts.pory"
	closemessage
# 339 "data/maps/SunshineTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunshineTown_Eventscript_HiddenGrotto_2
SunshineTown_Eventscript_HiddenGrotto_1:
# 342 "data/maps/SunshineTown/scripts.pory"
	release
	end

SunshineTown_Eventscript_HiddenGrotto_2:
# 340 "data/maps/SunshineTown/scripts.pory"
	warp MAP_SUNSHINE_TOWN_HIDDEN_GROTTO, 0
	goto SunshineTown_Eventscript_HiddenGrotto_1


SunshineTown_Eventscript_Kurosawa_Text_0:
# 35 "data/maps/SunshineTown/scripts.pory"
	.string "Hm?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-we'll get going now!$"

SunshineTown_Eventscript_Kurosawa_Text_1:
# 39 "data/maps/SunshineTown/scripts.pory"
	.string "If only the higher-ups allowed us-$"

SunshineTown_Eventscript_Kurosawa_Text_2:
# 44 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_KUROSAWA}Do you need some help, kids?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Oh nothing! Sorry for bothering you,\n"
	.string "sir.\p"
	.string "(He looks so intimidating!)$"

SunshineTown_Eventscript_GoGetPackage0_Text_0:
# 59 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The Pokémon Center is right there, Aki.$"

SunshineTown_Eventscript_FatMan_Text_0:
# 90 "data/maps/SunshineTown/scripts.pory"
	.string "Kojima$"

SunshineTown_Eventscript_FatMan_Text_1:
# 92 "data/maps/SunshineTown/scripts.pory"
	.string "The policeman living here ran toward\n"
	.string "the woods after hearing that explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should hurry up!$"

SunshineTown_Eventscript_FatMan_Text_2:
# 97 "data/maps/SunshineTown/scripts.pory"
	.string "Technology is amazing.\p"
	.string "Now you can do so many things with\n"
	.string "decomps.$"

SunshineTown_Eventscript_Boy_Text_0:
# 105 "data/maps/SunshineTown/scripts.pory"
	.string "Yoshida$"

SunshineTown_Eventscript_Boy_Text_1:
# 107 "data/maps/SunshineTown/scripts.pory"
	.string "I think something exploded in the\n"
	.string "woods.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DARKENED}Could it be...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The orphanage!$"

SunshineTown_Eventscript_Boy_Text_2:
# 113 "data/maps/SunshineTown/scripts.pory"
	.string "One of the richest families in the\n"
	.string "region lived on this island.\p"
	.string "I heard their mansion was at the south\n"
	.string "end of Route 1.$"

SunshineTown_Eventscript_DirerctionSign_Text_0:
# 121 "data/maps/SunshineTown/scripts.pory"
	.string "Sunshine Riverbank {DOWN_ARROW}\n"
	.string "Route 2 {LEFT_ARROW}$"

SunshineTown_Eventscript_TownSign_Text_0:
# 128 "data/maps/SunshineTown/scripts.pory"
	.string "Welcome to Sunshine Town!$"

SunshineTown_Eventscript_ExitingPC_Text_0:
# 143 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's ask around what happened.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Yeah.$"

SunshineTown_Eventscript_DontLeaveTown_Text_0:
# 171 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}We should ask people in town about that\n"
	.string "explosion sound!$"

SunshineTown_Eventscript_NoPointEnteringPC_Text_0:
# 188 "data/maps/SunshineTown/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Not the time to be dawdling around!)$"

SunshineTown_Eventscript_OW_Happiny_Text_0:
# 214 "data/maps/SunshineTown/scripts.pory"
	.string "The Happiny is looking through the\n"
	.string "door. It won't budge no matter what.$"

SunshineTown_Eventscript_OnFrame23_Text_0:
# 233 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR GREEN}Tips: Quest System is now unlocked.\p"
	.string "Check around for quest givers with a\n"
	.string "light blue exclamation mark.\p"
	.string "You can open quest menu in Start Menu {RIGHT_ARROW}\n"
	.string "L Button.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_Text_0:
# 247 "data/maps/SunshineTown/scripts.pory"
	.string "Fumiko$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_QuestWasCompleted_Text_0:
# 268 "data/maps/SunshineTown/scripts.pory"
	.string "Soothe Bell can help you befriend\n"
	.string "Pokémon faster.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfReward_Text_0:
# 278 "data/maps/SunshineTown/scripts.pory"
	.string "My Riolu was very happy. Please take\n"
	.string "this as a thank-you for doing me a\l"
	.string "favor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_0:
# 293 "data/maps/SunshineTown/scripts.pory"
	.string "You can find my poor Riolu on the\n"
	.string "second floor.$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_1:
# 299 "data/maps/SunshineTown/scripts.pory"
	.string "Excuse me, young men. Can you do me a\n"
	.string "favor?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure, ma'am. What can we do for you?$"

SunshineTown_Eventscript_QUEST_1_PLAY_WITH_PKM_FOR_SOOTHE_BELL_CheckIfActive_Text_2:
# 303 "data/maps/SunshineTown/scripts.pory"
	.string "One of the Pokémon caretakers I hired\n"
	.string "couldn't show up today.\p"
	.string "Can you go play with my poor baby Riolu?\n"
	.string "He's on the second floor.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Leave it to us!$"

SunshineTown_Eventscript_ExpertF_PreQuest_Text_0:
# 315 "data/maps/SunshineTown/scripts.pory"
	.string "Where did I put my key again...?$"

SunshineTown_Eventscript_Begin_Route2_Cutscene_AkihikoVar24_Text_0:
# 323 "data/maps/SunshineTown/scripts.pory"
	.string "{COLOR RED}Important scene ahead. Do you want to\n"
	.string "proceed?$"
