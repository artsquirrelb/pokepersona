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
	delay 30
# 122 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 123 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 124 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4
# 130 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 118 "data/maps/SunshineMeadow/scripts.pory"
	call EventScript_ShowHelpChoice
# 119 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HELP_MAKE_CHOICE
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_4:
# 125 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 126 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 135 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 136 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 161 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 137 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 139 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 140 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 147 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 148 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 149 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 150 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 151 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 152 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 153 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 154 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 155 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 156 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 157 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 158 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 162 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 163 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 164 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 165 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 166 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 167 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 168 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 169 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 170 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 171 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 172 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 141 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 142 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 143 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 176 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 177 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 180 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 181 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 185 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 186 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 187 "data/maps/SunshineMeadow/scripts.pory"
	release
# 188 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 189 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 190 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 191 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 192 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 193 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 194 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 195 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 196 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 197 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 198 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 199 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 200 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 208 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 212 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 213 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 214 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 215 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 216 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 217 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 218 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 219 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 220 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 221 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 222 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 231 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 237 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 238 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 239 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 240 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 241 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 242 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 243 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 244 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 245 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 246 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 247 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 248 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 202 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 223 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 251 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 254 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 255 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 256 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 256 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 256 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 258 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 259 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 259 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 261 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 262 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 262 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 265 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 266 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 268 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 269 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 269 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 269 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 270 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 273 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 274 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 275 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 276 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 282 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated, SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel, SunshineMeadow_Eventscript_MitsuruFirstBattleResult, 3
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 277 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 278 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 279 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel::
# 287 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0
# 288 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 289 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 293 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 301 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 306 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 307 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 308 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 309 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 310 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 311 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 312 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 313 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 314 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 315 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 317 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 294 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 295 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 298 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 299 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 302 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 303 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 301 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 297 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 293 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 320 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 321 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 358 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 359 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 360 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 361 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 362 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 363 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 364 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 365 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 366 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 367 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 368 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 369 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 370 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 371 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 373 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 374 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 375 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 376 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 377 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 378 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 379 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 380 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 381 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 382 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 383 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 386 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 387 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 388 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 389 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 391 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 392 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 392 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 395 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 396 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 396 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 400 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 401 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 402 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 403 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 404 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 406 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 407 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 408 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 409 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 410 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 411 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 412 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 413 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 414 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 415 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 416 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 419 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 420 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 421 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 422 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 423 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 427 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 431 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 428 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 436 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 437 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 439 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 440 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 441 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 442 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 443 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 444 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 445 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 454 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 455 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 456 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 459 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 460 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 461 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 462 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 463 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 464 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 465 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 466 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 467 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 468 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 472 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 476 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 477 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 477 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 478 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 481 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 482 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 482 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 483 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 486 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 487 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 487 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 487 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 488 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 488 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 489 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 492 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 493 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 494 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 494 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 494 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 495 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 498 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 499 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 499 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 500 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 500 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 500 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 501 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 502 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 505 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 506 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 506 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 506 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 507 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 508 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 510 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 511 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 511 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 512 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 514 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 515 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 515 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 519 "data/maps/SunshineMeadow/scripts.pory"
	fadenewbgm MUS_CREDITS
# 520 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 521 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 524 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 525 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 526 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 527 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 528 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 532 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 533 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 534 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 535 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 536 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MeadowSign::
# 541 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 542 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_DirectionSign::
# 546 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 547 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 551 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 552 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 553 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 554 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 555 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 556 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 557 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 558 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 563 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 564 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 569 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 570 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_JumpOverFence::
# 575 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 576 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 617 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 577 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 584 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 585 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 586 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 587 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 588 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 589 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 590 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_9
# 602 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 578 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 580 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 618 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 620 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_9:
# 592 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 593 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 594 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 595 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 596 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 597 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 598 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 599 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_JumpOverFence_10:
# 604 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 605 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 606 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 607 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 608 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 609 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 610 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
# 611 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 627 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 628 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 629 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 630 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 631 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 633 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 634 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 635 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 636 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 637 "data/maps/SunshineMeadow/scripts.pory"
	callnative Script_CalculateTime
