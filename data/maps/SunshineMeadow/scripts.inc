SunshineMeadow_MapScripts::
# 15 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/SunshineMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 35
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_eq SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 31 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 35 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_ge SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 21 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 22 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 25 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 1, 12, 11
# 26 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 2, 12, 12
# 27 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 3, 10, 10
# 28 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 4, 7, 11
# 29 "data/maps/SunshineMeadow/scripts.pory"
	setobjectxyperm 5, 9, 14
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 32 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 36 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 35 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 8
	goto_if_le SunshineMeadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 34, SunshineMeadow_Eventscript_AkihikoOnWarp34
# 4 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnWarp35
# 5 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnWarp37
# 7 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, SunshineMeadow_Eventscript_MitsuruOnWarp8
	.2byte 0

SunshineMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 35, SunshineMeadow_Eventscript_AkihikoOnFrame35
# 11 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 37, SunshineMeadow_Eventscript_AkihikoOnFrame37
# 12 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 6, SunshineMeadow_Eventscript_MitsuruOnFrame6
# 13 "data/maps/SunshineMeadow/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, SunshineMeadow_Eventscript_MitsuruOnFrame8
	.2byte 0


SunshineMeadow_Eventscript_AkihikoOnWarp34::
# 42 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
# 43 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp35::
# 47 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 48 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 49 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 50 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, invisible
	return


SunshineMeadow_Eventscript_AkihikoOnWarp37::
# 54 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 55 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 56 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, faceleft
# 57 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, faceright
# 58 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceup
	return


SunshineMeadow_Eventscript_AkihikoOnFrame35::
# 62 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruOnFrame6::
# 66 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 67 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 68 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 69 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 7
# 70 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


SunshineMeadow_Eventscript_MitsuruOnWarp8::
# 74 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineMeadow_Eventscript_MitsuruOnFrame8::
# 78 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 79 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruAproachTheFence
	return


SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk::
# 83 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 84 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0, MSGBOX_YESNO
# 86 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 87 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2
# 92 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle
SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1:
	end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_2:
# 88 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1
# 89 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_1


SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle::
# 98 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 99 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1
# 125 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2
	return

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_1:
# 100 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0, MSGBOX_YESNO
# 102 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 103 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5
# 110 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 111 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown2
# 112 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 113 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 114 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 115 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2
# 116 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 117 "data/maps/SunshineMeadow/scripts.pory"
	subvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 118 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 119 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 120 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 121 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_2:
# 126 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 127 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointup2
# 128 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 129 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 130 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 131 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3
# 132 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 133 "data/maps/SunshineMeadow/scripts.pory"
	addvar VAR_MITSURU_RELATIONSHIP_POINTS, 3
# 134 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 0
# 135 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 136 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 137 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_5:
# 104 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1
# 105 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 106 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


# 142 "data/maps/SunshineMeadow/scripts.pory"
pointdown2:
# 143 "data/maps/SunshineMeadow/scripts.pory"
	point_down_2
	step_end

# 146 "data/maps/SunshineMeadow/scripts.pory"
pointup2:
# 147 "data/maps/SunshineMeadow/scripts.pory"
	point_up_2
	step_end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle::
# 151 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 152 "data/maps/SunshineMeadow/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 153 "data/maps/SunshineMeadow/scripts.pory"
	release
# 154 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToTheArenaMitsuruFirstBattle
# 155 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 156 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 157 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_EXIT
# 158 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 159 "data/maps/SunshineMeadow/scripts.pory"
	addobject 4
# 160 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroComesInTime
# 161 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownToShinjiroMitsuruFirstFight
# 162 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, AkiMitsuNoticeShinjiro
# 163 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 164 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, AkiMitsuNoticeShinjiro
# 165 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 166 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2
# 174 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1:
# 178 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 179 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, faceright
# 180 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansBackUpToArenaMitsuruFirstFight
# 181 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 182 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 183 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement LOCALID_PLAYER
# 184 "data/maps/SunshineMeadow/scripts.pory"
	delay 60
# 185 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 186 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 187 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 188 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 97
	goto_if_eq SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6
