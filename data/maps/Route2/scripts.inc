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
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_39
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

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 38 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_34
	goto Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_35

Route2_MapScripts_MAP_SCRIPT_ON_TRANSITION_39:
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
	waitmovement 0
# 319 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 320 "data/maps/Route2/scripts.pory"
	waitse
# 321 "data/maps/Route2/scripts.pory"
	delay 30
# 322 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_MitsuruDisruptsTheMen_Text_0
# 323 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MitsuruAppears_Text_0
# 326 "data/maps/Route2/scripts.pory"
	closemessage
# 327 "data/maps/Route2/scripts.pory"
	playse SE_EXIT
# 328 "data/maps/Route2/scripts.pory"
	applymovement 12, InteleonWalksOut
# 329 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, CameraToInteleon
# 330 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route2/scripts.pory"
	delay 20
# 332 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 333 "data/maps/Route2/scripts.pory"
	applymovement 12, walkinplacedown
# 334 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route2/scripts.pory"
	delay 30
# 336 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 337 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 26
# 338 "data/maps/Route2/scripts.pory"
	release
	end


# 342 "data/maps/Route2/scripts.pory"
walkinplacedown:
# 343 "data/maps/Route2/scripts.pory"
	walk_in_place_down
	step_end

# 345 "data/maps/Route2/scripts.pory"
CameraToMitsuru:
# 346 "data/maps/Route2/scripts.pory"
	walk_left
# 346 "data/maps/Route2/scripts.pory"
	walk_left
# 346 "data/maps/Route2/scripts.pory"
	walk_left
# 347 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/Route2/scripts.pory"
MitsuruAppears:
# 351 "data/maps/Route2/scripts.pory"
	walk_up
# 351 "data/maps/Route2/scripts.pory"
	walk_up
# 352 "data/maps/Route2/scripts.pory"
	walk_right
# 352 "data/maps/Route2/scripts.pory"
	walk_right
# 352 "data/maps/Route2/scripts.pory"
	walk_right
# 352 "data/maps/Route2/scripts.pory"
	walk_right
# 352 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 355 "data/maps/Route2/scripts.pory"
InteleonWalksOut:
# 356 "data/maps/Route2/scripts.pory"
	set_visible
# 357 "data/maps/Route2/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/Route2/scripts.pory"
CameraToInteleon:
# 361 "data/maps/Route2/scripts.pory"
	walk_up
# 361 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_RouteSign::
# 364 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_RouteSign_Text_0
# 365 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_DirectionSign::
# 371 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_DirectionSign_Text_0
# 375 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Yuuka::
# 380 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_YUUKA, Route2_YuukaIntro, Route2_YuukaDefeated
# 381 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Yuuka_Text_0
# 382 "data/maps/Route2/scripts.pory"
	msgbox Route2_YuukaPostBattle
# 383 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_Eventscript_Kyousuke::
# 400 "data/maps/Route2/scripts.pory"
	lock
# 401 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 402 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 403 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_1
# 405 "data/maps/Route2/scripts.pory"
	closemessage
# 406 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 407 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 409 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 410 "data/maps/Route2/scripts.pory"
	closemessage
# 411 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_Tarou::
# 415 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 43
	goto_if_gt Route2_Eventscript_Tarou_4
Route2_Eventscript_Tarou_3:
# 415 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_gt Route2_Eventscript_Tarou_7
Route2_Eventscript_Tarou_2:
# 431 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_TAROU, Route2_TarouIntro, Route2_TarouDefeated
# 432 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 433 "data/maps/Route2/scripts.pory"
	msgbox Route2_TarouPostBattle
# 434 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_Tarou_1:
# 416 "data/maps/Route2/scripts.pory"
	lock
# 417 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_0
# 418 "data/maps/Route2/scripts.pory"
	applymovement TAROU, walkinplacedown
# 419 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Tarou_Text_0
# 421 "data/maps/Route2/scripts.pory"
	closemessage
# 422 "data/maps/Route2/scripts.pory"
	applymovement KYOUSUKE, walkinplaceup
# 423 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Kyousuke_Text_2
# 425 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Kyousuke_Text_3
# 426 "data/maps/Route2/scripts.pory"
	closemessage
