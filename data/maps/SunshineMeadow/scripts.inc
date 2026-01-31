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
	goto_if_unset FLAG_HELP_MAKE_CHOICE, SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
# 121 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 122 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 123 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4
# 129 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 118 "data/maps/SunshineMeadow/scripts.pory"
	call EventScript_ShowHelpChoice
# 119 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HELP_MAKE_CHOICE
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4:
# 124 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 125 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 134 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 135 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 160 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 136 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 138 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 139 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 146 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 147 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 148 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 149 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 150 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 151 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 152 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 153 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 154 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 155 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 156 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 157 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 161 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 162 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 163 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 164 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 165 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 166 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 167 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 168 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 169 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 170 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 171 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 140 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 141 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 142 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 175 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 176 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 179 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 180 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 184 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 185 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 186 "data/maps/SunshineMeadow/scripts.pory"
	release
# 187 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 188 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 189 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 190 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 192 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 193 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 194 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 195 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 196 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 197 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 198 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 199 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 207 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 211 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 212 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 213 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 214 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 215 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 216 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 217 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 218 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 219 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 220 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 221 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 230 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 236 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 237 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 238 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 239 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 240 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 241 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 242 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 243 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 244 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 245 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 246 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 247 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 201 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 222 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 250 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 251 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 251 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 251 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 253 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 254 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 257 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 258 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 258 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 260 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 261 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 261 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 264 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 265 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 267 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 268 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 268 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 268 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 269 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 272 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 273 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 274 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 275 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 281 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated, SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel, SunshineMeadow_Eventscript_MitsuruFirstBattleResult, 3
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 276 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 277 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 278 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel::
# 286 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0
# 287 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 288 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 292 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 296 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 305 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 306 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 307 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 308 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 309 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 310 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 311 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 312 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 313 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 314 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 316 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 293 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 294 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 298 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 301 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 302 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 296 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 292 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 319 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 320 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 357 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 358 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 359 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 360 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 361 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 362 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 363 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 364 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 365 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 366 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 367 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 368 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 369 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 370 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 372 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 373 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 374 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 375 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 376 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 377 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 378 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 379 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 380 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 381 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 382 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 385 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 386 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 387 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 388 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 390 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 391 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 391 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 395 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 395 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 399 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 400 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 401 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 402 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 403 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 405 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 406 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 407 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 408 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 409 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 410 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 411 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 412 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 413 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 414 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 415 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 418 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 419 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 420 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 421 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 422 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 426 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 430 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 427 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 435 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 436 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 438 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 439 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 440 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 441 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 442 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 443 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 444 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 453 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 454 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 455 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 458 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 459 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 460 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 461 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 462 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 463 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 464 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 465 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 466 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 467 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 471 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 475 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 476 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 476 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 477 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 480 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 481 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 481 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 482 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 485 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 486 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 486 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 486 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 487 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 487 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 488 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 491 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 492 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 492 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 492 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 494 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 497 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 498 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 498 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 499 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 499 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 499 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 500 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 501 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 504 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 505 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 505 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 505 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 506 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 507 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 509 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 510 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 510 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 511 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 513 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 514 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 514 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 518 "data/maps/SunshineMeadow/scripts.pory"
	fadenewbgm MUS_CREDITS
# 519 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 520 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 523 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 524 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 525 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 526 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 527 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 531 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 532 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 533 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 534 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 535 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MeadowSign::
# 540 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 541 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_DirectionSign::
# 545 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 546 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 550 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 551 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 552 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 553 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 554 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 555 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 556 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 557 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 562 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 563 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 568 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 569 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_JumpOverFence::
# 574 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 575 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 616 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 576 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 583 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 584 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 585 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 586 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 587 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 588 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 589 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_9
# 601 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 577 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 579 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 617 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 619 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_9:
# 591 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 592 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 593 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 594 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 595 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 596 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 597 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 598 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_10:
# 603 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 604 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 605 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 606 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 607 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 608 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 609 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 610 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 626 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 627 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 628 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 629 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 630 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 632 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 633 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 634 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 635 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 636 "data/maps/SunshineMeadow/scripts.pory"
	callnative Script_CalculateTime
