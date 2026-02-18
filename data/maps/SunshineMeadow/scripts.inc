SunshineMeadow_MapScripts::
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD
# 24 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_gt SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/SunshineMeadow/scripts.pory"
	setmetatile 11, 5, 0x020, TRUE
# 5 "data/maps/SunshineMeadow/scripts.pory"
	setmetatile 12, 5, 0x01A, TRUE
# 6 "data/maps/SunshineMeadow/scripts.pory"
	setmetatile 8, 5, 0x01A, TRUE
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 25 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_SUNSHINE_MEADOW
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_1ST_BATTLE
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_SM_1ST_BATTLE
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 40 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 44 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_REST_FOR_THE_NIGHT
	goto_if_lt SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 47 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_VS_NORBERT
	goto_if_gt SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 50 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 60 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_A_1ST_BATTLE
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 29 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 30 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 31 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 34 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 35 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 36 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 37 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 4, 7, 11
# 38 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 14
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 41 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 40 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_A_1ST_BATTLE
	goto_if_ne SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 40 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_EXPLOSION
	goto_if_ne SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 45 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 48 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 12, 14, 8
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 51 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 52 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
# 53 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 11, 10
# 54 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 10
# 56 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 57 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 58 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 62 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 17
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_1ST_BATTLE, SunshineMeadow_Eventscript_AkihikoOnWarp35
# 11 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_SM_1ST_BATTLE, SunshineMeadow_Eventscript_AkihikoOnWarp37
# 13 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, SunshineMeadow_Eventscript_MitsuruOnWarp8
	.2byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_M_1ST_BATTLE, SunshineMeadow_Eventscript_AkihikoOnFrame35
# 17 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_SM_1ST_BATTLE, SunshineMeadow_Eventscript_AkihikoOnFrame37
# 19 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_LEAVING_MANSION, SunshineMeadow_Eventscript_MitsuruOnFrame6
# 20 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, SunshineMeadow_Eventscript_MitsuruOnFrame8
# 21 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_EXPLOSION, SunshineMeadow_Eventscript_MitsuruOnFrame17
# 22 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_A_1ST_BATTLE, SunshineMeadow_Eventscript_MitsuruOnFrame31
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp34::
# 68 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 69 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 73 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 74 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 75 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 76 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp37::
# 80 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 81 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 82 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 83 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, faceright
# 84 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceup
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 88 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruOnFrame6::
# 92 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 93 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 94 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT
# 95 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 15, 15
# 96 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruOnWarp8::
# 100 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineMeadow_Eventscript_MitsuruOnFrame8::
# 104 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 105 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruAproachTheFence
	return


SunshineMeadow_Eventscript_MitsuruOnFrame17::
# 109 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 113 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 114 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 115 "data/maps/SunshineMeadow/scripts.pory"
	goto_if_unset FLAG_HELP_MAKE_CHOICE, SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
# 119 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 120 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 121 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 122 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4
# 128 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 116 "data/maps/SunshineMeadow/scripts.pory"
	call EventScript_ShowHelpChoice
# 117 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HELP_MAKE_CHOICE
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4:
# 123 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 124 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 133 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 134 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
# 156 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 157 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 158 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 159 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 160 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 161 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 162 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 163 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 165 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 166 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 167 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_M_1ST_BATTLE
# 168 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 8
# 169 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 135 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 137 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 138 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 145 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 146 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 147 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 148 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 149 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 150 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 151 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 152 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 139 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 140 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 141 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 172 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 173 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 176 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 177 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 181 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 182 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 183 "data/maps/SunshineMeadow/scripts.pory"
	release
