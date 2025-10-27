Route2_MapScripts::
# 7 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 38 "data/maps/Route2/scripts.pory"
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
# 39 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 25, Route2_Eventscript_AkihikoOnFrame25
# 40 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 33, Route2_Eventscript_AkihikoOnFrame33
# 41 "data/maps/Route2/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 40, Route2_Eventscript_AkihikoOnFrame40
	.2byte 0


Route2_Eventscript_AkihikoOnWarp25::
# 46 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 47 "data/maps/Route2/scripts.pory"
	applymovement 7, invisible
# 48 "data/maps/Route2/scripts.pory"
	applymovement 8, invisible
# 49 "data/maps/Route2/scripts.pory"
	applymovement 9, invisible
# 50 "data/maps/Route2/scripts.pory"
	applymovement 10, invisible
# 51 "data/maps/Route2/scripts.pory"
	applymovement 11, invisible
# 52 "data/maps/Route2/scripts.pory"
	applymovement 12, invisible
	return


Route2_Eventscript_AkihikoOnWarp33::
# 56 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
	return


Route2_Eventscript_AkihikoOnWarp40::
# 60 "data/maps/Route2/scripts.pory"
	applymovement 6, faceright
	return


Route2_Eventscript_AkihikoOnFrame25::
# 63 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiGettingBlockedBySusMen
	return


Route2_Eventscript_AkishinjiGettingBlockedBySusMen::
# 67 "data/maps/Route2/scripts.pory"
	lock
# 68 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkishinjiGettingBlockedBySusMen
# 69 "data/maps/Route2/scripts.pory"
	delay 8
# 70 "data/maps/Route2/scripts.pory"
	applymovement 6, AkishinjiGettingBlockedBySusMen
# 71 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMenBlockingAkiShinji
# 72 "data/maps/Route2/scripts.pory"
	delay 8
# 73 "data/maps/Route2/scripts.pory"
	applymovement 3, SusMenBlockingAkiShinji
# 74 "data/maps/Route2/scripts.pory"
	waitmovement 3
# 75 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 76 "data/maps/Route2/scripts.pory"
	delay 20
# 77 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiStepBack
# 78 "data/maps/Route2/scripts.pory"
	applymovement 6, AkiShinjiStepBack
# 79 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0
# 82 "data/maps/Route2/scripts.pory"
	closemessage
# 83 "data/maps/Route2/scripts.pory"
	delay 30
# 84 "data/maps/Route2/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 85 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 86 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 87 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2
# 89 "data/maps/Route2/scripts.pory"
	closemessage
# 90 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 91 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 92 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4
# 95 "data/maps/Route2/scripts.pory"
	closemessage
# 96 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1ApproachingAkihiko
# 97 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, shakehorizontal
# 99 "data/maps/Route2/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 100 "data/maps/Route2/scripts.pory"
	applymovement 4, SusMan1StepBack
# 101 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route2/scripts.pory"
	delay 20
# 103 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5
# 104 "data/maps/Route2/scripts.pory"
	closemessage
# 105 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_StartBattleWithSusMen
# 106 "data/maps/Route2/scripts.pory"
	release
	end


# 110 "data/maps/Route2/scripts.pory"
walkinplaceright:
# 111 "data/maps/Route2/scripts.pory"
	walk_in_place_right
	step_end

# 114 "data/maps/Route2/scripts.pory"
AkishinjiGettingBlockedBySusMen:
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route2/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route2/scripts.pory"
	delay_8
# 117 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 118 "data/maps/Route2/scripts.pory"
	jump_right
# 119 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 122 "data/maps/Route2/scripts.pory"
SusMenBlockingAkiShinji:
# 123 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route2/scripts.pory"
	walk_fast_up
# 124 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 127 "data/maps/Route2/scripts.pory"
AkiShinjiStepBack:
# 128 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 129 "data/maps/Route2/scripts.pory"
	walk_right
# 130 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 132 "data/maps/Route2/scripts.pory"
SusMan1ApproachingAkihiko:
# 133 "data/maps/Route2/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route2/scripts.pory"
	walk_fast_right
	step_end

# 136 "data/maps/Route2/scripts.pory"
SusMan1StepBack:
# 137 "data/maps/Route2/scripts.pory"
	lock_facing_direction
# 138 "data/maps/Route2/scripts.pory"
	walk_left
# 138 "data/maps/Route2/scripts.pory"
	walk_left
# 139 "data/maps/Route2/scripts.pory"
	unlock_facing_direction
	step_end

# 142 "data/maps/Route2/scripts.pory"
shakevertical:
# 143 "data/maps/Route2/scripts.pory"
	shake_vertical
	step_end

