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
	return


# 132 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 133 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 136 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route2/scripts.pory"
	delay_8
# 139 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 140 "data/maps/Route2/scripts.pory"
	jump_right
# 141 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 144 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 145 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 149 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 150 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 151 "data/maps/Route2/scripts.pory"
	walk_right
# 152 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 154 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 155 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 158 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 159 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 160 "data/maps/Route2/scripts.pory"
	walk_left
# 161 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 164 "data/maps/Route2/scripts.pory"
shakevertical:
# 165 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 169 "data/maps/Route2/scripts.pory"
	lock
# 170 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 171 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 172 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 175 "data/maps/Route2/scripts.pory"
	closemessage
# 176 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 177 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 178 "data/maps/Route2/scripts.pory"
	closemessage
# 179 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_ROUTE2, SusMenFightDefeated
# 180 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 181 "data/maps/Route2/scripts.pory"
	release
	return


# 184 "data/maps/Route2/scripts.pory"
lockfacing:
# 185 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 196 "data/maps/Route2/scripts.pory"
	lock
# 197 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 198 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 199 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 200 "data/maps/Route2/scripts.pory"
	delay 30
# 201 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 202 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 203 "data/maps/Route2/scripts.pory"
	closemessage
# 204 "data/maps/Route2/scripts.pory"
	delay 8
# 205 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 206 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 207 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 209 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 210 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 212 "data/maps/Route2/scripts.pory"
	closemessage
# 213 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 214 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 215 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 217 "data/maps/Route2/scripts.pory"
	closemessage
# 218 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 219 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 220 "data/maps/Route2/scripts.pory"
	waitmoncry
# 221 "data/maps/Route2/scripts.pory"
	delay 30
# 222 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 223 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 224 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 226 "data/maps/Route2/scripts.pory"
	release
	return


# 229 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 230 "data/maps/Route2/scripts.pory"
	set_visible
# 231 "data/maps/Route2/scripts.pory"
	jump_left
# 232 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 235 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 236 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 241 "data/maps/Route2/scripts.pory"
	lock
# 242 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 243 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 244 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 246 "data/maps/Route2/scripts.pory"
	delay 20
# 247 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 248 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 249 "data/maps/Route2/scripts.pory"
	delay 8
# 250 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 251 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 252 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route2/scripts.pory"
	delay 20
# 254 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 255 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 256 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 258 "data/maps/Route2/scripts.pory"
	closemessage
# 259 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 260 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 262 "data/maps/Route2/scripts.pory"
	release
	return


# 265 "data/maps/Route2/scripts.pory"
emoteasleep:
# 266 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 268 "data/maps/Route2/scripts.pory"
visible:
# 269 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 273 "data/maps/Route2/scripts.pory"
	lock
# 274 "data/maps/Route2/scripts.pory"
	delay 20
# 275 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 276 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 277 "data/maps/Route2/scripts.pory"
	closemessage
# 278 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 279 "data/maps/Route2/scripts.pory"
	delay 20
# 280 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 281 "data/maps/Route2/scripts.pory"
	waitmoncry
# 282 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 283 "data/maps/Route2/scripts.pory"
	waitse
# 284 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 285 "data/maps/Route2/scripts.pory"
	waitmoncry
# 286 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 287 "data/maps/Route2/scripts.pory"
	waitse
# 288 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 289 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 290 "data/maps/Route2/scripts.pory"
	removeobject 3
# 291 "data/maps/Route2/scripts.pory"
	removeobject 4
# 292 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 293 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 294 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 296 "data/maps/Route2/scripts.pory"
	delay 20
# 297 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 298 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 299 "data/maps/Route2/scripts.pory"
	delay 4
# 300 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 301 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 302 "data/maps/Route2/scripts.pory"
	waitse
# 303 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 304 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 306 "data/maps/Route2/scripts.pory"
	release
	return


# 310 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 311 "data/maps/Route2/scripts.pory"
	delay_16
# 312 "data/maps/Route2/scripts.pory"
	face_left
# 313 "data/maps/Route2/scripts.pory"
	delay_16
# 314 "data/maps/Route2/scripts.pory"
	face_up
# 315 "data/maps/Route2/scripts.pory"
	delay_16
# 316 "data/maps/Route2/scripts.pory"
	emote_x
# 317 "data/maps/Route2/scripts.pory"
	delay_16
# 318 "data/maps/Route2/scripts.pory"
	jump_right
# 319 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 324 "data/maps/Route2/scripts.pory"
	lock
# 325 "data/maps/Route2/scripts.pory"
	delay 40
# 326 "data/maps/Route2/scripts.pory"
	addobject 5
# 327 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 328 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 329 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 331 "data/maps/Route2/scripts.pory"
	delay 52
# 332 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 333 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route2/scripts.pory"
	waitse