# 637 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 640 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 641 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 642 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 643 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 644 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 645 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 646 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 649 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 650 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 651 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 652 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 653 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 654 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 658 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 659 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 661 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 662 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 12
# 663 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 668 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 669 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 671 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 672 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave::
# 677 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0
# 678 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 679 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 680 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 681 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 682 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 683 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0
# 685 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 686 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 687 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1
# 688 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2
# 689 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 690 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 691 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1
# 693 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 694 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 695 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 696 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 697 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3
# 698 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4
# 699 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 700 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 701 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 1
# 702 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 2
# 703 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 3
# 704 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 705 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 706 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 707 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 708 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 18
# 709 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 710 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger::
# 715 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 716 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0, MSGBOX_YESNO
# 717 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1
# 724 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 725 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4
# 734 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 31
# 735 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 736 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 9, 11
# 737 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1:
# 718 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 719 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 720 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4:
# 726 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1
# 727 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 728 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 729 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 730 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruOnFrame31::
# 743 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle::
# 747 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 748 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 749 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_2
# 750 "data/maps/SunshineMeadow/scripts.pory"
	addobject 5
# 751 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 752 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 753 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 754 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0
# 755 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 756 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0
# 759 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 760 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 761 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 762 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1
# 763 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2
# 764 "data/maps/SunshineMeadow/scripts.pory"
	delay 4
# 765 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3
# 766 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4
# 767 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 768 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 769 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 770 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 771 "data/maps/SunshineMeadow/scripts.pory"
	release
# 772 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 773 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansDownToShinjiroMitsuruFirstFight
# 774 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 775 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 776 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 777 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 778 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 779 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 780 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 781 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 782 "data/maps/SunshineMeadow/scripts.pory"
	delay 10
# 783 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 786 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 787 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 788 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansBackUpToArenaMitsuruFirstFight
# 789 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 790 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 791 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 792 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 793 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 794 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 795 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 796 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
# 801 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 802 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 803 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 804 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 805 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 806 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle::
# 810 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 811 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 813 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_AKIHIKO_SUNSHINE_MEADOW, AkihikoFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel, SunshineMeadow_Eventscript_AkihikoFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel::
# 816 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 817 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 818 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_AkihikoFirstBattleResult::
# 826 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 827 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2
# 831 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 832 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInAkihikoFirstBattle
SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1:
# 834 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 835 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostAkihikoFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2:
# 828 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInAkihikoFirstBattle
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1


SunshineMeadow_Eventscript_PostAkihikoFirstBattle::
# 851 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 852 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0
# 853 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 854 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 855 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 856 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 857 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 858 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 859 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1
# 860 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 861 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 862 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 864 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 865 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2
# 866 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruGoesBackToStartBattle
# 867 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 868 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 869 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkihikoGetsOutOfBattleSpace
# 870 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 871 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 872 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 873 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 874 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0
# 876 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 877 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 878 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle::
# 882 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_SHINJIRO_ROUTE_2, ShinjiroMFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel::
# 886 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 887 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 888 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ShinjiroFirstBattleResult::
# 896 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 00
# 897 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 898 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2
# 902 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 903 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5
# 913 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1:
# 916 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 917 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 918 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 919 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0
# 920 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1
# 921 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, facedown
# 922 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 923 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2
# 924 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 925 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 934 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 935 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 936 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 939 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 940 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 32
# 941 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 942 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 943 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 944 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 945 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	end

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2:
# 899 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5:
# 904 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_WHITE
# 905 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 30
# 906 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 907 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 908 "data/maps/SunshineMeadow/scripts.pory"
	special SetCB2WhiteOut
# 909 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1


