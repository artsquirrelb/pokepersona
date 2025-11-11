Route2_MapScripts::
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 40 "data/maps/Route2/scripts.pory"
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
# 35 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31
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
	setobjectxyperm 6, 12, 13
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 36 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 37 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
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
# 41 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 42 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
# 43 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnFrame40
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 48 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 49 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 50 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 51 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 52 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 53 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 54 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 58 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 62 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_AkihikoOnFrame25::
# 65 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 69 "data/maps/Route2/scripts.pory"
	lock
# 70 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 71 "data/maps/Route2/scripts.pory"
	delay 8
# 72 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 73 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 74 "data/maps/Route2/scripts.pory"
	delay 8
# 75 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 76 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 77 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 78 "data/maps/Route2/scripts.pory"
	delay 20
# 79 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 80 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 81 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 84 "data/maps/Route2/scripts.pory"
	closemessage
# 85 "data/maps/Route2/scripts.pory"
	delay 30
# 86 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 87 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 88 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 89 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 91 "data/maps/Route2/scripts.pory"
	closemessage
# 92 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 93 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 94 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 97 "data/maps/Route2/scripts.pory"
	closemessage
# 98 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 99 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 101 "data/maps/Route2/scripts.pory"
	call Eventscript_BlockShakeCamera
# 102 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 103 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route2/scripts.pory"
	delay 20
# 105 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 106 "data/maps/Route2/scripts.pory"
	closemessage
# 107 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 108 "data/maps/Route2/scripts.pory"
	release
	end


# 112 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 113 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 116 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route2/scripts.pory"
	delay_8
# 119 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 120 "data/maps/Route2/scripts.pory"
	jump_right
# 121 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 124 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 125 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 129 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 130 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 131 "data/maps/Route2/scripts.pory"
	walk_right
# 132 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 134 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 135 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 138 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 139 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 140 "data/maps/Route2/scripts.pory"
	walk_left
# 140 "data/maps/Route2/scripts.pory"
	walk_left
# 141 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 144 "data/maps/Route2/scripts.pory"
shakevertical:
# 145 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 149 "data/maps/Route2/scripts.pory"
	lock
# 150 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 151 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 152 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 155 "data/maps/Route2/scripts.pory"
	closemessage
# 156 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 157 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 158 "data/maps/Route2/scripts.pory"
	closemessage
# 159 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 160 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 161 "data/maps/Route2/scripts.pory"
	release
	end


# 165 "data/maps/Route2/scripts.pory"
lockfacing:
# 166 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 177 "data/maps/Route2/scripts.pory"
	lock
# 178 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 179 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 180 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 181 "data/maps/Route2/scripts.pory"
	delay 30
# 182 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 183 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 184 "data/maps/Route2/scripts.pory"
	closemessage
# 185 "data/maps/Route2/scripts.pory"
	delay 8
# 186 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 187 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 188 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 190 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 191 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 193 "data/maps/Route2/scripts.pory"
	closemessage
# 194 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 195 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 196 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 198 "data/maps/Route2/scripts.pory"
	closemessage
# 199 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 200 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 201 "data/maps/Route2/scripts.pory"
	waitmoncry
# 202 "data/maps/Route2/scripts.pory"
	delay 30
# 203 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 204 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 205 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 207 "data/maps/Route2/scripts.pory"
	release
	end


# 211 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 212 "data/maps/Route2/scripts.pory"
	set_visible
# 213 "data/maps/Route2/scripts.pory"
	jump_left
# 214 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 217 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 218 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 223 "data/maps/Route2/scripts.pory"
	lock
# 224 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 225 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 226 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 228 "data/maps/Route2/scripts.pory"
	delay 20
# 229 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 230 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 231 "data/maps/Route2/scripts.pory"
	delay 8
# 232 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 233 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 234 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route2/scripts.pory"
	delay 20
# 236 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 237 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 238 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 240 "data/maps/Route2/scripts.pory"
	closemessage
# 241 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 242 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 244 "data/maps/Route2/scripts.pory"
	release
	end


# 248 "data/maps/Route2/scripts.pory"
emoteasleep:
# 249 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 251 "data/maps/Route2/scripts.pory"
visible:
# 252 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 256 "data/maps/Route2/scripts.pory"
	lock
# 257 "data/maps/Route2/scripts.pory"
	delay 20
# 258 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 259 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 260 "data/maps/Route2/scripts.pory"
	closemessage
# 261 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 262 "data/maps/Route2/scripts.pory"
	delay 20
# 263 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 264 "data/maps/Route2/scripts.pory"
	waitmoncry
# 265 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 266 "data/maps/Route2/scripts.pory"
	waitse
# 267 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 268 "data/maps/Route2/scripts.pory"
	waitmoncry
# 269 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 270 "data/maps/Route2/scripts.pory"
	waitse
# 271 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 272 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 273 "data/maps/Route2/scripts.pory"
	removeobject 3
# 274 "data/maps/Route2/scripts.pory"
	removeobject 4
# 275 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 276 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 277 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 279 "data/maps/Route2/scripts.pory"
	delay 20
