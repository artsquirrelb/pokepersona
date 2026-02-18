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
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_eq SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 4 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_ge SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_WAIT_PACKAGE
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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_WAIT_PACKAGE, SunshineTown_PokemonCenter_Eventscript_OnFrame14
	.2byte 0


SunshineTown_PokemonCenter_Eventscript_Nurse::
# 20 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Nurse_Text_0
# 21 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call Eventscript_Nurse_Greetings
# 22 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Nurse_Text_0
# 23 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call Eventscript_Nurse_Goodbye
# 24 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


Eventscript_Nurse_Greetings::
# 29 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 30 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 31 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox Eventscript_Nurse_Greetings_Text_0
# 33 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	hidefollower
# 34 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse MUS_HEAL
# 35 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitse
# 36 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 37 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	updatefollowingmon
	return


Eventscript_Nurse_Goodbye::
# 41 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox Eventscript_Nurse_Goodbye_Text_0
# 44 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 45 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymove LOCALID_PLAYER, facedown
	return


PCStorage::
# 49 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 50 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 51 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call EventScript_PC
# 52 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 53 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_MartLady::
# 58 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 59 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 60 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 61 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1
# 63 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_eq SunshineTown_PokemonCenter_Eventscript_MartLady_2
SunshineTown_PokemonCenter_Eventscript_MartLady_1:
# 82 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_5
# 85 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, SunshineTown_PokemonCenter_Eventscript_MartLady_9
SunshineTown_PokemonCenter_Eventscript_MartLady_8:
# 88 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_MartLady_7
SunshineTown_PokemonCenter_Eventscript_MartLady_4:
# 91 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
# 92 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end

SunshineTown_PokemonCenter_Eventscript_MartLady_2:
# 64 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 65 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 66 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart
# 67 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 68 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2
# 71 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 72 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 73 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3
# 74 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 75 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 77 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLady_Text_4
# 78 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_WAIT_PACKAGE
# 79 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN_POKEMON_CENTER, 11, 8
# 80 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_1

SunshineTown_PokemonCenter_Eventscript_MartLady_5:
# 83 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_PreDex
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_6:
# 86 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_Prologue
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_7:
# 89 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	pokemart GeneralMart_C1_1
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_4

SunshineTown_PokemonCenter_Eventscript_MartLady_9:
# 85 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_INTRO_COMPLETED
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_MartLady_6
	goto SunshineTown_PokemonCenter_Eventscript_MartLady_8


	.align 2
# 96 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_PreDex:
# 98 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 99 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 100 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 101 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 105 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_Prologue:
# 107 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 108 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 109 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 110 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 111 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 115 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
GeneralMart_C1_1:
# 117 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 118 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 119 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 120 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 121 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 122 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 123 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 124 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.2byte ITEM_MIN_REVIVE
	.2byte ITEM_NONE

# 128 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroFacesTheMart:
# 129 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 130 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	face_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OnFrame14::
# 134 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	goto SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient
# 135 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient::
# 139 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 140 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 141 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround
# 142 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement
# 143 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0
# 146 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 147 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1, MSGBOX_AUTOCLOSE
# 150 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special StopMapMusic
# 151 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_INTRO_BLAST
# 152 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_CameraShake
# 153 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 1
# 154 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	call SunshineTown_PokemonCenter_Eventscript_EveryonePin
# 155 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 156 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playbgm MUS_P3_CALAMITY, TRUE
# 157 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 158 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 159 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, faceright
# 160 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 161 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2
# 165 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 166 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins
# 167 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 168 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject 7
# 169 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
# 170 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 171 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	fwdtime 9, 30
# 172 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	end


# 176 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
emoteexclamation:
# 177 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 181 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_ShinjiroJoins:
# 182 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 183 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_EveryonePin::
# 187 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_PIN
# 188 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 189 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 2, emoteexclamation
# 190 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 3, emoteexclamation
# 191 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 4, emoteexclamation
# 192 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, emoteexclamation
# 193 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 5, emoteexclamation
# 194 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 7, emoteexclamation
	return


SunshineTown_PokemonCenter_Eventscript_CameraShake::
# 198 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 20
# 199 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 2
# 200 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8005, 4
# 201 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8006, 6
# 202 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setvar VAR_0x8007, 4
# 203 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special ShakeCamera
# 204 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
# 205 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
	return


# 207 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_AkihikoMoveAround:
# 208 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
# 209 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 210 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 211 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay_16
# 212 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	emote_upset
	step_end

# 214 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkright:
# 215 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_OldMan::
# 219 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 220 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 221 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_OldMan_4
SunshineTown_PokemonCenter_Eventscript_OldMan_3:
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2
SunshineTown_PokemonCenter_Eventscript_OldMan_1:
# 228 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_OldMan_2:
# 223 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_1

SunshineTown_PokemonCenter_Eventscript_OldMan_4:
# 222 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_OldMan_2
	goto SunshineTown_PokemonCenter_Eventscript_OldMan_3


SunshineTown_PokemonCenter_Eventscript_YoungBoy::
# 232 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 233 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0
# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_YoungBoy_4
SunshineTown_PokemonCenter_Eventscript_YoungBoy_3:
# 242 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2
SunshineTown_PokemonCenter_Eventscript_YoungBoy_1:
# 244 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_YoungBoy_2:
# 236 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 1, shakehorizontal
# 237 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1
# 239 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 8, lockdirectionandwalkinplace
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_1