# 638 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 641 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 642 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 643 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 644 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 645 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 646 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 647 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 650 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 651 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 652 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 653 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 654 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 655 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 659 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 660 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 662 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 663 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 12
# 664 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 669 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 670 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 672 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 673 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave::
# 678 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0
# 679 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 680 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 681 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 682 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 683 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 684 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0
# 686 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 687 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 688 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1
# 689 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2
# 690 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 691 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 692 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1
# 694 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 695 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 696 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 697 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 698 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3
# 699 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4
# 700 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 701 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 702 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 1
# 703 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 2
# 704 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 3
# 705 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 706 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 707 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 708 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 709 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 18
# 710 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 711 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger::
# 716 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 717 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0, MSGBOX_YESNO
# 718 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1
# 725 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 726 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4
# 735 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 31
# 736 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 737 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_SUNSHINE_MEADOW, 9, 11
# 738 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_1:
# 719 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 720 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 721 "data/maps/SunshineMeadow/scripts.pory"
	release
	end

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_4:
# 727 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1
# 728 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 729 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 730 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 731 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_MitsuruOnFrame31::
# 744 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle::
# 748 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 749 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 750 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_2
# 751 "data/maps/SunshineMeadow/scripts.pory"
	addobject 5
# 752 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 753 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, invisible
# 754 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 755 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0
# 756 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 757 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0
# 760 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 761 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 762 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 763 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1
# 764 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2
# 765 "data/maps/SunshineMeadow/scripts.pory"
	delay 4
# 766 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3
# 767 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4
# 768 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 769 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 770 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 771 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 772 "data/maps/SunshineMeadow/scripts.pory"
	release
# 773 "data/maps/SunshineMeadow/scripts.pory"
	delay 40
# 774 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansDownToShinjiroMitsuruFirstFight
# 775 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 776 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 777 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 778 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 779 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 780 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 781 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkiMitsuNoticeShinjiro
# 782 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 783 "data/maps/SunshineMeadow/scripts.pory"
	delay 10
# 784 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
# 787 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 788 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 789 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPansBackUpToArenaMitsuruFirstFight
# 790 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 791 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 792 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 793 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 794 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 795 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 796 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 797 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
# 802 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 803 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 804 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 805 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 806 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 807 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle::
# 811 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 812 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 814 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_AKIHIKO_SUNSHINE_MEADOW, AkihikoFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel, SunshineMeadow_Eventscript_AkihikoFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel::
# 817 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 818 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 819 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle
	return


SunshineMeadow_Eventscript_AkihikoFirstBattleResult::
# 827 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 828 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2
# 832 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 833 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInAkihikoFirstBattle
SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1:
# 835 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 836 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostAkihikoFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoFirstBattleResult_2:
# 829 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInAkihikoFirstBattle
	goto SunshineMeadow_Eventscript_AkihikoFirstBattleResult_1


SunshineMeadow_Eventscript_PostAkihikoFirstBattle::
# 852 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 853 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0
# 854 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 855 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 856 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 857 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 858 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 859 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 860 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1
# 861 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 862 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 863 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 865 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 866 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2
# 867 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruGoesBackToStartBattle
# 868 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 869 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 870 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkihikoGetsOutOfBattleSpace
# 871 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 872 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 873 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 874 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 875 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0
# 877 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 878 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 879 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle::
# 883 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_selectmons TRAINER_SHINJIRO_ROUTE_2, ShinjiroMFirstBattleDefeated, SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult, 3
	return


SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle_Cancel::
# 887 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0
# 888 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 889 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForShinjiroFirstBattle
	return


SunshineMeadow_Eventscript_ShinjiroFirstBattleResult::
# 897 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 00
# 898 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 899 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2
# 903 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_TEMP_0, 1
# 904 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5
# 914 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1:
# 917 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 918 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 919 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 920 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0
# 921 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1
# 922 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 3, facedown
# 923 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 924 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2
# 925 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 926 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 935 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 936 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 937 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 940 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 941 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 32
# 942 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 943 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 944 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 945 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 946 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	end

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_2:
# 900 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_5:
# 905 "data/maps/SunshineMeadow/scripts.pory"
	fadescreen FADE_TO_WHITE
# 906 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 30
# 907 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 908 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 909 "data/maps/SunshineMeadow/scripts.pory"
	special SetCB2WhiteOut
# 910 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	goto SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_1


SunshineMeadow_Eventscript_SchoolGirl::
# 951 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 952 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 953 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_SchoolGirl_Text_0
# 954 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_SchoolGirl_Text_1
# 956 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_LittleBoy::
# 961 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 962 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 963 "data/maps/SunshineMeadow/scripts.pory"
	setspeaker SunshineMeadow_Eventscript_LittleBoy_Text_0
# 964 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LittleBoy_Text_1
# 965 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Gothita::
# 970 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_GOTHITA
# 971 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_Poochyena::
# 976 "data/maps/SunshineMeadow/scripts.pory"
	moncryscript SPECIES_POOCHYENA
