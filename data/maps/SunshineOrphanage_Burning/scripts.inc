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
# 19 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 20 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire
# 21 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
	end


SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire::
# 26 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 27 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 28 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 29 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 30 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNotices
# 31 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 32 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0
# 35 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 36 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko
	return


# 39 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNotices:
# 40 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko::
# 45 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoRunsUp
# 46 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiroRunsUp
# 47 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 48 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiBlocks
# 49 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call Eventscript_BlockShakeCamera
# 50 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 52 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 53 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoTriesToRunUp
# 54 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, BlockingAkihiko
# 55 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 56 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1
# 60 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 61 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_EveryonePin
# 62 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, faceup
# 63 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 64 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 65 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2
# 67 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_SusMenAppear
	return


# 71 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoRunsUp:
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 73 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 74 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_down
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	unlock_facing_direction
	step_end

# 78 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiroRunsUp:
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 83 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiBlocks:
# 84 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 85 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
# 85 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
	step_end

# 88 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoTriesToRunUp:
# 89 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 89 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 90 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
	step_end

# 93 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BlockingAkihiko:
# 94 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 94 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 95 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_horizontal
	step_end

Eventscript_BlockShakeCamera::
# 99 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 100 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 101 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 2
# 102 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 4
# 103 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 104 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 105 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 106 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
	return


SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera::
# 110 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 111 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_INTRO_BLAST
# 112 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 113 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 4
# 114 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 6
# 115 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 116 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 117 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 118 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
	return


SunshineOrphanage_Burning_Eventscript_EveryonePin::
# 122 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 1, emoteexclamation
# 123 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 2, emoteexclamation
# 124 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 125 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 3, emoteexclamation
# 126 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, emoteexclamation
# 127 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 128 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 129 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 130 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 131 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 132 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 133 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 134 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 135 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_SusMenAppear::
# 139 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 140 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_EXIT
# 141 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 142 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 143 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToTheSusMen
# 144 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenAppear1
# 145 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenAppear2
# 146 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 147 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 148 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNoticesTheMen
# 149 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 150 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenLookAround1
# 151 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenLookAround2
# 152 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 153 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 154 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 155 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 156 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
# 157 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon
	return


# 161 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear1:
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear2:
# 166 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 166 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 166 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 166 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 169 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround1:
# 170 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 171 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 174 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround2:
# 175 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 176 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

# 178 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraToTheSusMen:
# 179 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 179 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 180 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 180 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 183 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNoticesTheMen:
# 184 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 185 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_up
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon::
# 189 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAki
# 190 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 191 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special RemoveCameraObject
# 192 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, facedown
# 193 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 194 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 195 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_BALL_OPEN
# 196 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 197 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 198 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, Azumarillexitpokeball
# 199 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 200 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0
# 201 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 202 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver
	return


# 205 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraBackToAki:
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 209 "data/maps/SunshineOrphanage_Burning/scripts.pory"
Azumarillexitpokeball:
# 210 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 211 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver::
# 215 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 216 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmoncry
# 217 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillGetsReady
# 218 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 219 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0
# 220 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 221 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillPushesAkiShinjiToRiver
# 222 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, AkiShinjiGettingPushed
# 223 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiGettingPushed
# 224 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 226 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 4
# 227 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiWalksTowardAzumarill
# 228 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 229 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1
# 230 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver
	return


# 234 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashi:
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 235 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 237 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillGetsReady:
# 238 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
# 239 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 240 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 241 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 244 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillPushesAkiShinjiToRiver:
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 245 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 247 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiShinjiGettingPushed:
# 248 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 249 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
# 250 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 251 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver::
# 255 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 256 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lockall
# 257 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 258 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special StopMapMusic
# 259 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 260 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0
# 261 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 262 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	releaseall
# 263 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 264 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, jumpinplaceright
# 265 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 266 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillFinishesPushing
# 267 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiFellDown
# 268 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiFellDown
# 269 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_FALL
# 270 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 271 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 272 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 273 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 19
# 274 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_TEMP_2
# 275 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 60
# 276 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, faceleft
# 277 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 278 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 279 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1
# 280 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 281 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 282 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillJumpsDownTheRiver
# 283 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 284 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_M_DIVE
# 285 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 286 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 287 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 288 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 289 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 292 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiWalksTowardAzumarill:
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 293 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 297 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillJumpsDownTheRiver:
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 300 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 301 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 302 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 305 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToAkihiko:
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 309 "data/maps/SunshineOrphanage_Burning/scripts.pory"
jumpinplaceright:
# 310 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillFinishesPushing:
# 313 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 313 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 316 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiFellDown:
# 317 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 318 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 319 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 320 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 323 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiFellDown:
# 324 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 325 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 326 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi::
# 331 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 332 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 333 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanToKobayashiAndTheMen
# 334 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 335 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 6
# 336 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 7
# 337 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, MenRunToKobayashi
# 338 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, MenRunToKobayashi
# 339 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, faceright
# 340 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 341 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 342 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 344 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1
# 346 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 347 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 348 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 11, MAP_SUNSHINE_ORPHANAGE_BURNING
# 349 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_GOLBAT, CRY_MODE_NORMAL
# 350 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 11, MensMonExitPokeball
# 351 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 352 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 12, MAP_SUNSHINE_ORPHANAGE_BURNING
# 353 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_PAWNIARD, CRY_MODE_NORMAL
# 354 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 12, MensMonExitPokeball
# 355 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 356 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 357 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 358 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2
# 360 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 361 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 362 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiSendsOutBoltund
# 363 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 364 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 13, MAP_SUNSHINE_ORPHANAGE_BURNING
# 365 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 366 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 13, BoltundExitsPokeball
# 367 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 368 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3
# 369 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 370 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 371 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 372 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


# 376 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MensMonExitPokeball:
# 377 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 378 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 379 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 382 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiSendsOutBoltund:
# 383 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 384 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 387 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BoltundExitsPokeball:
# 388 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 389 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 390 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
	step_end

# 393 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashiAndTheMen:
# 394 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 394 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 394 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
	step_end

# 397 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MenRunToKobayashi:
# 398 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 398 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 398 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 398 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 398 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0:
# 32 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Crap-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Miki! Where's Miki?!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}MIKI!!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0:
# 50 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}AKI-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1:
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Teacher! Let me go!! I have to find\n"
	.string "Miki!!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}It's too dangerous, Akihiko!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2:
# 65 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The fire is coming from the girls'\n"
	.string "hallway!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Fuck-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0:
# 200 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Azumarill, NOW!$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0:
# 219 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}What the-$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_1:
# 229 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}I'm sorry, Akihiko, Shinjiro.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_0:
# 260 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Do not trust anyone.$"

SunshineOrphanage_Burning_Eventscript_AkiShinjiFellInTheRiver_Text_1:
# 279 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Go, Azumarill. I'll be fine.$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0:
# 342 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Man In Black$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1:
# 344 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Where are the subjects?\p"
	.string "{SPEAKER NAME_KOBAYASHI}They aren't in their room?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2:
# 358 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "I repeat.\n"
	.string "Where are the subjects?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3:
# 368 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}I said, I don't know.$"
