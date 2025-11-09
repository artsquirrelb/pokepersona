SunshineTown_PokemonCenter_MapScripts::
# 2 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_TOWN
# 5 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 14
	goto_if_eq SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 16
	goto_if_ge SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 7 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 7, 11, 9
# 8 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 9 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 6, 17, 8
# 10 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	goto SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_HELP, TRUE
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 14, SunshineTown_PokemonCenter_Eventscript_OnFrame14
	.2byte 0


PokemonCenter_Eventscript_Nurse::
# 21 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker PokemonCenter_Eventscript_Nurse_Text_0
# 24 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_1
# 26 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	hidefollower
# 27 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse MUS_HEAL
# 28 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitse
# 29 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 30 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 31 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_2
# 34 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 35 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 36 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 37 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


PCStorage::
# 42 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call EventScript_PC
# 44 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_MartLady::
# 48 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 49 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 51 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1
# 53 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
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
# 54 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 55 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
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
	playse SE_INTRO_BLAST
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
	clearflag FLAG_HIDE_TALK_BUTTON
# 138 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


# 142 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
emoteexclamation:
# 143 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 147 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins:
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 149 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_EveryonePin::
# 153 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 154 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 155 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 2, emoteexclamation
# 156 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 3, emoteexclamation
# 157 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 4, emoteexclamation
# 158 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, emoteexclamation
# 159 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 5, emoteexclamation
# 160 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, emoteexclamation
	return


SunshineTown_PokemonCenter_Eventscript_CameraShake::
# 164 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 20
# 165 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 2
# 166 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8005, 4
# 167 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8006, 6
# 168 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8007, 4
# 169 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special ShakeCamera
# 170 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
# 171 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
	return


# 173 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround:
# 174 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
# 175 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 176 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 177 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 178 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_upset
	step_end

# 180 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkright:
# 181 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OldMan::
# 185 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 186 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_OldMan_2
# 191 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2
SunshineTown_PokemonCenter_Eventscript_OldMan_1:
# 194 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_OldMan_2:
# 189 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_1


SunshineTown_PokemonCenter_Eventscript_YoungBoy::
# 198 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 200 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0
# 201 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_YoungBoy_2
# 208 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2
SunshineTown_PokemonCenter_Eventscript_YoungBoy_1:
# 210 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_YoungBoy_2:
# 202 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 1, shakehorizontal
# 203 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 204 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1
# 205 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 8, lockdirectionandwalkinplace
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_1


# 213 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
shakehorizontal:
# 214 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	shake_horizontal
	step_end

# 217 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
lockdirectionandwalkinplace:
# 218 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 220 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

SunshineTown_PokemonCenter_Eventscript_NPCPoochyena::
# 224 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 226 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 227 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_Gentleman::
# 231 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 232 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 233 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0
# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_Gentleman_2
# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2
SunshineTown_PokemonCenter_Eventscript_Gentleman_1:
# 242 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_Gentleman_2:
# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_1


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene0::
# 246 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 247 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 248 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 249 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0
# 250 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 251 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 254 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 255 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 257 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 258 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 259 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 260 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 261 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 262 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene1::
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 270 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1
# 271 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 272 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 273 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 274 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 275 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 276 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 277 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 278 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 279 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 280 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 281 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 282 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 283 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


# 287 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkleft:
# 288 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
	step_end

# 291 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0:
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 296 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1:
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

PokemonCenter_Eventscript_Nurse_Text_0:
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

PokemonCenter_Eventscript_Nurse_Text_1:
# 24 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "Center.\p"
	.string "Let me heal your tired Pokémon.$"

PokemonCenter_Eventscript_Nurse_Text_2:
# 31 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Thank you for waiting. We have restored\n"
	.string "your tired Pokémon to full health.\p"
	.string "We hope to see you again.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0:
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Mart Employee$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1:
# 51 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
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
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Oda$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1:
# 189 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "That almost gave me a heartattack...$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2:
# 191 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Center and\n"
	.string "Pokémart used to be in two separate\l"
	.string "buildings.\p"
	.string "I'm glad they changed it. It's more\n"
	.string "convenient like this.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0:
# 200 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Kenta$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1:
# 204 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "I-I'm fine. With Poochyena here, I'll be\n"
	.string "fine.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2:
# 208 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "My mom said I couldn't have a Pokédex\n"
	.string "because it was too expensive.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0:
# 233 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Watanabe$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1:
# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "It sounds dangerous outside, you kids\n"
	.string "should stay here.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Thank you, sir, but we'll be fine.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2:
# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "The Kirijo group specializes in\n"
	.string "researching Pokémon in this region.\p"
	.string "They do a good job at it but on the\n"
	.string "other hand, stuff like Pokédex and\l"
	.string "DexNav cost you a fortune.$"

SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText::
# 301 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Sorry, Kobayashi. This is the best I\n"
	.string "could do.$"
