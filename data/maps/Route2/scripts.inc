Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 63 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route2/scripts.pory"
	setmetatile 10, 11, 0x829, TRUE
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 19 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_ASK_AROUND_FOR_AKSJ
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 26 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 30 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_SUNSHINE_MEADOW
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 34 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 37 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_1ST_BATTLE
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 40 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 43 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 47 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
# 47 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_INTRO_COMPLETED
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 51 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2
	goto_if_ne Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_42
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_41:
# 54 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_44
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
# 21 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_6
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 19 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2
	goto_if_ne Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 24 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 23 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 27 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 28 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 10, 12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 31 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 32 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_19

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 35 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 38 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 37 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 41 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 13, 13
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_30

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 44 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 45 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_33

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 48 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_4
# 49 "data/maps/Route2/scripts.pory"
	setobjectxyperm TAROU, 9, 19
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_36

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_42:
# 52 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_5
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_41

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_44:
# 55 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_6
# 56 "data/maps/Route2/scripts.pory"
	setobjectxyperm 13, 19, 10
# 57 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 58 "data/maps/Route2/scripts.pory"
	setobjectxyperm 5, 12, 11
# 59 "data/maps/Route2/scripts.pory"
	setobjectxyperm 12, 24, 14
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2, Route2_Eventscript_AkihikoOnWarp25
# 9 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE, Route2_Eventscript_AkihikoOnWarp33
# 10 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP, Route2_Eventscript_AkihikoOnWarp40
# 12 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, Route2_Eventscript_MitsuruOnWarp8
# 13 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TO_ROUTE_2, Route2_Eventscript_MitsuruOnWarp27
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 64 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2, Route2_Eventscript_AkihikoOnFrame25
# 65 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_AS_LEAVING_R2_HOUSE, Route2_Eventscript_AkihikoOnFrame33
# 66 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_CANT_SLEEP, Route2_Eventscript_AkihikoOnFrame40
# 68 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT, Route2_Eventscript_MitsuruOnFrame8
# 69 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ, Route2_Eventscript_MitsuruOnFrame29
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 74 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 75 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 76 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 77 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 78 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 79 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 80 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 84 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 88 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_MitsuruOnWarp8::
# 92 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_Eventscript_MitsuruOnWarp27::
# 96 "data/maps/Route2/scripts.pory"
	applymovement 5, invisible
	return


Route2_Eventscript_AkihikoOnFrame25::
# 100 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_MitsuruOnFrame8::
# 104 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruApproachingRoute2House
	return


Route2_Eventscript_MitsuruOnFrame29::
# 108 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 112 "data/maps/Route2/scripts.pory"
	lock
# 113 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 114 "data/maps/Route2/scripts.pory"
	delay 8
# 115 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 116 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 117 "data/maps/Route2/scripts.pory"
	delay 8
# 118 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 119 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 120 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 121 "data/maps/Route2/scripts.pory"
	delay 20
# 122 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 123 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 124 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 127 "data/maps/Route2/scripts.pory"
	closemessage
# 128 "data/maps/Route2/scripts.pory"
	delay 30
# 129 "data/maps/Route2/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 130 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 131 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 132 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 134 "data/maps/Route2/scripts.pory"
	closemessage
# 135 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 136 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 137 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 141 "data/maps/Route2/scripts.pory"
	closemessage
# 142 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 143 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 145 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 146 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 147 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route2/scripts.pory"
	delay 20
# 149 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 150 "data/maps/Route2/scripts.pory"
	closemessage
# 151 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 152 "data/maps/Route2/scripts.pory"
	release
	return


# 155 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 156 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 159 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 161 "data/maps/Route2/scripts.pory"
	delay_8
# 162 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 163 "data/maps/Route2/scripts.pory"
	jump_right
# 164 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 167 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 168 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 172 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 173 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 174 "data/maps/Route2/scripts.pory"
	walk_right
# 175 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 177 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 178 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 181 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 182 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 183 "data/maps/Route2/scripts.pory"
	walk_left
# 184 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 187 "data/maps/Route2/scripts.pory"
shakevertical:
# 188 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 192 "data/maps/Route2/scripts.pory"
	lock
# 193 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 194 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 195 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 198 "data/maps/Route2/scripts.pory"
	closemessage
# 199 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 200 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 201 "data/maps/Route2/scripts.pory"
	closemessage
# 202 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_ROUTE2, SusMenFightDefeated
# 203 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 204 "data/maps/Route2/scripts.pory"
	release
	return


# 207 "data/maps/Route2/scripts.pory"
lockfacing:
# 208 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 219 "data/maps/Route2/scripts.pory"
	lock
# 220 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_NONE
# 221 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 222 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 223 "data/maps/Route2/scripts.pory"
	delay 30
# 224 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 225 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 226 "data/maps/Route2/scripts.pory"
	closemessage
# 227 "data/maps/Route2/scripts.pory"
	delay 8
# 228 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 229 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 230 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 232 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 233 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 235 "data/maps/Route2/scripts.pory"
	closemessage
# 236 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 237 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 238 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 240 "data/maps/Route2/scripts.pory"
	closemessage
# 241 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 242 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 243 "data/maps/Route2/scripts.pory"
	waitmoncry
# 244 "data/maps/Route2/scripts.pory"
	delay 30
# 245 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 246 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 247 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 249 "data/maps/Route2/scripts.pory"
	release
	return


# 252 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 253 "data/maps/Route2/scripts.pory"
	set_visible
