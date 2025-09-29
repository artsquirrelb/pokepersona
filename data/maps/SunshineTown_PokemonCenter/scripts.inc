SunshineTown_PokemonCenter_MapScripts::
# 2 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 14
	goto_if_eq SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_TOWN
	goto SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 9 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 7, 11, 9
# 10 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 11 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 6, 17, 8
# 12 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_HELP, TRUE
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 14, SunshineTown_PokemonCenter_Eventscript_OnFrame14
	.2byte 0


PokemonCenter_Eventscript_Nurse::
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 24 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 25 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker PokemonCenter_Eventscript_Nurse_Text_0
# 26 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_1
# 28 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	hidefollower
# 29 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse MUS_HEAL
# 30 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitse
# 31 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 32 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 33 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_2
# 36 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 37 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 38 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 39 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


PCStorage::
# 44 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call EventScript_PC
# 46 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_MartLady::
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 51 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 52 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 53 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1
# 55 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq SunshineTown_PokemonCenter_Eventscript_MartLady_2
# 70 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_5
SunshineTown_PokemonCenter_Eventscript_MartLady_4:
# 71 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart SunshineTown_Mart_Expanded
SunshineTown_PokemonCenter_Eventscript_MartLady_1:
# 72 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
# 73 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_2:
# 56 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart
# 57 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 58 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2
# 62 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 63 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 64 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3
# 65 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 13
# 66 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_BLANK_MAP
# 67 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_3:
# 70 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart SunshineTown_Mart_Basic
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_1

SunshineTown_PokemonCenter_Eventscript_MartLady_5:
# 70 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 14
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_MartLady_3
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4


# 77 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 78 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 79 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_Mart_Basic:
# 80 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 81 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 82 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 84 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend
# 85 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 86 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 87 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_Mart_Expanded:
# 88 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 89 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 90 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 91 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 92 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 93 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend

# 96 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart:
# 97 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 98 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	face_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OnFrame14::
# 102 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient
# 103 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient::
# 107 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 108 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround
# 109 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement
# 110 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0
# 113 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 114 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 115 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1, MSGBOX_AUTOCLOSE
# 117 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special StopMapMusic
# 118 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_M_EXPLOSION
# 119 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_CameraShake
# 120 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 1
# 121 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_EveryonePin
# 122 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 123 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_HELP, TRUE
# 124 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 125 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, faceright
# 126 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 127 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2
# 131 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 132 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins
# 133 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 134 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject 7
# 135 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 15
# 136 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 137 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


# 141 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
emoteexclamation:
# 142 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 146 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins:
# 147 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_EveryonePin::
# 152 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 153 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 154 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 2, emoteexclamation
# 155 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 3, emoteexclamation
# 156 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 4, emoteexclamation
# 157 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, emoteexclamation
# 158 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 5, emoteexclamation
# 159 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, emoteexclamation
	return


SunshineTown_PokemonCenter_Eventscript_CameraShake::
# 163 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 20
# 164 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 2
# 165 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8005, 4
# 166 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8006, 6
# 167 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8007, 4
# 168 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special ShakeCamera
# 169 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
# 170 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
	return


# 172 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround:
# 173 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
# 174 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 175 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 176 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 177 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_upset
	step_end

# 179 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkright:
# 180 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OldMan::
# 184 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 185 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 186 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_OldMan_2
# 190 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2
SunshineTown_PokemonCenter_Eventscript_OldMan_1:
# 193 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_OldMan_2:
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_1


SunshineTown_PokemonCenter_Eventscript_YoungBoy::
# 197 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 198 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0
# 200 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_YoungBoy_2
# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2
SunshineTown_PokemonCenter_Eventscript_YoungBoy_1:
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_YoungBoy_2:
# 201 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 1, shakehorizontal
# 202 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 203 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1
# 204 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 8, lockdirectionandwalkinplace
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_1


# 212 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
shakehorizontal:
# 213 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	shake_horizontal
	step_end

# 216 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
lockdirectionandwalkinplace:
# 217 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 218 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

SunshineTown_PokemonCenter_Eventscript_NPCPoochyena::
# 223 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 224 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 226 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_Gentleman::
# 230 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 231 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 232 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0
# 233 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_Gentleman_2
# 237 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2
SunshineTown_PokemonCenter_Eventscript_Gentleman_1:
# 241 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_Gentleman_2:
# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_1


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene0::
# 245 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 246 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 247 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 248 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0
# 249 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 250 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 251 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 254 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 255 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 257 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 258 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 259 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 260 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 6, 4
# 261 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene1::
# 266 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1
# 270 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 271 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 272 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 273 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 274 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 275 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 276 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 277 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 278 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 279 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 280 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 281 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 6, 4
# 282 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


# 286 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkleft:
# 287 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
	step_end

# 290 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0:
# 291 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1:
# 296 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

PokemonCenter_Eventscript_Nurse_Text_0:
# 25 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

PokemonCenter_Eventscript_Nurse_Text_1:
# 26 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "Center.\p"
	.string "Let me heal your tired Pokémon.$"

PokemonCenter_Eventscript_Nurse_Text_2:
# 33 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Thank you for waiting. We have restored\n"
	.string "your tired Pokémon to full health.\p"
	.string "We hope to see you again.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0:
# 52 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Mart Employee$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1:
# 53 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello. What can I do for you?$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2:
# 58 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Hello. We're here to pick up a package\n"
	.string "for Ms. Kobayashi.\p"
	.string "It should have arrived today.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3:
# 64 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "One moment, please.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0:
# 110 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}What's taking her so long??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Yeah, it's been 10 minutes.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1:
# 115 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Is there anything wrong, ma'am-$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2:
# 127 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Sounded like an explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Shinji, let's go check.$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0:
# 186 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Oda$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1:
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "That almost gave me a heartattack...$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2:
# 190 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Center and\n"
	.string "Pokémart used to be in two separated\l"
	.string "buildings.\p"
	.string "I'm glad that they changed it. It's more\n"
	.string "convenient like this.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0:
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Kenta$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1:
# 203 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "I-I'm fine. With Poochyena here, I'll be\n"
	.string "fine.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2:
# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "My mom said I couldn't have a Pokédex\n"
	.string "because it was too expensive.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0:
# 232 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Watanabe$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1:
# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "It sounds dangerous outside, you kids\n"
	.string "should stay here.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Thank you, sir but we'll be fine.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2:
# 237 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "The Kirijo group specializes in\n"
	.string "researching Pokémon in this region.\p"
	.string "They do a good job at it but on the\n"
	.string "other hand, stuff like Pokédex and\l"
	.string "DexNav cost you a fortune.$"

SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText::
# 300 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Sorry, Kobayashi. This is the best I\n"
	.string "could do.$"