# 335 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 336 "data/maps/Route2/scripts.pory"
	waitse
# 337 "data/maps/Route2/scripts.pory"
	delay 30
# 338 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 339 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 342 "data/maps/Route2/scripts.pory"
	closemessage
# 343 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 344 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 345 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 346 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route2/scripts.pory"
	delay 20
# 348 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 349 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 350 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route2/scripts.pory"
	delay 30
# 352 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 353 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 354 "data/maps/Route2/scripts.pory"
	release
	return


# 358 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 359 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 361 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 362 "data/maps/Route2/scripts.pory"
	walk_left
# 362 "data/maps/Route2/scripts.pory"
	walk_left
# 362 "data/maps/Route2/scripts.pory"
	walk_left
# 363 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 366 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 367 "data/maps/Route2/scripts.pory"
	walk_up
# 367 "data/maps/Route2/scripts.pory"
	walk_up
# 368 "data/maps/Route2/scripts.pory"
	walk_right
# 368 "data/maps/Route2/scripts.pory"
	walk_right
# 368 "data/maps/Route2/scripts.pory"
	walk_right
# 368 "data/maps/Route2/scripts.pory"
	walk_right
# 368 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 371 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 372 "data/maps/Route2/scripts.pory"
	set_visible
# 373 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 376 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 377 "data/maps/Route2/scripts.pory"
	walk_up
# 377 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 380 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 381 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 387 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 391 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 396 "data/maps/Route2/scripts.pory"
	checkplayergender
# 397 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route2_Eventscript_Yuuka_2
# 401 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro_M, Route2_YuukaDefeated
Route2_Eventscript_Yuuka_1:
# 402 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 403 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 404 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Yuuka_2:
# 398 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
	goto Route2_Eventscript_Yuuka_1


Route2_Eventscript_Kyousuke::
# 426 "data/maps/Route2/scripts.pory"
	lock
# 427 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 428 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 429 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 431 "data/maps/Route2/scripts.pory"
	closemessage
# 432 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 433 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 435 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 436 "data/maps/Route2/scripts.pory"
	closemessage
# 437 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 441 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 441 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_Eventscript_Tarou_1
# 445 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 446 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 447 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 448 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 442 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_Kyousuke
	return

Route2_Eventscript_Tarou_4:
# 441 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3


Route2_Eventscript_AkihikoOnFrame33::
# 466 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 470 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 471 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 472 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 476 "data/maps/Route2/scripts.pory"
	closemessage
# 477 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 478 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 479 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 480 "data/maps/Route2/scripts.pory"
	lock
# 481 "data/maps/Route2/scripts.pory"
	removeobject 6
# 482 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 483 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 484 "data/maps/Route2/scripts.pory"
	setobjectxy 6, 31, 21
# 485 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 486 "data/maps/Route2/scripts.pory"
	release
# 487 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 488 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 489 "data/maps/Route2/scripts.pory"
	destroyfollowernpc
# 490 "data/maps/Route2/scripts.pory"
	makecharaUnavailable CHARACTER_SHINJIRO
	end


# 494 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 495 "data/maps/Route2/scripts.pory"
	set_visible
# 496 "data/maps/Route2/scripts.pory"
	walk_down
# 496 "data/maps/Route2/scripts.pory"
	walk_down
# 497 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 500 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 501 "data/maps/Route2/scripts.pory"
	walk_right
# 502 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 506 "data/maps/Route2/scripts.pory"
	lock
# 507 "data/maps/Route2/scripts.pory"
	faceplayer
# 508 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 513 "data/maps/Route2/scripts.pory"
	closemessage
# 514 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 519 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 523 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 524 "data/maps/Route2/scripts.pory"
	delay 8
# 525 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 526 "data/maps/Route2/scripts.pory"
	waitse
# 527 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 528 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 529 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 530 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 531 "data/maps/Route2/scripts.pory"
	delay 20
# 532 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 534 "data/maps/Route2/scripts.pory"
	closemessage
# 535 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 536 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 537 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 538 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 548 "data/maps/Route2/scripts.pory"
	closemessage
# 549 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 550 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 551 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 552 "data/maps/Route2/scripts.pory"
	delay 30
# 553 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 554 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 555 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 556 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
	end


# 560 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 561 "data/maps/Route2/scripts.pory"
	walk_down
# 562 "data/maps/Route2/scripts.pory"
	face_right
# 563 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 566 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 567 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 568 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 572 "data/maps/Route2/scripts.pory"
	lock
# 573 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 574 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 575 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 576 "data/maps/Route2/scripts.pory"
	closemessage
# 577 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 582 "data/maps/Route2/scripts.pory"
	lock
# 583 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 584 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 593 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 594 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 600 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 601 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 585 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 586 "data/maps/Route2/scripts.pory"
	closemessage