# 254 "data/maps/Route2/scripts.pory"
	jump_left
# 255 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 258 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 259 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 264 "data/maps/Route2/scripts.pory"
	lock
# 265 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 266 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 267 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 269 "data/maps/Route2/scripts.pory"
	delay 20
# 270 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 271 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 272 "data/maps/Route2/scripts.pory"
	delay 8
# 273 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 274 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 275 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route2/scripts.pory"
	delay 20
# 277 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 278 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 279 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 281 "data/maps/Route2/scripts.pory"
	closemessage
# 282 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 283 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 285 "data/maps/Route2/scripts.pory"
	release
	return


# 288 "data/maps/Route2/scripts.pory"
emoteasleep:
# 289 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 291 "data/maps/Route2/scripts.pory"
visible:
# 292 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 296 "data/maps/Route2/scripts.pory"
	lock
# 297 "data/maps/Route2/scripts.pory"
	delay 20
# 298 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 299 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 300 "data/maps/Route2/scripts.pory"
	closemessage
# 301 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 302 "data/maps/Route2/scripts.pory"
	delay 20
# 303 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 304 "data/maps/Route2/scripts.pory"
	waitmoncry
# 305 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 306 "data/maps/Route2/scripts.pory"
	waitse
# 307 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 308 "data/maps/Route2/scripts.pory"
	waitmoncry
# 309 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 310 "data/maps/Route2/scripts.pory"
	waitse
# 311 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 312 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 313 "data/maps/Route2/scripts.pory"
	removeobject 3
# 314 "data/maps/Route2/scripts.pory"
	removeobject 4
# 315 "data/maps/Route2/scripts.pory"
	clearflag FLAG_TEMP_6
# 316 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 317 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 318 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 320 "data/maps/Route2/scripts.pory"
	delay 20
# 321 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 322 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 323 "data/maps/Route2/scripts.pory"
	delay 4
# 324 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 325 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 326 "data/maps/Route2/scripts.pory"
	waitse
# 327 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 328 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 330 "data/maps/Route2/scripts.pory"
	release
	return


# 334 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 335 "data/maps/Route2/scripts.pory"
	delay_16
# 336 "data/maps/Route2/scripts.pory"
	face_left
# 337 "data/maps/Route2/scripts.pory"
	delay_16
# 338 "data/maps/Route2/scripts.pory"
	face_up
# 339 "data/maps/Route2/scripts.pory"
	delay_16
# 340 "data/maps/Route2/scripts.pory"
	emote_x
# 341 "data/maps/Route2/scripts.pory"
	delay_16
# 342 "data/maps/Route2/scripts.pory"
	jump_right
# 343 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 348 "data/maps/Route2/scripts.pory"
	lock
# 349 "data/maps/Route2/scripts.pory"
	delay 40
# 350 "data/maps/Route2/scripts.pory"
	addobject 5
# 351 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 352 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 353 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 355 "data/maps/Route2/scripts.pory"
	delay 52
# 356 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 357 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route2/scripts.pory"
	waitse
# 359 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 360 "data/maps/Route2/scripts.pory"
	waitse
# 361 "data/maps/Route2/scripts.pory"
	delay 30
# 362 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 363 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 366 "data/maps/Route2/scripts.pory"
	closemessage
# 367 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 368 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 369 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 370 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route2/scripts.pory"
	delay 20
# 372 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 373 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 374 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route2/scripts.pory"
	delay 30
# 376 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_MEETING_M
# 377 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 378 "data/maps/Route2/scripts.pory"
	waitstate
	return


# 381 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 382 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 384 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 385 "data/maps/Route2/scripts.pory"
	walk_left
# 385 "data/maps/Route2/scripts.pory"
	walk_left
# 385 "data/maps/Route2/scripts.pory"
	walk_left
# 386 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 390 "data/maps/Route2/scripts.pory"
	walk_up
# 390 "data/maps/Route2/scripts.pory"
	walk_up
# 391 "data/maps/Route2/scripts.pory"
	walk_right
# 391 "data/maps/Route2/scripts.pory"
	walk_right
# 391 "data/maps/Route2/scripts.pory"
	walk_right
# 391 "data/maps/Route2/scripts.pory"
	walk_right
# 391 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 394 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 395 "data/maps/Route2/scripts.pory"
	set_visible
# 396 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 399 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 400 "data/maps/Route2/scripts.pory"
	walk_up
# 400 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 403 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 404 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 410 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 414 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 419 "data/maps/Route2/scripts.pory"
	checkplayergender
# 420 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_Eventscript_Yuuka_2
# 424 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro_M, Route2_YuukaDefeated
Route2_Eventscript_Yuuka_1:
# 425 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 426 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 427 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Yuuka_2:
# 421 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
	goto Route2_Eventscript_Yuuka_1


Route2_Eventscript_Kyousuke::
# 449 "data/maps/Route2/scripts.pory"
	lock
# 450 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 451 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 452 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 454 "data/maps/Route2/scripts.pory"
	closemessage
# 455 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 456 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 457 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 458 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 459 "data/maps/Route2/scripts.pory"
	closemessage
# 460 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 464 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 464 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_Eventscript_Tarou_1
# 468 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 469 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 470 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 471 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 465 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_Kyousuke
	return

Route2_Eventscript_Tarou_4:
# 464 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_NOT_PLAYER
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3


Route2_Eventscript_AkihikoOnFrame33::
# 489 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 493 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 494 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 499 "data/maps/Route2/scripts.pory"
	closemessage
