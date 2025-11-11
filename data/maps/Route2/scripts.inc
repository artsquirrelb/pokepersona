Route2_MapScripts::
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 44 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 11 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 17 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 26
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 20 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 24 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 28 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 31 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 34 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 15 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 14 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 18 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 21 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 22 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 10, 12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_17

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 25 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 31, 21
# 26 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 29 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 28 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 32 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 13, 13
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 35 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 36 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 39 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_4
# 40 "data/maps/Route2/scripts.pory"
	setobjectxyperm TAROU, 7, 18
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	return

Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnWarp25
# 4 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnWarp33
# 5 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnWarp40
	.2byte 0

Route2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 46 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
# 47 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnFrame40
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 52 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 53 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 54 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 55 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 56 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 57 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 58 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 62 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 66 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_AkihikoOnFrame25::
# 69 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 73 "data/maps/Route2/scripts.pory"
	lock
# 74 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 75 "data/maps/Route2/scripts.pory"
	delay 8
# 76 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 77 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 78 "data/maps/Route2/scripts.pory"
	delay 8
# 79 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 80 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 81 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 82 "data/maps/Route2/scripts.pory"
	delay 20
# 83 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 84 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 85 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 88 "data/maps/Route2/scripts.pory"
	closemessage
# 89 "data/maps/Route2/scripts.pory"
	delay 30
# 90 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 91 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 92 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 93 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 95 "data/maps/Route2/scripts.pory"
	closemessage
# 96 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 97 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 98 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 101 "data/maps/Route2/scripts.pory"
	closemessage
# 102 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 103 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 105 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 106 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 107 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route2/scripts.pory"
	delay 20
# 109 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 110 "data/maps/Route2/scripts.pory"
	closemessage
# 111 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 112 "data/maps/Route2/scripts.pory"
	release
	end


# 116 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 117 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 120 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route2/scripts.pory"
	delay_8
# 123 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 124 "data/maps/Route2/scripts.pory"
	jump_right
# 125 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 128 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 129 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 129 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 129 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 130 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 133 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 134 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 135 "data/maps/Route2/scripts.pory"
	walk_right
# 136 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 138 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 139 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 142 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 143 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 144 "data/maps/Route2/scripts.pory"
	walk_left
# 144 "data/maps/Route2/scripts.pory"
	walk_left
# 145 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 148 "data/maps/Route2/scripts.pory"
shakevertical:
# 149 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 153 "data/maps/Route2/scripts.pory"
	lock
# 154 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 155 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 156 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 159 "data/maps/Route2/scripts.pory"
	closemessage
# 160 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 161 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 162 "data/maps/Route2/scripts.pory"
	closemessage
# 163 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 164 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 165 "data/maps/Route2/scripts.pory"
	release
	end


# 169 "data/maps/Route2/scripts.pory"
lockfacing:
# 170 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 181 "data/maps/Route2/scripts.pory"
	lock
# 182 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 183 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 184 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 185 "data/maps/Route2/scripts.pory"
	delay 30
# 186 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 187 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 188 "data/maps/Route2/scripts.pory"
	closemessage
# 189 "data/maps/Route2/scripts.pory"
	delay 8
# 190 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 192 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 194 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 195 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 197 "data/maps/Route2/scripts.pory"
	closemessage
# 198 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 199 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 200 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 202 "data/maps/Route2/scripts.pory"
	closemessage
# 203 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 204 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 205 "data/maps/Route2/scripts.pory"
	waitmoncry
# 206 "data/maps/Route2/scripts.pory"
	delay 30
# 207 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 208 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 209 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 211 "data/maps/Route2/scripts.pory"
	release
	end


# 215 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 216 "data/maps/Route2/scripts.pory"
	set_visible
# 217 "data/maps/Route2/scripts.pory"
	jump_left
# 218 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 221 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 222 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 227 "data/maps/Route2/scripts.pory"
	lock
# 228 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 229 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 230 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data/maps/Route2/scripts.pory"
	delay 20
# 233 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 234 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 235 "data/maps/Route2/scripts.pory"
	delay 8
# 236 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 237 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 238 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route2/scripts.pory"
	delay 20
# 240 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 241 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 242 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 244 "data/maps/Route2/scripts.pory"
	closemessage
# 245 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 246 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 248 "data/maps/Route2/scripts.pory"
	release
	end


