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
	playbgm MUS_ABNORMAL_WEATHER, TRUE
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
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
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
# 406 "data/maps/Route2/scripts.pory"
	fwdtime 0, 20
Route2_Eventscript_Yuuka_1:
# 408 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 409 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 410 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Yuuka_2:
# 402 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
	goto Route2_Eventscript_Yuuka_1


Route2_Eventscript_Kyousuke::
# 432 "data/maps/Route2/scripts.pory"
	lock
# 433 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 434 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 435 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 437 "data/maps/Route2/scripts.pory"
	closemessage
# 438 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 439 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 441 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 442 "data/maps/Route2/scripts.pory"
	closemessage
# 443 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 447 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 447 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_Eventscript_Tarou_1
# 463 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 464 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 465 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 466 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 448 "data/maps/Route2/scripts.pory"
	lock
# 449 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 450 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 451 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Tarou_Text_0
# 453 "data/maps/Route2/scripts.pory"
	closemessage
# 454 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 455 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 457 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 458 "data/maps/Route2/scripts.pory"
	closemessage
# 459 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Tarou_4:
# 447 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3


Route2_Eventscript_AkihikoOnFrame33::
# 484 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 488 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 489 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 494 "data/maps/Route2/scripts.pory"
	closemessage
# 495 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 496 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 497 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 498 "data/maps/Route2/scripts.pory"
	lock
# 499 "data/maps/Route2/scripts.pory"
	removeobject 6
# 500 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 501 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 502 "data/maps/Route2/scripts.pory"
	setobjectxy 6, 31, 21
# 503 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 504 "data/maps/Route2/scripts.pory"
	release
# 505 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 506 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 507 "data/maps/Route2/scripts.pory"
	destroyfollowernpc
# 508 "data/maps/Route2/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	end


# 512 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 513 "data/maps/Route2/scripts.pory"
	set_visible
# 514 "data/maps/Route2/scripts.pory"
	walk_down
# 514 "data/maps/Route2/scripts.pory"
	walk_down
# 515 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 518 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 519 "data/maps/Route2/scripts.pory"
	walk_right
# 520 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 524 "data/maps/Route2/scripts.pory"
	lock
# 525 "data/maps/Route2/scripts.pory"
	faceplayer
# 526 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 531 "data/maps/Route2/scripts.pory"
	closemessage
# 532 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 537 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 541 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 542 "data/maps/Route2/scripts.pory"
	delay 8
# 543 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 544 "data/maps/Route2/scripts.pory"
	waitse
# 545 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 546 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 547 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 548 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route2/scripts.pory"
	delay 20
# 550 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 552 "data/maps/Route2/scripts.pory"
	closemessage
# 553 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 554 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 555 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 556 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 566 "data/maps/Route2/scripts.pory"
	closemessage
# 567 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 568 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 569 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 570 "data/maps/Route2/scripts.pory"
	delay 30
# 571 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 572 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 574 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
# 575 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


# 578 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 579 "data/maps/Route2/scripts.pory"
	walk_down
# 580 "data/maps/Route2/scripts.pory"
	face_right
# 581 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 584 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 585 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 586 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 590 "data/maps/Route2/scripts.pory"
	lock
# 591 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 592 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 594 "data/maps/Route2/scripts.pory"
	closemessage
# 595 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 600 "data/maps/Route2/scripts.pory"
	lock
# 601 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 602 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 611 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 612 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 618 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 619 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 603 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 604 "data/maps/Route2/scripts.pory"
	closemessage
# 605 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 606 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 607 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 613 "data/maps/Route2/scripts.pory"
	closemessage
# 614 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 615 "data/maps/Route2/scripts.pory"
	waitse
# 616 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 624 "data/maps/Route2/scripts.pory"
	lock
# 625 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 626 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 650 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 627 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 629 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6
# 638 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 639 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 640 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 642 "data/maps/Route2/scripts.pory"
	closemessage
# 643 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 644 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 645 "data/maps/Route2/scripts.pory"
	release
# 647 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 651 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 652 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 653 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 654 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 655 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 657 "data/maps/Route2/scripts.pory"
	closemessage