# 427 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Tarou_4:
# 415 "data/maps/Route2/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_3

Route2_Eventscript_Tarou_7:
# 415 "data/maps/Route2/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_lt Route2_Eventscript_Tarou_1
	goto Route2_Eventscript_Tarou_2


Route2_Eventscript_AkihikoOnFrame33::
# 452 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon
	return


Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon::
# 456 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroSplitsOut
# 457 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0
# 462 "data/maps/Route2/scripts.pory"
	closemessage
# 463 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroGoesOffCam
# 464 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 465 "data/maps/Route2/scripts.pory"
	waitmovement 6
# 466 "data/maps/Route2/scripts.pory"
	lock
# 467 "data/maps/Route2/scripts.pory"
	removeobject 6
# 468 "data/maps/Route2/scripts.pory"
	setobjectxyperm 6, 29, 21
# 469 "data/maps/Route2/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 470 "data/maps/Route2/scripts.pory"
	addobject 6
# 471 "data/maps/Route2/scripts.pory"
	fwdtime 13, 45
# 472 "data/maps/Route2/scripts.pory"
	release
# 473 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 34
# 474 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end


# 478 "data/maps/Route2/scripts.pory"
ShinjiroSplitsOut:
# 479 "data/maps/Route2/scripts.pory"
	set_visible
# 480 "data/maps/Route2/scripts.pory"
	walk_down
# 480 "data/maps/Route2/scripts.pory"
	walk_down
# 481 "data/maps/Route2/scripts.pory"
	face_up
	step_end

# 484 "data/maps/Route2/scripts.pory"
ShinjiroGoesOffCam:
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 485 "data/maps/Route2/scripts.pory"
	walk_right
# 486 "data/maps/Route2/scripts.pory"
	set_invisible
	step_end

Route2_Eventscript_ShinjiroFindingPokemon::
# 490 "data/maps/Route2/scripts.pory"
	lock
# 491 "data/maps/Route2/scripts.pory"
	faceplayer
# 492 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_ShinjiroFindingPokemon_Text_0
# 497 "data/maps/Route2/scripts.pory"
	closemessage
# 498 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_AkihikoOnFrame40::
# 503 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_AkihikoNoticingShinjiroOutside
	return


Route2_Eventscript_AkihikoNoticingShinjiroOutside::
# 507 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoNoticingShinjiroOutside
# 508 "data/maps/Route2/scripts.pory"
	delay 8
# 509 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 510 "data/maps/Route2/scripts.pory"
	waitse
# 511 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 512 "data/maps/Route2/scripts.pory"
	special SpawnCameraObject
# 513 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkright
# 514 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route2/scripts.pory"
	delay 20
# 516 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0
# 518 "data/maps/Route2/scripts.pory"
	closemessage
# 519 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 520 "data/maps/Route2/scripts.pory"
	applymovement 6, ShinjiroHeardAkihikoCalling
# 521 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1
# 532 "data/maps/Route2/scripts.pory"
	closemessage
# 533 "data/maps/Route2/scripts.pory"
	applymovement SHINJIRO, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0
# 534 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1
# 535 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 536 "data/maps/Route2/scripts.pory"
	delay 30
# 537 "data/maps/Route2/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2
# 538 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 539 "data/maps/Route2/scripts.pory"
	special RemoveCameraObject
# 540 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 41
# 541 "data/maps/Route2/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return


# 544 "data/maps/Route2/scripts.pory"
AkihikoNoticingShinjiroOutside:
# 545 "data/maps/Route2/scripts.pory"
	walk_down
# 546 "data/maps/Route2/scripts.pory"
	face_right
# 547 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
	step_end

# 550 "data/maps/Route2/scripts.pory"
ShinjiroHeardAkihikoCalling:
# 551 "data/maps/Route2/scripts.pory"
	emote_exclamation_mark
# 552 "data/maps/Route2/scripts.pory"
	face_left
	step_end

Route2_Eventscript_MustBattleShinjiro::
# 556 "data/maps/Route2/scripts.pory"
	lock
