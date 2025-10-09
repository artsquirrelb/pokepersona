SunshineOrphanage_Burning_MapScripts::
# 5 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 12 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 8 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
	return

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 18, SunshineOrphanage_Burning_OnWarp18
	.2byte 0

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 18, SunshineOrphanage_Burning_OnFrame18
	.2byte 0


SunshineOrphanage_Burning_OnWarp18::
# 18 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 19 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	hideobjectat 8, MAP_SUNSHINE_ORPHANAGE_BURNING
	return


SunshineOrphanage_Burning_OnFrame18::
# 26 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 27 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire
# 28 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
	end


SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire::
# 33 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 34 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 35 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 36 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 37 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNotices
# 38 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 39 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0
# 43 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 44 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko
	return


# 47 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNotices:
# 48 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko::
# 53 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoRunsUp
# 54 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiroRunsUp
# 55 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 56 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiBlocks
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 58 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 60 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 61 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoTriesToRunUp
# 62 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, BlockingAkihiko
# 63 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 64 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 65 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 69 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_EveryonePin
# 70 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, faceup
# 71 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 73 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 76 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_SusMenAppear
	return


# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoRunsUp:
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 81 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 82 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_down
# 83 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	unlock_facing_direction
	step_end

# 86 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiroRunsUp:
# 87 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 87 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 87 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 88 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 91 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiBlocks:
# 92 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 93 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
# 93 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
	step_end

# 96 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoTriesToRunUp:
# 97 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 97 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 98 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
	step_end

# 101 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BlockingAkihiko:
# 102 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 102 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 103 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanage_Burning_Eventscript_BlockShakeCamera::
# 107 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 108 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 2
# 110 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 4
# 111 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 112 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 113 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 114 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
	return


SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera::
# 118 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 119 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_INTRO_BLAST
# 120 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 121 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 4
# 122 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 6
# 123 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 124 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 125 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 126 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
	return


SunshineOrphanage_Burning_Eventscript_EveryonePin::
# 130 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 1, emoteexclamation
# 131 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 2, emoteexclamation
# 132 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 3, emoteexclamation
# 133 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, emoteexclamation
# 134 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 135 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 136 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 137 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 138 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 139 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 140 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 141 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_SusMenAppear::
# 145 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 146 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_EXIT
# 147 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 148 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 149 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToTheSusMen
# 150 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenAppear1
# 151 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenAppear2
# 152 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 153 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 154 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNoticesTheMen
# 155 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 156 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenLookAround1
# 157 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenLookAround2
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 159 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 160 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 161 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
# 163 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 164 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon
	return


# 167 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear1:
# 168 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 168 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 168 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 171 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear2:
# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 175 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround1:
# 176 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 177 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 180 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround2:
# 181 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 182 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

# 184 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraToTheSusMen:
# 185 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 185 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 186 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 186 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 189 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNoticesTheMen:
# 190 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 191 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_up
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon::
# 195 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAki
# 196 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 197 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special RemoveCameraObject
# 198 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, facedown
# 199 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 200 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 201 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_BALL_OPEN
# 202 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 203 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 204 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, Azumarillexitpokeball
# 205 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 208 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver
	return


# 211 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraBackToAki:
# 212 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 212 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 213 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 213 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 215 "data/maps/SunshineOrphanage_Burning/scripts.pory"
Azumarillexitpokeball:
# 216 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 217 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver::
# 221 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 222 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmoncry
# 223 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillGetsReady
# 224 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0
# 226 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 227 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillPushesAkiShinjiToRiver
# 228 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, AkiShinjiGettingPushed
# 229 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiGettingPushed
# 230 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 232 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 233 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 4
# 234 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiWalksTowardAzumarill
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 236 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1
# 237 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 238 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver
	return


# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashi:
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 242 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 244 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillGetsReady:
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
# 246 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 248 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillPushesAkiShinjiToRiver:
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 254 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiShinjiGettingPushed:
# 255 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 256 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
# 257 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver::
# 262 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 263 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 264 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special StopMapMusic
# 265 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 266 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0
# 267 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 268 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
# 269 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 270 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, jumpinplaceright
# 271 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 272 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillFinishesPushing
# 273 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiFellDown
# 274 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiFellDown
# 275 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_FALL
# 276 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 277 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 278 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 279 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 19
# 280 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 281 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 60
# 282 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, faceleft
# 283 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 284 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 285 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1
# 286 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 287 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 288 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillJumpsDownTheRiver
# 289 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 291 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 292 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 297 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiWalksTowardAzumarill:
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 302 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillJumpsDownTheRiver:
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 304 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 305 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 307 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 308 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 310 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToAkihiko:
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 314 "data/maps/SunshineOrphanage_Burning/scripts.pory"
jumpinplaceright:
# 315 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

# 317 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillFinishesPushing:
# 318 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 318 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 321 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiFellDown:
# 322 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 323 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 324 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 325 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 328 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiFellDown:
# 329 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 330 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 331 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi::
# 335 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 336 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 337 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanToKobayashiAndTheMen
# 338 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 339 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 6
# 340 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 7
# 341 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, MenRunToKobayashi
# 342 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, MenRunToKobayashi
# 343 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, faceright
# 344 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 345 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 346 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 347 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1
# 349 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 350 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 351 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 11, MAP_SUNSHINE_ORPHANAGE_BURNING
# 352 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_GOLBAT, CRY_MODE_NORMAL
# 353 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 11, MensMonExitPokeball
# 354 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 355 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 12, MAP_SUNSHINE_ORPHANAGE_BURNING
# 356 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_PAWNIARD, CRY_MODE_NORMAL
# 357 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 12, MensMonExitPokeball
# 358 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 359 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 360 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 361 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2
# 363 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 364 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 365 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiSendsOutBoltund
# 366 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 367 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 13, MAP_SUNSHINE_ORPHANAGE_BURNING
# 368 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 369 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 13, BoltundExitsPokeball
# 370 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 371 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3
# 372 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 373 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 374 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 375 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


# 379 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MensMonExitPokeball:
# 380 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 381 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 382 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 385 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiSendsOutBoltund:
# 386 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 387 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 390 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BoltundExitsPokeball:
# 391 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 392 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 393 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
	step_end

# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashiAndTheMen:
# 397 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 397 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 397 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
	step_end

# 400 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MenRunToKobayashi:
# 401 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 401 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 401 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 401 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 401 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 402 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0:
# 39 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Crap-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Miki! Where's Miki?!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}MIKI!!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0:
# 58 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}AKI-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1:
# 65 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Teacher! Let me go!! I have to find\n"
	.string "Miki!!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}It's too dangerous, Akihiko!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2:
# 73 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The fire is coming from the girls'\n"
	.string "hallway!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Fuck-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0:
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Azumarill, NOW!$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0:
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}What the-$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1:
# 236 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}I'm sorry, Akihiko, Shinjiro.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0:
# 266 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Do not trust anyone.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1:
# 285 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Go, Azumarill. I'll be fine.$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0:
# 346 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Man In Black$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1:
# 347 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Where are the subjects?\p"
	.string "{SPEAKER NAME_KOBAYASHI}They aren't in their room?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2:
# 361 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "I repeat.\n"
	.string "Where are the subjects?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3:
# 371 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}I said, I don't know.$"