# 658 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 659 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6:
# 630 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 631 "data/maps/Route2/scripts.pory"
	closemessage
# 632 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 633 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 634 "data/maps/Route2/scripts.pory"
	release
	end


# 663 "data/maps/Route2/scripts.pory"
emoteangry:
# 664 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 668 "data/maps/Route2/scripts.pory"
	lock
# 669 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 670 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 671 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 672 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 674 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle3::
# 679 "data/maps/Route2/scripts.pory"
	lock
# 680 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 681 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 682 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 683 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 684 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 685 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 690 "data/maps/Route2/scripts.pory"
	lock
# 691 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 692 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 693 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 694 "data/maps/Route2/scripts.pory"
	waitstate
# 695 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 701 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 702 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 703 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 704 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 705 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 706 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 707 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 708 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 709 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 710 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 711 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 712 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 713 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 714 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 716 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 696 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 697 "data/maps/Route2/scripts.pory"
	closemessage
# 698 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 724 "data/maps/Route2/scripts.pory"
	lock
# 725 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 726 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 730 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 734 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 740 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 741 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 742 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 744 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 745 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 727 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 728 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 731 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 732 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 735 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 736 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 737 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 734 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 730 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 726 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 791 "data/maps/Route2/scripts.pory"
	lock
# 792 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 793 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 794 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 795 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 796 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 797 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 798 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 802 "data/maps/Route2/scripts.pory"
	closemessage
# 803 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 804 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 807 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 808 "data/maps/Route2/scripts.pory"
	walk_down
# 809 "data/maps/Route2/scripts.pory"
	walk_left
# 809 "data/maps/Route2/scripts.pory"
	walk_left
# 809 "data/maps/Route2/scripts.pory"
	walk_left
# 810 "data/maps/Route2/scripts.pory"
	walk_up
# 810 "data/maps/Route2/scripts.pory"
	walk_up
# 810 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 814 "data/maps/Route2/scripts.pory"
	lock
# 815 "data/maps/Route2/scripts.pory"
	faceplayer
# 816 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 817 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 841 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 847 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 849 "data/maps/Route2/scripts.pory"
	closemessage
# 850 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF, NOP_PARTY_SCREEN
# 851 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 818 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 819 "data/maps/Route2/scripts.pory"
	closemessage
# 820 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 833 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 834 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 835 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 836 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 837 "data/maps/Route2/scripts.pory"
	closemessage
# 838 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 842 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
# 844 "data/maps/Route2/scripts.pory"
	closemessage
	return

Route2_Eventscript_Himari_6:
# 821 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 822 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 823 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 825 "data/maps/Route2/scripts.pory"
	closemessage
# 826 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 827 "data/maps/Route2/scripts.pory"
	waitmoncry
# 828 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 829 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 852 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 853 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 854 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 855 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 856 "data/maps/Route2/scripts.pory"
	closemessage
# 857 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 861 "data/maps/Route2/scripts.pory"
emotecry:
# 862 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

Route2_Eventscript_ShinjiroFirstBattleWarning::
# 866 "data/maps/Route2/scripts.pory"
	lock
# 867 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0, MSGBOX_YESNO
# 868 "data/maps/Route2/scripts.pory"
	closemessage
# 869 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_ShinjiroFirstBattleWarning_2
Route2_Eventscript_ShinjiroFirstBattleWarning_1:
# 873 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_ShinjiroFirstBattleWarning_2:
# 870 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 871 "data/maps/Route2/scripts.pory"
	waitmovement 0
	goto Route2_Eventscript_ShinjiroFirstBattleWarning_1


Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 878 "data/maps/Route2/scripts.pory"
	lock
# 879 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 880 "data/maps/Route2/scripts.pory"
	closemessage
# 881 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 882 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 883 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_MitsuruApproachingRoute2House::
# 888 "data/maps/Route2/scripts.pory"
	lock
# 889 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0
# 890 "data/maps/Route2/scripts.pory"
	waitmovement
# 891 "data/maps/Route2/scripts.pory"
	delay 40