# 557 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 558 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 559 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_MustBattleShinjiro_Text_0
# 560 "data/maps/Route2/scripts.pory"
	closemessage
# 561 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle::
# 566 "data/maps/Route2/scripts.pory"
	lock
# 567 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 568 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_1
# 577 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_2, MSGBOX_YESNO
# 578 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_InitShinjiroFirstBattle_5
Route2_Eventscript_InitShinjiroFirstBattle_4:
# 584 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle
# 585 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_1:
# 569 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_InitShinjiroFirstBattle_Text_1
# 570 "data/maps/Route2/scripts.pory"
	closemessage
# 571 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 572 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_InitShinjiroFirstBattle_5:
# 579 "data/maps/Route2/scripts.pory"
	closemessage
# 580 "data/maps/Route2/scripts.pory"
	playse MUS_HEAL
# 581 "data/maps/Route2/scripts.pory"
	waitse
# 582 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
	goto Route2_Eventscript_InitShinjiroFirstBattle_4


Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle::
# 590 "data/maps/Route2/scripts.pory"
	lock
# 591 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 592 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1
# 616 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_1:
# 593 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0, MSGBOX_YESNO
# 595 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6
# 604 "data/maps/Route2/scripts.pory"
	playse SE_FAILURE
# 605 "data/maps/Route2/scripts.pory"
	applymovement 6, emoteangry
# 606 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 607 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2
# 608 "data/maps/Route2/scripts.pory"
	closemessage
# 609 "data/maps/Route2/scripts.pory"
	subvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 610 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 611 "data/maps/Route2/scripts.pory"
	release
# 613 "data/maps/Route2/scripts.pory"
	closemessage
	end

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_2:
# 617 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 618 "data/maps/Route2/scripts.pory"
	applymovement 6, pointup2
# 619 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route2/scripts.pory"
	addvar VAR_SHINJIRO_RELATIONSHIP_POINTS, 3
# 621 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3
# 623 "data/maps/Route2/scripts.pory"
	closemessage
# 624 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
# 625 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_6:
# 596 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1
# 597 "data/maps/Route2/scripts.pory"
	closemessage
# 598 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 599 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 600 "data/maps/Route2/scripts.pory"
	release
	end


# 629 "data/maps/Route2/scripts.pory"
emoteangry:
# 630 "data/maps/Route2/scripts.pory"
	emote_angry
	step_end

Route2_Eventscript_InitShinjiroFirstBattle2::
# 634 "data/maps/Route2/scripts.pory"
	lock
# 635 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 636 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 637 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 638 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 639 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 640 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_InitShinjiroFirstBattle3::
# 645 "data/maps/Route2/scripts.pory"
	lock
# 646 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0
# 647 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 648 "data/maps/Route2/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 649 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 650 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_InitShinjiroFirstBattle
# 651 "data/maps/Route2/scripts.pory"
	release
	end


Route2_Eventscript_SelectingPartyShinjiroFirstBattle::
# 656 "data/maps/Route2/scripts.pory"
	lock
# 657 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 658 "data/maps/Route2/scripts.pory"
	setflag FLAG_NO_BAG_USE
# 659 "data/maps/Route2/scripts.pory"
	special ChooseHalfPartyForBattle
# 660 "data/maps/Route2/scripts.pory"
	waitstate
# 661 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2
# 667 "data/maps/Route2/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 668 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 669 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER
# 670 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 671 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_MULTI
# 672 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8005, MULTI_BATTLE_CHOOSE_MONS
# 673 "data/maps/Route2/scripts.pory"
	trainerbattle_no_intro TRAINER_SHINJIRO_ROUTE_2, ShinjiroFirstBattleDefeated
# 674 "data/maps/Route2/scripts.pory"
	fwdtime 23, 20
# 675 "data/maps/Route2/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY
# 676 "data/maps/Route2/scripts.pory"
	special CallFrontierUtilFunc
# 677 "data/maps/Route2/scripts.pory"
	special LoadPlayerParty
# 678 "data/maps/Route2/scripts.pory"
	goto Route2__Eventscript_ShinjiroFirstBattleResult
Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1:
# 680 "data/maps/Route2/scripts.pory"
	release
	return

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_2:
# 662 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0
# 663 "data/maps/Route2/scripts.pory"
	closemessage