# 252 "data/maps/Route2/scripts.pory"
emoteasleep:
# 253 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 255 "data/maps/Route2/scripts.pory"
visible:
# 256 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 260 "data/maps/Route2/scripts.pory"
	lock
# 261 "data/maps/Route2/scripts.pory"
	delay 20
# 262 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 263 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 264 "data/maps/Route2/scripts.pory"
	closemessage
# 265 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 266 "data/maps/Route2/scripts.pory"
	delay 20
# 267 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 268 "data/maps/Route2/scripts.pory"
	waitmoncry
# 269 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 270 "data/maps/Route2/scripts.pory"
	waitse
# 271 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 272 "data/maps/Route2/scripts.pory"
	waitmoncry
# 273 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 274 "data/maps/Route2/scripts.pory"
	waitse
# 275 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 276 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 277 "data/maps/Route2/scripts.pory"
	removeobject 3
# 278 "data/maps/Route2/scripts.pory"
	removeobject 4
# 279 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 280 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 281 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 283 "data/maps/Route2/scripts.pory"
	delay 20
# 284 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 285 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 286 "data/maps/Route2/scripts.pory"
	delay 4
# 287 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 288 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 289 "data/maps/Route2/scripts.pory"
	waitse
# 290 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 291 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 293 "data/maps/Route2/scripts.pory"
	release
	end


# 297 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 298 "data/maps/Route2/scripts.pory"
	delay_16
# 299 "data/maps/Route2/scripts.pory"
	face_left
# 300 "data/maps/Route2/scripts.pory"
	delay_16
# 301 "data/maps/Route2/scripts.pory"
	face_up
# 302 "data/maps/Route2/scripts.pory"
	delay_16
# 303 "data/maps/Route2/scripts.pory"
	emote_x
# 304 "data/maps/Route2/scripts.pory"
	delay_16
# 305 "data/maps/Route2/scripts.pory"
	jump_right
# 306 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 311 "data/maps/Route2/scripts.pory"
	lock
# 312 "data/maps/Route2/scripts.pory"
	delay 40
# 313 "data/maps/Route2/scripts.pory"
	addobject 5
# 314 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 315 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 316 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 318 "data/maps/Route2/scripts.pory"
	delay 52
# 319 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 320 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route2/scripts.pory"
	waitse
# 322 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 323 "data/maps/Route2/scripts.pory"
	waitse
# 324 "data/maps/Route2/scripts.pory"
	delay 30
# 325 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 326 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 329 "data/maps/Route2/scripts.pory"
	closemessage
# 330 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 331 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 332 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 333 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route2/scripts.pory"
	delay 20
# 335 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 336 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 337 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route2/scripts.pory"
	delay 30
# 339 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 340 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 341 "data/maps/Route2/scripts.pory"
	release
	end


# 345 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 346 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 348 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 349 "data/maps/Route2/scripts.pory"
	walk_left
# 349 "data/maps/Route2/scripts.pory"
	walk_left
# 349 "data/maps/Route2/scripts.pory"
	walk_left
# 350 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 353 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 354 "data/maps/Route2/scripts.pory"
	walk_up
# 354 "data/maps/Route2/scripts.pory"
	walk_up
# 355 "data/maps/Route2/scripts.pory"
	walk_right
# 355 "data/maps/Route2/scripts.pory"
	walk_right
# 355 "data/maps/Route2/scripts.pory"
	walk_right
# 355 "data/maps/Route2/scripts.pory"
	walk_right
# 355 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 358 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 359 "data/maps/Route2/scripts.pory"
	set_visible
# 360 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 363 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 364 "data/maps/Route2/scripts.pory"
	walk_up
# 364 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 367 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 368 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 374 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 378 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 383 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 384 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 385 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 386 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Kyousuke::
# 403 "data/maps/Route2/scripts.pory"
	lock
# 404 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 405 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 406 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 408 "data/maps/Route2/scripts.pory"
	closemessage
# 409 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 410 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 412 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 413 "data/maps/Route2/scripts.pory"
	closemessage
# 414 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 418 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 418 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route2_Eventscript_Tarou_7
Route2_Eventscript_Tarou_2:
# 434 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 435 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 436 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 437 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 419 "data/maps/Route2/scripts.pory"
	lock
# 420 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 421 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 422 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Tarou_Text_0
# 424 "data/maps/Route2/scripts.pory"
	closemessage
# 425 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 426 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 428 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 429 "data/maps/Route2/scripts.pory"
	closemessage
# 430 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Tarou_4:
# 418 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3

