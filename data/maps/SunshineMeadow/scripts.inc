SunshineMeadow_MapScripts::
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD
# 25 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 16 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
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
# 26 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 35
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 34 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 41 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 45 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 48 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_gt SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 51 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 17
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 61 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 31
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 27 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 31 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 32 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 35 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 36 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 37 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 38 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 4, 7, 11
# 39 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 14
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 42 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 41 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 31
	goto_if_ne SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 41 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 17
	goto_if_ne SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 46 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 45 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 8
	goto_if_le SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 49 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 12, 14, 8
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 52 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 53 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
# 54 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 11, 10
# 55 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 10
# 57 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 58 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 59 "data/maps/SunshineMeadow/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 63 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 17
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnWarp34
# 11 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnWarp35
# 12 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnWarp37
# 14 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, SunshineMeadow_Eventscript_MitsuruOnWarp8
	.2byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnFrame35
# 18 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnFrame37
# 20 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 6, SunshineMeadow_Eventscript_MitsuruOnFrame6
# 21 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, SunshineMeadow_Eventscript_MitsuruOnFrame8
# 22 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 17, SunshineMeadow_Eventscript_MitsuruOnFrame17
# 23 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 31, SunshineMeadow_Eventscript_MitsuruOnFrame31
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp34::
# 69 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 70 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 74 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 75 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 76 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 77 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp37::
# 81 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 82 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 83 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 84 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, faceright
# 85 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceup
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 89 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruOnFrame6::
# 93 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 94 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 95 "data/maps/SunshineMeadow/scripts.pory"
	call Eventscript_CutsceneStarts
# 96 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 7
# 97 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 98 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruOnWarp8::
# 102 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineMeadow_Eventscript_MitsuruOnFrame8::
# 106 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 107 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruAproachTheFence
	return


SunshineMeadow_Eventscript_MitsuruOnFrame17::
# 111 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 115 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 116 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 117 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 119 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 120 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1
# 126 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
# 121 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 122 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 131 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 132 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 157 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 133 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 135 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 136 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 143 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 144 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 145 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 146 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 147 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 148 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 149 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 150 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 151 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 152 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 153 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 154 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 158 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 159 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 160 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 161 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 162 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 163 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 164 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 165 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 166 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 167 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 168 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 137 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 138 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 139 "data/maps/SunshineMeadow/scripts.pory"
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
	warpsilent MAP_BLANK_MAP, 0, 0
# 384 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 385 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 387 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 388 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 388 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 391 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 392 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 392 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 396 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 397 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 398 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 399 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 400 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 402 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 403 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 404 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 405 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 406 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 407 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 408 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 409 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 410 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 411 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 412 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 415 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 416 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 417 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 418 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 419 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 423 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 427 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 424 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 432 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 433 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 435 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 436 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 437 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 438 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 439 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 440 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 441 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 450 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 451 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 452 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 455 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 456 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 457 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 458 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 459 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 460 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 461 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 462 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 463 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 464 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 468 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 469 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 469 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 469 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 469 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 472 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 474 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 477 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 478 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 478 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 479 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 482 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 483 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 483 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 483 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 485 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 488 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 489 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 491 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 494 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 495 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 495 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 497 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 498 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 501 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 502 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 503 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 504 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 506 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 507 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 507 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 508 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 510 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 511 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 511 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 515 "data/maps/SunshineMeadow/scripts.pory"
	fadenewbgm MUS_CREDITS
# 516 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 517 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 520 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 521 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 522 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 523 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 524 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 528 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 529 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 530 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 531 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 532 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MeadowSign::
# 537 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 538 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_DirectionSign::
# 542 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 543 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 547 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 548 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 549 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 550 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 551 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 552 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 553 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 554 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 559 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 560 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 565 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 566 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_JumpOverFence::
# 571 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 572 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 613 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 573 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 580 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 581 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 582 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 583 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 584 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 585 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 586 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_9
# 598 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 574 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 576 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 614 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 616 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_9:
# 588 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 589 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 590 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 591 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 592 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 593 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 594 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 595 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_10:
# 600 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 601 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 602 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 603 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 604 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 605 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 606 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 607 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 623 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 624 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 625 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 626 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 627 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 629 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 630 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 631 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 632 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 633 "data/maps/SunshineMeadow/scripts.pory"
	callnative Script_CalculateTime
# 634 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 637 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 638 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 639 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 640 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 641 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 642 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 643 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 646 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 647 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 648 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 649 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 650 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 651 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 655 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 656 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 658 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 659 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 12
# 660 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 665 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 666 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 668 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 669 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave::
# 674 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0
# 675 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 676 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 677 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 678 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 679 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 680 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0
# 682 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 683 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 684 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1
# 685 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2
# 686 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 687 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 688 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1
# 690 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 691 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 692 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 693 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 694 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3
# 695 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4
# 696 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 697 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 698 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 1
# 699 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 2
# 700 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 3
# 701 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 702 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 703 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 704 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 705 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 18
# 706 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 707 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger::
# 712 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 713 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0, MSGBOX_YESNO
# 714 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1
# 721 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 722 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4
# 731 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 31
# 732 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 733 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 9, 11
# 734 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1:
# 715 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 716 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 717 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4:
# 723 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1
# 724 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 725 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 726 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 727 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruOnFrame31::
# 740 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle::
# 744 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 745 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 746 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_2
# 747 "data/maps/SunshineMeadow/scripts.pory"
	addobject 5