# 280 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 281 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 282 "data/maps/Route2/scripts.pory"
	delay 4
# 283 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 284 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 285 "data/maps/Route2/scripts.pory"
	waitse
# 286 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 287 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 289 "data/maps/Route2/scripts.pory"
	release
	end


# 293 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 294 "data/maps/Route2/scripts.pory"
	delay_16
# 295 "data/maps/Route2/scripts.pory"
	face_left
# 296 "data/maps/Route2/scripts.pory"
	delay_16
# 297 "data/maps/Route2/scripts.pory"
	face_up
# 298 "data/maps/Route2/scripts.pory"
	delay_16
# 299 "data/maps/Route2/scripts.pory"
	emote_x
# 300 "data/maps/Route2/scripts.pory"
	delay_16
# 301 "data/maps/Route2/scripts.pory"
	jump_right
# 302 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 307 "data/maps/Route2/scripts.pory"
	lock
# 308 "data/maps/Route2/scripts.pory"
	delay 40
# 309 "data/maps/Route2/scripts.pory"
	addobject 5
# 310 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 311 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 312 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 314 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 316 "data/maps/Route2/scripts.pory"
	waitse
# 317 "data/maps/Route2/scripts.pory"
	delay 30
# 318 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 319 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 322 "data/maps/Route2/scripts.pory"
	closemessage
# 323 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 324 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 325 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 326 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route2/scripts.pory"
	delay 20
# 328 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 329 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 330 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route2/scripts.pory"
	delay 30
# 332 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 333 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 334 "data/maps/Route2/scripts.pory"
	release
	end


# 338 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 339 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 341 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 342 "data/maps/Route2/scripts.pory"
	walk_left
# 342 "data/maps/Route2/scripts.pory"
	walk_left
# 342 "data/maps/Route2/scripts.pory"
	walk_left
# 343 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 346 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 347 "data/maps/Route2/scripts.pory"
	walk_up
# 347 "data/maps/Route2/scripts.pory"
	walk_up
# 348 "data/maps/Route2/scripts.pory"
	walk_right
# 348 "data/maps/Route2/scripts.pory"
	walk_right
# 348 "data/maps/Route2/scripts.pory"
	walk_right
# 348 "data/maps/Route2/scripts.pory"
	walk_right
# 348 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 351 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 352 "data/maps/Route2/scripts.pory"
	set_visible
# 353 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 356 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 357 "data/maps/Route2/scripts.pory"
	walk_up
# 357 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 360 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 361 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 367 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 371 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 376 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 377 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 378 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 379 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Tarou::
# 396 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 397 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Tarou_Text_0
# 398 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 399 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_AkihikoOnFrame33::
# 416 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 420 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 421 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 426 "data/maps/Route2/scripts.pory"
	closemessage
# 427 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 428 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 429 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 430 "data/maps/Route2/scripts.pory"
	lock
# 431 "data/maps/Route2/scripts.pory"
	removeobject 6
# 432 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 433 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 434 "data/maps/Route2/scripts.pory"
	addobject 6
# 435 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 436 "data/maps/Route2/scripts.pory"
	release
# 437 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 438 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


# 442 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 443 "data/maps/Route2/scripts.pory"
	set_visible
# 444 "data/maps/Route2/scripts.pory"
	walk_down
# 444 "data/maps/Route2/scripts.pory"
	walk_down
# 445 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 448 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	walk_right
# 450 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 454 "data/maps/Route2/scripts.pory"
	lock
# 455 "data/maps/Route2/scripts.pory"
	faceplayer
# 456 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 461 "data/maps/Route2/scripts.pory"
	closemessage
# 462 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 467 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 471 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 472 "data/maps/Route2/scripts.pory"
	delay 8
# 473 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 474 "data/maps/Route2/scripts.pory"
	waitse
# 475 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 477 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 478 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route2/scripts.pory"
	delay 20
# 480 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 482 "data/maps/Route2/scripts.pory"
	closemessage
# 483 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 484 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 485 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 496 "data/maps/Route2/scripts.pory"
	closemessage
# 497 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 498 "data/maps/Route2/scripts.pory"
	waitmovement
# 499 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 500 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
# 501 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


# 504 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 505 "data/maps/Route2/scripts.pory"
	walk_down
# 506 "data/maps/Route2/scripts.pory"
	face_right
# 507 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 510 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 511 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 512 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 516 "data/maps/Route2/scripts.pory"
	lock
# 517 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 518 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 520 "data/maps/Route2/scripts.pory"
	closemessage
# 521 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 526 "data/maps/Route2/scripts.pory"
	lock
# 527 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 528 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 537 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 538 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 544 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 545 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 529 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 530 "data/maps/Route2/scripts.pory"
	closemessage
# 531 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 532 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 533 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 539 "data/maps/Route2/scripts.pory"
	closemessage
# 540 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 541 "data/maps/Route2/scripts.pory"
	waitse
# 542 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 550 "data/maps/Route2/scripts.pory"
	lock
# 551 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 552 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 576 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 553 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 555 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6
# 564 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 565 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 566 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 567 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 568 "data/maps/Route2/scripts.pory"
	closemessage