Route2_Eventscript_Tarou_7:
# 418 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_2


Route2_Eventscript_AkihikoOnFrame33::
# 455 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 459 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 460 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 465 "data/maps/Route2/scripts.pory"
	closemessage
# 466 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 467 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 468 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 469 "data/maps/Route2/scripts.pory"
	lock
# 470 "data/maps/Route2/scripts.pory"
	removeobject 6
# 471 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 472 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 473 "data/maps/Route2/scripts.pory"
	addobject 6
# 474 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 475 "data/maps/Route2/scripts.pory"
	release
# 476 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 477 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


# 481 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 482 "data/maps/Route2/scripts.pory"
	set_visible
# 483 "data/maps/Route2/scripts.pory"
	walk_down
# 483 "data/maps/Route2/scripts.pory"
	walk_down
# 484 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 487 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 488 "data/maps/Route2/scripts.pory"
	walk_right
# 489 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 493 "data/maps/Route2/scripts.pory"
	lock
# 494 "data/maps/Route2/scripts.pory"
	faceplayer
# 495 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 500 "data/maps/Route2/scripts.pory"
	closemessage
# 501 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 506 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 510 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 511 "data/maps/Route2/scripts.pory"
	delay 8
# 512 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 513 "data/maps/Route2/scripts.pory"
	waitse
# 514 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 516 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 517 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route2/scripts.pory"
	delay 20
# 519 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 521 "data/maps/Route2/scripts.pory"
	closemessage
# 522 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 523 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 524 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 525 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 535 "data/maps/Route2/scripts.pory"
	closemessage
# 536 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 537 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 538 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 539 "data/maps/Route2/scripts.pory"
	delay 30
# 540 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 541 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 542 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 543 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
# 544 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


# 547 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 548 "data/maps/Route2/scripts.pory"
	walk_down
# 549 "data/maps/Route2/scripts.pory"
	face_right
# 550 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 553 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 554 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 555 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 559 "data/maps/Route2/scripts.pory"
	lock
# 560 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 561 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 562 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 563 "data/maps/Route2/scripts.pory"
	closemessage
# 564 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 569 "data/maps/Route2/scripts.pory"
	lock
# 570 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 571 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 580 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 581 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 587 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 588 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 572 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 573 "data/maps/Route2/scripts.pory"
	closemessage
# 574 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 575 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 576 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 582 "data/maps/Route2/scripts.pory"
	closemessage
# 583 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 584 "data/maps/Route2/scripts.pory"
	waitse
# 585 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 593 "data/maps/Route2/scripts.pory"
	lock
# 594 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 595 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 619 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 596 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 598 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6
# 607 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 608 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 609 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 610 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 611 "data/maps/Route2/scripts.pory"
	closemessage
# 612 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 613 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 614 "data/maps/Route2/scripts.pory"
	release
# 616 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 620 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 621 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 622 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 624 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 626 "data/maps/Route2/scripts.pory"
	closemessage
# 627 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 628 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6:
# 599 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 600 "data/maps/Route2/scripts.pory"
	closemessage
# 601 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 602 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 603 "data/maps/Route2/scripts.pory"
	release
	end


# 632 "data/maps/Route2/scripts.pory"
emoteangry:
# 633 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 637 "data/maps/Route2/scripts.pory"
	lock
# 638 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 639 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 640 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 641 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 642 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 643 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle3::
# 648 "data/maps/Route2/scripts.pory"
	lock
# 649 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 650 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 651 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 652 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 653 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 654 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 659 "data/maps/Route2/scripts.pory"
	lock
# 660 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 661 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 662 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 663 "data/maps/Route2/scripts.pory"
	waitstate
# 664 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 670 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 671 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 672 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 673 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 674 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 675 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 676 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 677 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 678 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 679 "data/maps/Route2/scripts.pory"
	fadenewbgm MUS_OCEANIC_MUSEUM
# 680 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 681 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 682 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 683 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 685 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 665 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 666 "data/maps/Route2/scripts.pory"
	closemessage
# 667 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 693 "data/maps/Route2/scripts.pory"
	lock
# 694 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 695 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 699 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 703 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 709 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 710 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 711 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 713 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 714 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 696 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 697 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 700 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 701 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 704 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 705 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 706 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 703 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 699 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 695 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 760 "data/maps/Route2/scripts.pory"
	lock
# 761 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 762 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 763 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 764 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 765 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 766 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 767 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 771 "data/maps/Route2/scripts.pory"
	closemessage
