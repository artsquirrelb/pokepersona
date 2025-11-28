Route2_MapScripts::
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route2_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 50 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route2/scripts.pory"
	setmetatile 10, 11, 0x2C2, TRUE
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 18 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 24 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 26
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 27 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 31 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 35 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 41 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 45 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
# 45 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 19 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 21 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 25 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 28 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 29 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 10, 12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 32 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 33 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 36 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 35 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 39 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 13, 13
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 42 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 43 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 46 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_4
# 47 "data/maps/Route2/scripts.pory"
	setobjectxyperm TAROU, 7, 18
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 45 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnWarp25
# 9 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnWarp33
# 10 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnWarp40
# 12 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_Eventscript_MitsuruOnWarp8
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 52 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
# 53 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnFrame40
# 55 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 8, Route2_Eventscript_MitsuruOnFrame8
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 60 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 61 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 62 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 63 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 64 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 65 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 66 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 70 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 74 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_MitsuruOnWarp8::
# 78 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


Route2_Eventscript_AkihikoOnFrame25::
# 82 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_MitsuruOnFrame8::
# 86 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruApproachingRoute2House
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 90 "data/maps/Route2/scripts.pory"
	lock
# 91 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 92 "data/maps/Route2/scripts.pory"
	delay 8
# 93 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 94 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 95 "data/maps/Route2/scripts.pory"
	delay 8
# 96 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 97 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 98 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 99 "data/maps/Route2/scripts.pory"
	delay 20
# 100 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 101 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 102 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 105 "data/maps/Route2/scripts.pory"
	closemessage
# 106 "data/maps/Route2/scripts.pory"
	delay 30
# 107 "data/maps/Route2/scripts.pory"
	playbgm MUS_P3R_FEARFUL_EXPERIENCE, TRUE
# 108 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 109 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 110 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 112 "data/maps/Route2/scripts.pory"
	closemessage
# 113 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 114 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 115 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 118 "data/maps/Route2/scripts.pory"
	closemessage
# 119 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 120 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 122 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 123 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 124 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route2/scripts.pory"
	delay 20
# 126 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 127 "data/maps/Route2/scripts.pory"
	closemessage
# 128 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 129 "data/maps/Route2/scripts.pory"
	release
	end


# 133 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 134 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 137 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route2/scripts.pory"
	delay_8
# 140 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 141 "data/maps/Route2/scripts.pory"
	jump_right
# 142 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 145 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 146 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 150 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 151 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 152 "data/maps/Route2/scripts.pory"
	walk_right
# 153 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 155 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 156 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 159 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 160 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 161 "data/maps/Route2/scripts.pory"
	walk_left
# 162 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 165 "data/maps/Route2/scripts.pory"
shakevertical:
# 166 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 170 "data/maps/Route2/scripts.pory"
	lock
# 171 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 172 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 173 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 176 "data/maps/Route2/scripts.pory"
	closemessage
# 177 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 178 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 179 "data/maps/Route2/scripts.pory"
	closemessage
# 180 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_ROUTE2, SusMenFightDefeated
# 181 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 182 "data/maps/Route2/scripts.pory"
	release
	end


# 186 "data/maps/Route2/scripts.pory"
lockfacing:
# 187 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 198 "data/maps/Route2/scripts.pory"
	lock
# 199 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 200 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 201 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 202 "data/maps/Route2/scripts.pory"
	delay 30
# 203 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 204 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 205 "data/maps/Route2/scripts.pory"
	closemessage
# 206 "data/maps/Route2/scripts.pory"
	delay 8
# 207 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 208 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 209 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 211 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 212 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 214 "data/maps/Route2/scripts.pory"
	closemessage
# 215 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 216 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 217 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 219 "data/maps/Route2/scripts.pory"
	closemessage
# 220 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 221 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 222 "data/maps/Route2/scripts.pory"
	waitmoncry
# 223 "data/maps/Route2/scripts.pory"
	delay 30
# 224 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 225 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 226 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 228 "data/maps/Route2/scripts.pory"
	release
	end


# 232 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 233 "data/maps/Route2/scripts.pory"
	set_visible
# 234 "data/maps/Route2/scripts.pory"
	jump_left
# 235 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 238 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 239 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 244 "data/maps/Route2/scripts.pory"
	lock
# 245 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 246 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 247 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 249 "data/maps/Route2/scripts.pory"
	delay 20
# 250 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 251 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 252 "data/maps/Route2/scripts.pory"
	delay 8
# 253 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 254 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 255 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route2/scripts.pory"
	delay 20
