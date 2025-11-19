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
	lock
# 42 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call EventScript_PC
# 43 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_MartLady::
# 47 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 48 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 49 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1
# 52 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq SunshineTown_PokemonCenter_Eventscript_MartLady_2
# 68 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_5
# 71 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_9
SunshineTown_PokemonCenter_Eventscript_MartLady_8:
# 74 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_eq SunshineTown_PokemonCenter_Eventscript_MartLady_7
SunshineTown_PokemonCenter_Eventscript_MartLady_4:
# 77 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
# 78 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_2:
# 53 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 54 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 55 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart
# 56 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 57 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2
# 60 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 61 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 62 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3
# 63 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 13
# 64 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 65 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_5:
# 69 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_PreDex
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_6:
# 72 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_Prologue
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_7:
# 75 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_C1_1
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_9:
# 71 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_MartLady_6
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_8


# 82 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 83 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 84 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_PreDex:
# 85 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 86 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 87 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 88 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 89 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend
# 90 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 91 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.align 2
# 92 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_Prologue:
# 93 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 94 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 95 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 96 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 97 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 98 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemartlistend
# 99 "data/maps/SunshineTown_PokemonCenter/scripts.pory"

# 100 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .align 2
# 101 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_C1_1:
# 102 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_POKE_BALL
# 103 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_POTION
# 104 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 105 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 106 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_AWAKENING
# 107 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_BURN_HEAL
# 108 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_ICE_HEAL
# 109 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
    .2byte ITEM_MIN_REVIVE

# 112 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart:
# 113 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 114 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	face_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OnFrame14::
# 118 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient
# 119 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient::
# 123 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 124 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 125 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround
# 126 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement
# 127 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0
# 130 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 131 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 132 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1, MSGBOX_AUTOCLOSE
# 134 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special StopMapMusic
# 135 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_INTRO_BLAST
# 136 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_CameraShake
# 137 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 1
# 138 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_EveryonePin
# 139 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 140 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_HELP, TRUE
# 141 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 142 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 143 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, faceright
# 144 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 145 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2
# 149 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 150 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins
# 151 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 152 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject 7
# 153 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 15
# 154 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 155 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 156 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


# 160 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
emoteexclamation:
# 161 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 165 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins:
# 166 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 167 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_EveryonePin::
# 171 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 172 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 173 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 2, emoteexclamation
# 174 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 3, emoteexclamation
# 175 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 4, emoteexclamation
# 176 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, emoteexclamation
# 177 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 5, emoteexclamation
# 178 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, emoteexclamation
	return


SunshineTown_PokemonCenter_Eventscript_CameraShake::
# 182 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 20
# 183 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 2
# 184 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8005, 4
# 185 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8006, 6
# 186 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8007, 4
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special ShakeCamera
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
# 189 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
	return


# 191 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround:
# 192 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
# 193 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 194 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 195 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 196 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_upset
	step_end

# 198 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkright:
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OldMan::
# 203 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 204 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 205 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0
# 206 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_OldMan_4
SunshineTown_PokemonCenter_Eventscript_OldMan_3:
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2
SunshineTown_PokemonCenter_Eventscript_OldMan_1:
# 212 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_OldMan_2:
# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_1

SunshineTown_PokemonCenter_Eventscript_OldMan_4:
# 206 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_OldMan_2
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_3


SunshineTown_PokemonCenter_Eventscript_YoungBoy::
# 216 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 217 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 218 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_YoungBoy_4
SunshineTown_PokemonCenter_Eventscript_YoungBoy_3:
# 226 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2
SunshineTown_PokemonCenter_Eventscript_YoungBoy_1:
# 228 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_YoungBoy_2:
# 220 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 1, shakehorizontal
# 221 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1
# 223 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 8, lockdirectionandwalkinplace
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_1

SunshineTown_PokemonCenter_Eventscript_YoungBoy_4:
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_YoungBoy_2
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_3


# 231 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
shakehorizontal:
# 232 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	shake_horizontal
	step_end

# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
lockdirectionandwalkinplace:
# 236 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 237 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

SunshineTown_PokemonCenter_Eventscript_NPCPoochyena::
# 242 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 243 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 244 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 245 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_Gentleman::
# 249 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 250 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 251 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_Gentleman_4
SunshineTown_PokemonCenter_Eventscript_Gentleman_3:
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2
SunshineTown_PokemonCenter_Eventscript_Gentleman_1:
# 260 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_Gentleman_2:
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_1

SunshineTown_PokemonCenter_Eventscript_Gentleman_4:
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_Gentleman_2
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_3


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene0::
# 264 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 265 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 266 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 270 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 271 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 272 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 273 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 274 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 275 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 276 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 277 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 278 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 279 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 280 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene1::
# 285 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 286 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 287 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 288 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1
# 289 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 290 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 291 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 294 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 295 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 296 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 297 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 298 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 299 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 16
# 300 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 301 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	releaseall
	end


# 305 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkleft:
# 306 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
	step_end

# 309 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0:
# 310 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1:
# 315 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 316 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
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
# 49 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Mart Employee$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1:
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello. What can I do for you?$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2:
# 57 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Hello. We're here to pick up a package\n"
	.string "for Ms. Kobayashi.\p"
	.string "It should have arrived today.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3:
# 62 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "One moment, please.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0:
# 127 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}What's taking her so long??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Yeah, it's been 10 minutes.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1:
# 132 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Is there anything wrong, ma'am-$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2:
# 145 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}W-What was that??\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}Sounded like an explosion.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Shinji, let's go check.$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0:
# 205 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Oda$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1:
# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "That almost gave me a heartattack...$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2:
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Center and\n"
	.string "Pokémart used to be in two separate\l"
	.string "buildings.\p"
	.string "I'm glad they changed it. It's more\n"
	.string "convenient like this.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0:
# 218 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Kenta$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1:
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "I-I'm fine. With Poochyena here, I'll be\n"
	.string "fine.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2:
# 226 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "My mom said I couldn't have a Pokédex\n"
	.string "because it was too expensive.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0:
# 251 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Watanabe$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1:
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "It sounds dangerous outside, you kids\n"
	.string "should stay here.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Thank you, sir, but we'll be fine.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2:
# 256 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "The Kirijo group specializes in\n"
	.string "researching Pokémon in this region.\p"
	.string "They do a good job at it but on the\n"
	.string "other hand, stuff like Pokédex and\l"
	.string "DexNav cost you a fortune.$"

SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText::
# 319 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Sorry, Kobayashi. This is the best I\n"
	.string "could do.$"