# 772 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 773 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 776 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 777 "data/maps/Route2/scripts.pory"
	walk_down
# 778 "data/maps/Route2/scripts.pory"
	walk_left
# 778 "data/maps/Route2/scripts.pory"
	walk_left
# 778 "data/maps/Route2/scripts.pory"
	walk_left
# 779 "data/maps/Route2/scripts.pory"
	walk_up
# 779 "data/maps/Route2/scripts.pory"
	walk_up
# 779 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 783 "data/maps/Route2/scripts.pory"
	lock
# 784 "data/maps/Route2/scripts.pory"
	faceplayer
# 785 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 786 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 810 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 815 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 817 "data/maps/Route2/scripts.pory"
	closemessage
# 818 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF, NOP_PARTY_SCREEN
# 819 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 787 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 788 "data/maps/Route2/scripts.pory"
	closemessage
# 789 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 802 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 803 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 804 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 805 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 806 "data/maps/Route2/scripts.pory"
	closemessage
# 807 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 811 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
	return

Route2_Eventscript_Himari_6:
# 790 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 791 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 792 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 794 "data/maps/Route2/scripts.pory"
	closemessage
# 795 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 796 "data/maps/Route2/scripts.pory"
	waitmoncry
# 797 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 798 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 820 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 821 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 822 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 823 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 824 "data/maps/Route2/scripts.pory"
	closemessage
# 825 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 829 "data/maps/Route2/scripts.pory"
emotecry:
# 830 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

Route2_Eventscript_ShinjiroFirstBattleWarning::
# 834 "data/maps/Route2/scripts.pory"
	lock
# 835 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0, MSGBOX_YESNO
# 836 "data/maps/Route2/scripts.pory"
	closemessage
# 837 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_ShinjiroFirstBattleWarning_2
Route2_Eventscript_ShinjiroFirstBattleWarning_1:
# 841 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_ShinjiroFirstBattleWarning_2:
# 838 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 839 "data/maps/Route2/scripts.pory"
	waitmovement 0
	goto Route2_Eventscript_ShinjiroFirstBattleWarning_1


# 536 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 536 "data/maps/Route2/scripts.pory"
	walk_right
# 536 "data/maps/Route2/scripts.pory"
	walk_right
# 536 "data/maps/Route2/scripts.pory"
	walk_right
# 536 "data/maps/Route2/scripts.pory"
	walk_right
# 536 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 537 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 537 "data/maps/Route2/scripts.pory"
	walk_right
# 537 "data/maps/Route2/scripts.pory"
	walk_right
# 537 "data/maps/Route2/scripts.pory"
	walk_right
# 537 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 540 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 540 "data/maps/Route2/scripts.pory"
	walk_left
# 540 "data/maps/Route2/scripts.pory"
	walk_left
# 540 "data/maps/Route2/scripts.pory"
	walk_left
# 540 "data/maps/Route2/scripts.pory"
	walk_left
# 540 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 649 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 649 "data/maps/Route2/scripts.pory"
	walk_up
# 649 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 86 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 91 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 94 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 96 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 99 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 109 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 157 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 187 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 196 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 201 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 243 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 262 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 263 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 326 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 367 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 374 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 384 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 404 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 407 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 411 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 412 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_Tarou_Text_0:
# 423 "data/maps/Route2/scripts.pory"
	.string "So you're saying these Pokémon are\n"
	.string "really strong?$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 461 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 495 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 519 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you coudln't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 525 "data/maps/Route2/scripts.pory"
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
# 562 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 570 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 572 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 580 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 596 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 599 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 610 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 624 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 665 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 767 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 785 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 787 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 792 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 805 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 811 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 815 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 823 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

Route2_Eventscript_ShinjiroFirstBattleWarning_Text_0:
# 835 "data/maps/Route2/scripts.pory"
	.string "{COLOR RED}Important battle ahead. Do you want to\n"
	.string "proceed?$"

SusMenFightIntro::
# 172 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 176 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 390 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 394 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 398 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 442 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 446 "data/maps/Route2/scripts.pory"
	.string "Tch. These Pokémon suck. I shouldn't\n"
	.string "have bought them.$"

Route2_TarouPostBattle::
# 450 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 688 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 717 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 726 "data/maps/Route2/scripts.pory"
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
# 738 "data/maps/Route2/scripts.pory"
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
# 749 "data/maps/Route2/scripts.pory"
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
