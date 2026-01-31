SunshineOrphanage_Burning_MapScripts::
# 2 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 18, SunshineOrphanage_Burning_OnWarp18
	.2byte 0

SunshineOrphanage_Burning_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 18, SunshineOrphanage_Burning_OnFrame18
	.2byte 0


SunshineOrphanage_Burning_OnWarp18::
# 11 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 12 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	hideobjectat 8, MAP_SUNSHINE_ORPHANAGE_BURNING
	return


SunshineOrphanage_Burning_OnFrame18::
# 16 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 17 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire
# 18 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
	return


SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire::
# 22 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 23 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 24 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 25 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 26 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNotices
# 27 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 28 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0
# 31 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 32 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko
	return


# 35 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNotices:
# 36 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko::
# 41 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoRunsUp
# 42 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiroRunsUp
# 43 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 44 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiBlocks
# 45 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call Eventscript_BlockShakeCamera
# 46 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 48 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 49 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoTriesToRunUp
# 50 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, BlockingAkihiko
# 51 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 52 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 53 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1
# 56 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_EveryonePin
# 58 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, faceup
# 59 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 60 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 61 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2
# 63 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 64 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_SusMenAppear
	return


# 67 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoRunsUp:
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 69 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 70 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_down
# 71 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	unlock_facing_direction
	step_end

# 74 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiroRunsUp:
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 76 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiBlocks:
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 81 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
# 81 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
	step_end

# 84 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoTriesToRunUp:
# 85 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 85 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 86 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
	step_end

# 89 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BlockingAkihiko:
# 90 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 90 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 91 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_horizontal
	step_end

Eventscript_BlockShakeCamera::
# 95 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 96 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 97 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 2
# 98 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 4
# 99 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 100 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 101 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 102 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
	return


SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera::
# 106 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 107 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_INTRO_BLAST
# 108 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 4
# 110 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 6
# 111 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 112 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 113 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 114 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
	return


SunshineOrphanage_Burning_Eventscript_EveryonePin::
# 118 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 1, emoteexclamation
# 119 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 2, emoteexclamation
# 120 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 121 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 3, emoteexclamation
# 122 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, emoteexclamation
# 123 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 124 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 125 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 126 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 127 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 128 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 129 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 130 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 131 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_SusMenAppear::
# 135 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 136 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_EXIT
# 137 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 138 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 139 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToTheSusMen
# 140 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenAppear1
# 141 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenAppear2
# 142 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 143 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 144 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNoticesTheMen
# 145 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 146 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenLookAround1
# 147 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenLookAround2
# 148 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 149 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 150 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 151 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 152 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
# 153 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 154 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon
	return


# 157 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear1:
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear2:
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround1:
# 166 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 167 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 170 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround2:
# 171 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

# 174 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraToTheSusMen:
# 175 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 175 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 176 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 176 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 179 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNoticesTheMen:
# 180 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 181 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_up
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon::
# 185 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAki
# 186 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 187 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special RemoveCameraObject
# 188 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, facedown
# 189 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 190 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 191 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_BALL_OPEN
# 192 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 193 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 194 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, Azumarillexitpokeball
# 195 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 196 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0
# 197 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 198 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver
	return


# 201 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraBackToAki:
# 202 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 202 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 203 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 203 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 205 "data/maps/SunshineOrphanage_Burning/scripts.pory"
Azumarillexitpokeball:
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver::
# 211 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 212 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmoncry
# 213 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillGetsReady
# 214 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 215 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0
# 216 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 217 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillPushesAkiShinjiToRiver
# 218 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, AkiShinjiGettingPushed
# 219 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiGettingPushed
# 220 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 221 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 222 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 4
# 223 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiWalksTowardAzumarill
# 224 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1
# 226 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 227 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver
	return


# 230 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashi:
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 233 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillGetsReady:
# 234 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 236 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 237 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 240 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillPushesAkiShinjiToRiver:
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 243 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiShinjiGettingPushed:
# 244 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
# 246 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver::
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 252 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 253 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 254 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special StopMapMusic
# 255 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 256 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0
# 257 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
# 259 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 260 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, jumpinplaceright
# 261 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 262 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillFinishesPushing
# 263 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiFellDown
# 264 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiFellDown
# 265 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_FALL
# 266 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 267 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 268 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 269 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 19
# 270 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_TEMP_2
# 271 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 60
# 272 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, faceleft
# 273 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 274 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 275 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1
# 276 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 277 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 278 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillJumpsDownTheRiver
# 279 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 280 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 281 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 282 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 283 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 284 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 285 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fwdtime 10, 05
# 286 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 289 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiWalksTowardAzumarill:
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 290 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 291 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 291 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 291 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillJumpsDownTheRiver:
# 295 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 295 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 296 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 297 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 300 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 302 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToAkihiko:
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
jumpinplaceright:
# 307 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

# 309 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillFinishesPushing:
# 310 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 310 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 313 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiFellDown:
# 314 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 315 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 316 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 317 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 320 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiFellDown:
# 321 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 322 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 323 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi::
# 328 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 329 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 330 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanToKobayashiAndTheMen
# 331 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 332 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 6
# 333 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 7
# 334 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, MenRunToKobayashi
# 335 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, MenRunToKobayashi
# 336 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, faceright
# 337 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 338 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 339 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 341 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1
# 343 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 344 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 345 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 11, MAP_SUNSHINE_ORPHANAGE_BURNING
# 346 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_GOLBAT, CRY_MODE_NORMAL
# 347 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 11, MensMonExitPokeball
# 348 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 349 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 12, MAP_SUNSHINE_ORPHANAGE_BURNING
# 350 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_PAWNIARD, CRY_MODE_NORMAL
# 351 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 12, MensMonExitPokeball
# 352 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 353 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 354 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 355 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2
# 357 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 358 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 359 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiSendsOutBoltund
# 360 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 361 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 13, MAP_SUNSHINE_ORPHANAGE_BURNING
# 362 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 363 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 13, BoltundExitsPokeball
# 364 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 365 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3
# 366 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 367 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 368 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 369 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


# 373 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MensMonExitPokeball:
# 374 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 375 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 376 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 379 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiSendsOutBoltund:
# 380 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 381 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 384 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BoltundExitsPokeball:
# 385 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 386 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 387 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
	step_end

# 390 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashiAndTheMen:
# 391 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 391 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 391 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
	step_end

# 394 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MenRunToKobayashi:
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0:
# 28 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}Crap-\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Miki! Where's Miki?!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}MIKI!!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0:
# 46 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}AKI-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1:
# 53 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}Teacher! Let me go!! I have to find\n"
	.string "Miki!!\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}It's too dangerous, Akihiko!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2:
# 61 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_MAD}The fire is coming from the girls'\n"
	.string "hallway!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}Fuck-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0:
# 196 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Azumarill, NOW!$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0:
# 215 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}What the-$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1:
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KBYS}I'm sorry, Akihiko, Shinjiro.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0:
# 256 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Do not trust anyone.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1:
# 275 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Go, Azumarill. I'll be fine.$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0:
# 339 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Man In Black$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1:
# 341 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Where are the subjects?\p"
	.string "{SPEAKER NAME_KBYS}They aren't in their room?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2:
# 355 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "I repeat.\n"
	.string "Where are the subjects?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3:
# 365 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KBYS}I said, I don't know.$"
