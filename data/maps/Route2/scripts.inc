Route2_MapScripts::
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 39 "data/maps/Route2/scripts.pory"
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
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 25
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 17 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 26
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 20 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 24 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 28 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 37
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 31 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_eq Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 34 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 42
	goto_if_ge Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
	return

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 14 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 18 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 21 "data/maps/Route2/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 22 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 8, 12
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 25 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 26 "data/maps/Route2/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 29 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 28 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 40
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 32 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 11, 13
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 35 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 36 "data/maps/Route2/scripts.pory"
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
# 40 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 41 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
# 42 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnFrame40
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 47 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 48 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 49 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 50 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 51 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 52 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 53 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 57 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 61 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_AkihikoOnFrame25::
# 64 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 68 "data/maps/Route2/scripts.pory"
	lock
# 69 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 70 "data/maps/Route2/scripts.pory"
	delay 8
# 71 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 72 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 73 "data/maps/Route2/scripts.pory"
	delay 8
# 74 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 75 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 76 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 77 "data/maps/Route2/scripts.pory"
	delay 20
# 78 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 79 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 80 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 83 "data/maps/Route2/scripts.pory"
	closemessage
# 84 "data/maps/Route2/scripts.pory"
	delay 30
# 85 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 86 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 87 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 88 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 90 "data/maps/Route2/scripts.pory"
	closemessage
# 91 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 92 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 93 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 96 "data/maps/Route2/scripts.pory"
	closemessage
# 97 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 98 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 100 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 101 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 102 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route2/scripts.pory"
	delay 20
# 104 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 105 "data/maps/Route2/scripts.pory"
	closemessage
# 106 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 107 "data/maps/Route2/scripts.pory"
	release
	end


# 111 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 112 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 115 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route2/scripts.pory"
	delay_8
# 118 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 119 "data/maps/Route2/scripts.pory"
	jump_right
# 120 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 123 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 124 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 124 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 124 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 128 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 129 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 130 "data/maps/Route2/scripts.pory"
	walk_right
# 131 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 133 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 134 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 137 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 138 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 139 "data/maps/Route2/scripts.pory"
	walk_left
# 139 "data/maps/Route2/scripts.pory"
	walk_left
# 140 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 143 "data/maps/Route2/scripts.pory"
shakevertical:
# 144 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 148 "data/maps/Route2/scripts.pory"
	lock
# 149 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 150 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 151 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 154 "data/maps/Route2/scripts.pory"
	closemessage
# 155 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 156 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 157 "data/maps/Route2/scripts.pory"
	closemessage
# 158 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 159 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 160 "data/maps/Route2/scripts.pory"
	release
	end


# 164 "data/maps/Route2/scripts.pory"
lockfacing:
# 165 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 176 "data/maps/Route2/scripts.pory"
	lock
# 177 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 178 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 179 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 180 "data/maps/Route2/scripts.pory"
	delay 30
# 181 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 182 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 183 "data/maps/Route2/scripts.pory"
	closemessage
# 184 "data/maps/Route2/scripts.pory"
	delay 8
# 185 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 186 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 187 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 189 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 190 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 192 "data/maps/Route2/scripts.pory"
	closemessage
# 193 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 194 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 195 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 197 "data/maps/Route2/scripts.pory"
	closemessage
# 198 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 199 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 200 "data/maps/Route2/scripts.pory"
	waitmoncry
# 201 "data/maps/Route2/scripts.pory"
	delay 30
# 202 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 203 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 204 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 206 "data/maps/Route2/scripts.pory"
	release
	end


# 210 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 211 "data/maps/Route2/scripts.pory"
	set_visible
# 212 "data/maps/Route2/scripts.pory"
	jump_left
# 213 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 216 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 217 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 222 "data/maps/Route2/scripts.pory"
	lock
# 223 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 224 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 225 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 227 "data/maps/Route2/scripts.pory"
	delay 20
# 228 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 229 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 230 "data/maps/Route2/scripts.pory"
	delay 8
# 231 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 232 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 233 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route2/scripts.pory"
	delay 20
# 235 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 236 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 237 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 239 "data/maps/Route2/scripts.pory"
	closemessage
# 240 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 241 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 243 "data/maps/Route2/scripts.pory"
	release
	end


# 247 "data/maps/Route2/scripts.pory"
emoteasleep:
# 248 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 250 "data/maps/Route2/scripts.pory"
visible:
# 251 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 255 "data/maps/Route2/scripts.pory"
	lock
# 256 "data/maps/Route2/scripts.pory"
	delay 20
# 257 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 258 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 259 "data/maps/Route2/scripts.pory"
	closemessage
# 260 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 261 "data/maps/Route2/scripts.pory"
	delay 20