# 977 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 592 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 592 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 592 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 604 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 604 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 604 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 628 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 628 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 628 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 634 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 634 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 634 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 634 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 634 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 651 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 651 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 651 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 651 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 651 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 651 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

# 678 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_0:
# 678 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 678 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 688 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_1:
# 688 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 688 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 689 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_2:
# 689 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 689 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 689 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 698 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_3:
# 698 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 698 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 698 "data/maps/SunshineMeadow/scripts.pory"
	set_invisible
	step_end

# 699 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Movement_4:
# 699 "data/maps/SunshineMeadow/scripts.pory"
	enter_pokeball
	step_end

# 755 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_0:
# 755 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 755 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 755 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 755 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 763 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_1:
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 763 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 763 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 764 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_2:
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 764 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 764 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 766 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_3:
# 766 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 766 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 766 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 766 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 767 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Movement_4:
# 767 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 767 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 767 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 767 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 767 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 853 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_0:
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 853 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 860 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_1:
# 860 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 860 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 860 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 866 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Movement_2:
# 866 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 866 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

# 920 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_0:
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 920 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 921 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_1:
# 921 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 921 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 921 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 924 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Movement_2:
# 924 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 924 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 122 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 125 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 137 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 141 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 152 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 167 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 202 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 208 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 223 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 231 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_MitsuruFirstBattleSelectCancel_Text_0:
# 287 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 367 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 371 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 383 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 404 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 416 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 437 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 445 "data/maps/SunshineMeadow/scripts.pory"
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
# 456 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 521 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 528 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 541 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 546 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 563 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 569 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 578 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 585 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 618 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 631 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 638 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}It's already\n"
	.string "{STR_VAR_2}:{STR_VAR_3}...\p"
	.string "Not very ideal to tackle a mountain\n"
	.string "cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 647 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 660 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 670 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 684 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 692 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_0:
# 717 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SunshineMeadow_Eventscript_MitsuruPreFirstBattleWithAkihiko_Trigger_Text_1:
# 727 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR 2}You don't have at least 3 Pokémon for\n"
	.string "the battle.$"

SunshineMeadow_Eventscript_MitsuruPreparingForAkiMitsuFirstBattle_Text_0:
# 757 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}You bet I am!\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_ChoosingPartyForAkihikoFirstBattle_Cancel_Text_0:
# 817 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Let's pick 3 Pokémon to fight.)$"

SunshineMeadow_Eventscript_PostAkihikoFirstBattle_Text_0:
# 875 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Whenever you are.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_0:
# 900 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_ShinjiroFirstBattleResult_Text_1:
# 914 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Well fought. Looks like I still have much\n"
	.string "to learn.$"

SunshineMeadow_Eventscript_SchoolGirl_Text_0:
# 953 "data/maps/SunshineMeadow/scripts.pory"
	.string "Fuwako$"

SunshineMeadow_Eventscript_SchoolGirl_Text_1:
# 954 "data/maps/SunshineMeadow/scripts.pory"
	.string "The air here is pretty cool in the\n"
	.string "evening, right?\p"
	.string "I and my brother's Pokémon enjoy the\n"
	.string "scenery here too.$"

SunshineMeadow_Eventscript_LittleBoy_Text_0:
# 963 "data/maps/SunshineMeadow/scripts.pory"
	.string "Kenta$"

SunshineMeadow_Eventscript_LittleBoy_Text_1:
# 964 "data/maps/SunshineMeadow/scripts.pory"
	.string "Psychic types are weak to Dark types,\n"
	.string "but my sister's Gothita gets along well\l"
	.string "with my Poochyena.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 324 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 332 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 338 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 345 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 353 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"

AkihikoFirstBattleDefeated::
# 822 "data/maps/SunshineMeadow/scripts.pory"
	.string "You... are so strong.$"

SunshineMeadow_Eventscript_WonInAkihikoFirstBattle::
# 839 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{CREATE MUGSHOT_M EMOTE_CONFIDENT}(He's indeed a very clever trainer. Good\n"
	.string "reflex and precision, however, a little\l"
	.string "too reckless.)$"

SunshineMeadow_Eventscript_LostInAkihikoFirstBattle::
# 845 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}It was so close, though. I only managed\n"
	.string "to win by sheer luck.$"

ShinjiroMFirstBattleDefeated::
# 892 "data/maps/SunshineMeadow/scripts.pory"
	.string "Damn, you're tough.$"