SunshineTown_PokemonCenter_Eventscript_YoungBoy_4:
# 235 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_YoungBoy_2
	goto SunshineTown_PokemonCenter_Eventscript_YoungBoy_3


# 247 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
shakehorizontal:
# 248 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	shake_horizontal
	step_end

# 251 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
lockdirectionandwalkinplace:
# 252 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock_facing_direction
# 253 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_in_place_right
# 254 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	unlock_facing_direction
	step_end

SunshineTown_PokemonCenter_Eventscript_NPCPoochyena::
# 258 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 259 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 260 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 261 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return


SunshineTown_PokemonCenter_Eventscript_Gentleman::
# 265 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lock
# 266 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	faceplayer
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_EXPLOSION
	goto_if_ge SunshineTown_PokemonCenter_Eventscript_Gentleman_4
SunshineTown_PokemonCenter_Eventscript_Gentleman_3:
# 272 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2
SunshineTown_PokemonCenter_Eventscript_Gentleman_1:
# 276 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	release
	return

SunshineTown_PokemonCenter_Eventscript_Gentleman_2:
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_1

SunshineTown_PokemonCenter_Eventscript_Gentleman_4:
# 268 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_TO_ROUTE2
	goto_if_lt SunshineTown_PokemonCenter_Eventscript_Gentleman_2
	goto SunshineTown_PokemonCenter_Eventscript_Gentleman_3


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene0::
# 280 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 281 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 282 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 283 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0
# 284 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 285 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 286 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 287 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 288 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 289 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 290 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 291 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 292 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 293 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 294 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 295 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
	return


SunshineTown_PokemonCenter_Eventscript_EndExplosionCutscene1::
# 299 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	lockall
# 300 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 301 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special SpawnCameraObject
# 302 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1
# 303 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 304 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	playse SE_EXIT
# 305 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	removeobject LOCALID_PLAYER
# 306 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	delay 30
# 307 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	setspeaker SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0
# 308 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	applymovement 6, walkleft
# 309 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitmovement 0
# 310 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	msgbox SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText
# 311 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	closemessage
# 312 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	special RemoveCameraObject
# 313 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	warpsilent MAP_SUNSHINE_TOWN, 8, 4
# 314 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	waitstate
	return


# 317 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
walkleft:
# 318 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_left
	step_end

# 321 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady0:
# 322 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 323 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 326 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
SunshineTown_PokemonCenter_Eventscript_CameraToMartLady1:
# 327 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_up
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
# 328 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunshineTown_PokemonCenter_Eventscript_Nurse_Text_0:
# 20 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Nurse Juria$"

Eventscript_Nurse_Greetings_Text_0:
# 31 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello and welcome to the Pokémon\n"
	.string "Center.\p"
	.string "Let me heal your tired Pokémon.$"

Eventscript_Nurse_Goodbye_Text_0:
# 41 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Thank you for waiting. We have restored\n"
	.string "your tired Pokémon to full health.\p"
	.string "We hope to see you again.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_0:
# 60 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Mart Employee Fusayo$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_1:
# 61 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Hello. What can I do for you?$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_2:
# 68 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Hello. We're here to pick up a package\n"
	.string "for Ms. Kobayashi.\p"
	.string "It should have arrived today.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_3:
# 73 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "One moment, please.$"

SunshineTown_PokemonCenter_Eventscript_MartLady_Text_4:
# 77 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "10 minutes later...$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_0:
# 143 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT}What's taking her so long??\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Yeah, it's been 10 minutes.$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_1:
# 148 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Is there anything wrong, ma'am-$"

SunshineTown_PokemonCenter_Eventscript_AkihikoImpatient_Text_2:
# 161 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}W-What was that??\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}Sounded like an explosion.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_MAD}Shinji, let's go check.$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_0:
# 221 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Oda$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_1:
# 223 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "That almost gave me a heartattack...$"

SunshineTown_PokemonCenter_Eventscript_OldMan_Text_2:
# 225 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Back in the day, Pokémon Center and\n"
	.string "Pokémart used to be in two separate\l"
	.string "buildings.\p"
	.string "I'm glad they changed it. It's more\n"
	.string "convenient like this.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_0:
# 234 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Kenta$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_1:
# 238 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "I-I'm fine. With Poochyena here, I'll be\n"
	.string "fine.$"

SunshineTown_PokemonCenter_Eventscript_YoungBoy_Text_2:
# 242 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "My mom said I couldn't have a Pokédex\n"
	.string "because it was too expensive.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_0:
# 267 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Watanabe$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_1:
# 269 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "It sounds dangerous outside, you kids\n"
	.string "should stay here.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Thank you, sir, but we'll be fine.$"

SunshineTown_PokemonCenter_Eventscript_Gentleman_Text_2:
# 272 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "The Kirijo group specializes in\n"
	.string "researching Pokémon in this region.\p"
	.string "They do a good job at it but on the\n"
	.string "other hand, stuff like Pokédex and\l"
	.string "DexNav cost you a fortune.$"

SunshineTown_PokemonCenter_Eventscript_MartLadyEndCutsceneText::
# 331 "data/maps/SunshineTown_PokemonCenter/scripts.pory"
	.string "Sorry, Kobayashi. This is the best I\n"
	.string "could do.$"