# 184 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 185 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 186 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 187 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 188 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 189 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 190 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 191 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 192 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 193 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 194 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 195 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 196 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 204 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 208 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 209 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 210 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 211 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 212 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 213 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 214 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 215 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 216 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 217 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 218 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 227 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 233 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 234 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 235 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 236 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 237 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 238 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 239 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 240 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 241 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 242 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 243 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 244 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 198 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 219 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 247 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 248 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 248 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 248 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 250 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 251 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 254 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 257 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 258 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 258 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 260 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 261 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 262 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 264 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 265 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 265 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 265 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 266 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 269 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 270 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 271 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 272 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 278 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated, SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel, SunshineMeadow_Eventscript_MitsuruFirstBattleResult, 3
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 273 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 274 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 275 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel::
# 283 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0
# 284 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 285 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 289 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 293 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 302 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 303 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 304 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 305 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 306 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 307 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 308 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 309 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 310 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 311 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 313 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 290 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 291 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 294 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 295 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 298 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 299 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 293 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 289 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 316 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 317 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 354 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 355 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 356 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 357 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 358 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 359 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 360 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 361 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 362 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 363 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 364 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 365 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 366 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 367 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 369 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 370 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 371 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 372 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 373 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 374 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 375 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 376 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 377 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 378 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 379 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 382 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 383 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 384 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 385 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_3
# 386 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 387 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_SM_1ST_BATTLE
# 388 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
# 389 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


# 392 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 393 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 393 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 396 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 397 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 397 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 401 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 402 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 403 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 404 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 405 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 407 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 408 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 409 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 410 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 411 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 412 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 413 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 414 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 415 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 416 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 417 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 420 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 421 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 422 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 423 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_2
# 424 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 425 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_SM_1ST_BATTLE
# 426 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 10, 11
# 427 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 431 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 435 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 432 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 440 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 441 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 443 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 444 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 445 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 446 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 447 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 448 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 449 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 458 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 459 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 460 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 463 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 464 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 465 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
# 466 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 467 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 468 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 469 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 470 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 471 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


# 474 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 475 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 475 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 475 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 475 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 478 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 480 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 483 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 485 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 488 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 491 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 494 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 495 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 495 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 495 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 497 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 500 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 501 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 501 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 503 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 504 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 507 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 508 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 508 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 508 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 509 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 510 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 512 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 513 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 513 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 514 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 516 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 517 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 517 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 521 "data/maps/SunshineMeadow/scripts.pory"
	fadenewbgm MUS_CREDITS
# 522 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 523 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 526 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 527 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 528 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 529 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 530 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 534 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 535 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_INTRO_GAMEOVER
# 536 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 537 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 538 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MeadowSign::
# 543 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 544 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_DirectionSign::
# 548 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 549 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_VulpixPreBattle::
# 553 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 554 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 559 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 560 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_JumpOverFence::
# 565 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 566 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 607 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 609 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_1:
# 567 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 574 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 575 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 576 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 577 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 578 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 579 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 580 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_7
# 592 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_8
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 568 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 570 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 582 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 583 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 584 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 585 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 586 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 587 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 588 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 589 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_8:
# 594 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 595 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 596 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 597 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 598 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 599 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 600 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 601 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 616 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 617 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 618 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 619 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 620 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 622 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 623 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 624 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 625 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 626 "data/maps/SunshineMeadow/scripts.pory"
	callnative Script_CalculateTime
# 627 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 630 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 631 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 632 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 633 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 634 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 635 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 636 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 639 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 640 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 641 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 642 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 643 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 644 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 648 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 649 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 651 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 656 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 657 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 659 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 660 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave::
# 665 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0
# 666 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 667 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 668 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 669 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 670 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 671 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0
# 673 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 674 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 675 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1
# 676 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2
# 677 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 678 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 679 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1
# 681 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 682 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 683 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 684 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 685 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3
# 686 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4
# 687 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 688 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 689 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 1
# 690 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 2
# 691 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 3
# 692 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 693 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 694 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 695 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 696 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_TOWN
# 697 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 698 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger::
# 703 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 704 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0, MSGBOX_YESNO
# 705 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1
# 712 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 713 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4
# 722 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_A_1ST_BATTLE
# 723 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 724 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 9, 11
# 725 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1:
# 706 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 707 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 708 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4:
# 714 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1
# 715 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 716 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 717 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 718 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruOnFrame31::
# 731 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle::
# 735 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 736 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 737 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_2
# 738 "data/maps/SunshineMeadow/scripts.pory"
	addobject 5
