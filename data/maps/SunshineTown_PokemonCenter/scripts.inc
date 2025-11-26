SunshineTown_PokemonCenter_MapScripts::
# 2 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_TOWN
# 4 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 4 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 4 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_ge SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 14
	goto_if_eq SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 8 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 7, 11, 9
# 9 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 10 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectxyperm 6, 17, 8
# 11 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	return

SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 14, SunshineTown_PokemonCenter_Eventscript_OnFrame14
	.2byte 0


PokemonCenter_Eventscript_Nurse::
# 20 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 21 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 22 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker PokemonCenter_Eventscript_Nurse_Text_0
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_1
# 25 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	hidefollower
# 26 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse MUS_HEAL
# 27 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitse
# 28 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 30 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox PokemonCenter_Eventscript_Nurse_Text_2
# 33 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 35 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 36 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


PCStorage::
# 41 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 42 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call EventScript_PC
# 44 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 45 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
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
# 71 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_5
# 74 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_9
SunshineTown_PokemonCenter_Eventscript_MartLady_8:
# 77 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq SunshineTown_PokemonCenter_Eventscript_MartLady_7
SunshineTown_PokemonCenter_Eventscript_MartLady_4:
# 80 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
# 81 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_2:
# 56 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 57 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart
# 59 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 60 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2
# 63 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 64 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 65 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3
# 66 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 13
# 67 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 68 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_5:
# 72 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_PreDex
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_6:
# 75 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_Prologue
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_7:
# 78 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_C1_1
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_9:
# 74 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_MartLady_6
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_8


# 85 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 86 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 87 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_PreDex:
# 88 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 89 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 90 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 91 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 92 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend
# 93 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 94 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 95 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_Prologue:
# 96 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 97 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 98 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 99 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 100 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 101 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend
# 102 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 103 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .align 2
# 104 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_C1_1:
# 105 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_POKE_BALL
# 106 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_POTION
# 107 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 108 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 109 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_AWAKENING
# 110 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_BURN_HEAL
# 111 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_ICE_HEAL
# 112 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_MIN_REVIVE

# 115 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart:
# 116 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 117 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	face_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OnFrame14::
# 121 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient
# 122 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient::
# 126 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 127 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 128 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround
# 129 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement
# 130 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0
# 133 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 134 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 135 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1, MSGBOX_AUTOCLOSE
# 137 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special StopMapMusic
# 138 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_INTRO_BLAST
# 139 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_CameraShake
# 140 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 1
# 141 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_EveryonePin
# 142 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 143 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_RUN_RUN_RUN, TRUE
# 144 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 145 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 146 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, faceright
# 147 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2
# 152 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 153 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins
# 154 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 155 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject 7
# 156 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 15
# 157 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 158 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 159 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


# 163 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
emoteexclamation:
# 164 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 168 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins:
# 169 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 170 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_EveryonePin::
# 174 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 175 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 176 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 2, emoteexclamation
# 177 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 3, emoteexclamation
# 178 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 4, emoteexclamation
# 179 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, emoteexclamation
# 180 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 5, emoteexclamation
# 181 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, emoteexclamation
	return


SunshineTown_PokemonCenter_Eventscript_CameraShake::
# 185 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 20
# 186 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 2
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8005, 4
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8006, 6
# 189 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8007, 4
# 190 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special ShakeCamera
# 191 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
# 192 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
	return


# 194 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround:
# 195 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
# 196 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 197 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 198 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_upset
	step_end

# 201 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkright:
# 202 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OldMan::
# 206 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 208 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_OldMan_4
SunshineTown_PokemonCenter_Eventscript_OldMan_3:
# 212 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2
SunshineTown_PokemonCenter_Eventscript_OldMan_1:
# 215 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_OldMan_2:
# 210 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_1

SunshineTown_PokemonCenter_Eventscript_OldMan_4:
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_OldMan_2
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_3


SunshineTown_PokemonCenter_Eventscript_YoungBoy::
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 220 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 221 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_YoungBoy_4
SunshineTown_PokemonCenter_Eventscript_YoungBoy_3:
# 229 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2
SunshineTown_PokemonCenter_Eventscript_YoungBoy_1:
# 231 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_YoungBoy_2:
# 223 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 1, shakehorizontal
# 224 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1
# 226 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 8, lockdirectionandwalkinplace
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_1

SunshineTown_PokemonCenter_Eventscript_YoungBoy_4:
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_YoungBoy_2
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_3


# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
shakehorizontal:
# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	shake_horizontal
	step_end

# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
lockdirectionandwalkinplace:
# 239 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 240 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 241 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

SunshineTown_PokemonCenter_Eventscript_NPCPoochyena::
# 245 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 246 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 247 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 248 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_Gentleman::
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0
# 255 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_Gentleman_4
SunshineTown_PokemonCenter_Eventscript_Gentleman_3:
# 259 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2
SunshineTown_PokemonCenter_Eventscript_Gentleman_1:
# 263 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_Gentleman_2:
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_1

SunshineTown_PokemonCenter_Eventscript_Gentleman_4:
# 255 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_Gentleman_2
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_3


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene0::
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 270 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0
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


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene1::
# 288 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 289 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 290 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 291 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 294 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 295 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 296 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 299 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 300 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 301 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 302 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 303 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 304 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


# 308 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkleft:
# 309 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
	step_end

# 312 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0:
# 313 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 317 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1:
# 318 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

PokemonCenter_Eventscript_Nurse_Text_0:
# 22 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Nurse$"

PokemonCenter_Eventscript_Nurse_Text_1:
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "Center.\p"
	.string "Let me heal your tired Pokémon.$"

PokemonCenter_Eventscript_Nurse_Text_2:
# 30 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
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
# 60 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hello. We're here to pick up a package\n"
	.string "for Ms. Kobayashi.\p"
	.string "It should have arrived today.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3:
# 65 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "One moment, please.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0:
# 130 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}What's taking her so long??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Yeah, it's been 10 minutes.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1:
# 135 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Is there anything wrong, ma'am-$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2:
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Sounded like an explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Shinji, let's go check.$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0:
# 208 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Oda$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1:
# 210 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "That almost gave me a heartattack...$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2:
# 212 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Center and\n"
	.string "Pokémart used to be in two separate\l"
	.string "buildings.\p"
	.string "I'm glad they changed it. It's more\n"
	.string "convenient like this.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0:
# 221 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Kenta$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1:
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "I-I'm fine. With Poochyena here, I'll be\n"
	.string "fine.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2:
# 229 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "My mom said I couldn't have a Pokédex\n"
	.string "because it was too expensive.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0:
# 254 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Watanabe$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1:
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "It sounds dangerous outside, you kids\n"
	.string "should stay here.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Thank you, sir, but we'll be fine.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2:
# 259 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "The Kirijo group specializes in\n"
	.string "researching Pokémon in this region.\p"
	.string "They do a good job at it but on the\n"
	.string "other hand, stuff like Pokédex and\l"
	.string "DexNav cost you a fortune.$"

SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText::
# 322 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Sorry, Kobayashi. This is the best I\n"
	.string "could do.$"