# 197 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3
SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5:
# 203 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 204 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 205 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 206 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 207 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, InviPlayerTakingSpritesPlace
# 208 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 209 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, visible
# 210 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 5, invisible
# 211 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 212 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 213 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 214 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	end

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_2:
# 168 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_1

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_6:
# 189 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2
	goto SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_5


# 218 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToTheArenaMitsuruFirstBattle:
# 219 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 219 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
# 219 "data/maps/SunshineMeadow/scripts.pory"
	walk_slow_down
	step_end

# 221 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroComesInTime:
# 222 "data/maps/SunshineMeadow/scripts.pory"
	set_visible
# 223 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 223 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
# 223 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_up
	step_end

# 225 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownToShinjiroMitsuruFirstFight:
# 226 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
# 226 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_down
	step_end

# 228 "data/maps/SunshineMeadow/scripts.pory"
CameraPansBackUpToArenaMitsuruFirstFight:
# 229 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 229 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/SunshineMeadow/scripts.pory"
AkiMitsuNoticeShinjiro:
# 232 "data/maps/SunshineMeadow/scripts.pory"
	emote_exclamation_mark
# 233 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 235 "data/maps/SunshineMeadow/scripts.pory"
InviPlayerTakingSpritesPlace:
# 236 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 236 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 236 "data/maps/SunshineMeadow/scripts.pory"
	walk_fast_left
# 237 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle::
# 240 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 241 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 242 "data/maps/SunshineMeadow/scripts.pory"
	special ChooseHalfPartyForBattle
# 243 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
# 244 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1
# 250 "data/maps/SunshineMeadow/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 251 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 252 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 253 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 254 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 255 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 256 "data/maps/SunshineMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MITSURU_SUNSHINE_MEADOW, MitsuruFirstBattleDefeated
# 257 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 18, 30
# 258 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 259 "data/maps/SunshineMeadow/scripts.pory"
	special CallFrontierUtilFunc
# 260 "data/maps/SunshineMeadow/scripts.pory"
	special LoadPlayerParty
# 261 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult
	return

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_1:
# 245 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0
# 246 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 247 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle
	return


SunshineMeadow_Eventscript_MitsuruFirstBattleResult::
# 266 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 267 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10:
# 271 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7:
# 275 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6
SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5:
# 280 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 281 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_M_STAT_DECREASE
# 282 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, pointdown3
# 283 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 284 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 285 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 286 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURU_RELATIONSHIP_POINTS, 0
# 287 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown
# 288 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 289 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver
	end

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1:
# 292 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostMitsuruFirstBattle
	return

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2:
# 268 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp
# 269 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3:
# 272 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown
# 273 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4:
# 276 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp
# 277 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_1

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_6:
# 275 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_4
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_5

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_9:
# 271 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_lt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_3
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_7

SunshineMeadow_Eventscript_MitsuruFirstBattleResult_12:
# 267 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 100
	goto_if_gt SunshineMeadow_Eventscript_MitsuruFirstBattleResult_2
	goto SunshineMeadow_Eventscript_MitsuruFirstBattleResult_10


# 295 "data/maps/SunshineMeadow/scripts.pory"
pointdown3:
# 296 "data/maps/SunshineMeadow/scripts.pory"
	point_down_3
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattle::
# 333 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 334 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 335 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 336 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesLeft2
# 337 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruApproachesToHeal
# 338 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 339 "data/maps/SunshineMeadow/scripts.pory"
	special HealPlayerParty
# 340 "data/maps/SunshineMeadow/scripts.pory"
	playse MUS_HEAL
# 341 "data/maps/SunshineMeadow/scripts.pory"
	waitse
# 342 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0
# 343 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 344 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackAfterHealing
# 345 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 346 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1
# 348 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 349 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesBackToStartBattle
# 350 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraGoesRight2
# 351 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 352 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 353 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 354 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 355 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 356 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 357 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 358 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2
# 361 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 362 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 363 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 364 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