Route2_Eventscript_StartBattleWithSusMen::
# 147 "data/maps/Route2/scripts.pory"
	lock
# 148 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 149 "data/maps/Route2/scripts.pory"
	applymovement 4, walkinplaceright
# 150 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_StartBattleWithSusMen_Text_0
# 153 "data/maps/Route2/scripts.pory"
	closemessage
# 154 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 155 "data/maps/Route2/scripts.pory"
	msgbox SusMenFightIntro
# 156 "data/maps/Route2/scripts.pory"
	closemessage
# 157 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE2, SusMenFightDefeated
# 158 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostBattleWithSusMen
# 159 "data/maps/Route2/scripts.pory"
	release
	end


# 163 "data/maps/Route2/scripts.pory"
lockfacing:
# 164 "data/maps/Route2/scripts.pory"
	lock_facing_direction
	step_end

Route2_Eventscript_PostBattleWithSusMen::
# 175 "data/maps/Route2/scripts.pory"
	lock
# 176 "data/maps/Route2/scripts.pory"
	playbgm MUS_NONE, TRUE
# 177 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 178 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 179 "data/maps/Route2/scripts.pory"
	delay 30
# 180 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1
# 181 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_0
# 182 "data/maps/Route2/scripts.pory"
	closemessage
# 183 "data/maps/Route2/scripts.pory"
	delay 8
# 184 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 185 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeAppears
# 186 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 188 "data/maps/Route2/scripts.pory"
	applymovement 6, facedown
# 189 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_1
# 191 "data/maps/Route2/scripts.pory"
	closemessage
# 192 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 193 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 194 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostBattleWithSusMen_Text_2
# 196 "data/maps/Route2/scripts.pory"
	closemessage
# 197 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 198 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_DROWZEE, CRY_MODE_NORMAL
# 199 "data/maps/Route2/scripts.pory"
	waitmoncry
# 200 "data/maps/Route2/scripts.pory"
	delay 30
# 201 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 202 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 203 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkishinjiAsleep
# 205 "data/maps/Route2/scripts.pory"
	release
	end


# 209 "data/maps/Route2/scripts.pory"
DrowzeeAppears:
# 210 "data/maps/Route2/scripts.pory"
	set_visible
# 211 "data/maps/Route2/scripts.pory"
	jump_left
# 212 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 215 "data/maps/Route2/scripts.pory"
walkinplaceup:
# 216 "data/maps/Route2/scripts.pory"
	walk_in_place_up
	step_end

Route2_Eventscript_AkishinjiAsleep::
# 221 "data/maps/Route2/scripts.pory"
	lock
# 222 "data/maps/Route2/scripts.pory"
	applymovement 8, visible
# 223 "data/maps/Route2/scripts.pory"
	applymovement 9, visible
# 224 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 226 "data/maps/Route2/scripts.pory"
	delay 20
# 227 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 228 "data/maps/Route2/scripts.pory"
	applymovement 8, emoteasleep
# 229 "data/maps/Route2/scripts.pory"
	delay 8
# 230 "data/maps/Route2/scripts.pory"
	playse SE_M_SNORE
# 231 "data/maps/Route2/scripts.pory"
	applymovement 9, emoteasleep
# 232 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route2/scripts.pory"
	delay 20
# 234 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3
# 235 "data/maps/Route2/scripts.pory"
	applymovement 3, walkinplaceright
# 236 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkishinjiAsleep_Text_0
# 238 "data/maps/Route2/scripts.pory"
	closemessage
# 239 "data/maps/Route2/scripts.pory"
	applymovement 3, walkright
# 240 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruDisruptsTheMen
# 242 "data/maps/Route2/scripts.pory"
	release
	end


# 246 "data/maps/Route2/scripts.pory"
emoteasleep:
# 247 "data/maps/Route2/scripts.pory"
	emote_asleep
	step_end

# 249 "data/maps/Route2/scripts.pory"
visible:
# 250 "data/maps/Route2/scripts.pory"
	set_visible
	step_end

Route2_Eventscript_MitsuruDisruptsTheMen::
# 254 "data/maps/Route2/scripts.pory"
	lock
# 255 "data/maps/Route2/scripts.pory"
	delay 20
# 256 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 257 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruDisruptsTheMen_Text_1
# 258 "data/maps/Route2/scripts.pory"
	closemessage
# 259 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 260 "data/maps/Route2/scripts.pory"
	delay 20
# 261 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 262 "data/maps/Route2/scripts.pory"
	waitmoncry
# 263 "data/maps/Route2/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 264 "data/maps/Route2/scripts.pory"
	waitse