# 739 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 740 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 741 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 742 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0
# 743 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 744 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0
# 747 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 748 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 749 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 750 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1
# 751 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2
# 752 "data/maps/SunshineMeadow/scripts.pory"
	delay 4
# 753 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3
# 754 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4
# 755 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 756 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 757 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 758 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 759 "data/maps/SunshineMeadow/scripts.pory"
	release
# 760 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 761 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansDownToShinjiroMitsuruFirstFight
# 762 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 763 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 764 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 765 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 766 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 767 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 768 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 769 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 770 "data/maps/SunshineMeadow/scripts.pory"
	delay 10
# 771 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 774 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 775 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 776 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansBackUpToArenaMitsuruFirstFight
# 777 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 778 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 779 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 780 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 781 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 782 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 783 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 784 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
# 789 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 790 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 791 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 792 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 793 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 794 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle::
# 798 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 799 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 801 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_AKIHIKO_SUNSHINE_MEADOW, AkihikoFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel, SunshineMeadow_Eventscript_AkihikoFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel::
# 804 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 805 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 806 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_AkihikoFirstBattleResult::
# 814 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 815 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2
# 819 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 820 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInAkihikoFirstBattle
SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1:
# 822 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 823 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostAkihikoFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2:
# 816 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInAkihikoFirstBattle
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1


SunshineMeadow_Eventscript_PostAkihikoFirstBattle::
# 839 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 840 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0
# 841 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 842 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 843 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 844 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 845 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 846 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 847 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1
# 848 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 849 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 850 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 852 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 853 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2
# 854 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruGoesBackToStartBattle
# 855 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 856 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 857 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkihikoGetsOutOfBattleSpace
# 858 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 859 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 860 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 861 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 862 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0
# 864 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 865 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 866 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle::
# 870 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_SHINJIRO_ROUTE_2, ShinjiroMFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel::
# 874 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 875 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 876 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ShinjiroFirstBattleResult::
# 884 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 00
# 885 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 886 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2
# 890 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 891 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5
# 901 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1:
# 904 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 905 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 906 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 907 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0
# 908 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1
# 909 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, facedown
# 910 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 911 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2
# 912 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 913 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 922 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 923 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 924 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 927 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 928 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_EXPLAIN_OBJECTIVE
# 929 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 930 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 931 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 932 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 933 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	end

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2:
# 887 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5:
# 892 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_WHITE
# 893 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_MEADOW
# 894 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 895 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 896 "data/maps/SunshineMeadow/scripts.pory"
	special SetCB2WhiteOut
# 897 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1


SunshineMeadow_Eventscript_SchoolGirl::
# 938 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 939 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 940 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_SchoolGirl_Text_0
# 941 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_SchoolGirl_Text_1
# 943 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_LittleBoy::
# 948 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 949 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 950 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_LittleBoy_Text_0
# 951 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LittleBoy_Text_1
# 952 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Gothita::
# 957 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_GOTHITA
# 958 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Poochyena::
# 963 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_POOCHYENA
# 964 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 582 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 582 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 582 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 594 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 594 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 594 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 617 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 617 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 617 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 623 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 623 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 623 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 623 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 623 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 640 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 640 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 640 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 640 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 640 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 640 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

# 665 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0:
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 665 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 675 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1:
# 675 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 675 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 676 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2:
# 676 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 676 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 676 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 685 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3:
# 685 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 685 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 685 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
	step_end

# 686 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4:
# 686 "data/maps/SunshineMeadow/scripts.pory"
	enter_pokeball
	step_end