# 366 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesLeft2:
# 367 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 367 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 370 "data/maps/SunshineMeadow/scripts.pory"
CameraGoesRight2:
# 371 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 371 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
	step_end

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver::
# 375 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 376 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 377 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, facedown
# 378 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 379 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0
# 381 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 382 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceleft
# 383 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkinplacedown
# 384 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 385 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 386 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoGetsOutOfBattleSpace
# 387 "data/maps/SunshineMeadow/scripts.pory"
	delay 8
# 388 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesToStartBattle
# 389 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 390 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 391 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1
# 394 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 395 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 396 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 10
# 397 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 36
	return


SunshineMeadow_Eventscript_AkihikoOnFrame37::
# 401 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURU_RELATIONSHIP_POINTS, 0
	goto_if_eq SunshineMeadow_Eventscript_AkihikoOnFrame37_1
# 405 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle
	return

SunshineMeadow_Eventscript_AkihikoOnFrame37_1:
# 402 "data/maps/SunshineMeadow/scripts.pory"
	goto SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver
	return


SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle::
# 410 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 411 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0
# 413 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 414 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 4, ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle
# 415 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle
# 416 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 2, VulpixFollowsMitsuruPostShinjiMitsuFirstBattle
# 417 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, CameraPansDownPostShinjiMitsuFirstBattle
# 418 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 419 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1
# 428 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 429 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 430 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_2
# 433 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 434 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_1
# 435 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 436 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 437 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 438 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 439 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 440 "data/maps/SunshineMeadow/scripts.pory"
	fwdtime 19, 20
# 441 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 10, 13
	end


# 445 "data/maps/SunshineMeadow/scripts.pory"
MitsuruApproachesToHeal:
# 446 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 446 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 446 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 446 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
	step_end

# 449 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackAfterHealing:
# 450 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 450 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 451 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 454 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesBackToStartBattle:
# 455 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 455 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 456 "data/maps/SunshineMeadow/scripts.pory"
	face_left
	step_end

# 459 "data/maps/SunshineMeadow/scripts.pory"
AkihikoGetsOutOfBattleSpace:
# 460 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 460 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 460 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 461 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 461 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 462 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 465 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesToStartBattle:
# 466 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 466 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 466 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 467 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 467 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 467 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 468 "data/maps/SunshineMeadow/scripts.pory"
	face_right
	step_end

# 471 "data/maps/SunshineMeadow/scripts.pory"
ShinjiroGoesBackToPlacePostShinjiMitsuFirstBattle:
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 472 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 473 "data/maps/SunshineMeadow/scripts.pory"
	walk_right
# 474 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 475 "data/maps/SunshineMeadow/scripts.pory"
	face_up
	step_end

# 478 "data/maps/SunshineMeadow/scripts.pory"
MitsuruGoesToTheCenterPostShinjiMitsuFirstBattle:
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 479 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 480 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 481 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 483 "data/maps/SunshineMeadow/scripts.pory"
VulpixFollowsMitsuruPostShinjiMitsuFirstBattle:
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 484 "data/maps/SunshineMeadow/scripts.pory"
	walk_left
# 485 "data/maps/SunshineMeadow/scripts.pory"
	face_down
	step_end

# 487 "data/maps/SunshineMeadow/scripts.pory"
CameraPansDownPostShinjiMitsuFirstBattle:
# 488 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 488 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver::
# 492 "data/maps/SunshineMeadow/scripts.pory"
	playbgm MUS_CREDITS, TRUE
# 493 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 494 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0
# 497 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 498 "data/maps/SunshineMeadow/scripts.pory"
	applymovement 1, faceright
# 499 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 500 "data/maps/SunshineMeadow/scripts.pory"
	delay 30
# 501 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1
# 505 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 506 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 38
# 507 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 508 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


SunshineMeadow_Eventscript_MeadowSign::
# 514 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MeadowSign_Text_0
# 515 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DirectionSign::
# 520 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_DirectionSign_Text_0
# 521 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_OW_Flabebe_White::
# 526 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 527 "data/maps/SunshineMeadow/scripts.pory"
	faceplayer
# 528 "data/maps/SunshineMeadow/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_NORMAL
# 529 "data/maps/SunshineMeadow/scripts.pory"
	waitmoncry
# 530 "data/maps/SunshineMeadow/scripts.pory"
	startoverworldencounter 7