# 500 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 501 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 502 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 503 "data/maps/Route2/scripts.pory"
	lock
# 504 "data/maps/Route2/scripts.pory"
	removeobject 6
# 505 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 506 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 507 "data/maps/Route2/scripts.pory"
	setobjectxy 6, 31, 21
# 508 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 509 "data/maps/Route2/scripts.pory"
	release
# 510 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_TO_SUNSHINE_MEADOW
# 511 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 512 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 513 "data/maps/Route2/scripts.pory"
	destroyfollowernpc
# 514 "data/maps/Route2/scripts.pory"
	setflag FLAG_LOCK_SHINJIRO
# 515 "data/maps/Route2/scripts.pory"
	special SetCB2LoadMap
# 516 "data/maps/Route2/scripts.pory"
	release
	end


# 520 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 521 "data/maps/Route2/scripts.pory"
	set_visible
# 522 "data/maps/Route2/scripts.pory"
	walk_down
# 522 "data/maps/Route2/scripts.pory"
	walk_down
# 523 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 526 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 527 "data/maps/Route2/scripts.pory"
	walk_right
# 528 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 532 "data/maps/Route2/scripts.pory"
	lock
# 533 "data/maps/Route2/scripts.pory"
	faceplayer
# 534 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 539 "data/maps/Route2/scripts.pory"
	closemessage
# 540 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 545 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 549 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 550 "data/maps/Route2/scripts.pory"
	delay 8
# 551 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 552 "data/maps/Route2/scripts.pory"
	waitse
# 553 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 554 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 555 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 556 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 557 "data/maps/Route2/scripts.pory"
	delay 20
# 558 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 560 "data/maps/Route2/scripts.pory"
	closemessage
# 561 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 562 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 563 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 564 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 574 "data/maps/Route2/scripts.pory"
	closemessage
# 575 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 576 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 577 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 578 "data/maps/Route2/scripts.pory"
	delay 30
# 579 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 580 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 581 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 582 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_S_1ST_BATTLE
	end


# 586 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 587 "data/maps/Route2/scripts.pory"
	walk_down
# 588 "data/maps/Route2/scripts.pory"
	face_right
# 589 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 592 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 593 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 594 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 598 "data/maps/Route2/scripts.pory"
	lock
# 599 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 600 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 602 "data/maps/Route2/scripts.pory"
	closemessage
# 603 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 608 "data/maps/Route2/scripts.pory"
	lock
# 609 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 610 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 619 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 620 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 626 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 627 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 611 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 612 "data/maps/Route2/scripts.pory"
	closemessage
# 613 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 614 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 621 "data/maps/Route2/scripts.pory"
	closemessage
# 622 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 623 "data/maps/Route2/scripts.pory"
	waitse
# 624 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 631 "data/maps/Route2/scripts.pory"
	lock
# 632 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 633 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 657 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 634 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 636 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5
# 645 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 646 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 647 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 648 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 649 "data/maps/Route2/scripts.pory"
	closemessage
# 650 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 651 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 652 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 653 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
# 654 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 658 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 659 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 660 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 662 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 664 "data/maps/Route2/scripts.pory"
	closemessage
# 665 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 666 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5:
# 637 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 638 "data/maps/Route2/scripts.pory"
	closemessage
# 639 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 640 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route2/scripts.pory"
	release
	end


# 670 "data/maps/Route2/scripts.pory"
emoteangry:
# 671 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 675 "data/maps/Route2/scripts.pory"
	lock
# 676 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 677 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 678 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 679 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 681 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_InitShinjiroFirstBattle3::
# 685 "data/maps/Route2/scripts.pory"
	lock
# 686 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 687 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 688 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 689 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 691 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 695 "data/maps/Route2/scripts.pory"
	lock
# 696 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 697 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 698 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 699 "data/maps/Route2/scripts.pory"
	trainerbattle_selectmons TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated, Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Cancel, Route2__Eventscript_ShinjiroFirstBattleResult, 3
	return


Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Cancel::
# 702 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Cancel_Text_0
# 703 "data/maps/Route2/scripts.pory"
	closemessage
# 704 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	return


Route2__Eventscript_ShinjiroFirstBattleResult::
# 712 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 713 "data/maps/Route2/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 714 "data/maps/Route2/scripts.pory"
	lock
# 715 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 719 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 723 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 729 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 730 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 731 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 733 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 734 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 716 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 717 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 720 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 721 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 724 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 725 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 726 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 723 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 719 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 715 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 780 "data/maps/Route2/scripts.pory"
	lock
# 781 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 782 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 783 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 784 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 785 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 786 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 790 "data/maps/Route2/scripts.pory"
	closemessage
# 791 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 792 "data/maps/Route2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 793 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_1ST_MORNING
# 794 "data/maps/Route2/scripts.pory"
	fwdtime 6, 20
# 795 "data/maps/Route2/scripts.pory"
	fwdweekday WEEKDAY_MON
# 796 "data/maps/Route2/scripts.pory"
	delay 60
# 797 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_1
# 798 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 3, 10
# 799 "data/maps/Route2/scripts.pory"
	waitstate
	return


# 802 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 803 "data/maps/Route2/scripts.pory"
	walk_down
# 804 "data/maps/Route2/scripts.pory"
	walk_left
# 804 "data/maps/Route2/scripts.pory"
	walk_left
# 804 "data/maps/Route2/scripts.pory"
	walk_left
