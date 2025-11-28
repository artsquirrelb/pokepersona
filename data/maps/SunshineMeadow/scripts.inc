SunshineMeadow_MapScripts::
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_LOAD
# 24 "data/maps/SunshineMeadow/scripts.pory"
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
# 25 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 35
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 40 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 44 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 47 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_gt SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 50 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 17
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
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
	compare VAR_MITSURUS_INTRO_STATE, 17
	goto_if_ne SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 45 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 44 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 8
	goto_if_le SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 48 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 12, 14, 8
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
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
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp34::
# 64 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 65 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 69 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 70 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 71 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 72 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp37::
# 76 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 77 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 78 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 79 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, faceright
# 80 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceup
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 84 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruOnFrame6::
# 88 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 89 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 90 "data/maps/SunshineMeadow/scripts.pory"
	call Eventscript_CutsceneStarts
# 91 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 7
# 92 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 93 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruOnWarp8::
# 97 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineMeadow_Eventscript_MitsuruOnFrame8::
# 101 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 102 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruAproachTheFence
	return


SunshineMeadow_Eventscript_MitsuruOnFrame17::
# 106 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 110 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 111 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 112 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 114 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 115 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1
# 121 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
# 116 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 117 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 126 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 127 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 152 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 128 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 130 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 131 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 138 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 139 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 140 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 141 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 142 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 143 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 144 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 145 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 146 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 147 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 148 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 149 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 153 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 154 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 155 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 156 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 157 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 158 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 159 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 160 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 161 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 162 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 163 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 132 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 133 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 134 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 167 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 168 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 171 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 172 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 176 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 177 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 178 "data/maps/SunshineMeadow/scripts.pory"
	release
# 179 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 180 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 181 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 182 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 183 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 184 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 185 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 186 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 187 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 188 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 189 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 190 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 191 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 199 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 203 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 204 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 205 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 206 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 207 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 208 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 209 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 210 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 211 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 212 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 213 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 222 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 228 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 229 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 230 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 231 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 232 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 233 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 234 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 235 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 236 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 237 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 238 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 239 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 193 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 214 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 242 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 243 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 243 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 243 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 245 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 246 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 247 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 247 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 247 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 249 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 250 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 250 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 252 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 253 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 253 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 256 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 257 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 259 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 260 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 260 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 260 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 261 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 264 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 265 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 266 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 267 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 268 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 274 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 275 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 276 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 277 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 278 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 279 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 280 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 281 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 282 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 283 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 284 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 285 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 269 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 270 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 271 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 290 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 291 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 295 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 299 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 304 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 305 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 306 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 307 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 308 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 309 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 310 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 311 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 312 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 313 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 315 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 292 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 293 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 296 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 297 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 300 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 301 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 299 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 295 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 291 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 318 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 319 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 356 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 357 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 358 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 359 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 360 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 361 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 362 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 363 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 364 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 365 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 366 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 367 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 368 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 369 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 371 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 372 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 373 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 374 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 375 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 376 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 377 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 378 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 379 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 380 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 381 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 384 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 385 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 386 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 387 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 389 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 390 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 390 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 393 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 394 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 394 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 398 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 399 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 400 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 401 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 402 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 404 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 405 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 406 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 407 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 408 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 409 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 410 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 411 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 412 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 413 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 414 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 417 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 418 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 419 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 420 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 424 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 428 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 425 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 433 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 434 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 436 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 437 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 438 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 439 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 440 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 441 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 442 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 451 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 452 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 453 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 456 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 457 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 458 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 459 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 460 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 461 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 462 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 463 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 50
# 464 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
# 465 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 469 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 470 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 470 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 470 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 470 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 473 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 474 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 474 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 475 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 478 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 480 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 483 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 485 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 485 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 486 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 489 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 490 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 491 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 491 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 491 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 492 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 495 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 496 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 497 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 497 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 497 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 498 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 499 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 502 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 503 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 503 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 503 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 504 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 505 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 507 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 508 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 508 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 509 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 511 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 512 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 512 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 516 "data/maps/SunshineMeadow/scripts.pory"
	playbgm MUS_CREDITS, TRUE
# 517 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 518 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 521 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 522 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 523 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 524 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 525 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 529 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 530 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 531 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
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

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 112 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 116 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 128 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 132 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 143 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 158 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 193 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 199 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 214 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 222 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 269 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 365 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 369 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 381 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 402 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 414 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 434 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 442 "data/maps/SunshineMeadow/scripts.pory"
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
# 453 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 518 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 525 "data/maps/SunshineMeadow/scripts.pory"
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

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 322 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 330 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 336 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 343 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 351 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