# 664 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle
	goto Route2_Eventscript_SelectingPartyShinjiroFirstBattle_1


Route2__Eventscript_ShinjiroFirstBattleResult::
# 688 "data/maps/Route2/scripts.pory"
	lock
# 689 "data/maps/Route2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 690 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_12
Route2__Eventscript_ShinjiroFirstBattleResult_10:
# 694 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_9
Route2__Eventscript_ShinjiroFirstBattleResult_7:
# 698 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Route2__Eventscript_ShinjiroFirstBattleResult_6
Route2__Eventscript_ShinjiroFirstBattleResult_5:
# 704 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 705 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointUp
# 706 "data/maps/Route2/scripts.pory"
	closemessage
Route2__Eventscript_ShinjiroFirstBattleResult_1:
# 708 "data/maps/Route2/scripts.pory"
	goto Route2_Eventscript_PostShinjiroFirstBattle
# 709 "data/maps/Route2/scripts.pory"
	release
	return

Route2__Eventscript_ShinjiroFirstBattleResult_2:
# 691 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointDown
# 692 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_3:
# 695 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_WonInShinjiroFirstBattlePointUp
# 696 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_4:
# 699 "data/maps/Route2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 700 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_LostInShinjiroFirstBattlePointDown
# 701 "data/maps/Route2/scripts.pory"
	closemessage
	goto Route2__Eventscript_ShinjiroFirstBattleResult_1

Route2__Eventscript_ShinjiroFirstBattleResult_6:
# 698 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_4
	goto Route2__Eventscript_ShinjiroFirstBattleResult_5

Route2__Eventscript_ShinjiroFirstBattleResult_9:
# 694 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 103
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_3
	goto Route2__Eventscript_ShinjiroFirstBattleResult_7

Route2__Eventscript_ShinjiroFirstBattleResult_12:
# 690 "data/maps/Route2/scripts.pory"
	compare VAR_SHINJIRO_RELATIONSHIP_POINTS, 97
	goto_if_eq Route2__Eventscript_ShinjiroFirstBattleResult_2
	goto Route2__Eventscript_ShinjiroFirstBattleResult_10


Route2_Eventscript_PostShinjiroFirstBattle::
# 755 "data/maps/Route2/scripts.pory"
	lock
# 756 "data/maps/Route2/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 42
# 757 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 758 "data/maps/Route2/scripts.pory"
	clearflag FLAG_NO_BAG_USE
# 759 "data/maps/Route2/scripts.pory"
	playse SE_M_YAWN
# 760 "data/maps/Route2/scripts.pory"
	applymovement 6, shakevertical
# 761 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 762 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_PostShinjiroFirstBattle_Text_0
# 766 "data/maps/Route2/scripts.pory"
	closemessage
# 767 "data/maps/Route2/scripts.pory"
	special HealPlayerParty
# 768 "data/maps/Route2/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 769 "data/maps/Route2/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 773 "data/maps/Route2/scripts.pory"
Route2ShinjiroGoesInsideHouse:
# 774 "data/maps/Route2/scripts.pory"
	walk_down
# 775 "data/maps/Route2/scripts.pory"
	walk_left
# 775 "data/maps/Route2/scripts.pory"
	walk_left
# 775 "data/maps/Route2/scripts.pory"
	walk_left
# 776 "data/maps/Route2/scripts.pory"
	walk_up
# 776 "data/maps/Route2/scripts.pory"
	walk_up
# 776 "data/maps/Route2/scripts.pory"
	walk_up
	step_end

Route2_Eventscript_Himari::
# 780 "data/maps/Route2/scripts.pory"
	lock
# 781 "data/maps/Route2/scripts.pory"
	faceplayer
# 782 "data/maps/Route2/scripts.pory"
	setspeaker Route2_Eventscript_Himari_Text_0
# 783 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route2_Eventscript_Himari_1
# 807 "data/maps/Route2/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Route2_Eventscript_Himari_2
# 812 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_5
# 814 "data/maps/Route2/scripts.pory"
	closemessage