# 805 "data/maps/Route2/scripts.pory"
	walk_up
# 805 "data/maps/Route2/scripts.pory"
	walk_up
# 805 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 809 "data/maps/Route2/scripts.pory"
	lock
# 810 "data/maps/Route2/scripts.pory"
	faceplayer
# 811 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 812 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 836 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 844 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 846 "data/maps/Route2/scripts.pory"
	closemessage
# 847 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF, NOP_PARTY_SCREEN
# 848 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 813 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 814 "data/maps/Route2/scripts.pory"
	closemessage
# 815 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 828 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 829 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 830 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 831 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 832 "data/maps/Route2/scripts.pory"
	closemessage
# 833 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 837 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
# 839 "data/maps/Route2/scripts.pory"
	closemessage
# 840 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_6:
# 816 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 817 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 818 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 820 "data/maps/Route2/scripts.pory"
	closemessage
# 821 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 822 "data/maps/Route2/scripts.pory"
	waitmoncry
# 823 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 824 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 849 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 850 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 851 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 852 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 853 "data/maps/Route2/scripts.pory"
	closemessage
# 854 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 855 "data/maps/Route2/scripts.pory"
	release
	end


# 860 "data/maps/Route2/scripts.pory"
emotecry:
# 861 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

Route2_Eventscript_A_Trigger::
# 865 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_M_EXPLAINS_OBJECTIVES
	goto_if_eq Route2_Eventscript_A_Trigger_2
Route2_Eventscript_A_Trigger_1:
# 869 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_S_1ST_BATTLE
	goto_if_eq Route2_Eventscript_A_Trigger_5
Route2_Eventscript_A_Trigger_4:
# 873 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_A_Trigger_2:
# 867 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroFirstBattleWarning
	goto Route2_Eventscript_A_Trigger_1

Route2_Eventscript_A_Trigger_5:
# 871 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MustBattleShinjiro
	goto Route2_Eventscript_A_Trigger_4


Route2_Eventscript_ShinjiroFirstBattleWarning::
# 878 "data/maps/Route2/scripts.pory"
	lock
# 879 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0, MSGBOX_YESNO
# 880 "data/maps/Route2/scripts.pory"
	closemessage
# 881 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_ShinjiroFirstBattleWarning_2
Route2_Eventscript_ShinjiroFirstBattleWarning_1:
# 885 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_ShinjiroFirstBattleWarning_2:
# 882 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 883 "data/maps/Route2/scripts.pory"
	waitmovement 0
	goto Route2_Eventscript_ShinjiroFirstBattleWarning_1


Route2_Eventscript_MitsuruApproachingRoute2House::
# 890 "data/maps/Route2/scripts.pory"
	lock
# 891 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0
# 892 "data/maps/Route2/scripts.pory"
	waitmovement
# 893 "data/maps/Route2/scripts.pory"
	delay 40
# 894 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1
# 895 "data/maps/Route2/scripts.pory"
	waitmovement
# 896 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_0
# 899 "data/maps/Route2/scripts.pory"
	closemessage
# 900 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 901 "data/maps/Route2/scripts.pory"
	waitmovement
# 902 "data/maps/Route2/scripts.pory"
	delay 40
# 903 "data/maps/Route2/scripts.pory"
	playse SE_CLICK
# 904 "data/maps/Route2/scripts.pory"
	waitse
# 905 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_1
# 906 "data/maps/Route2/scripts.pory"
	closemessage
# 907 "data/maps/Route2/scripts.pory"
	delay 20
# 908 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 909 "data/maps/Route2/scripts.pory"
	waitmovement
# 910 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 911 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 7, 13
# 912 "data/maps/Route2/scripts.pory"
	waitstate
	return


Route2_Eventscript_HouseLocked::
# 916 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, M_TOO_LATE_NIGHT
	goto_if_lt Route2_Eventscript_HouseLocked_1
	return

Route2_Eventscript_HouseLocked_1:
# 917 "data/maps/Route2/scripts.pory"
	lock
# 918 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_HouseLocked_Text_0
# 919 "data/maps/Route2/scripts.pory"
	closemessage
# 920 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerUp::
# 926 "data/maps/Route2/scripts.pory"
	lock
# 927 "data/maps/Route2/scripts.pory"
	call Route2_Eventscript_MitsuruOnTriggerHideNPCs
# 928 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerUp_Movement_0
# 929 "data/maps/Route2/scripts.pory"
	waitmovement
# 930 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed
	return


Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerDown::
# 934 "data/maps/Route2/scripts.pory"
	lock
# 935 "data/maps/Route2/scripts.pory"
	call Route2_Eventscript_MitsuruOnTriggerHideNPCs
# 936 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerDown_Movement_0
# 937 "data/maps/Route2/scripts.pory"
	waitmovement
# 938 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed
	return


Route2_Eventscript_MitsuruOnTriggerHideNPCs::
# 942 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_MitsuruOnTriggerHideNPCs_2
Route2_Eventscript_MitsuruOnTriggerHideNPCs_1:
# 945 "data/maps/Route2/scripts.pory"
	addobject 7
# 946 "data/maps/Route2/scripts.pory"
	addobject 8
# 947 "data/maps/Route2/scripts.pory"
	addobject 9
# 948 "data/maps/Route2/scripts.pory"
	hideobjectat 7, MAP_ROUTE2
# 949 "data/maps/Route2/scripts.pory"
	hideobjectat 8, MAP_ROUTE2
