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
# 42 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 43 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko
	return


# 46 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNotices:
# 47 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko::
# 52 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoRunsUp
# 53 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, ShinjiroRunsUp
# 54 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 55 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiBlocks
# 56 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_BlockShakeCamera
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 59 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 60 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkihikoTriesToRunUp
# 61 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, BlockingAkihiko
# 62 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 64 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1
# 67 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 68 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_EveryonePin
# 69 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, faceup
# 70 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 71 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2
# 74 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 75 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_SusMenAppear
	return


# 78 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoRunsUp:
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 79 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 80 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 81 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_down
# 82 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	unlock_facing_direction
	step_end

# 85 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiroRunsUp:
# 86 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 86 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 86 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 87 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 90 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiBlocks:
# 91 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 92 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
# 92 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_down
	step_end

# 95 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkihikoTriesToRunUp:
# 96 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 96 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_up
# 97 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
	step_end

# 100 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BlockingAkihiko:
# 101 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 101 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_fast_down
# 102 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanage_Burning_Eventscript_BlockShakeCamera::
# 106 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
# 107 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 108 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 2
# 109 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 4
# 110 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 111 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 112 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 113 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 8
	return


SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera::
# 117 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 118 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_INTRO_BLAST
# 119 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8004, 2
# 120 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8005, 4
# 121 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8006, 6
# 122 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setvar VAR_0x8007, 4
# 123 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special ShakeCamera
# 124 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitstate
# 125 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
	return


SunshineOrphanage_Burning_Eventscript_EveryonePin::
# 129 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 1, emoteexclamation
# 130 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 2, emoteexclamation
# 131 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 132 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 3, emoteexclamation
# 133 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, emoteexclamation
# 134 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 4
# 135 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, emoteexclamation
# 136 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 137 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 138 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 139 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 140 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 2, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 141 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 3, MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT
# 142 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
	return


SunshineOrphanage_Burning_Eventscript_SusMenAppear::
# 146 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 147 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_EXIT
# 148 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitse
# 149 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 150 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToTheSusMen
# 151 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenAppear1
# 152 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenAppear2
# 153 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 154 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_PIN
# 155 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiNoticesTheMen
# 156 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 157 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, SusMenLookAround1
# 158 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, SusMenLookAround2
# 159 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 160 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock
# 161 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 162 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
# 163 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	release
# 164 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 165 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon
	return


# 168 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear1:
# 169 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 169 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 169 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 172 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenAppear2:
# 173 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 173 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 173 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
# 173 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_down
	step_end

# 176 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround1:
# 177 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 178 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 181 "data/maps/SunshineOrphanage_Burning/scripts.pory"
SusMenLookAround2:
# 182 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 183 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_down
	step_end

# 185 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraToTheSusMen:
# 186 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 186 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_up
# 187 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
# 187 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_left
	step_end

# 190 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiNoticesTheMen:
# 191 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	emote_exclamation_mark
# 192 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_up
	step_end

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon::
# 196 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAki
# 197 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 198 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special RemoveCameraObject
# 199 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, facedown
# 200 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 4
# 201 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 20
# 202 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playse SE_BALL_OPEN
# 203 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 204 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 205 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, Azumarillexitpokeball
# 206 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0
# 208 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 209 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	goto SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver
	return


# 212 "data/maps/SunshineOrphanage_Burning/scripts.pory"
CameraBackToAki:
# 213 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 213 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 214 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 214 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/SunshineOrphanage_Burning/scripts.pory"
Azumarillexitpokeball:
# 217 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 218 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver::
# 222 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 223 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmoncry
# 224 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillGetsReady
# 225 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 8
# 226 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0
# 227 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 228 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 8, AzumarillPushesAkiShinjiToRiver
# 229 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 5, AkiShinjiGettingPushed
# 230 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement LOCALID_PLAYER, AkiShinjiGettingPushed
# 231 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
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
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 294 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 295 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	return


# 298 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiWalksTowardAzumarill:
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 299 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 300 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 300 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
# 300 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 303 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillJumpsDownTheRiver:
# 304 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 304 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_in_place_left
# 305 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 306 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
# 307 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay_16
# 308 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 309 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 311 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToAkihiko:
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 312 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 315 "data/maps/SunshineOrphanage_Burning/scripts.pory"
jumpinplaceright:
# 316 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_in_place_right
	step_end