# 262 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 263 "data/maps/Route2/scripts.pory"
	waitmoncry
# 264 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 265 "data/maps/Route2/scripts.pory"
	waitse
# 266 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 267 "data/maps/Route2/scripts.pory"
	waitmoncry
# 268 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 269 "data/maps/Route2/scripts.pory"
	waitse
# 270 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 271 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 272 "data/maps/Route2/scripts.pory"
	removeobject 3
# 273 "data/maps/Route2/scripts.pory"
	removeobject 4
# 274 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 275 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 276 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 278 "data/maps/Route2/scripts.pory"
	delay 20
# 279 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 280 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 281 "data/maps/Route2/scripts.pory"
	delay 4
# 282 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 283 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 284 "data/maps/Route2/scripts.pory"
	waitse
# 285 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 286 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 288 "data/maps/Route2/scripts.pory"
	release
	end


# 292 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 293 "data/maps/Route2/scripts.pory"
	delay_16
# 294 "data/maps/Route2/scripts.pory"
	face_left
# 295 "data/maps/Route2/scripts.pory"
	delay_16
# 296 "data/maps/Route2/scripts.pory"
	face_up
# 297 "data/maps/Route2/scripts.pory"
	delay_16
# 298 "data/maps/Route2/scripts.pory"
	emote_x
# 299 "data/maps/Route2/scripts.pory"
	delay_16
# 300 "data/maps/Route2/scripts.pory"
	jump_right
# 301 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 306 "data/maps/Route2/scripts.pory"
	lock
# 307 "data/maps/Route2/scripts.pory"
	delay 40
# 308 "data/maps/Route2/scripts.pory"
	addobject 5
# 309 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 310 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 311 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 313 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 315 "data/maps/Route2/scripts.pory"
	waitse
# 316 "data/maps/Route2/scripts.pory"
	delay 30
# 317 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 318 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 321 "data/maps/Route2/scripts.pory"
	closemessage
# 322 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 323 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 324 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 325 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route2/scripts.pory"
	delay 20
# 327 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 328 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 329 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route2/scripts.pory"
	delay 30
# 331 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 332 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 333 "data/maps/Route2/scripts.pory"
	release
	end


# 337 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 338 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 340 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 341 "data/maps/Route2/scripts.pory"
	walk_left
# 341 "data/maps/Route2/scripts.pory"
	walk_left
# 341 "data/maps/Route2/scripts.pory"
	walk_left
# 342 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 345 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 346 "data/maps/Route2/scripts.pory"
	walk_up
# 346 "data/maps/Route2/scripts.pory"
	walk_up
# 347 "data/maps/Route2/scripts.pory"
	walk_right
# 347 "data/maps/Route2/scripts.pory"
	walk_right
# 347 "data/maps/Route2/scripts.pory"
	walk_right
# 347 "data/maps/Route2/scripts.pory"
	walk_right
# 347 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 350 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 351 "data/maps/Route2/scripts.pory"
	set_visible
# 352 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 355 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 356 "data/maps/Route2/scripts.pory"
	walk_up
# 356 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 359 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 360 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 366 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 370 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 375 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 376 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 377 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 378 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Tarou::
# 395 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 396 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Tarou_Text_0
# 397 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 398 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_AkihikoOnFrame33::
# 415 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 419 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 420 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 425 "data/maps/Route2/scripts.pory"
	closemessage
# 426 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 427 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 428 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 429 "data/maps/Route2/scripts.pory"
	lock
# 430 "data/maps/Route2/scripts.pory"
	removeobject 6
# 431 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 432 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 433 "data/maps/Route2/scripts.pory"
	addobject 6
# 434 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 435 "data/maps/Route2/scripts.pory"
	release
# 436 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 437 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


# 441 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 442 "data/maps/Route2/scripts.pory"
	set_visible
# 443 "data/maps/Route2/scripts.pory"
	walk_down
# 443 "data/maps/Route2/scripts.pory"
	walk_down
# 444 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 447 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 448 "data/maps/Route2/scripts.pory"
	walk_right
# 449 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 453 "data/maps/Route2/scripts.pory"
	lock
# 454 "data/maps/Route2/scripts.pory"
	faceplayer
# 455 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 460 "data/maps/Route2/scripts.pory"
	closemessage
# 461 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 466 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 470 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 471 "data/maps/Route2/scripts.pory"
	delay 8
# 472 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 473 "data/maps/Route2/scripts.pory"
	waitse
# 474 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 476 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 477 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 478 "data/maps/Route2/scripts.pory"
	delay 20
# 479 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 481 "data/maps/Route2/scripts.pory"
	closemessage
# 482 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 483 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 484 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 495 "data/maps/Route2/scripts.pory"
	closemessage