# 950 "data/maps/Route2/scripts.pory"
	hideobjectat 9, MAP_ROUTE2
	return

Route2_Eventscript_MitsuruOnTriggerHideNPCs_2:
# 943 "data/maps/Route2/scripts.pory"
	hidefollowernpc
	goto Route2_Eventscript_MitsuruOnTriggerHideNPCs_1


Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed::
# 955 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 956 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_0
# 957 "data/maps/Route2/scripts.pory"
	waitmovement
# 958 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 959 "data/maps/Route2/scripts.pory"
	delay 8
# 960 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_1
# 961 "data/maps/Route2/scripts.pory"
	waitmovement
# 962 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_2
# 963 "data/maps/Route2/scripts.pory"
	waitmovement
# 964 "data/maps/Route2/scripts.pory"
	clearflag FLAG_TEMP_6
# 965 "data/maps/Route2/scripts.pory"
	addobject 12
# 966 "data/maps/Route2/scripts.pory"
	addobject 11
# 967 "data/maps/Route2/scripts.pory"
	addobject 10
# 968 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 969 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 970 "data/maps/Route2/scripts.pory"
	waitmovement
# 971 "data/maps/Route2/scripts.pory"
	delay 20
# 972 "data/maps/Route2/scripts.pory"
	applymovement 12, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_3
# 973 "data/maps/Route2/scripts.pory"
	waitmovement
# 974 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 975 "data/maps/Route2/scripts.pory"
	waitmovement
# 976 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Text_0
# 978 "data/maps/Route2/scripts.pory"
	closemessage
# 979 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 980 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 981 "data/maps/Route2/scripts.pory"
	waitmovement
# 982 "data/maps/Route2/scripts.pory"
	delay 20
# 983 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 984 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_4
# 985 "data/maps/Route2/scripts.pory"
	applymovement 12, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_5
# 986 "data/maps/Route2/scripts.pory"
	waitmovement
# 987 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 988 "data/maps/Route2/scripts.pory"
	delay 20
# 989 "data/maps/Route2/scripts.pory"
	applymovement 12, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_6
# 990 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_7
# 991 "data/maps/Route2/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 992 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV
	return


Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV::
# 996 "data/maps/Route2/scripts.pory"
	delay 30
# 997 "data/maps/Route2/scripts.pory"
	addobject 6
# 998 "data/maps/Route2/scripts.pory"
	addobject 19
# 999 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Movement_0
# 1000 "data/maps/Route2/scripts.pory"
	applymovement 19, AkishinjiGettingBlockedBySusMen
# 1001 "data/maps/Route2/scripts.pory"
	delay 8
# 1002 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 1003 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 1004 "data/maps/Route2/scripts.pory"
	delay 8
# 1005 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 1006 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 1007 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 1008 "data/maps/Route2/scripts.pory"
	delay 20
# 1009 "data/maps/Route2/scripts.pory"
	applymovement 19, AkiShinjiStepBack
# 1010 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 1011 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1012 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 1014 "data/maps/Route2/scripts.pory"
	closemessage
# 1015 "data/maps/Route2/scripts.pory"
	delay 30
# 1016 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 1017 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 1018 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1019 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 1020 "data/maps/Route2/scripts.pory"
	closemessage
# 1021 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 1022 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 1023 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1024 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 1027 "data/maps/Route2/scripts.pory"
	closemessage
# 1028 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 1029 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1030 "data/maps/Route2/scripts.pory"
	applymovement 19, shakehorizontal
# 1031 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 1032 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 1033 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1034 "data/maps/Route2/scripts.pory"
	delay 20
# 1035 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 1036 "data/maps/Route2/scripts.pory"
	closemessage
# 1037 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 1038 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 1039 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1040 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 1042 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 1043 "data/maps/Route2/scripts.pory"
	closemessage
# 1044 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1045 "data/maps/Route2/scripts.pory"
	playse SE_EFFECTIVE
# 1046 "data/maps/Route2/scripts.pory"
	waitse
# 1047 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 1048 "data/maps/Route2/scripts.pory"
	waitmoncry
# 1049 "data/maps/Route2/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 1050 "data/maps/Route2/scripts.pory"
	waitse
# 1051 "data/maps/Route2/scripts.pory"
	playse SE_EFFECTIVE
# 1052 "data/maps/Route2/scripts.pory"
	waitse
# 1053 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 1054 "data/maps/Route2/scripts.pory"
	waitmovement
# 1055 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1056 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Text_0
# 1059 "data/maps/Route2/scripts.pory"
	closemessage
# 1060 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 1061 "data/maps/Route2/scripts.pory"
	waitmovement
# 1062 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 1063 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Text_1
# 1065 "data/maps/Route2/scripts.pory"
	closemessage
# 1066 "data/maps/Route2/scripts.pory"
	delay 8
# 1067 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 1068 "data/maps/Route2/scripts.pory"
	showobjectat 7, MAP_ROUTE2
# 1069 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 1070 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Route2/scripts.pory"
	applymovement 19, facedown
# 1072 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 1073 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1074 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 1075 "data/maps/Route2/scripts.pory"
	closemessage
# 1076 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 1077 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 1078 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1079 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 1080 "data/maps/Route2/scripts.pory"
	closemessage
# 1081 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1082 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 1083 "data/maps/Route2/scripts.pory"
	waitmoncry
# 1084 "data/maps/Route2/scripts.pory"
	delay 30
# 1085 "data/maps/Route2/scripts.pory"
	applymovement 19, invisible