# 742 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0:
# 742 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 742 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 742 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 742 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 750 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1:
# 750 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 750 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 750 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 750 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 751 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2:
# 751 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 751 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 751 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 751 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 753 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3:
# 753 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 753 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 753 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 753 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 754 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4:
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 754 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 840 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0:
# 840 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 840 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 840 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 840 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 847 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1:
# 847 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 847 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 847 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 853 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2:
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

# 907 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0:
# 907 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 907 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 907 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 907 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 908 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1:
# 908 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 908 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 908 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 911 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2:
# 911 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 911 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 120 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 123 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 135 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 139 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 150 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 161 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 198 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 204 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 219 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 227 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0:
# 283 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 363 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 367 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 379 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_3:
# 385 "data/maps/SunshineMeadow/scripts.pory"
	.string "Shinjiro managed to knock out one of\n"
	.string "Mitsuru's Pokémon before getting wiped\l"
	.string "out by her Vulpix.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 405 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 417 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_2:
# 423 "data/maps/SunshineMeadow/scripts.pory"
	.string "Shinjiro didn't stand the slightest\n"
	.string "chance and was completely wiped out by\l"
	.string "Mitsuru.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 441 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 449 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Now that I get a clearer vision of how\n"
	.string "both of you fare in battle,\p"
	.string "I'll be counting on you, Sanada-kun and\n"
	.string "Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}Huh?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}You mean...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Yes, both of you are coming with me. You\n"
	.string "two have great potential.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}YESSS!!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Heh. Just you wait. I'll win against you\n"
	.string "in no time.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Same here!\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I'm looking forward to that.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2:
# 460 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 523 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 530 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 543 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 548 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 553 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 559 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 568 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 575 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 607 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 620 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 627 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}It's already\n"
	.string "{STR_VAR_2}:{STR_VAR_3}...\p"
	.string "Not very ideal to tackle a mountain\n"
	.string "cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 636 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 649 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 657 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 671 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 679 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0:
# 704 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1:
# 714 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR 2}You don't have at least 3 Pokémon for\n"
	.string "the battle.$"

SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0:
# 744 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}You bet I am!\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0:
# 804 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's pick 3 Pokémon to fight.)$"

SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0:
# 862 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0:
# 887 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1:
# 901 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Well fought. Looks like I still have much\n"
	.string "to learn.$"

SunshineMeadow_Eventscript_SchoolGirl_Text_0:
# 940 "data/maps/SunshineMeadow/scripts.pory"
	.string "Fuwako$"

SunshineMeadow_Eventscript_SchoolGirl_Text_1:
# 941 "data/maps/SunshineMeadow/scripts.pory"
	.string "The air here is pretty cool in the\n"
	.string "evening, right?\p"
	.string "I and my brother's Pokémon enjoy the\n"
	.string "scenery here too.$"

SunshineMeadow_Eventscript_LittleBoy_Text_0:
# 950 "data/maps/SunshineMeadow/scripts.pory"
	.string "Kenta$"

SunshineMeadow_Eventscript_LittleBoy_Text_1:
# 951 "data/maps/SunshineMeadow/scripts.pory"
	.string "Psychic types are weak to Dark types,\n"
	.string "but my sister's Gothita gets along well\l"
	.string "with my Poochyena.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 320 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 328 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 334 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 341 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 349 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"

AkihikoFirstBattleDefeated::
# 809 "data/maps/SunshineMeadow/scripts.pory"
	.string "You... are so strong.$"

SunshineMeadow_Eventscript_WonInAkihikoFirstBattle::
# 826 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{CREATE MUGSHOT_M EMOTE_CONFIDENT}(He's indeed a very clever trainer. Good\n"
	.string "reflex and precision, however, a little\l"
	.string "too reckless.)$"

SunshineMeadow_Eventscript_LostInAkihikoFirstBattle::
# 832 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It was so close, though. I only managed\n"
	.string "to win by sheer luck.$"

ShinjiroMFirstBattleDefeated::
# 879 "data/maps/SunshineMeadow/scripts.pory"
	.string "Damn, you're tough.$"