# 815 "data/maps/Route2/scripts.pory"
	checkspecies SPECIES_ROCKRUFF
# 816 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, SPECIES_ROCKRUFF
	goto_if_eq Route2_Eventscript_Himari_9
	return

Route2_Eventscript_Himari_1:
# 784 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_1, MSGBOX_YESNO
# 785 "data/maps/Route2/scripts.pory"
	closemessage
# 786 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route2_Eventscript_Himari_6
# 799 "data/maps/Route2/scripts.pory"
	playse SE_BOO
# 800 "data/maps/Route2/scripts.pory"
	applymovement 15, emotecry
# 801 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 802 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_3
# 803 "data/maps/Route2/scripts.pory"
	closemessage
# 804 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_2:
# 808 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_4
	return

Route2_Eventscript_Himari_6:
# 787 "data/maps/Route2/scripts.pory"
	playse SE_SHINY
# 788 "data/maps/Route2/scripts.pory"
	applymovement 15, emotemusic
# 789 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_2
# 791 "data/maps/Route2/scripts.pory"
	closemessage
# 792 "data/maps/Route2/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 793 "data/maps/Route2/scripts.pory"
	waitmoncry
# 794 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 795 "data/maps/Route2/scripts.pory"
	release
	end

Route2_Eventscript_Himari_9:
# 817 "data/maps/Route2/scripts.pory"
	playse SE_PIN
# 818 "data/maps/Route2/scripts.pory"
	applymovement 15, emoteexclamation
# 819 "data/maps/Route2/scripts.pory"
	waitmovement 0
# 820 "data/maps/Route2/scripts.pory"
	msgbox Route2_Eventscript_Himari_Text_6
# 821 "data/maps/Route2/scripts.pory"
	closemessage
# 822 "data/maps/Route2/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


# 826 "data/maps/Route2/scripts.pory"
emotecry:
# 827 "data/maps/Route2/scripts.pory"
	emote_cry
	step_end

GiveOutfitbox::
# 831 "data/maps/Route2/scripts.pory"
	lock
# 832 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_COMPANION_MENU, GiveOutfitbox_2
# 837 "data/maps/Route2/scripts.pory"
	msgbox GiveOutfitbox_Text_0
# 839 "data/maps/Route2/scripts.pory"
	closemessage
# 840 "data/maps/Route2/scripts.pory"
	checkplayergender
# 841 "data/maps/Route2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq GiveOutfitbox_5
# 845 "data/maps/Route2/scripts.pory"
	unlockoutfit OUTFIT_AKIHIKO
GiveOutfitbox_1:
# 848 "data/maps/Route2/scripts.pory"
	release
	end

GiveOutfitbox_2:
# 833 "data/maps/Route2/scripts.pory"
	giveitem ITEM_OUTFIT_BOX
# 834 "data/maps/Route2/scripts.pory"
	setflag FLAG_COMPANION_MENU
	goto GiveOutfitbox_1

GiveOutfitbox_5:
# 842 "data/maps/Route2/scripts.pory"
	unlockoutfit OUTFIT_MITSURU
	goto GiveOutfitbox_1


# 533 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_0:
# 533 "data/maps/Route2/scripts.pory"
	walk_right
# 533 "data/maps/Route2/scripts.pory"
	walk_right
# 533 "data/maps/Route2/scripts.pory"
	walk_right
# 533 "data/maps/Route2/scripts.pory"
	walk_right
# 533 "data/maps/Route2/scripts.pory"
	face_left
	step_end

# 534 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_1:
# 534 "data/maps/Route2/scripts.pory"
	walk_right
# 534 "data/maps/Route2/scripts.pory"
	walk_right
# 534 "data/maps/Route2/scripts.pory"
	walk_right
# 534 "data/maps/Route2/scripts.pory"
	walk_right
	step_end

# 537 "data/maps/Route2/scripts.pory"
Route2_Eventscript_AkihikoNoticingShinjiroOutside_Movement_2:
# 537 "data/maps/Route2/scripts.pory"
	walk_left
# 537 "data/maps/Route2/scripts.pory"
	walk_left