# 257 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 258 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 259 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 261 "data/maps/Route2/scripts.pory"
	closemessage
# 262 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 263 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 265 "data/maps/Route2/scripts.pory"
	release
	end


# 269 "data/maps/Route2/scripts.pory"
emoteasleep:
# 270 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 272 "data/maps/Route2/scripts.pory"
visible:
# 273 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 277 "data/maps/Route2/scripts.pory"
	lock
# 278 "data/maps/Route2/scripts.pory"
	delay 20
# 279 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 280 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 281 "data/maps/Route2/scripts.pory"
	closemessage
# 282 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 283 "data/maps/Route2/scripts.pory"
	delay 20
# 284 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 285 "data/maps/Route2/scripts.pory"
	waitmoncry
# 286 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 287 "data/maps/Route2/scripts.pory"
	waitse
# 288 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 289 "data/maps/Route2/scripts.pory"
	waitmoncry
# 290 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 291 "data/maps/Route2/scripts.pory"
	waitse
# 292 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 293 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 294 "data/maps/Route2/scripts.pory"
	removeobject 3
# 295 "data/maps/Route2/scripts.pory"
	removeobject 4
# 296 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 297 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 298 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 300 "data/maps/Route2/scripts.pory"
	delay 20
# 301 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 302 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 303 "data/maps/Route2/scripts.pory"
	delay 4
# 304 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 305 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 306 "data/maps/Route2/scripts.pory"
	waitse
# 307 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 308 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 310 "data/maps/Route2/scripts.pory"
	release
	end


# 314 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 315 "data/maps/Route2/scripts.pory"
	delay_16
# 316 "data/maps/Route2/scripts.pory"
	face_left
# 317 "data/maps/Route2/scripts.pory"
	delay_16
# 318 "data/maps/Route2/scripts.pory"
	face_up
# 319 "data/maps/Route2/scripts.pory"
	delay_16
# 320 "data/maps/Route2/scripts.pory"
	emote_x
# 321 "data/maps/Route2/scripts.pory"
	delay_16
# 322 "data/maps/Route2/scripts.pory"
	jump_right
# 323 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 328 "data/maps/Route2/scripts.pory"
	lock
# 329 "data/maps/Route2/scripts.pory"
	delay 40
# 330 "data/maps/Route2/scripts.pory"
	addobject 5
# 331 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 332 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 333 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 335 "data/maps/Route2/scripts.pory"
	delay 52
# 336 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 337 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route2/scripts.pory"
	waitse
# 339 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 340 "data/maps/Route2/scripts.pory"
	waitse
# 341 "data/maps/Route2/scripts.pory"
	delay 30
# 342 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 343 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 346 "data/maps/Route2/scripts.pory"
	closemessage
# 347 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 348 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 349 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 350 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route2/scripts.pory"
	delay 20
# 352 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 353 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 354 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route2/scripts.pory"
	delay 30
# 356 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 357 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 358 "data/maps/Route2/scripts.pory"
	release
	end


# 362 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 363 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 365 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 366 "data/maps/Route2/scripts.pory"
	walk_left
# 366 "data/maps/Route2/scripts.pory"
	walk_left
# 366 "data/maps/Route2/scripts.pory"
	walk_left
# 367 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 370 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 371 "data/maps/Route2/scripts.pory"
	walk_up
# 371 "data/maps/Route2/scripts.pory"
	walk_up
# 372 "data/maps/Route2/scripts.pory"
	walk_right
# 372 "data/maps/Route2/scripts.pory"
	walk_right
# 372 "data/maps/Route2/scripts.pory"
	walk_right
# 372 "data/maps/Route2/scripts.pory"
	walk_right
# 372 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 375 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 376 "data/maps/Route2/scripts.pory"
	set_visible
# 377 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 380 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 381 "data/maps/Route2/scripts.pory"
	walk_up
# 381 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 384 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 385 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 391 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 395 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 400 "data/maps/Route2/scripts.pory"
	checkplayergender
# 401 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_Eventscript_Yuuka_2
# 405 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro_M, Route2_YuukaDefeated
Route2_Eventscript_Yuuka_1:
# 406 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 407 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 408 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Yuuka_2:
# 402 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
	goto Route2_Eventscript_Yuuka_1


Route2_Eventscript_Kyousuke::
# 430 "data/maps/Route2/scripts.pory"
	lock
# 431 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 432 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 433 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 435 "data/maps/Route2/scripts.pory"
	closemessage