SunshineMeadow_Eventscript_SchoolGirl::
# 950 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 951 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 952 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_SchoolGirl_Text_0
# 953 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_SchoolGirl_Text_1
# 955 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_LittleBoy::
# 960 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 961 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 962 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_LittleBoy_Text_0
# 963 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LittleBoy_Text_1
# 964 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Gothita::
# 969 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_GOTHITA
# 970 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Poochyena::
# 975 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_POOCHYENA
# 976 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 591 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 591 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 591 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 603 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 603 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 603 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 627 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 627 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 627 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 633 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 633 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 633 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 633 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 633 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 650 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 650 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 650 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 650 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 650 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 650 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

# 677 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0:
# 677 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 677 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 687 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1:
# 687 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 687 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 688 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2:
# 688 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 688 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 688 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 697 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3:
# 697 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 697 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 697 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
	step_end

# 698 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4:
# 698 "data/maps/SunshineMeadow/scripts.pory"
	enter_pokeball
	step_end

# 754 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0:
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 754 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 754 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 754 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 762 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1:
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 762 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 763 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2:
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 763 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 765 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3:
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 765 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 765 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 766 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4:
# 766 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 766 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 766 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 766 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 766 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 852 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0:
# 852 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 852 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 852 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 852 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 859 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1:
# 859 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 859 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 859 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 865 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2:
# 865 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 865 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

# 919 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0:
# 919 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 919 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 919 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 919 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 920 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1:
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 920 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 923 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2:
# 923 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 923 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 121 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 124 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 136 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 140 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 151 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 166 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 201 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 207 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 222 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 230 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0:
# 286 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 366 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 370 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 382 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 403 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 415 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 436 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 444 "data/maps/SunshineMeadow/scripts.pory"
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
# 455 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 520 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 527 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 540 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 545 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 562 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 568 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 577 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 584 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 617 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 630 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 637 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}It's already\n"
	.string "{STR_VAR_2}:{STR_VAR_3}...\p"
	.string "Not very ideal to tackle a mountain\n"
	.string "cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 646 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 659 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 669 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 683 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 691 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0:
# 716 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1:
# 726 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR 2}You don't have at least 3 Pokémon for\n"
	.string "the battle.$"

SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0:
# 756 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}You bet I am!\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0:
# 816 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's pick 3 Pokémon to fight.)$"

SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0:
# 874 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0:
# 899 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1:
# 913 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Well fought. Looks like I still have much\n"
	.string "to learn.$"

SunshineMeadow_Eventscript_SchoolGirl_Text_0:
# 952 "data/maps/SunshineMeadow/scripts.pory"
	.string "Fuwako$"

SunshineMeadow_Eventscript_SchoolGirl_Text_1:
# 953 "data/maps/SunshineMeadow/scripts.pory"
	.string "The air here is pretty cool in the\n"
	.string "evening, right?\p"
	.string "I and my brother's Pokémon enjoy the\n"
	.string "scenery here too.$"

SunshineMeadow_Eventscript_LittleBoy_Text_0:
# 962 "data/maps/SunshineMeadow/scripts.pory"
	.string "Kenta$"

SunshineMeadow_Eventscript_LittleBoy_Text_1:
# 963 "data/maps/SunshineMeadow/scripts.pory"
	.string "Psychic types are weak to Dark types,\n"
	.string "but my sister's Gothita gets along well\l"
	.string "with my Poochyena.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 323 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 331 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 337 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 344 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 352 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"

AkihikoFirstBattleDefeated::
# 821 "data/maps/SunshineMeadow/scripts.pory"
	.string "You... are so strong.$"

SunshineMeadow_Eventscript_WonInAkihikoFirstBattle::
# 838 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{CREATE MUGSHOT_M EMOTE_CONFIDENT}(He's indeed a very clever trainer. Good\n"
	.string "reflex and precision, however, a little\l"
	.string "too reckless.)$"

SunshineMeadow_Eventscript_LostInAkihikoFirstBattle::
# 844 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It was so close, though. I only managed\n"
	.string "to win by sheer luck.$"

ShinjiroMFirstBattleDefeated::
# 891 "data/maps/SunshineMeadow/scripts.pory"
	.string "Damn, you're tough.$"
