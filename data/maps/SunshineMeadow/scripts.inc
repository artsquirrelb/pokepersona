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
# 61 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 62 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
# 67 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
	end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 63 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 64 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 73 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 74 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 80 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 75 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0
# 77 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 81 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 82 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 83 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 84 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 85 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 92 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 93 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 94 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 95 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 96 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 97 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 98 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 99 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 100 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 101 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 102 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 103 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
# 106 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 107 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 108 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 109 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 110 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 111 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 112 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 113 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 114 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 115 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 116 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 121 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 122 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 123 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 124 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 125 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 126 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 127 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 128 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 129 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 130 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 131 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	end


# 135 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 136 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 136 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 136 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 138 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 139 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 140 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 140 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 140 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 142 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 143 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 143 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 145 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 146 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 146 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 148 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 149 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 150 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 152 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 153 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 153 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 153 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 154 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 157 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 158 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 159 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 160 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 166 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 167 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 168 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 169 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 170 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 171 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 172 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 173 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 174 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 175 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 176 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 177 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 161 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 162 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 163 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 182 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 183 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
# 188 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattle
# 189 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 191 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 184 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattle
# 185 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1


SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 213 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 214 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 215 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 216 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 217 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 218 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 219 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 220 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 221 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 222 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 223 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 224 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 225 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 227 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 228 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 229 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 230 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 231 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 232 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 233 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 234 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 235 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 236 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 237 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 240 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 241 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 242 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 243 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 245 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 246 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 246 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 249 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 250 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 250 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 253 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 257 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 258 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 260 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 261 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 262 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 263 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 264 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 265 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 266 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 275 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 276 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 277 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 280 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 281 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 282 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 283 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 284 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 285 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 20
# 286 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 8, 12
	end


# 290 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 291 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 291 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 291 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 291 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 294 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 295 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 295 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 296 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 299 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 300 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 301 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 304 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 305 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 305 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 305 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 306 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 306 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 307 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 310 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 311 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 311 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 311 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 312 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 312 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 312 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 313 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 316 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 317 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 317 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 318 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 318 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 318 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 319 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 320 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 323 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 324 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 324 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 324 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 325 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 326 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 328 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 329 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 329 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 330 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 332 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 333 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 333 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_MeadowSign::
# 336 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 337 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DirectionSign::
# 342 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 343 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 348 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 349 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 350 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 351 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 352 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 353 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 354 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 355 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 360 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 361 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 366 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 367 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 60 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 63 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 75 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon to fight.\p"
	.string "Come back later when you do.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 81 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 103 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 116 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 161 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 221 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 225 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 237 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 258 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 266 "data/maps/SunshineMeadow/scripts.pory"
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
# 277 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 336 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 342 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 360 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 366 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattle::
# 194 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattle::
# 202 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

MitsuruFirstBattleDefeated::
# 208 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