# 436 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 437 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 438 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 439 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 440 "data/maps/Route2/scripts.pory"
	closemessage
# 441 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 445 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 445 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_Eventscript_Tarou_1
# 449 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 450 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 451 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 452 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 446 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_Kyousuke
	return

Route2_Eventscript_Tarou_4:
# 445 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3


Route2_Eventscript_AkihikoOnFrame33::
# 470 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 474 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 475 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 480 "data/maps/Route2/scripts.pory"
	closemessage
# 481 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 482 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 483 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 484 "data/maps/Route2/scripts.pory"
	lock
# 485 "data/maps/Route2/scripts.pory"
	removeobject 6
# 486 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 487 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 488 "data/maps/Route2/scripts.pory"
	setobjectxy 6, 31, 21
# 489 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 490 "data/maps/Route2/scripts.pory"
	release
# 491 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 492 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 493 "data/maps/Route2/scripts.pory"
	destroyfollowernpc
# 494 "data/maps/Route2/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	end


# 498 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 499 "data/maps/Route2/scripts.pory"
	set_visible
# 500 "data/maps/Route2/scripts.pory"
	walk_down
# 500 "data/maps/Route2/scripts.pory"
	walk_down
# 501 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 504 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 505 "data/maps/Route2/scripts.pory"
	walk_right
# 506 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 510 "data/maps/Route2/scripts.pory"
	lock
# 511 "data/maps/Route2/scripts.pory"
	faceplayer
# 512 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 517 "data/maps/Route2/scripts.pory"
	closemessage
# 518 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 523 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 527 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 528 "data/maps/Route2/scripts.pory"
	delay 8
# 529 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 530 "data/maps/Route2/scripts.pory"
	waitse
# 531 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 533 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 534 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 535 "data/maps/Route2/scripts.pory"
	delay 20
# 536 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 538 "data/maps/Route2/scripts.pory"
	closemessage
# 539 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 540 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 541 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 542 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 552 "data/maps/Route2/scripts.pory"
	closemessage
# 553 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 554 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 555 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 556 "data/maps/Route2/scripts.pory"
	delay 30
# 557 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 558 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 560 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
	end


# 564 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 565 "data/maps/Route2/scripts.pory"
	walk_down
# 566 "data/maps/Route2/scripts.pory"
	face_right
# 567 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 570 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 571 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 572 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 576 "data/maps/Route2/scripts.pory"
	lock
# 577 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 578 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 579 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 580 "data/maps/Route2/scripts.pory"
	closemessage
# 581 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 586 "data/maps/Route2/scripts.pory"
	lock
# 587 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 588 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 597 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 598 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 604 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 605 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 589 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 590 "data/maps/Route2/scripts.pory"
	closemessage
# 591 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 592 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 599 "data/maps/Route2/scripts.pory"
	closemessage
# 600 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 601 "data/maps/Route2/scripts.pory"
	waitse
# 602 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 610 "data/maps/Route2/scripts.pory"
	lock
# 611 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 612 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 634 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 613 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 615 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5
# 624 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 625 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 626 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 628 "data/maps/Route2/scripts.pory"
	closemessage
# 629 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 630 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 631 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 635 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 636 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 637 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 639 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 641 "data/maps/Route2/scripts.pory"
	closemessage
# 642 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 643 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5:
# 616 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 617 "data/maps/Route2/scripts.pory"
	closemessage
# 618 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 619 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route2/scripts.pory"
	release
	end


# 647 "data/maps/Route2/scripts.pory"
emoteangry:
# 648 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 652 "data/maps/Route2/scripts.pory"
	lock
# 653 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 654 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 655 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 656 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 657 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 658 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_InitShinjiroFirstBattle3::
# 662 "data/maps/Route2/scripts.pory"
	lock
# 663 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 664 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 666 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 667 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 668 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 672 "data/maps/Route2/scripts.pory"
	lock
# 673 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 674 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 675 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 676 "data/maps/Route2/scripts.pory"
	waitstate
# 677 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 683 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 684 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 685 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 686 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 687 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 688 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 689 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 690 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 691 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 692 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 693 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 694 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 695 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 696 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 698 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 678 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 679 "data/maps/Route2/scripts.pory"
	closemessage
# 680 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 706 "data/maps/Route2/scripts.pory"
	lock
# 707 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 708 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 712 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 716 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 722 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 723 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 724 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 726 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 727 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 709 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 710 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 713 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 714 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 717 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 718 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 719 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 716 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 712 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 708 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 773 "data/maps/Route2/scripts.pory"
	lock