# 531 "data/maps/SunshineMeadow/scripts.pory"
	removeobject 5
# 532 "data/maps/SunshineMeadow/scripts.pory"
	setflag FLAG_TEMP_3
# 533 "data/maps/SunshineMeadow/scripts.pory"
	release
	end


SunshineMeadow_Eventscript_VulpixPreBattle::
# 538 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_VulpixPreBattle_Text_0
# 539 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_InteleonPreBattle::
# 544 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_InteleonPreBattle_Text_0
# 545 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end


SunshineMeadow_Eventscript_DoSparkleFieldEffect::
# 550 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_SHINY
# 551 "data/maps/SunshineMeadow/scripts.pory"
	dofieldeffectsparkle 12, 9, 2
# 552 "data/maps/SunshineMeadow/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 553 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


SunshineMeadow_Eventscript_JumpOverFence::
# 557 "data/maps/SunshineMeadow/scripts.pory"
	checkplayergender
# 558 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_1
# 592 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineMeadow_Eventscript_JumpOverFence_7
	return

SunshineMeadow_Eventscript_JumpOverFence_1:
# 559 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_gt SunshineMeadow_Eventscript_JumpOverFence_4
# 566 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_1
# 567 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 568 "data/maps/SunshineMeadow/scripts.pory"
	hidefollower
# 569 "data/maps/SunshineMeadow/scripts.pory"
	hidefollowernpc
# 570 "data/maps/SunshineMeadow/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 571 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_10
# 579 "data/maps/SunshineMeadow/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SunshineMeadow_Eventscript_JumpOverFence_11
SunshineMeadow_Eventscript_JumpOverFence_9:
# 587 "data/maps/SunshineMeadow/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 588 "data/maps/SunshineMeadow/scripts.pory"
	updatefollowingmon
	return

SunshineMeadow_Eventscript_JumpOverFence_4:
# 560 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_0
# 562 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	end

SunshineMeadow_Eventscript_JumpOverFence_7:
# 593 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_JumpOverFence_Text_2
# 595 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
	return

SunshineMeadow_Eventscript_JumpOverFence_10:
# 573 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_0
# 574 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 575 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 576 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 577 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
	goto SunshineMeadow_Eventscript_JumpOverFence_9

SunshineMeadow_Eventscript_JumpOverFence_11:
# 581 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_JumpOverFence_Movement_1
# 582 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 583 "data/maps/SunshineMeadow/scripts.pory"
	delay 16
# 584 "data/maps/SunshineMeadow/scripts.pory"
	playse SE_LEDGE
# 585 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
	goto SunshineMeadow_Eventscript_JumpOverFence_9


SunshineMeadow_Eventscript_MitsuruAproachTheFence::
# 602 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 603 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0
# 604 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 605 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 606 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0
# 608 "data/maps/SunshineMeadow/scripts.pory"
	special SpawnCameraObject
# 609 "data/maps/SunshineMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1
# 610 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement 0
# 611 "data/maps/SunshineMeadow/scripts.pory"
	special RemoveCameraObject
# 612 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1
# 614 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 615 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 616 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 617 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 618 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 619 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 620 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2
# 623 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 624 "data/maps/SunshineMeadow/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2
# 625 "data/maps/SunshineMeadow/scripts.pory"
	delay 20
# 626 "data/maps/SunshineMeadow/scripts.pory"
	warpsilent MAP_ROUTE2, 16, 13
# 627 "data/maps/SunshineMeadow/scripts.pory"
	waitmovement
# 628 "data/maps/SunshineMeadow/scripts.pory"
	waitstate
	return


SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence::
# 632 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 633 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0
# 635 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 636 "data/maps/SunshineMeadow/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 12
# 637 "data/maps/SunshineMeadow/scripts.pory"
	release
	return


SunshineMeadow_Eventscript_ThundershardsCliffSign::
# 641 "data/maps/SunshineMeadow/scripts.pory"
	lock
# 642 "data/maps/SunshineMeadow/scripts.pory"
	msgbox SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0
# 644 "data/maps/SunshineMeadow/scripts.pory"
	closemessage