# 587 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 588 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 589 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 595 "data/maps/Route2/scripts.pory"
	closemessage
# 596 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 597 "data/maps/Route2/scripts.pory"
	waitse
# 598 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 605 "data/maps/Route2/scripts.pory"
	lock
# 606 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 607 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 629 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 608 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 610 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5
# 619 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 620 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 621 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 622 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 623 "data/maps/Route2/scripts.pory"
	closemessage
# 624 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 625 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 626 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 630 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 631 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 632 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 634 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 636 "data/maps/Route2/scripts.pory"
	closemessage
# 637 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 638 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_5:
# 611 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 612 "data/maps/Route2/scripts.pory"
	closemessage
# 613 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 614 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route2/scripts.pory"
	release
	end


# 642 "data/maps/Route2/scripts.pory"
emoteangry:
# 643 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 647 "data/maps/Route2/scripts.pory"
	lock
# 648 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 649 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 650 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 651 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 652 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 653 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_InitShinjiroFirstBattle3::
# 657 "data/maps/Route2/scripts.pory"
	lock
# 658 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 659 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 661 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 662 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 663 "data/maps/Route2/scripts.pory"
	release
	return


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 667 "data/maps/Route2/scripts.pory"
	lock
# 668 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 669 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 670 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 671 "data/maps/Route2/scripts.pory"
	waitstate
# 672 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 678 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 679 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 680 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 681 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 682 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 683 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 684 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 685 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 686 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 687 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 688 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 689 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 690 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 691 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 693 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 673 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 674 "data/maps/Route2/scripts.pory"
	closemessage
# 675 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 701 "data/maps/Route2/scripts.pory"
	lock
# 702 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 703 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 707 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 711 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 717 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 718 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 719 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 721 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 722 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 704 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 705 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 708 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 709 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 712 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 713 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 714 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 711 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 707 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 703 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 768 "data/maps/Route2/scripts.pory"
	lock
# 769 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 770 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 771 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 772 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 773 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 774 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 775 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 779 "data/maps/Route2/scripts.pory"
	closemessage
# 780 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 781 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 784 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 785 "data/maps/Route2/scripts.pory"
	walk_down
# 786 "data/maps/Route2/scripts.pory"
	walk_left
# 786 "data/maps/Route2/scripts.pory"
	walk_left
# 786 "data/maps/Route2/scripts.pory"
	walk_left
# 787 "data/maps/Route2/scripts.pory"
	walk_up
# 787 "data/maps/Route2/scripts.pory"
	walk_up
# 787 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 791 "data/maps/Route2/scripts.pory"
	lock
# 792 "data/maps/Route2/scripts.pory"
	faceplayer
# 793 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 794 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 818 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 826 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 828 "data/maps/Route2/scripts.pory"
	closemessage
# 829 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF, NOP_PARTY_SCREEN
# 830 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 795 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 796 "data/maps/Route2/scripts.pory"
	closemessage
# 797 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 810 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 811 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 812 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 813 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 814 "data/maps/Route2/scripts.pory"
	closemessage
# 815 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 819 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
# 821 "data/maps/Route2/scripts.pory"
	closemessage
# 822 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_6:
# 798 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 799 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 800 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 802 "data/maps/Route2/scripts.pory"
	closemessage
# 803 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 804 "data/maps/Route2/scripts.pory"
	waitmoncry
# 805 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 806 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 831 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 832 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 833 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 834 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 835 "data/maps/Route2/scripts.pory"
	closemessage
# 836 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 837 "data/maps/Route2/scripts.pory"
	release
	end


# 842 "data/maps/Route2/scripts.pory"
emotecry:
# 843 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

Route2_Eventscript_ShinjiroFirstBattleWarning::
# 847 "data/maps/Route2/scripts.pory"
	lock
# 848 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0, MSGBOX_YESNO
# 849 "data/maps/Route2/scripts.pory"
	closemessage
# 850 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_ShinjiroFirstBattleWarning_2
Route2_Eventscript_ShinjiroFirstBattleWarning_1:
# 854 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_ShinjiroFirstBattleWarning_2:
# 851 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 852 "data/maps/Route2/scripts.pory"
	waitmovement 0
	goto Route2_Eventscript_ShinjiroFirstBattleWarning_1


Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru::
# 859 "data/maps/Route2/scripts.pory"
	lock
# 860 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0
# 861 "data/maps/Route2/scripts.pory"
	closemessage
# 862 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 863 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 864 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_MitsuruApproachingRoute2House::
# 869 "data/maps/Route2/scripts.pory"
	lock
# 870 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0
# 871 "data/maps/Route2/scripts.pory"
	waitmovement
# 872 "data/maps/Route2/scripts.pory"
	delay 40
# 873 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1
# 874 "data/maps/Route2/scripts.pory"
	waitmovement