# 265 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 266 "data/maps/Route2/scripts.pory"
	waitmoncry
# 267 "data/maps/Route2/scripts.pory"
	playse SE_M_ICY_WIND
# 268 "data/maps/Route2/scripts.pory"
	waitse
# 269 "data/maps/Route2/scripts.pory"
	applymovement 3, invisible
# 270 "data/maps/Route2/scripts.pory"
	applymovement 4, invisible
# 271 "data/maps/Route2/scripts.pory"
	removeobject 3
# 272 "data/maps/Route2/scripts.pory"
	removeobject 4
# 273 "data/maps/Route2/scripts.pory"
	applymovement 10, visible
# 274 "data/maps/Route2/scripts.pory"
	applymovement 11, visible
# 275 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 277 "data/maps/Route2/scripts.pory"
	delay 20
# 278 "data/maps/Route2/scripts.pory"
	applymovement 10, shakehorizontal
# 279 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 280 "data/maps/Route2/scripts.pory"
	delay 4
# 281 "data/maps/Route2/scripts.pory"
	applymovement 11, shakehorizontal
# 282 "data/maps/Route2/scripts.pory"
	playse SE_M_HARDEN
# 283 "data/maps/Route2/scripts.pory"
	waitse
# 284 "data/maps/Route2/scripts.pory"
	applymovement 7, emoteexclamation
# 285 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_MitsuruAppears
# 287 "data/maps/Route2/scripts.pory"
	release
	end


# 291 "data/maps/Route2/scripts.pory"
DrowzeeRunsAway:
# 292 "data/maps/Route2/scripts.pory"
	delay_16
# 293 "data/maps/Route2/scripts.pory"
	face_left
# 294 "data/maps/Route2/scripts.pory"
	delay_16
# 295 "data/maps/Route2/scripts.pory"
	face_up
# 296 "data/maps/Route2/scripts.pory"
	delay_16
# 297 "data/maps/Route2/scripts.pory"
	emote_x
# 298 "data/maps/Route2/scripts.pory"
	delay_16
# 299 "data/maps/Route2/scripts.pory"
	jump_right
# 300 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_MitsuruAppears::
# 305 "data/maps/Route2/scripts.pory"
	lock
# 306 "data/maps/Route2/scripts.pory"
	delay 40
# 307 "data/maps/Route2/scripts.pory"
	addobject 5
# 308 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToMitsuru
# 309 "data/maps/Route2/scripts.pory"
	applymovement 5, MitsuruAppears
# 310 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route2/scripts.pory"
	applymovement 7, DrowzeeRunsAway
# 312 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 314 "data/maps/Route2/scripts.pory"
	waitse
# 315 "data/maps/Route2/scripts.pory"
	delay 30
# 316 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 317 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 320 "data/maps/Route2/scripts.pory"
	closemessage
# 321 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 322 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 323 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 324 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route2/scripts.pory"
	delay 20
# 326 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 327 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 328 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route2/scripts.pory"
	delay 30
# 330 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 331 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 332 "data/maps/Route2/scripts.pory"
	release
	end


# 336 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 337 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 339 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 340 "data/maps/Route2/scripts.pory"
	walk_left
# 340 "data/maps/Route2/scripts.pory"
	walk_left
# 340 "data/maps/Route2/scripts.pory"
	walk_left
# 341 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 345 "data/maps/Route2/scripts.pory"
	walk_up
# 345 "data/maps/Route2/scripts.pory"
	walk_up
# 346 "data/maps/Route2/scripts.pory"
	walk_right
# 346 "data/maps/Route2/scripts.pory"
	walk_right
# 346 "data/maps/Route2/scripts.pory"
	walk_right
# 346 "data/maps/Route2/scripts.pory"
	walk_right
# 346 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 349 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 350 "data/maps/Route2/scripts.pory"
	set_visible
# 351 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 354 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 355 "data/maps/Route2/scripts.pory"
	walk_up
# 355 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 358 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 359 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 365 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 369 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 374 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 375 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 376 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 377 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Tarou::
# 394 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Tarou_Text_0
# 395 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouIntro
# 396 "data/maps/Route2/scripts.pory"
	closemessage
# 397 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_TAROU, Route2_TarouDefeated
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
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 579 "data/maps/Route2/scripts.pory"
	closemessage
# 580 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 581 "data/maps/Route2/scripts.pory"
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


# 585 "data/maps/Route2/scripts.pory"
emoteangry:
# 586 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 590 "data/maps/Route2/scripts.pory"
	lock
# 591 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 592 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 594 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 596 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 601 "data/maps/Route2/scripts.pory"
	lock
# 602 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 603 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 604 "data/maps/Route2/scripts.pory"
	waitstate