# 569 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 570 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 571 "data/maps/Route2/scripts.pory"
	release
# 573 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 577 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 578 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 579 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 580 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 581 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 583 "data/maps/Route2/scripts.pory"
	closemessage
# 584 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 585 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6:
# 556 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 557 "data/maps/Route2/scripts.pory"
	closemessage
# 558 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 559 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route2/scripts.pory"
	release
	end


# 589 "data/maps/Route2/scripts.pory"
emoteangry:
# 590 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 594 "data/maps/Route2/scripts.pory"
	lock
# 595 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 596 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 597 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 598 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 599 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 600 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 605 "data/maps/Route2/scripts.pory"
	lock
# 606 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 607 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 608 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 609 "data/maps/Route2/scripts.pory"
	waitstate
# 610 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 616 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 617 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 618 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 619 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 620 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 621 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 622 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 623 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 624 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 625 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 626 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 627 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 629 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 611 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 612 "data/maps/Route2/scripts.pory"
	closemessage
# 613 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 637 "data/maps/Route2/scripts.pory"
	lock
# 638 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 639 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 643 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 647 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 653 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 654 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 655 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 657 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 658 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 640 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 641 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 644 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 645 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 648 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 649 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 650 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 647 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 643 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 639 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 704 "data/maps/Route2/scripts.pory"
	lock
# 705 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 706 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 707 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 708 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 709 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 710 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 711 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 715 "data/maps/Route2/scripts.pory"
	closemessage
# 716 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 717 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 718 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 722 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 723 "data/maps/Route2/scripts.pory"
	walk_down
# 724 "data/maps/Route2/scripts.pory"
	walk_left
# 724 "data/maps/Route2/scripts.pory"
	walk_left
# 724 "data/maps/Route2/scripts.pory"
	walk_left
# 725 "data/maps/Route2/scripts.pory"
	walk_up
# 725 "data/maps/Route2/scripts.pory"
	walk_up
# 725 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 729 "data/maps/Route2/scripts.pory"
	lock
# 730 "data/maps/Route2/scripts.pory"
	faceplayer
# 731 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 732 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 756 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 761 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 763 "data/maps/Route2/scripts.pory"
	closemessage
# 764 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF
# 765 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, SPECIES_ROCKRUFF
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 733 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 734 "data/maps/Route2/scripts.pory"
	closemessage
# 735 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 748 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 749 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 750 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 751 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 752 "data/maps/Route2/scripts.pory"
	closemessage
# 753 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 757 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
	return

Route2_Eventscript_Himari_6:
# 736 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 737 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 738 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 740 "data/maps/Route2/scripts.pory"
	closemessage
# 741 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 742 "data/maps/Route2/scripts.pory"
	waitmoncry
# 743 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 744 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 766 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 767 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 768 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 769 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 770 "data/maps/Route2/scripts.pory"
	closemessage
# 771 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 775 "data/maps/Route2/scripts.pory"
emotecry:
# 776 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

GiveOutfitbox::
# 780 "data/maps/Route2/scripts.pory"
	lock
# 781 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_COMPANION_MENU, GiveOutfitbox_2
# 786 "data/maps/Route2/scripts.pory"
	msgbox GiveOutfitbox_Text_0
# 788 "data/maps/Route2/scripts.pory"
	closemessage
# 789 "data/maps/Route2/scripts.pory"
	checkplayergender
# 790 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq GiveOutfitbox_5
# 794 "data/maps/Route2/scripts.pory"
	unlockoutfit OUTFIT_AKIHIKO
GiveOutfitbox_1:
# 797 "data/maps/Route2/scripts.pory"
	release
	end

GiveOutfitbox_2:
# 782 "data/maps/Route2/scripts.pory"
	giveitem ITEM_OUTFIT_BOX
# 783 "data/maps/Route2/scripts.pory"
	setflag FLAG_COMPANION_MENU
	goto GiveOutfitbox_1

GiveOutfitbox_5:
# 791 "data/maps/Route2/scripts.pory"
	unlockoutfit OUTFIT_MITSURU
	goto GiveOutfitbox_1


Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 82 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 87 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 90 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 92 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 95 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 105 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 153 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 183 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 192 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 197 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 239 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 258 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 259 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 319 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 360 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 367 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 377 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Tarou_Text_0:
# 397 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 422 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 456 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 480 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you coudln't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 486 "data/maps/Route2/scripts.pory"
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
# 519 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 527 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 529 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 537 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 553 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 556 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 567 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 581 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 611 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 711 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 731 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 733 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 738 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 751 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 757 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 761 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 769 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

GiveOutfitbox_Text_0:
# 786 "data/maps/Route2/scripts.pory"
	.string "Current protag is {PLAYER}.\p"
	.string "Unlocking {RIVAL}.$"

SusMenFightIntro::
# 168 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 172 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 383 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 387 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 391 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 403 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 407 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 411 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 632 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 661 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 670 "data/maps/Route2/scripts.pory"
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
# 682 "data/maps/Route2/scripts.pory"
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
# 693 "data/maps/Route2/scripts.pory"
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