# 875 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_0
# 878 "data/maps/Route2/scripts.pory"
	closemessage
# 879 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 880 "data/maps/Route2/scripts.pory"
	waitmovement
# 881 "data/maps/Route2/scripts.pory"
	delay 40
# 882 "data/maps/Route2/scripts.pory"
	playse SE_CLICK
# 883 "data/maps/Route2/scripts.pory"
	waitse
# 884 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruApproachingRoute2House_Text_1
# 885 "data/maps/Route2/scripts.pory"
	closemessage
# 886 "data/maps/Route2/scripts.pory"
	delay 20
# 887 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 888 "data/maps/Route2/scripts.pory"
	waitmovement
# 889 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 890 "data/maps/Route2/scripts.pory"
	warpsilent MAP_ROUTE2_HOUSE, 7, 12
# 891 "data/maps/Route2/scripts.pory"
	waitstate
	return


Route2_Eventscript_HouseLocked::
# 895 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 10
	goto_if_lt Route2_Eventscript_HouseLocked_1
	return

Route2_Eventscript_HouseLocked_1:
# 896 "data/maps/Route2/scripts.pory"
	lock
# 897 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_HouseLocked_Text_0
# 898 "data/maps/Route2/scripts.pory"
	closemessage
# 899 "data/maps/Route2/scripts.pory"
	release
	end


# 549 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 549 "data/maps/Route2/scripts.pory"
	walk_right
# 549 "data/maps/Route2/scripts.pory"
	walk_right
# 549 "data/maps/Route2/scripts.pory"
	walk_right
# 549 "data/maps/Route2/scripts.pory"
	walk_right
# 549 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 550 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 550 "data/maps/Route2/scripts.pory"
	walk_right
# 550 "data/maps/Route2/scripts.pory"
	walk_right
# 550 "data/maps/Route2/scripts.pory"
	walk_right
# 550 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 553 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 553 "data/maps/Route2/scripts.pory"
	walk_left
# 553 "data/maps/Route2/scripts.pory"
	walk_left
# 553 "data/maps/Route2/scripts.pory"
	walk_left
# 553 "data/maps/Route2/scripts.pory"
	walk_left
# 553 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 658 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 658 "data/maps/Route2/scripts.pory"
	walk_up
# 658 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

# 870 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_0:
# 870 "data/maps/Route2/scripts.pory"
	player_run_left
# 870 "data/maps/Route2/scripts.pory"
	player_run_left
# 870 "data/maps/Route2/scripts.pory"
	player_run_left
# 870 "data/maps/Route2/scripts.pory"
	walk_left
# 870 "data/maps/Route2/scripts.pory"
	walk_left
# 870 "data/maps/Route2/scripts.pory"
	walk_slow_left
# 870 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 873 "data/maps/Route2/scripts.pory"
Route2_Eventscript_MitsuruApproachingRoute2House_Movement_1:
# 873 "data/maps/Route2/scripts.pory"
	walk_up
# 873 "data/maps/Route2/scripts.pory"
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
# 173 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 202 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 211 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 216 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 257 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 275 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 276 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 339 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 380 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 387 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 402 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 427 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 430 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 434 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 435 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 472 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 508 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 532 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you couldn't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 538 "data/maps/Route2/scripts.pory"
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
# 575 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 583 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 585 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 593 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 608 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 611 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 622 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 634 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 673 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 775 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 793 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 795 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 800 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 813 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 819 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 826 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 834 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0:
# 848 "data/maps/Route2/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

Route2_Eventscript_NotTheWayToSunshineMeadow_Mitsuru_Text_0:
# 860 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(There's no time to wander around in\n"
	.string "Sunshine Town right now.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_0:
# 875 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Yuuma-san said the key is under the\n"
	.string "pot of plant outside of the house.)\p"
	.string "(Let's see..........)\p"
	.string "(Found it.)$"

Route2_Eventscript_MitsuruApproachingRoute2House_Text_1:
# 884 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Please excuse my intrusion.$"

Route2_Eventscript_HouseLocked_Text_0:
# 897 "data/maps/Route2/scripts.pory"
	.string "It's locked.$"

SusMenFightIntro::
# 187 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 191 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 408 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaIntro_M::
# 412 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Let's have a quick\n"
	.string "battle!\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_STRUGGLED}(It's so late, you should be at home!)$"

Route2_YuukaDefeated::
# 417 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 421 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 453 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 457 "data/maps/Route2/scripts.pory"
	.string "Tch. These Pokémon suck. I shouldn't\n"
	.string "have bought them.$"

Route2_TarouPostBattle::
# 461 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 696 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 725 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 734 "data/maps/Route2/scripts.pory"
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
# 746 "data/maps/Route2/scripts.pory"
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
# 757 "data/maps/Route2/scripts.pory"
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