# 645 "data/maps/SunshineMeadow/scripts.pory"
	release
	return


# 573 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_0:
# 573 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
# 573 "data/maps/SunshineMeadow/scripts.pory"
	jump_up
	step_end

# 581 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_JumpOverFence_Movement_1:
# 581 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
# 581 "data/maps/SunshineMeadow/scripts.pory"
	jump_down
	step_end

# 603 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_0:
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_left
# 603 "data/maps/SunshineMeadow/scripts.pory"
	player_run_up
	step_end

# 609 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_1:
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_up
# 609 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 609 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 609 "data/maps/SunshineMeadow/scripts.pory"
	delay_16
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
# 609 "data/maps/SunshineMeadow/scripts.pory"
	walk_down
	step_end

# 624 "data/maps/SunshineMeadow/scripts.pory"
SunshineMeadow_Eventscript_MitsuruAproachTheFence_Movement_2:
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_down
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
# 624 "data/maps/SunshineMeadow/scripts.pory"
	player_run_right
	step_end

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_0:
# 84 "data/maps/SunshineMeadow/scripts.pory"
	.string "{COLOR RED}Tips: From this point onward, the\n"
	.string "choices you made thorough the game will\l"
	.string "ultimately affect the story outcome.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}{COLOR DARK_GRAY}You've come. I suppose you're ready for\n"
	.string "our first battle?$"

SunshineMeadow_Eventscript_PreMitsuruFirstBattleTalk_Text_1:
# 88 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}No worry. We still have time.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_0:
# 100 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It seems like you don't have at least 3\n"
	.string "Pokémon in your party.\p"
	.string "I'd like us to have a fair battle. {COLOR RED}Do you\n"
	.string "still want to proceed at this state?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_1:
# 104 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, please come back later when\n"
	.string "you have at least 3 Pokémon in your\l"
	.string "party.$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_2:
# 115 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you underestimating me because I'm\n"
	.string "a girl?$"

SunshineMeadow_Eventscript_CheckingPartyNumberForMitsuruFirstBattle_Text_3:
# 131 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. Shall we start?$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_0:
# 168 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}You're just in time. We're starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_1:
# 174 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Shinji! You made it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you two are already at it, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Not quite, you're just in time. We're\n"
	.string "starting.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_2:
# 189 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I already told you I wanted a fair\n"
	.string "fight.\p"
	.string "He's not mine. He's only here to watch\n"
	.string "over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Alright then. Let's see what you can do,\n"
	.string "Kirijo.$"

SunshineMeadow_Eventscript_StartingMitsuruFirstBattle_Text_3:
# 197 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Not gonna use your Inteleon?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}It wouldn't be a fair fight if I do.\p"
	.string "Beside, he's not mine. He's only here to\n"
	.string "watch over me.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh, if you said so.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Alright then. Let's go, Kirijo.$"

SunshineMeadow_Eventscript_ChoosingPartyForMitsuruFirstBattle_Text_0:
# 245 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Kirijo is\n"
	.string "waiting.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_0:
# 342 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Alright, I've healed your party.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_1:
# 346 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}It's your turn now, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattle_Text_2:
# 358 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I should also study more of how they\n"
	.string "fight.)$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_0:
# 379 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please take your place, Aragaki-kun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Aight. I'll show you what I've got.$"

SunshineMeadow_Eventscript_PostMitsuruFirstBattleGameOver_Text_1:
# 391 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Are you ready?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Whenever you are.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Let's see how Shinji fare against her.)$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_0:
# 411 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, you're tough.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I appreciate the compliment.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattle_Text_1:
# 419 "data/maps/SunshineMeadow/scripts.pory"
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
# 430 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Anyway, back to business.\p"
	.string "I suppose you both want to know\n"
	.string "further about those men.\p"
	.string "Let's go back to the house on Route 2,\n"
	.string "I'll explain our objective.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_0:
# 494 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}Damn, how are you so strong?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}It seems like neither of you are whom I\n"
	.string "can put my trust on.$"

SunshineMeadow_Eventscript_PostShinjiMitsuFirstBattleGameOver_Text_1:
# 501 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}I'd hate to go back on my word\p"
	.string "but I'd like for us to go on our own\n"
	.string "ways.\p"
	.string "My apology for wasting your time.\p"
	.string "Farewell.$"