# 537 "data/maps/Route2/scripts.pory"
	walk_left
# 537 "data/maps/Route2/scripts.pory"
	walk_left
# 537 "data/maps/Route2/scripts.pory"
	walk_left
	step_end

# 646 "data/maps/Route2/scripts.pory"
Route2_Eventscript_InitShinjiroFirstBattle3_Movement_0:
# 646 "data/maps/Route2/scripts.pory"
	walk_up
# 646 "data/maps/Route2/scripts.pory"
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
# 323 "data/maps/Route2/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}...\p"
	.string "Inteleon, let's get these two out of\n"
	.string "here first.\p"
	.string "The ice can only hold them off for so\n"
	.string "long.$"

Route2_Eventscript_RouteSign_Text_0:
# 364 "data/maps/Route2/scripts.pory"
	.string "Route 2.$"

Route2_Eventscript_DirectionSign_Text_0:
# 371 "data/maps/Route2/scripts.pory"
	.string "Sunshine Meadow {UP_ARROW}\n"
	.string "Sunshine Town {RIGHT_ARROW}\p"
	.string "Route 1 {DOWN_ARROW}\n"
	.string "Coralport {LEFT_ARROW}$"

Route2_Eventscript_Yuuka_Text_0:
# 381 "data/maps/Route2/scripts.pory"
	.string "Yuuka$"

Route2_Eventscript_Kyousuke_Text_0:
# 401 "data/maps/Route2/scripts.pory"
	.string "Tarou$"

Route2_Eventscript_Kyousuke_Text_1:
# 404 "data/maps/Route2/scripts.pory"
	.string "So you're saying this Pokémon is really\n"
	.string "strong?$"

Route2_Eventscript_Kyousuke_Text_2:
# 408 "data/maps/Route2/scripts.pory"
	.string "Kyousuke$"

Route2_Eventscript_Kyousuke_Text_3:
# 409 "data/maps/Route2/scripts.pory"
	.string "That's right, young man. Hehehehe.$"

Route2_Eventscript_Tarou_Text_0:
# 420 "data/maps/Route2/scripts.pory"
	.string "So you're saying these Pokémon are\n"
	.string "really strong?$"

Route2_Eventscript_ShinjiroSplitsOutToCatchPokemon_Text_0:
# 458 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Aight, I'm gonna go ahead and catch\n"
	.string "some Pokémon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Sure. Be careful, the men in black could\n"
	.string "still be around here.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hah. The same to you, Aki.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}See you later at the Meadow.$"

Route2_Eventscript_ShinjiroFindingPokemon_Text_0:
# 492 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}How's it going?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Got myself two.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Hahaha, I've never seen you're this\n"
	.string "worked up.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Shut up and go to the Meadow if you're\n"
	.string "done preparing.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Alright, alright ahaha.$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_0:
# 516 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Oh, there he is.)\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hey Shinji, you coudln't sleep too?$"

Route2_Eventscript_AkihikoNoticingShinjiroOutside_Text_1:
# 522 "data/maps/Route2/scripts.pory"
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
# 559 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There's no point going back inside, it's\n"
	.string "not like I can sleep right now.)$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_0:
# 567 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Ready for our first battle?$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_1:
# 569 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, take your sweet time. We still have\n"
	.string "all night, Aki.$"

Route2_Eventscript_InitShinjiroFirstBattle_Text_2:
# 577 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Before we start, do you want me to heal\n"
	.string "your Pokémon?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_0:
# 553 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Wait, you don't have at least 3 Pokémon\n"
	.string "to battle. I want a fair fight.\p"
	.string "Are you sure you still want to fight\n"
	.string "handicapped?$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_1:
# 596 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Good thinking. I won't go down easily.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_2:
# 607 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Don't underestimate me.$"

Route2_Eventscript_CheckingPartyNumberForShinjiroFirstBattle_Text_3:
# 621 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_CONFIDENT}Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}No holding back, alright?$"

Route2_Eventscript_SelectingPartyShinjiroFirstBattle_Text_0:
# 662 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's pick 3 Pokémon to fight. Shinji is\n"
	.string "waiting.)$"