# 1086 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 1087 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1088 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleepMitsuruPOV
	return


Route2_Eventscript_AkishinjiAsleepMitsuruPOV::
# 1092 "data/maps/Route2/scripts.pory"
	showobjectat 8, MAP_ROUTE2
# 1093 "data/maps/Route2/scripts.pory"
	showobjectat 9, MAP_ROUTE2
# 1094 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1095 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1096 "data/maps/Route2/scripts.pory"
	delay 20
# 1097 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 1098 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 1099 "data/maps/Route2/scripts.pory"
	delay 8
# 1100 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 1101 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 1102 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1103 "data/maps/Route2/scripts.pory"
	delay 20
# 1104 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 1105 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 1106 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1107 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 1108 "data/maps/Route2/scripts.pory"
	closemessage
# 1109 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 1110 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1111 "data/maps/Route2/scripts.pory"
	delay 20
# 1112 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleepMitsuruPOV_Text_0
# 1113 "data/maps/Route2/scripts.pory"
	closemessage
# 1114 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1115 "data/maps/Route2/scripts.pory"
	delay 20
# 1116 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1117 "data/maps/Route2/scripts.pory"
	waitmoncry
# 1118 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 1119 "data/maps/Route2/scripts.pory"
	waitse
# 1120 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 1121 "data/maps/Route2/scripts.pory"
	waitmoncry
# 1122 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 1123 "data/maps/Route2/scripts.pory"
	waitse
# 1124 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 1125 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 1126 "data/maps/Route2/scripts.pory"
	removeobject 3
# 1127 "data/maps/Route2/scripts.pory"
	removeobject 4
# 1128 "data/maps/Route2/scripts.pory"
	clearflag FLAG_TEMP_6
# 1129 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 1130 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 1131 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1132 "data/maps/Route2/scripts.pory"
	delay 20
# 1133 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 1134 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 1135 "data/maps/Route2/scripts.pory"
	delay 4
# 1136 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 1137 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 1138 "data/maps/Route2/scripts.pory"
	waitse
# 1139 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 1140 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1141 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppearsMitsuruPOV
	return


Route2_Eventscript_MitsuruAppearsMitsuruPOV::
# 1145 "data/maps/Route2/scripts.pory"
	delay 40
# 1146 "data/maps/Route2/scripts.pory"
	addobject 5
# 1147 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_MitsuruAppearsMitsuruPOV_Movement_0
# 1148 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, MitsuruAppears
# 1149 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MitsuruAppears
# 1150 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1151 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 1152 "data/maps/Route2/scripts.pory"
	delay 52
# 1153 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 1154 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1155 "data/maps/Route2/scripts.pory"
	waitse
# 1156 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 1157 "data/maps/Route2/scripts.pory"
	waitse
# 1158 "data/maps/Route2/scripts.pory"
	delay 30
# 1159 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppearsMitsuruPOV_Text_0
# 1162 "data/maps/Route2/scripts.pory"
	closemessage
# 1163 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 1164 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 1165 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToInteleon
# 1166 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1167 "data/maps/Route2/scripts.pory"
	delay 20
# 1168 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 1169 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 1170 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 1171 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_DUMMY
# 1172 "data/maps/Route2/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_SAVED_AKSJ
# 1173 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 1174 "data/maps/Route2/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1175 "data/maps/Route2/scripts.pory"
	delay 30
# 1176 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 5, 3
# 1177 "data/maps/Route2/scripts.pory"
	waitstate
	return


Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting::
# 1181 "data/maps/Route2/scripts.pory"
	lock
# 1182 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_Text_0
# 1184 "data/maps/Route2/scripts.pory"
	closemessage
# 1185 "data/maps/Route2/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 1186 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_2
Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_1:
# 1194 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 1195 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1196 "data/maps/Route2/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, M_TO_SUNSHINE_MEADOW
# 1197 "data/maps/Route2/scripts.pory"
	special ShowMapNamePopup
# 1198 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_2:
# 1188 "data/maps/Route2/scripts.pory"
	call EventScript_ShowHelpQuest
# 1189 "data/maps/Route2/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 1190 "data/maps/Route2/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 1191 "data/maps/Route2/scripts.pory"
	setvar VAR_STORY_QUESTS_STATE, 0
# 1192 "data/maps/Route2/scripts.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, MITSURUS_PROLOGUE
	goto Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_1


Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight::
# 1203 "data/maps/Route2/scripts.pory"
	lock
# 1204 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 1205 "data/maps/Route2/scripts.pory"
	applymovement 13, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_0
# 1206 "data/maps/Route2/scripts.pory"
	waitmovement
# 1207 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 1208 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Text_0
# 1210 "data/maps/Route2/scripts.pory"
	closemessage
# 1211 "data/maps/Route2/scripts.pory"
	applymovement 13, walkdown
# 1212 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_1
# 1213 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_1
# 1214 "data/maps/Route2/scripts.pory"
	waitmovement
# 1215 "data/maps/Route2/scripts.pory"
	applymovement 13, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_2
# 1216 "data/maps/Route2/scripts.pory"
	waitmovement
# 1217 "data/maps/Route2/scripts.pory"
	lock
# 1218 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 13, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 1219 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft::
# 1224 "data/maps/Route2/scripts.pory"
	lock
# 1225 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 1226 "data/maps/Route2/scripts.pory"
	applymovement 13, Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Movement_0
# 1227 "data/maps/Route2/scripts.pory"
	waitmovement