# 748 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 749 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 750 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 751 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0
# 752 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 753 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0
# 756 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 757 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 758 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 759 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1
# 760 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2
# 761 "data/maps/SunshineMeadow/scripts.pory"
	delay 4
# 762 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3
# 763 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4
# 764 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 765 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 766 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 767 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 768 "data/maps/SunshineMeadow/scripts.pory"
	release
# 769 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 770 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansDownToShinjiroMitsuruFirstFight
# 771 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 772 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 773 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 774 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 775 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 776 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 777 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 778 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 779 "data/maps/SunshineMeadow/scripts.pory"
	delay 10
# 780 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 783 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 784 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 785 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansBackUpToArenaMitsuruFirstFight
# 786 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 787 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 788 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 789 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 790 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 791 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 792 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 793 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
# 798 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 799 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 800 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 801 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 802 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 803 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle::
# 807 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 808 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 810 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_AKIHIKO_SUNSHINE_MEADOW, AkihikoFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel, SunshineMeadow_Eventscript_AkihikoFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel::
# 813 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 814 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 815 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_AkihikoFirstBattleResult::
# 823 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 824 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2
# 828 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 829 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInAkihikoFirstBattle
SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1:
# 831 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 832 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostAkihikoFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2:
# 825 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInAkihikoFirstBattle
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1


SunshineMeadow_Eventscript_PostAkihikoFirstBattle::
# 848 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 849 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0
# 850 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 851 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 852 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 853 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 854 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 855 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 856 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1
# 857 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 858 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 859 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 861 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 862 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2
# 863 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruGoesBackToStartBattle
# 864 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 865 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 866 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkihikoGetsOutOfBattleSpace
# 867 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 868 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 869 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 870 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 871 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0
# 873 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 874 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 875 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle::
# 879 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_SHINJIRO_ROUTE_2, ShinjiroMFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel::
# 883 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 884 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 885 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ShinjiroFirstBattleResult::
# 893 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 00
# 894 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 895 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2
# 899 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 900 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5
# 910 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1:
# 913 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 914 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 915 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 916 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0
# 917 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1
# 918 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, facedown
# 919 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 920 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2
# 921 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 922 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 931 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 932 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 933 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 936 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 937 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 32
# 938 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 939 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 940 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 941 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 942 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	end

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2:
# 896 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5:
# 901 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_WHITE
# 902 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 30
# 903 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 904 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 905 "data/maps/SunshineMeadow/scripts.pory"
	special SetCB2WhiteOut
# 906 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1


# 588 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 588 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 588 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 600 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 600 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 600 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 624 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 624 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 630 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 630 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 630 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 630 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 630 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 647 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 647 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 647 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 647 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 647 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 647 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

# 674 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0:
# 674 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 674 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 684 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1:
# 684 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 684 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 685 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2:
# 685 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 685 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 685 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 694 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3:
# 694 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 694 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 694 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
	step_end

# 695 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4:
# 695 "data/maps/SunshineMeadow/scripts.pory"
	enter_pokeball
	step_end

# 751 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0:
# 751 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 751 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 751 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 751 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 759 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1:
# 759 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 759 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 759 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 759 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 760 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2:
# 760 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 760 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 760 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 760 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 762 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3:
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 763 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4:
# 763 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 763 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 763 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 763 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 763 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 849 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0:
# 849 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 849 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 849 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 849 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 856 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1:
# 856 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 856 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 856 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 862 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2:
# 862 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 862 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

# 916 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0:
# 916 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 916 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 916 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 916 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 917 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1:
# 917 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 917 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 917 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 920 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2:
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 117 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 121 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 133 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 137 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 148 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 163 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 198 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 204 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 219 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 227 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0:
# 283 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 363 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 367 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 379 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 400 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 412 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 433 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 441 "data/maps/SunshineMeadow/scripts.pory"
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
# 452 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 517 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 524 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 537 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 542 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 559 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 565 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 574 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 581 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 614 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 627 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 634 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already\n"
	.string "{STR_VAR_2}:{STR_VAR_3}...\p"
	.string "Not very ideal to tackle a mountain\n"
	.string "cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 643 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 656 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 666 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 680 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 688 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0:
# 713 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1:
# 723 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR 2}You don't have at least 3 Pokémon for\n"
	.string "the battle.$"

SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0:
# 753 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}You bet I am!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0:
# 813 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's pick 3 Pokémon to fight.)$"

SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0:
# 871 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0:
# 896 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1:
# 910 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Well fought. Looks like I still have much\n"
	.string "to learn.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 320 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 328 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 334 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 341 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 349 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"

AkihikoFirstBattleDefeated::
# 818 "data/maps/SunshineMeadow/scripts.pory"
	.string "You... are so strong.$"

SunshineMeadow_Eventscript_WonInAkihikoFirstBattle::
# 835 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(He's indeed a very clever trainer. Good\n"
	.string "reflex and precision, however, a little\l"
	.string "too reckless.)$"

SunshineMeadow_Eventscript_LostInAkihikoFirstBattle::
# 841 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}It was so close, though. I only managed\n"
	.string "to win by sheer luck.$"

ShinjiroMFirstBattleDefeated::
# 888 "data/maps/SunshineMeadow/scripts.pory"
	.string "Damn, you're tough.$"