# 496 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkleft
# 497 "data/maps/Route2/scripts.pory"
	waitmovement
# 498 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 499 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
# 500 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


# 503 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 504 "data/maps/Route2/scripts.pory"
	walk_down
# 505 "data/maps/Route2/scripts.pory"
	face_right
# 506 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 509 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 510 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 511 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 515 "data/maps/Route2/scripts.pory"
	lock
# 516 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 517 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 519 "data/maps/Route2/scripts.pory"
	closemessage
# 520 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 525 "data/maps/Route2/scripts.pory"
	lock
# 526 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 527 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 536 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 537 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 543 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 544 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 528 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 529 "data/maps/Route2/scripts.pory"
	closemessage
# 530 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 531 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 538 "data/maps/Route2/scripts.pory"
	closemessage
# 539 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 540 "data/maps/Route2/scripts.pory"
	waitse
# 541 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 549 "data/maps/Route2/scripts.pory"
	lock
# 550 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 551 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 575 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 552 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 554 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6
# 563 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 564 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 565 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 566 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 567 "data/maps/Route2/scripts.pory"
	closemessage
# 568 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 569 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 570 "data/maps/Route2/scripts.pory"
	release
# 572 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 576 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 578 "data/maps/Route2/scripts.pory"
	closemessage
# 579 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 580 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6:
# 555 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 556 "data/maps/Route2/scripts.pory"
	closemessage
# 557 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 558 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route2/scripts.pory"
	release
	end


# 584 "data/maps/Route2/scripts.pory"
emoteangry:
# 585 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 589 "data/maps/Route2/scripts.pory"
	lock
# 590 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 591 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 592 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 593 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 594 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 595 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 600 "data/maps/Route2/scripts.pory"
	lock
# 601 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 602 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 603 "data/maps/Route2/scripts.pory"
	waitstate
# 604 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 610 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 611 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 612 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 613 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 614 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 615 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 616 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 617 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 618 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 619 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 620 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 621 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 623 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 605 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 606 "data/maps/Route2/scripts.pory"
	closemessage
# 607 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 631 "data/maps/Route2/scripts.pory"
	lock
# 632 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 633 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
# 638 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 639 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattle
# 640 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 642 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 643 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 634 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattle
# 635 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1


Route2_Eventscript_PostShinjiroFirstBattle::
# 667 "data/maps/Route2/scripts.pory"
	lock
# 668 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 669 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 670 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 671 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 672 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 673 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 674 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 677 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_PostShinjiroFirstBattle_1
# 696 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_2
# 697 "data/maps/Route2/scripts.pory"
	closemessage
# 698 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 699 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

Route2_Eventscript_PostShinjiroFirstBattle_1:
# 678 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_1
# 680 "data/maps/Route2/scripts.pory"
	closemessage
# 681 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2ShinjiroGoesInsideHouse
# 682 "data/maps/Route2/scripts.pory"
	delay 20
# 683 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 684 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 685 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 688 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 689 "data/maps/Route2/scripts.pory"
	removeobject 6
# 690 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 691 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 692 "data/maps/Route2/scripts.pory"
	release
	end


# 704 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 705 "data/maps/Route2/scripts.pory"
	walk_down
# 706 "data/maps/Route2/scripts.pory"
	walk_left
# 706 "data/maps/Route2/scripts.pory"
	walk_left
# 706 "data/maps/Route2/scripts.pory"
	walk_left
# 707 "data/maps/Route2/scripts.pory"
	walk_up
# 707 "data/maps/Route2/scripts.pory"
	walk_up
# 707 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 81 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 86 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 89 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 91 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 94 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 104 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 152 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 182 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 191 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 196 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 238 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 257 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 258 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 318 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 359 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 366 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Nata Town {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 376 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Tarou_Text_0:
# 396 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 421 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 455 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 479 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you coudln't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 485 "data/maps/Route2/scripts.pory"
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
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}I'll show what it can do. Let's do a\n"
	.string "3-vs-3 again.\p"
	.string "Step up if you're ready.$"

Route2_Eventscript_MustBattleShinjiro_Text_0:
# 518 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 526 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 528 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 536 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 552 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3\n"
	.string "Pokémons to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 555 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 566 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 576 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 605 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 674 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_1:
# 678 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}You do you, I'm off. G'night.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}'Night, Shinji.$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_2:
# 696 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

SusMenFightIntro::
# 167 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 171 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 382 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 386 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 390 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 402 "data/maps/Route2/scripts.pory"
	.string "You look weak, battle me.$"

Route2_TarouDefeated::
# 406 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 410 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 626 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattle::
# 646 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_LostInShinjiroFirstBattle::
# 655 "data/maps/Route2/scripts.pory"
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