# 318 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AzumarillFinishesPushing:
# 319 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 319 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

# 322 "data/maps/SunshineOrphanage_Burning/scripts.pory"
ShinjiFellDown:
# 323 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 324 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 325 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 326 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

# 329 "data/maps/SunshineOrphanage_Burning/scripts.pory"
AkiFellDown:
# 330 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 331 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	jump_right
# 332 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	set_invisible
	step_end

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi::
# 337 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 338 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	special SpawnCameraObject
# 339 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PanToKobayashiAndTheMen
# 340 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 341 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 6
# 342 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	addobject 7
# 343 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 6, MenRunToKobayashi
# 344 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 7, MenRunToKobayashi
# 345 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, faceright
# 346 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 347 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 348 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 350 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1
# 352 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 353 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 354 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 11, MAP_SUNSHINE_ORPHANAGE_BURNING
# 355 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_GOLBAT, CRY_MODE_NORMAL
# 356 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 11, MensMonExitPokeball
# 357 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 358 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 12, MAP_SUNSHINE_ORPHANAGE_BURNING
# 359 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_PAWNIARD, CRY_MODE_NORMAL
# 360 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 12, MensMonExitPokeball
# 361 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 362 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 363 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	setspeaker SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_0
# 364 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2
# 366 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 367 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 16
# 368 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 4, KobayashiSendsOutBoltund
# 369 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 370 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	showobjectat 13, MAP_SUNSHINE_ORPHANAGE_BURNING
# 371 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	playmoncry SPECIES_BOLTUND, CRY_MODE_NORMAL
# 372 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	applymovement 13, BoltundExitsPokeball
# 373 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	waitmovement 0
# 374 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	msgbox SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3
# 375 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	closemessage
# 376 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	delay 30
# 377 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 378 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
	end


# 382 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MensMonExitPokeball:
# 383 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 384 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 385 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_right
	step_end

# 388 "data/maps/SunshineOrphanage_Burning/scripts.pory"
KobayashiSendsOutBoltund:
# 389 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	lock_facing_direction
# 390 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_right
	step_end

# 393 "data/maps/SunshineOrphanage_Burning/scripts.pory"
BoltundExitsPokeball:
# 394 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	exit_pokeball
# 395 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	shake_vertical
# 396 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	face_left
	step_end

# 399 "data/maps/SunshineOrphanage_Burning/scripts.pory"
PanToKobayashiAndTheMen:
# 400 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 400 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
# 400 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_left
	step_end

# 403 "data/maps/SunshineOrphanage_Burning/scripts.pory"
MenRunToKobayashi:
# 404 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 404 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 404 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 404 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 404 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_down
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
# 405 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	walk_fast_right
	step_end

SunshineOrphanage_Burning_Eventscript_AkihikoNoticesTheFire_Text_0:
# 39 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Crap-\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Miki! Where's Miki?!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}MIKI!!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_0:
# 57 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}AKI-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_1:
# 64 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Teacher! Let me go!! I have to find\n"
	.string "Miki!!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}It's too dangerous, Akihiko!$"

SunshineOrphanage_Burning_Eventscript_KobayashiBlocksAkihiko_Text_2:
# 72 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}The fire is coming from the girls'\n"
	.string "hallway!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Fuck-!$"

SunshineOrphanage_Burning_Eventscript_KobayashiLetsOutPokemon_Text_0:
# 207 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Azumarill, NOW!$"

SunshineOrphanage_Burning_Eventscript_AzumarillPushesAkiShinjiToTheRiver_Text_0:
# 226 "data/maps/SunshineOrphanage_Burning/scripts.pory"
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
# 348 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Man In Black$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_1:
# 350 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "Where are the subjects?\p"
	.string "{SPEAKER NAME_KOBAYASHI}They aren't in their room?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_2:
# 364 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "I repeat.\n"
	.string "Where are the subjects?$"

SunshineOrphanage_Burning_Eventscript_SusMenApproachKobayashi_Text_3:
# 374 "data/maps/SunshineOrphanage_Burning/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}I said, I don't know.$"