# 1228 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 1229 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Text_0
# 1230 "data/maps/Route2/scripts.pory"
	closemessage
# 1231 "data/maps/Route2/scripts.pory"
	applymovement 13, walkdown
# 1232 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_1
# 1233 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_1
# 1234 "data/maps/Route2/scripts.pory"
	waitmovement
# 1235 "data/maps/Route2/scripts.pory"
	applymovement 13, Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Movement_1
# 1236 "data/maps/Route2/scripts.pory"
	waitmovement
# 1237 "data/maps/Route2/scripts.pory"
	lock
# 1238 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 13, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 1239 "data/maps/Route2/scripts.pory"
	release
	end


# 575 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 575 "data/maps/Route2/scripts.pory"
	walk_right
# 575 "data/maps/Route2/scripts.pory"
	walk_right
# 575 "data/maps/Route2/scripts.pory"
	walk_right
# 575 "data/maps/Route2/scripts.pory"
	walk_right
# 575 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 576 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 576 "data/maps/Route2/scripts.pory"
	walk_right
# 576 "data/maps/Route2/scripts.pory"
	walk_right
# 576 "data/maps/Route2/scripts.pory"
	walk_right
# 576 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 579 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 579 "data/maps/Route2/scripts.pory"
	walk_left
# 579 "data/maps/Route2/scripts.pory"
	walk_left
# 579 "data/maps/Route2/scripts.pory"
	walk_left
# 579 "data/maps/Route2/scripts.pory"
	walk_left
# 579 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 686 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 686 "data/maps/Route2/scripts.pory"
	walk_up
# 686 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 891 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0:
# 891 "data/maps/Route2/scripts.pory"
	player_run_left
# 891 "data/maps/Route2/scripts.pory"
	player_run_left
# 891 "data/maps/Route2/scripts.pory"
	player_run_left
# 891 "data/maps/Route2/scripts.pory"
	walk_left
# 891 "data/maps/Route2/scripts.pory"
	walk_left
# 891 "data/maps/Route2/scripts.pory"
	walk_slow_left
# 891 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 894 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1:
# 894 "data/maps/Route2/scripts.pory"
	walk_up
# 894 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 928 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerUp_Movement_0:
# 928 "data/maps/Route2/scripts.pory"
	player_run_right
# 928 "data/maps/Route2/scripts.pory"
	player_run_right
# 928 "data/maps/Route2/scripts.pory"
	player_run_right
# 928 "data/maps/Route2/scripts.pory"
	player_run_right
# 928 "data/maps/Route2/scripts.pory"
	player_run_right
	step_end

# 936 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruPreAkiShinjiGettingAmbushed_TriggerDown_Movement_0:
# 936 "data/maps/Route2/scripts.pory"
	player_run_up
# 936 "data/maps/Route2/scripts.pory"
	player_run_right
# 936 "data/maps/Route2/scripts.pory"
	player_run_right
# 936 "data/maps/Route2/scripts.pory"
	player_run_right
# 936 "data/maps/Route2/scripts.pory"
	player_run_right
	step_end

# 956 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_0:
# 956 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 960 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_1:
# 960 "data/maps/Route2/scripts.pory"
	player_run_left
# 960 "data/maps/Route2/scripts.pory"
	player_run_left
# 960 "data/maps/Route2/scripts.pory"
	player_run_left
# 960 "data/maps/Route2/scripts.pory"
	player_run_left
# 960 "data/maps/Route2/scripts.pory"
	player_run_down
# 960 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 962 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_2:
# 962 "data/maps/Route2/scripts.pory"
	walk_left
# 962 "data/maps/Route2/scripts.pory"
	walk_down
# 962 "data/maps/Route2/scripts.pory"
	face_right
	step_end

# 972 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_3:
# 972 "data/maps/Route2/scripts.pory"
	walk_up
# 972 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 984 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_4:
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 984 "data/maps/Route2/scripts.pory"
	walk_fast_up
	step_end

# 985 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_5:
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 985 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

# 989 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_6:
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 989 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 990 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Movement_7:
# 990 "data/maps/Route2/scripts.pory"
	walk_diag_southeast
# 990 "data/maps/Route2/scripts.pory"
	walk_diag_southeast
# 990 "data/maps/Route2/scripts.pory"
	walk_diag_southeast
# 990 "data/maps/Route2/scripts.pory"
	walk_diag_southeast
# 990 "data/maps/Route2/scripts.pory"
	walk_diag_southeast
	step_end

# 999 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Movement_0:
# 999 "data/maps/Route2/scripts.pory"
	walk_diag_northeast
# 999 "data/maps/Route2/scripts.pory"
	walk_diag_northeast
	step_end

# 1147 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruAppearsMitsuruPOV_Movement_0:
# 1147 "data/maps/Route2/scripts.pory"
	walk_left
# 1147 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 1205 "data/maps/Route2/scripts.pory"
Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_0:
# 1205 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 1205 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 1205 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 1212 "data/maps/Route2/scripts.pory"
Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_1:
# 1212 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 1212 "data/maps/Route2/scripts.pory"
	walk_down
# 1212 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 1215 "data/maps/Route2/scripts.pory"
Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Movement_2:
# 1215 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 1215 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 1215 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 1226 "data/maps/Route2/scripts.pory"
Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Movement_0:
# 1226 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 1226 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 1226 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 1226 "data/maps/Route2/scripts.pory"
	face_down
	step_end

