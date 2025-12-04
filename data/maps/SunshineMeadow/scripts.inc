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
	special ChooseHalfPartyForBattle
# 272 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 273 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 279 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 280 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 281 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 282 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 283 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 284 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 285 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 286 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 287 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 288 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 289 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 290 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 274 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 275 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 276 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 295 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 296 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 304 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 309 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 310 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 311 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 312 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 313 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 314 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 315 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 316 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 317 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 318 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 320 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 298 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 301 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 302 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 305 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 306 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 304 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 296 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 323 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 324 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 361 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 362 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 363 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 364 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 365 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 366 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 367 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 368 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 369 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 370 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 371 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 372 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 373 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 374 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 376 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 377 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 378 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 379 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 380 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 381 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 382 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 383 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 384 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 385 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 386 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 389 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 390 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 391 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 392 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 394 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 395 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 395 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 398 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 399 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 399 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 403 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 404 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 405 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 406 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 407 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 409 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 410 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 411 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 412 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 413 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 414 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 415 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 416 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 417 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 418 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 419 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 422 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 423 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 424 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 425 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 429 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 433 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 430 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 438 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 439 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 441 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 442 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 443 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 444 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 445 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 446 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 447 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 456 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 457 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 458 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 461 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 462 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 463 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 464 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 465 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 466 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 467 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 468 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 469 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 470 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


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
	playbgm MUS_CREDITS, TRUE
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
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 536 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 537 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MeadowSign::
# 542 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 543 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_DirectionSign::
# 547 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 548 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 552 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 553 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 554 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 555 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 556 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 557 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 558 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 559 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 564 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 565 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 570 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 571 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_JumpOverFence::
# 576 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 577 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 618 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 578 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 585 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 586 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 587 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 588 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 589 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 590 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 591 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_9
# 603 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 579 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 581 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 619 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 621 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_9:
# 593 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 594 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 595 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 596 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 597 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 598 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 599 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 600 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_10:
# 605 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 606 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 607 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 608 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 609 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 610 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 611 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 612 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 628 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 629 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 630 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 631 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 632 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 634 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 635 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 636 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 637 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 638 "data/maps/SunshineMeadow/scripts.pory"
	callnative Script_CalculateTime
# 639 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 642 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 643 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 644 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 645 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 646 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 647 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 648 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 651 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 652 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 653 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 654 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 655 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 656 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 660 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 661 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 663 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 664 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 12
# 665 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 670 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 671 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 673 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 674 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave::
# 679 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0
# 680 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 681 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 682 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 683 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 684 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 685 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0
# 687 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 688 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 689 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1
# 690 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2
# 691 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 692 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 693 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1
# 695 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 696 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 697 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 698 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 699 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3
# 700 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4
# 701 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 702 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 703 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 1
# 704 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 2
# 705 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 3
# 706 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 707 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 708 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 709 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 710 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 18
# 711 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 712 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger::
# 717 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 718 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0, MSGBOX_YESNO
# 719 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1
# 726 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 727 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4
# 736 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 31
# 737 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 738 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 9, 11
# 739 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1:
# 720 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 721 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 722 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4:
# 728 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1
# 729 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 730 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 731 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 732 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruOnFrame31::
# 745 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle::
# 749 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 750 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 751 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_2
# 752 "data/maps/SunshineMeadow/scripts.pory"
	addobject 5
# 753 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 754 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 755 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 756 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0
# 757 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 758 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0
# 761 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 762 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 763 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 764 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1
# 765 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2
# 766 "data/maps/SunshineMeadow/scripts.pory"
	delay 4
# 767 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3
# 768 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4
# 769 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 770 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 771 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 772 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 773 "data/maps/SunshineMeadow/scripts.pory"
	release
# 774 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 775 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansDownToShinjiroMitsuruFirstFight
# 776 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 777 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 778 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 779 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 780 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 781 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 782 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 783 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 784 "data/maps/SunshineMeadow/scripts.pory"
	delay 10
# 785 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 788 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 789 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 790 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansBackUpToArenaMitsuruFirstFight
# 791 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 792 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 793 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 794 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 795 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 796 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 797 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 798 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
# 803 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 804 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 805 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 806 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 807 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 808 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle::
# 812 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 813 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 814 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 815 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 816 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_1
# 822 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 823 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 824 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 825 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 826 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 827 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 828 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_AKIHIKO_SUNSHINE_MEADOW, AkihikoFirstBattleDefeated
# 829 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 830 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 831 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 832 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 833 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_1:
# 817 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Text_0
# 818 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 819 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_AkihikoFirstBattleResult::
# 842 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 843 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2
# 847 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 848 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInAkihikoFirstBattle
SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1:
# 850 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 851 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostAkihikoFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2:
# 844 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInAkihikoFirstBattle
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1