# 774 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 775 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 776 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 777 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 778 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 779 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 780 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 784 "data/maps/Route2/scripts.pory"
	closemessage
# 785 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 786 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 789 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 790 "data/maps/Route2/scripts.pory"
	walk_down
# 791 "data/maps/Route2/scripts.pory"
	walk_left
# 791 "data/maps/Route2/scripts.pory"
	walk_left
# 791 "data/maps/Route2/scripts.pory"
	walk_left
# 792 "data/maps/Route2/scripts.pory"
	walk_up
# 792 "data/maps/Route2/scripts.pory"
	walk_up
# 792 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 796 "data/maps/Route2/scripts.pory"
	lock
# 797 "data/maps/Route2/scripts.pory"
	faceplayer
# 798 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 799 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 823 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 831 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 833 "data/maps/Route2/scripts.pory"
	closemessage
# 834 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF, NOP_PARTY_SCREEN
# 835 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 800 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 801 "data/maps/Route2/scripts.pory"
	closemessage
# 802 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 815 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 816 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 817 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 818 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 819 "data/maps/Route2/scripts.pory"
	closemessage
# 820 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 824 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
# 826 "data/maps/Route2/scripts.pory"
	closemessage
# 827 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_6:
# 803 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 804 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 805 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 807 "data/maps/Route2/scripts.pory"
	closemessage
# 808 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 809 "data/maps/Route2/scripts.pory"
	waitmoncry
# 810 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 811 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 836 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 837 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 838 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 839 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 840 "data/maps/Route2/scripts.pory"
	closemessage
# 841 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 842 "data/maps/Route2/scripts.pory"
	release
	end


# 847 "data/maps/Route2/scripts.pory"
emotecry:
# 848 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

Route2_Eventscript_ShinjiroFirstBattleWarning::
# 852 "data/maps/Route2/scripts.pory"
	lock
# 853 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0, MSGBOX_YESNO
# 854 "data/maps/Route2/scripts.pory"
	closemessage
# 855 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_ShinjiroFirstBattleWarning_2
Route2_Eventscript_ShinjiroFirstBattleWarning_1:
# 859 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_ShinjiroFirstBattleWarning_2:
# 856 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 857 "data/maps/Route2/scripts.pory"
	waitmovement 0
	goto Route2_Eventscript_ShinjiroFirstBattleWarning_1


Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 864 "data/maps/Route2/scripts.pory"
	lock
# 865 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 866 "data/maps/Route2/scripts.pory"
	closemessage
# 867 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 868 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 869 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_MitsuruApproachingRoute2House::
# 874 "data/maps/Route2/scripts.pory"
	lock
# 875 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0
# 876 "data/maps/Route2/scripts.pory"
	waitmovement
# 877 "data/maps/Route2/scripts.pory"
	delay 40
# 878 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1
# 879 "data/maps/Route2/scripts.pory"
	waitmovement
# 880 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_0
# 883 "data/maps/Route2/scripts.pory"
	closemessage
# 884 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 885 "data/maps/Route2/scripts.pory"
	waitmovement
# 886 "data/maps/Route2/scripts.pory"
	delay 40
# 887 "data/maps/Route2/scripts.pory"
	playse SE_CLICK
# 888 "data/maps/Route2/scripts.pory"
	waitse
# 889 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_1
# 890 "data/maps/Route2/scripts.pory"
	closemessage
# 891 "data/maps/Route2/scripts.pory"
	delay 20
# 892 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 893 "data/maps/Route2/scripts.pory"
	waitmovement
# 894 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 895 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 7, 12
# 896 "data/maps/Route2/scripts.pory"
	waitstate
	return


Route2_Eventscript_HouseLocked::
# 900 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt Route2_Eventscript_HouseLocked_1
	return

Route2_Eventscript_HouseLocked_1:
# 901 "data/maps/Route2/scripts.pory"
	lock
# 902 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_HouseLocked_Text_0
# 903 "data/maps/Route2/scripts.pory"
	closemessage
# 904 "data/maps/Route2/scripts.pory"
	release
	end


# 553 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 553 "data/maps/Route2/scripts.pory"
	walk_right
# 553 "data/maps/Route2/scripts.pory"
	walk_right
# 553 "data/maps/Route2/scripts.pory"
	walk_right
# 553 "data/maps/Route2/scripts.pory"
	walk_right
# 553 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 554 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 554 "data/maps/Route2/scripts.pory"
	walk_right
# 554 "data/maps/Route2/scripts.pory"
	walk_right