# 892 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1
# 893 "data/maps/Route2/scripts.pory"
	waitmovement
# 894 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_0
# 897 "data/maps/Route2/scripts.pory"
	closemessage
# 898 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 899 "data/maps/Route2/scripts.pory"
	waitmovement
# 900 "data/maps/Route2/scripts.pory"
	delay 40
# 901 "data/maps/Route2/scripts.pory"
	playse SE_CLICK
# 902 "data/maps/Route2/scripts.pory"
	waitse
# 903 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_1
# 904 "data/maps/Route2/scripts.pory"
	closemessage
# 905 "data/maps/Route2/scripts.pory"
	delay 20
# 906 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 907 "data/maps/Route2/scripts.pory"
	waitmovement
# 908 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 909 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 7, 12
# 910 "data/maps/Route2/scripts.pory"
	waitstate
	return


Route2_Eventscript_HouseLocked::
# 914 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt Route2_Eventscript_HouseLocked_1
	return

Route2_Eventscript_HouseLocked_1:
# 915 "data/maps/Route2/scripts.pory"
	lock
# 916 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_HouseLocked_Text_0
# 917 "data/maps/Route2/scripts.pory"
	closemessage
# 918 "data/maps/Route2/scripts.pory"
	release
	end


# 567 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 567 "data/maps/Route2/scripts.pory"
	walk_right
# 567 "data/maps/Route2/scripts.pory"
	walk_right
# 567 "data/maps/Route2/scripts.pory"
	walk_right
# 567 "data/maps/Route2/scripts.pory"
	walk_right
# 567 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 568 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 568 "data/maps/Route2/scripts.pory"
	walk_right
# 568 "data/maps/Route2/scripts.pory"
	walk_right
# 568 "data/maps/Route2/scripts.pory"
	walk_right
# 568 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 571 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 571 "data/maps/Route2/scripts.pory"
	walk_left
# 571 "data/maps/Route2/scripts.pory"
	walk_left
# 571 "data/maps/Route2/scripts.pory"
	walk_left
# 571 "data/maps/Route2/scripts.pory"
	walk_left
# 571 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 680 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 680 "data/maps/Route2/scripts.pory"
	walk_up
# 680 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 889 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0:
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	player_run_left
# 889 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 892 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1:
# 892 "data/maps/Route2/scripts.pory"
	walk_up
# 892 "data/maps/Route2/scripts.pory"
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
# 408 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 433 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 436 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 440 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 441 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_Tarou_Text_0:
# 452 "data/maps/Route2/scripts.pory"
	.string "So you're saying these Pokémon are\n"
	.string "really strong?$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 490 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 526 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 550 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you couldn't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 556 "data/maps/Route2/scripts.pory"
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
# 593 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 601 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 603 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 611 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 627 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 630 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 641 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 655 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 696 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 798 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 816 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 818 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 823 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 836 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 842 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 847 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 855 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0:
# 867 "data/maps/Route2/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 879 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(There's no time to wander around in\n"
	.string "Sunshine Town right now.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_0:
# 894 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Yuuma-san said the key is under the\n"
	.string "pot of plant outside of the house.)\p"
	.string "(Let's see..........)\p"
	.string "(Found it.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_1:
# 903 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please excuse my intrusion.$"

Route2_Eventscript_HouseLocked_Text_0:
# 916 "data/maps/Route2/scripts.pory"
	.string "It's locked.$"

SusMenFightIntro::
# 189 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 193 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 414 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaIntro_M::
# 418 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Let's have a quick\n"
	.string "battle!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(It's so late, you should be at home!)$"

Route2_YuukaDefeated::
# 423 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 427 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 471 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 475 "data/maps/Route2/scripts.pory"
	.string "Tch. These Pokémon suck. I shouldn't\n"
	.string "have bought them.$"

Route2_TarouPostBattle::
# 479 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 719 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 748 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 757 "data/maps/Route2/scripts.pory"
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
# 769 "data/maps/Route2/scripts.pory"
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
# 780 "data/maps/Route2/scripts.pory"
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