SunshineMeadow_Eventscript_PostAkihikoFirstBattle::
# 867 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 868 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0
# 869 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 870 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 871 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 872 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 873 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 874 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 875 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1
# 876 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 877 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 878 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 880 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 881 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2
# 882 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruGoesBackToStartBattle
# 883 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 884 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 885 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkihikoGetsOutOfBattleSpace
# 886 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 887 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 888 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 889 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 890 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0
# 892 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 893 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 894 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle::
# 898 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 899 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 900 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_1
# 906 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 907 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 908 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 909 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 910 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 911 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 912 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroMFirstBattleDefeated
# 913 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 914 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 915 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 916 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 917 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_1:
# 901 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Text_0
# 902 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 903 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ShinjiroFirstBattleResult::
# 926 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 927 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2
# 931 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 932 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5
# 942 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1:
# 945 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 946 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 947 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 948 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0
# 949 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1
# 950 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, facedown
# 951 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 952 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2
# 953 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 954 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 963 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 964 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 965 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 968 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 969 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 32
# 970 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 971 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 972 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 973 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 974 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	end

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2:
# 928 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5:
# 933 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_WHITE
# 934 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 30
# 935 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 936 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 937 "data/maps/SunshineMeadow/scripts.pory"
	special SetCB2WhiteOut
# 938 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1


# 593 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 593 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 593 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 605 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 605 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 605 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 629 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 629 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 629 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 635 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 635 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 635 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 635 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 635 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 652 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 652 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 652 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 652 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 652 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 652 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

# 679 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0:
# 679 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 679 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 689 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1:
# 689 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 689 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 690 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2:
# 690 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 690 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 690 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 699 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3:
# 699 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 699 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 699 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
	step_end

# 700 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4:
# 700 "data/maps/SunshineMeadow/scripts.pory"
	enter_pokeball
	step_end

# 756 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0:
# 756 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 756 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 756 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 756 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 764 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1:
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 764 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 765 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2:
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 765 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 767 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3:
# 767 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 767 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 767 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 767 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 768 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4:
# 768 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 768 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 768 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 768 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 768 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 868 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0:
# 868 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 868 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 868 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 868 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 875 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1:
# 875 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 875 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 875 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 881 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2:
# 881 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 881 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

# 948 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0:
# 948 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 948 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 948 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 948 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 949 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1:
# 949 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 949 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 949 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 952 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2:
# 952 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 952 "data/maps/SunshineMeadow/scripts.pory"
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

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 274 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 370 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 374 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 386 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 407 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 419 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 439 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 447 "data/maps/SunshineMeadow/scripts.pory"
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
# 458 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 523 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 530 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 542 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 547 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 564 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 570 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 579 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 586 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 619 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 632 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 639 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already\n"
	.string "{STR_VAR_2}:{STR_VAR_3}...\p"
	.string "Not very ideal to tackle a mountain\n"
	.string "cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 648 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 661 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 671 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 685 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 693 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0:
# 718 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1:
# 728 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR 2}You don't have at least 3 Pokémon for\n"
	.string "the battle.$"

SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0:
# 758 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}You bet I am!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Text_0:
# 817 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Let's pick 3 Pokémon to fight.)$"

SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0:
# 890 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0:
# 928 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1:
# 942 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Well fought. Looks like I still have much\n"
	.string "to learn.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 327 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 335 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 341 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 348 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 356 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"

AkihikoFirstBattleDefeated::
# 837 "data/maps/SunshineMeadow/scripts.pory"
	.string "You... are so strong.$"

SunshineMeadow_Eventscript_WonInAkihikoFirstBattle::
# 854 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(He's indeed a very clever trainer. Good\n"
	.string "reflex and precision, however, a little\l"
	.string "too reckless.)$"

SunshineMeadow_Eventscript_LostInAkihikoFirstBattle::
# 860 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}It was so close, though. I only managed\n"
	.string "to win by sheer luck.$"

ShinjiroMFirstBattleDefeated::
# 921 "data/maps/SunshineMeadow/scripts.pory"
	.string "Damn, you're tough.$"