# 605 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 611 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 612 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 613 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 614 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 615 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 616 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 617 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 618 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 619 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 620 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 621 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 622 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 624 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 606 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 607 "data/maps/Route2/scripts.pory"
	closemessage
# 608 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 632 "data/maps/Route2/scripts.pory"
	lock
# 633 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 634 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
# 639 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 640 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattle
# 641 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 643 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 644 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 635 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattle
# 636 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1


Route2_Eventscript_PostShinjiroFirstBattle::
# 668 "data/maps/Route2/scripts.pory"
	lock
# 669 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 670 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 671 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 672 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 673 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 674 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 678 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_PostShinjiroFirstBattle_1
# 697 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_2
# 698 "data/maps/Route2/scripts.pory"
	closemessage
# 699 "data/maps/Route2/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 700 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return

Route2_Eventscript_PostShinjiroFirstBattle_1:
# 679 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_1
# 681 "data/maps/Route2/scripts.pory"
	closemessage
# 682 "data/maps/Route2/scripts.pory"
	applymovement 6, Route2ShinjiroGoesInsideHouse
# 683 "data/maps/Route2/scripts.pory"
	delay 20
# 684 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 685 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 686 "data/maps/Route2/scripts.pory"
	playse SE_DOOR
# 689 "data/maps/Route2/scripts.pory"
	applymovement 6, invisible
# 690 "data/maps/Route2/scripts.pory"
	removeobject 6
# 691 "data/maps/Route2/scripts.pory"
	setflag FLAG_TEMP_2
# 692 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 693 "data/maps/Route2/scripts.pory"
	release
	end


# 705 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 706 "data/maps/Route2/scripts.pory"
	walk_down
# 707 "data/maps/Route2/scripts.pory"
	walk_left
# 707 "data/maps/Route2/scripts.pory"
	walk_left
# 707 "data/maps/Route2/scripts.pory"
	walk_left
# 708 "data/maps/Route2/scripts.pory"
	walk_up
# 708 "data/maps/Route2/scripts.pory"
	walk_up
# 708 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_0:
# 80 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}Ouch!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}What the hell??$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_1:
# 85 "data/maps/Route2/scripts.pory"
	.string "Man In Black 1$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_2:
# 88 "data/maps/Route2/scripts.pory"
	.string "That stupid cop is finally out of\n"
	.string "picture.$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_3:
# 90 "data/maps/Route2/scripts.pory"
	.string "Man In Black 2$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_4:
# 93 "data/maps/Route2/scripts.pory"
	.string "You two are coming with us. Like it or\n"
	.string "not.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}What?$"

Route2_Eventscript_AkishinjiGettingBlockedBySusMen_Text_5:
# 103 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}No way! Who even are you!?$"

Route2_Eventscript_StartBattleWithSusMen_Text_0:
# 151 "data/maps/Route2/scripts.pory"
	.string "Tch.\p"
	.string "I hate disobedient kids.$"

Route2_Eventscript_PostBattleWithSusMen_Text_0:
# 181 "data/maps/Route2/scripts.pory"
	.string "Resistance is futile.$"

Route2_Eventscript_PostBattleWithSusMen_Text_1:
# 190 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Huh?$"

Route2_Eventscript_PostBattleWithSusMen_Text_2:
# 195 "data/maps/Route2/scripts.pory"
	.string "Drowzee, Hypnosis.$"

Route2_Eventscript_AkishinjiAsleep_Text_0:
# 237 "data/maps/Route2/scripts.pory"
	.string "That's more like it.$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_0:
# 256 "data/maps/Route2/scripts.pory"
	.string "???????$"

Route2_Eventscript_MitsuruDisruptsTheMen_Text_1:
# 257 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SILHOUETTE}Now! Inteleon, Vulpix!$"

Route2_Eventscript_MitsuruAppears_Text_0:
# 317 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 358 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 365 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Nata Town {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 375 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Tarou_Text_0:
# 394 "data/maps/Route2/scripts.pory"
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
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}I'll show what it can do. Let's do a\n"
	.string "3-vs-3 again.\p"
	.string "Step up if you're ready.$"

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
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3\n"
	.string "Pokémons to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 556 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 567 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 577 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 606 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 675 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_1:
# 679 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}You do you, I'm off. G'night.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}'Night, Shinji.$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_2:
# 697 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

SusMenFightIntro::
# 166 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 170 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 381 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 385 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 389 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 403 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, lowlife?$"

Route2_TarouDefeated::
# 407 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 411 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 627 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattle::
# 647 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_LostInShinjiroFirstBattle::
# 656 "data/maps/Route2/scripts.pory"
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
