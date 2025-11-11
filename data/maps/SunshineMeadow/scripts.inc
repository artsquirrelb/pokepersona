SunshineMeadow_MapScripts::
# 11 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 35
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 27 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 16 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 17 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 18 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 21 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 22 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 23 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 24 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 4, 7, 11
# 25 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 14
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 28 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 29 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnWarp34
# 4 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnWarp35
# 5 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnWarp37
	.2byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnFrame35
# 9 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnFrame37
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp34::
# 35 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 36 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 40 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 41 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 42 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 43 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp37::
# 47 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 48 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 49 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 50 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, faceright
# 51 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceup
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 55 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 59 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 60 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 62 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 63 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
# 68 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
	end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 64 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 65 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 74 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 75 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 101 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 76 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 78 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 79 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 86 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 87 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 88 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 89 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 90 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 91 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 92 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 93 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 94 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 95 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 96 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 97 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 102 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 103 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 104 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 105 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 106 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 107 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 108 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 109 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 110 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 111 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 112 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 113 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 80 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 81 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 82 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 118 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 119 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 122 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 123 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 127 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 128 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 129 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 130 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 131 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 132 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 133 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 134 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 135 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 136 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 137 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 138 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 139 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 147 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 151 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 152 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 153 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 154 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 155 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 156 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 157 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 158 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 159 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 160 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 161 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 170 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 176 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 177 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 178 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 179 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 181 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 182 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 183 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 184 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 185 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 186 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 187 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 141 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 162 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 191 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 192 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 192 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 192 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 194 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 195 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 196 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 198 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 199 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 199 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 201 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 202 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 202 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 205 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 206 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 208 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 209 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 209 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 209 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 210 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 213 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 214 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 215 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 216 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 217 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 223 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 224 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 225 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 226 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 227 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 228 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 229 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 230 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 231 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 232 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 233 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 234 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 218 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 219 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 220 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 239 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 240 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 244 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 248 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 253 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 254 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 255 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 256 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 257 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 258 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 259 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 260 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 261 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 262 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
	end

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 265 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 241 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 242 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 245 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 246 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 249 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 250 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 248 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 244 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 240 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 268 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 269 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 306 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 307 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 308 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 309 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 310 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 311 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 312 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 313 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 314 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 315 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 316 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 317 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 318 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 320 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 321 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 322 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 323 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 324 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 325 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 326 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 327 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 328 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 329 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 330 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 333 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 334 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 335 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 336 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 338 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 339 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 339 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 343 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 343 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 347 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 348 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 349 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 350 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 351 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 353 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 354 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 355 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 356 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 357 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 358 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 359 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 360 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 361 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 362 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 363 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 366 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 367 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 368 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 369 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 373 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 377 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 374 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 382 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 383 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 385 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 386 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 387 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 388 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 389 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 390 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 391 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 400 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 401 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 402 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 405 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 406 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 407 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 408 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 409 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 410 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 411 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 20
# 412 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
	end


# 416 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 417 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 417 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 417 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 417 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 420 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 421 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 421 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 422 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 425 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 426 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 426 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 427 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 430 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 431 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 431 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 431 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 432 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 432 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 433 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 436 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 437 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 437 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 437 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 438 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 438 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 438 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 439 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 442 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 443 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 443 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 444 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 444 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 444 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 445 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 446 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 449 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 450 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 450 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 450 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 451 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 452 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 454 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 455 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 455 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 456 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 458 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 459 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 459 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 463 "data/maps/SunshineMeadow/scripts.pory"
	playbgm MUS_CREDITS, TRUE
# 464 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 465 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 468 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 469 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 470 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 471 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 472 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 476 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 477 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 478 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 479 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


SunshineMeadow_Eventscript_MeadowSign::
# 485 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 486 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DirectionSign::
# 491 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 492 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 497 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 498 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 499 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 500 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 501 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 502 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 503 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 504 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 509 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 510 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 515 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 516 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 60 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 64 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 76 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 80 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 91 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 107 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 141 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 147 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 162 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 170 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 218 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 314 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 318 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 330 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 351 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 363 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 383 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 391 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Now that I get a clearer vision of how\n"
	.string "both of you fare in battle,\p"
	.string "I'll be counting on you, Sanada-kun and\n"
	.string "Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}You mean...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Yes, both of you are coming with me. You\n"
	.string "two have great potential.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}YESSS!!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Heh. Just you wait. I'll win against you\n"
	.string "in no time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I'm looking forward to that.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2:
# 402 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 465 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 472 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 485 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 491 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 509 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 515 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 272 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 280 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 286 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 293 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 301 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