# 1235 "data/maps/Route2/scripts.pory"
Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Movement_1:
# 1235 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 1235 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 1235 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 1235 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 125 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 130 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 133 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 135 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 138 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us.\n"
	.string "Like it or not.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 149 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 196 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 225 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 234 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 239 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 280 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 298 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 299 "data/maps/Route2/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 363 "data/maps/Route2/scripts.pory"
	.string "{CREATE MUGSHOT_M EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 403 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 410 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 425 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 450 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 453 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 457 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 458 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 495 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 534 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 558 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Hey Shinji, you couldn't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 564 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Aki.\p"
	.string "Yep, I keep thinking of what Kirijo said.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}Humans who can use Pokémon's ability,\n"
	.string "huh...\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Heh, guess we were thinking the same\n"
	.string "thing.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Well, there's not much we can do until we\n"
	.string "see for ourselves if what she said was\l"
	.string "true.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Since we're both not feeling sleepy, how\n"
	.string "about a battle?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}I was just about to suggest that.\p"
	.string "The Ferroseed you used earlier against\n"
	.string "Kirijo really caught my curiosity.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}I'll show what it can do. {COLOR RED}Let's do a\n"
	.string "3-vs-3 without bag item use again.\p"
	.string "{COLOR DARK_GRAY}Step up if you're ready.$"

Route2_Eventscript_MustBattleShinjiro_Text_0:
# 601 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 609 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 611 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 619 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 634 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 637 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 648 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 662 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Cancel_Text_0:
# 702 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 786 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_1:
# 797 "data/maps/Route2/scripts.pory"
	.string "The next morning...$"

Route2_Eventscript_Himari_Text_0:
# 811 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 813 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 818 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 831 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 837 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 844 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 852 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0:
# 879 "data/maps/Route2/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_0:
# 896 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(Yuuma-san said the key is under the\n"
	.string "pot of plant outside of the house.)\p"
	.string "(Let's see..........)\p"
	.string "(Found it.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_1:
# 905 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Please excuse my intrusion.$"

Route2_Eventscript_HouseLocked_Text_0:
# 918 "data/maps/Route2/scripts.pory"
	.string "It's locked.$"

Route2_Eventscript_MitsuruWitnessingAkiShinjiGettingAmbushed_Text_0:
# 976 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It's those men from the Genesis Group.\n"
	.string "I have to know what they're plotting.\p"
	.string "Can you cover the north, Inteleon?$"

Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Text_0:
# 1056 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(!)\n"
	.string "(Sanada won.)\p"
	.string "(His battling skill is quite good.)$"

Route2_Eventscript_AkishinjiGettingBlockedMitsuruPOV_Text_1:
# 1063 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...\p"
	.string "Resistance is futile.$"

Route2_Eventscript_AkishinjiAsleepMitsuruPOV_Text_0:
# 1112 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppearsMitsuruPOV_Text_0:
# 1159 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_MitsuruPostSenpaiTrioFirstMeeting_Text_0:
# 1182 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(There's still time before the promised\n"
	.string "hour.)\p"
	.string "(Maybe I can wander around the town to\n"
	.string "gather more information.)$"

Route2_Eventscript_PicnickerBlockingMitsuruTriggerRight_Text_0:
# 1208 "data/maps/Route2/scripts.pory"
	.string "I'm sorry but I dropped an important\n"
	.string "note around here.\p"
	.string "Could you please come back after I find\n"
	.string "it?$"

Route2_Eventscript_PicnickerBlockingMitsuruTriggerLeft_Text_0:
# 1229 "data/maps/Route2/scripts.pory"
	.string "I'm sorry but I dropped an important\n"
	.string "note around here. Could you please come\l"
	.string "back after I find it?$"

SusMenFightIntro::
# 210 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 214 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 431 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaIntro_M::
# 435 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Let's have a quick\n"
	.string "battle!\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_STRUGGLED}(It's so late, you should be at home!)$"

Route2_YuukaDefeated::
# 440 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 444 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 476 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 480 "data/maps/Route2/scripts.pory"
	.string "Tch. These Pokémon suck. I shouldn't\n"
	.string "have bought them.$"

Route2_TarouPostBattle::
# 484 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 707 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 737 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 746 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}...\p"
	.string "To be honest, I'd have prefered if you'd\n"
	.string "fought me fairly. I asked for a 3-vs-3.\p"
	.string "If you underestimate me again, I won't\n"
	.string "let it slide, unlike this time.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}... Sorry.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Apology accepted.$"

Route2_Eventscript_LostInShinjiroFirstBattlePointUp::
# 758 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}Arg, I was so close!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_STRUGGLED}-huff- Your {STR_VAR_1} did pack a\n"
	.string "punch.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}But it looks like I'm not the worst out\n"
	.string "of the three of us, heh.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Next time I won't lose.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_CONFIDENT}Looking forward to that.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}... Did you just imitate Kirijo...\p"
	.string "Please don't do that again.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Pft, the look on your face.$"

Route2_Eventscript_LostInShinjiroFirstBattlePointDown::
# 769 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_STRUGGLED}Arg, I lost...\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}...\p"
	.string "Isn't that to be expected? Since you\n"
	.string "didn't want to fight me with 3 Pokémon?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}...\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}I hope you won't underestimate me next\n"
	.string "time. It wasn't fun even when I won.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}Yeah... Sorry.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_PENSIVE}Sigh.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}I'll let it slide this time. Apology\n"
	.string "accepted.$"