SunshineMeadow_Eventscript_MeadowSign_Text_0:
# 514 "data/maps/SunshineMeadow/scripts.pory"
	.string "Sunshine Meadow$"

SunshineMeadow_Eventscript_DirectionSign_Text_0:
# 520 "data/maps/SunshineMeadow/scripts.pory"
	.string "Route 2 {DOWN_ARROW}$"

SunshineMeadow_Eventscript_VulpixPreBattle_Text_0:
# 538 "data/maps/SunshineMeadow/scripts.pory"
	.string "Vulpix looks aloof and completedly\n"
	.string "ignores you.$"

SunshineMeadow_Eventscript_InteleonPreBattle_Text_0:
# 544 "data/maps/SunshineMeadow/scripts.pory"
	.string "Inteleon stares down at you but says\n"
	.string "nothing.$"

SunshineMeadow_Eventscript_JumpOverFence_Text_0:
# 560 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(There's no reason to go over there\n"
	.string "right now.)\p"
	.string "(The lab was already exploded and\n"
	.string "everything was burned away.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_1:
# 566 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Here we go.)$"

SunshineMeadow_Eventscript_JumpOverFence_Text_2:
# 593 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Huh, there's a footprint here. Looks\n"
	.string "like someone climbed over the fence.)\p"
	.string "(I'd like to explore further but right\n"
	.string "now I have other more important\l"
	.string "matters to attend to.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_0:
# 606 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}-Huff- -Huff-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Eventhough I ran with all my might, it's\n"
	.string "still too late.)$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_1:
# 612 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It's already 0:43 AM... not very ideal to\n"
	.string "tackle a mountain cave.\p"
	.string "Not to mention, my Pokémon are all tired\n"
	.string "from the unexpected battles.$"

SunshineMeadow_Eventscript_MitsuruAproachTheFence_Text_2:
# 620 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Yuuma-san said his grandson owned a\n"
	.string "house nearby in Route 2.)\p"
	.string "(He's travelling the region at the\n"
	.string "moment and I'm free to use it in the\l"
	.string "mean time.)\p"
	.string "(Alright then.)$"

SunshineMeadow_Eventscript_MitsuruPlansToJumpOverTheFence_Text_0:
# 633 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(The cave entrance is just on the other\n"
	.string "side of the fences.)\p"
	.string "It's not too tall so I believe I can jump\n"
	.string "over them.)$"

SunshineMeadow_Eventscript_ThundershardsCliffSign_Text_0:
# 642 "data/maps/SunshineMeadow/scripts.pory"
	.string "Thundershards Cave\n"
	.string "High risk of cave-in. DO NOT ENTER.$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointUp::
# 299 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}To be honest, althought I didn't use my\n"
	.string "full team, it's still very impressive\l"
	.string "that you managed to beat me,\l"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(I only managed to win by sheer luck...\p"
	.string "The way she ordered her Pokémons was\n"
	.string "so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_WonInMitsuruFirstBattlePointDown::
# 307 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}... Looks like my observation about your\n"
	.string "fighting prowess is correct.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Very well then, I hope we get along,\n"
	.string "Sanada-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Same here.$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointUp::
# 313 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}That was a very good fight. I've learned\n"
	.string "better of how you battle.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Don't be discouraged. It's proof that\n"
	.string "you can still get so much more stronger.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn... The way she ordered her\n"
	.string "Pokémons was so smart.\p"
	.string "It's... amazing.)$"

SunshineMeadow_Eventscript_LostInMitsuruFirstBattlePointDown::
# 320 "data/maps/SunshineMeadow/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}...\p"
	.string "Do you understand now that you\n"
	.string "shouldn't have underestimated me?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Now please step down, I still have a\n"
	.string "battle to do with Aragaki-kun.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Damn it... She was confident for a\n"
	.string "reason.\p"
	.string "Her skill is... amazing.)$"

MitsuruFirstBattleDefeated::
# 328 "data/maps/SunshineMeadow/scripts.pory"
	.string "C'est magnifique.$"