Route2_Eventscript_PostShinjiroFirstBattle_Text_0:
# 762 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_GEEZ}-yawn- That battle took all the energy\n"
	.string "out of me.\p"
	.string "Let's go to bed. I don't want to hear\n"
	.string "Kirijo complaining tomorrow if we sleep\l"
	.string "in.\p"
	.string "Wanna head inside?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Yeah, I'm tired too.$"

Route2_Eventscript_Himari_Text_0:
# 782 "data/maps/Route2/scripts.pory"
	.string "Himari$"

Route2_Eventscript_Himari_Text_1:
# 784 "data/maps/Route2/scripts.pory"
	.string "Can I pet your Rockruff?$"

Route2_Eventscript_Himari_Text_2:
# 789 "data/maps/Route2/scripts.pory"
	.string "Thank you!\p"
	.string "{SPEAKER NAME_NONE}Himari petted the Rockruff.$"

Route2_Eventscript_Himari_Text_3:
# 802 "data/maps/Route2/scripts.pory"
	.string "Aw... Okay...$"

Route2_Eventscript_Himari_Text_4:
# 808 "data/maps/Route2/scripts.pory"
	.string "Thank you for letting me pet your\n"
	.string "Rockruff!\p"
	.string "Its fur is surprisingly soft!$"

Route2_Eventscript_Himari_Text_5:
# 812 "data/maps/Route2/scripts.pory"
	.string "Rockruff in Kitoha region can evolve\n"
	.string "into Midday, Midnight or Dusk form\l"
	.string "Lycanroc regardless of its Ability.\p"
	.string "Also, I heard all forms of Lycanroc has\n"
	.string "Tough Claws! The only difference is\l"
	.string "their base stats spread.$"

Route2_Eventscript_Himari_Text_6:
# 820 "data/maps/Route2/scripts.pory"
	.string "Whoa! You have a Rockruff! It's so\n"
	.string "cute!$"

GiveOutfitbox_Text_0:
# 837 "data/maps/Route2/scripts.pory"
	.string "Current protag is {PLAYER}.\p"
	.string "Unlocking {RIVAL}.$"

SusMenFightIntro::
# 172 "data/maps/Route2/scripts.pory"
	.string "Go, Venipede.$"

SusMenFightDefeated::
# 176 "data/maps/Route2/scripts.pory"
	.string "You aren't half bad. However...$"

Route2_YuukaIntro::
# 387 "data/maps/Route2/scripts.pory"
	.string "Hey, I'm bored. Want a quick battle?$"

Route2_YuukaDefeated::
# 391 "data/maps/Route2/scripts.pory"
	.string "Thank you. That was fun!$"

Route2_YuukaPostBattle::
# 395 "data/maps/Route2/scripts.pory"
	.string "Actually I went here to catch an Abra\n"
	.string "but they kept teleporting away...$"

Route2_TarouIntro::
# 439 "data/maps/Route2/scripts.pory"
	.string "What are you looking at, low-life?$"

Route2_TarouDefeated::
# 443 "data/maps/Route2/scripts.pory"
	.string "Tch. This Pokémon sucks. I shouldn't\n"
	.string "have bought it.$"

Route2_TarouPostBattle::
# 447 "data/maps/Route2/scripts.pory"
	.string "I already gave you the money. Screw\n"
	.string "off.$"

ShinjiroFirstBattleDefeated::
# 683 "data/maps/Route2/scripts.pory"
	.string "Whew, that was quite a work-out.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointUp::
# 712 "data/maps/Route2/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_STRUGGLED}-huff- -huff- (Did I win?)\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_STRUGGLED}-huff- Dang it, I was so close.\p"
	.string "Looks like I lost to both of you, huh.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Well, next time I won't lose again.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CONFIDENT}Hehe, I'm always open for another\n"
	.string "battle against you. It was fun.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Heh, it is.$"

Route2_Eventscript_WonInShinjiroFirstBattlePointDown::
# 721 "data/maps/Route2/scripts.pory"
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
# 733 "data/maps/Route2/scripts.pory"
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
# 744 "data/maps/Route2/scripts.pory"
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
