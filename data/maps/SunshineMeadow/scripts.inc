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
	setflag FLAG_HIDE_TALK_BUTTON
# 91 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 7
# 92 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MitsuruOnWarp8::
# 96 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineMeadow_Eventscript_MitsuruOnFrame8::
# 100 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 101 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruAproachTheFence
	return


SunshineMeadow_Eventscript_MitsuruOnFrame17::
# 105 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 109 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 110 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 112 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 113 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
# 118 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
	end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 114 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 115 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 124 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 125 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 151 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 126 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 128 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 129 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 136 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 137 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 138 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 139 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 140 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 141 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 142 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 143 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 144 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 145 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 146 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 147 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 152 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 153 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 154 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 155 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 156 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 157 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 158 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 159 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 160 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 161 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 162 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 163 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 130 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 131 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 132 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 168 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 169 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 172 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 173 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 177 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 178 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 179 "data/maps/SunshineMeadow/scripts.pory"
	release
# 180 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 181 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 182 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 183 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 184 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 185 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 186 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 187 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 188 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 189 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 190 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 191 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 192 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 200 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 204 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 205 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 206 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 207 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 208 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 209 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 210 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 211 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 212 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 213 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 214 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 223 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 229 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 230 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 231 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 232 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 233 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 234 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 235 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 236 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 237 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 238 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 239 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 240 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 194 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 215 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 244 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 245 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 245 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 245 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 247 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 248 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 249 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 249 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 249 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 251 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 252 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 254 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 255 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 257 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 258 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 259 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 261 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 262 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 262 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 262 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 263 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 266 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 267 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 268 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 269 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 270 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 276 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 277 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 278 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 279 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 280 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 281 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 282 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 283 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 284 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 285 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 286 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 287 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 271 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 272 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 273 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 292 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
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
	end

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 318 "data/maps/SunshineMeadow/scripts.pory"
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


# 321 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 322 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 359 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 360 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 361 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 362 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 363 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 364 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 365 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 366 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 367 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 368 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 369 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 370 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 371 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 372 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 374 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 375 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 376 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 377 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 378 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 379 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 380 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 381 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 382 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 383 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 384 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 387 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 388 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 389 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 390 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
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
	clearflag FLAG_HIDE_TALK_BUTTON
# 463 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 464 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 465 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 466 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 20
# 467 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
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
	playbgm MUS_CREDITS, TRUE
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
	warpsilent MAP_BLANK_MAP, 0, 0
	end


SunshineMeadow_Eventscript_MeadowSign::
# 540 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 541 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DirectionSign::
# 546 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 547 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


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


SunshineMeadow_Eventscript_DoSparkleFieldEffect::
# 576 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 577 "data/maps/SunshineMeadow/scripts.pory"
	dofieldeffectsparkle 12, 9, 2
# 578 "data/maps/SunshineMeadow/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 579 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


SunshineMeadow_Eventscript_JumpOverFence::
# 583 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 584 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 620 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 585 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 592 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 593 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 594 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 595 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 596 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 597 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_9
# 607 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 586 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 588 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 621 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 623 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_9:
# 599 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 600 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 601 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 602 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 603 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 604 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 605 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
	return

SunshineMeadow_Eventscript_JumpOverFence_10:
# 609 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 610 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 611 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 612 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 613 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 614 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 615 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
	return


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 630 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 631 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 632 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 633 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 634 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 636 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 637 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 638 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 639 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 640 "data/maps/SunshineMeadow/scripts.pory"
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
	return


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 669 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 670 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 672 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 673 "data/maps/SunshineMeadow/scripts.pory"
	release
	return


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
	clearflag FLAG_HIDE_TALK_BUTTON
# 706 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 707 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 708 "data/maps/SunshineMeadow/scripts.pory"
	fadedefaultbgm
# 709 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 18
# 710 "data/maps/SunshineMeadow/scripts.pory"
	special ShowMapNamePopup
# 711 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 599 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 599 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 599 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 609 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 609 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 609 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 631 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 631 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 631 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 637 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 637 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 637 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 637 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 637 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 637 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 637 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 637 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 637 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 637 "data/maps/SunshineMeadow/scripts.pory"
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

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 110 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 114 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 126 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 130 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 141 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 157 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 194 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 200 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 215 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 223 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 271 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 368 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 372 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 384 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 405 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 417 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 437 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 445 "data/maps/SunshineMeadow/scripts.pory"
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
# 456 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 520 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 527 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 540 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 546 "data/maps/SunshineMeadow/scripts.pory"
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
# 586 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 592 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 621 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 634 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 640 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already 0:43 AM... not very ideal to\n"
	.string "tackle a mountain cave.\p"
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
# 670 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_0:
# 683 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}.......\p"
	.string "I failed. They got away with all the\n"
	.string "evidences.$"

SunshineMeadow_Eventscript_MitsuruLookingOverCollapsedCave_Text_1:
# 691 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}Let's regroup and plan our next move.\p"
	.string "We also need to visit the Pokémon\n"
	.string "Center in Sunshine Town to heal the\l"
	.string "team.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 325 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 333 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 339 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 346 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 354 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