# 554 "data/maps/Route2/scripts.pory"
	walk_right
# 554 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 557 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 557 "data/maps/Route2/scripts.pory"
	walk_left
# 557 "data/maps/Route2/scripts.pory"
	walk_left
# 557 "data/maps/Route2/scripts.pory"
	walk_left
# 557 "data/maps/Route2/scripts.pory"
	walk_left
# 557 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 663 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 663 "data/maps/Route2/scripts.pory"
	walk_up
# 663 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 875 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0:
# 875 "data/maps/Route2/scripts.pory"
	player_run_left
# 875 "data/maps/Route2/scripts.pory"
	player_run_left
# 875 "data/maps/Route2/scripts.pory"
	player_run_left
# 875 "data/maps/Route2/scripts.pory"
	walk_left
# 875 "data/maps/Route2/scripts.pory"
	walk_left
# 875 "data/maps/Route2/scripts.pory"
	walk_slow_left
# 875 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 878 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1:
# 878 "data/maps/Route2/scripts.pory"
	walk_up
# 878 "data/maps/Route2/scripts.pory"
	face_right
	step_end

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 103 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 108 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 111 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 113 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 116 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 126 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 174 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 204 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 213 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 218 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 260 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 279 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 280 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 343 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 384 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 391 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 406 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 431 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 434 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 438 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 439 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 476 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 512 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 536 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you couldn't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 542 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aki.\p"
	.string "Yep, I keep thinking of what Kirijo said.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Humans who can use Pokémon's ability,\n"
	.string "huh...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Heh, guess we were thinking the same\n"
	.string "thing.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Well, there's not much we can do until we\n"
	.string "see for ourselves if what she said was\l"
	.string "true.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Since we're both not feeling sleepy, how\n"
	.string "about a battle?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}I was just about to suggest that.\p"
	.string "The Ferroseed you used earlier against\n"
	.string "Kirijo really caught my curiosity.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}I'll show what it can do. {COLOR RED}Let's do a\n"
	.string "3-vs-3 without bag item use again.\p"
	.string "{COLOR DARK_GRAY}Step up if you're ready.$"

Route2_Eventscript_MustBattleShinjiro_Text_0:
# 579 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 587 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 589 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 597 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 613 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 616 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 627 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 639 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 678 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 780 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 798 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 800 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 805 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 818 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 824 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 831 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 839 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0:
# 853 "data/maps/Route2/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 865 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(There's no time to wander around in\n"
	.string "Sunshine Town right now.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_0:
# 880 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Yuuma-san said the key is under the\n"
	.string "pot of plant outside of the house.)\p"
	.string "(Let's see..........)\p"
	.string "(Found it.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_1:
# 889 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please excuse my intrusion.$"

Route2_Eventscript_HouseLocked_Text_0:
# 902 "data/maps/Route2/scripts.pory"
	.string "It's locked.$"

SusMenFightIntro::
# 189 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 193 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 412 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaIntro_M::
# 416 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Let's have a quick\n"
	.string "battle!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(It's so late, you should be at home!)$"

Route2_YuukaDefeated::
# 421 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 425 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 457 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 461 "data/maps/Route2/scripts.pory"
	.string "Tch. These Pokémon suck. I shouldn't\n"
	.string "have bought them.$"

Route2_TarouPostBattle::
# 465 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 701 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 730 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 739 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}...\p"
	.string "To be honest, I'd have prefered if you'd\n"
	.string "fought me fairly. I asked for a 3-vs-3.\p"
	.string "If you underestimate me again, I won't\n"
	.string "let it slide, unlike this time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}... Sorry.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Apology accepted.$"

Route2_Eventscript_LostInShinjiroFirstBattlePointUp::
# 751 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Arg, I was so close!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Your {STR_VAR_1} did pack a\n"
	.string "punch.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}But it looks like I'm not the worst out\n"
	.string "of the three of us, heh.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Next time I won't lose.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Looking forward to that.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}... Did you just imitate Kirijo...\p"
	.string "Please don't do that again.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Pft, the look on your face.$"

Route2_Eventscript_LostInShinjiroFirstBattlePointDown::
# 762 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Arg, I lost...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}...\p"
	.string "Isn't that to be expected? Since you\n"
	.string "didn't want to fight me with 3 Pokémon?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}I hope you won't underestimate me next\n"
	.string "time. It wasn't fun even when I won.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Yeah... Sorry.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Sigh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}I'll let it slide this time. Apology\n"
	.string "accepted.$"
