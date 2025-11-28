SunshineOrphanageMainHall_MapScripts::
# 4 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 32 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_lt SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_ge SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 26 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_gt SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_2
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 16 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 11, 23
# 17 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 21 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 12, 5
# 22 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 13, 18, 6
# 24 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 27 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 6, 22
# 28 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_OnWarp7
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 11, SunshineOrphanageMainHall_Eventscript_OnFrame11
	.2byte 0


# 37 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 38 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

# 41 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceleft:
# 42 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_left
	step_end

SunshineOrphanageMainHall_OnWarp7::
# 46 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineOrphanageMainHall_Eventscript_OnFrame7::
# 49 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_OnFrame11::
# 53 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
# 57 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 58 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 59 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 60 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 61 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 62 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


# 64 "data/maps/SunshineOrphanageMainHall/scripts.pory"
facedown:
# 65 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_down
	step_end

# 67 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHealingPawmi:
# 68 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
# 72 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 73 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHealingPawmi
# 74 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 75 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 77 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 78 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, facedown
# 79 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, facedown
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 82 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 83 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PutdownbyAkihiko
# 84 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 85 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 89 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


# 93 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PutdownbyAkihiko:
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_down
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
# 96 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 97 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
# 98 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 99 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
# 103 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 104 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
# 108 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 111 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 112 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 113 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 120 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_SHINY
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 123 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 124 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 128 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 129 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 131 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Eventscript_StarterPokemonTips
# 132 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 133 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 20, 10
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 105 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 150 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 155 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 156 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 158 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 169 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 170 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 201 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 204 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, 0, 0, 0, 0, SHINY_MODE_RANDOM, TRUE
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 188 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_3
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 180 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 184 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 186 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 192 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 193 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
# 194 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 195 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 208 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 209 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 213 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 20
# 215 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 220 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 221 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
# 222 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 223 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 227 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 228 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 229 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 30
# 230 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 231 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 234 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 235 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 236 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 242 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_1_MainHall_Text_0
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_1
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girl_1_MainHall::
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_1_MainHall_Text_0
# 256 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_1
# 258 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Boy_2_MainHall::
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_2_MainHall_Text_0
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_1
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girl_2_MainHall::
# 273 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_2_MainHall_Text_0
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Girl_2_MainHall_2
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_2
Girl_2_MainHall_1:
# 282 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Girl_2_MainHall_2:
# 277 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_1
	goto Girl_2_MainHall_1


RichMan_MainHall::
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 288 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 289 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichMan_MainHall_Text_0
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_1
# 291 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RichLady_MainHall::
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichLady_MainHall_Text_0
# 299 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_1
# 301 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Teacher_MainHall::
# 306 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Teacher_MainHall_Text_0
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_7
Teacher_MainHall_6:
# 319 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Teacher_MainHall_4
# 324 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 325 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_4
Teacher_MainHall_1:
# 326 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Teacher_MainHall_2:
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 314 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
	goto Teacher_MainHall_1

Teacher_MainHall_4:
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 321 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_3
	goto Teacher_MainHall_1

Teacher_MainHall_7:
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_6


Boy_3_MainHall::
# 331 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_3_MainHall_Text_0
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_3
Boy_3_MainHall_1:
# 344 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Boy_3_MainHall_2:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
	goto Boy_3_MainHall_1


DiningRoom::
# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 350 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 352 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


BackyardDoor::
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 360 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girls_HallwayMainHall::
# 365 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 366 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 368 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RestroomMainHall::
# 373 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 374 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 375 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


PokeballShelf::
# 380 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 382 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Porygon_PC::
# 387 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 388 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 389 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 390 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 394 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 396 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 402 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 403 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker MartLady_Text_0
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 405 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MartLady_2
# 406 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_2
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 405 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Expanded
	goto MartLady_1


# 412 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 413 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 416 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 417 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 419 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 420 "data/maps/SunshineOrphanageMainHall/scripts.pory"
    
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 422 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 423 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 424 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 425 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 426 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 427 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 428 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 431 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 432 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 433 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 434 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 435 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_2
# 436 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_3
# 442 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 444 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
Blissey_Heal_1:
	end

Blissey_Heal_2:
# 435 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	goto Blissey_Heal_1

Blissey_Heal_3:
# 437 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 438 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 439 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 440 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	goto Blissey_Heal_1


BlisseyHealedPawmi::
# 450 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 451 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 452 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 453 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 454 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 455 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end


# 458 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 459 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 460 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 464 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 465 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 466 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 467 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


NicknamePartyMon::
# 474 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 475 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 476 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 477 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 478 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 483 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 484 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 485 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 488 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 486 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage::
# 497 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 498 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 499 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_PIN
# 500 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight
# 501 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 502 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0
# 510 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 511 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	giveitem ITEM_POTION, 2
# 512 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1
# 516 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, walkup
# 517 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 518 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 519 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
# 520 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 12
# 521 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_ORPHANAGE_MAIN_HALL
# 522 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 40
# 523 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 527 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight:
# 528 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_exclamation_mark
# 529 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
# 530 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_16
# 531 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 531 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 531 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 531 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
	step_end

# 534 "data/maps/SunshineOrphanageMainHall/scripts.pory"
walkup:
# 535 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 86 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 114 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Can we keep it?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Normally you aren't allowed to have your\n"
	.string "own Pokémon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Yay!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Here, I'll give you a pokeball to keep it.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2:
# 129 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER} received 1{COLOR GREEN} (hidden){COLOR DARK_GRAY} Cherish Ball.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 184 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR GREEN}Tips: You can rename a Pokémon in its\n"
	.string "summary screen.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_3:
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to bed.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Jin$"

Boy_1_MainHall_Text_1:
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Riko$"

Girl_1_MainHall_Text_1:
# 257 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Yamamoto$"

Boy_2_MainHall_Text_1:
# 267 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokémon of our own but we can still play\l"
	.string "with the staff's Pokémon.$"

Girl_2_MainHall_Text_0:
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Momo$"

Girl_2_MainHall_Text_1:
# 277 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Your Pokémon looks so round and cute!$"

Girl_2_MainHall_Text_2:
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Akihiko! I'm also getting adopted next\n"
	.string "week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 289 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Man$"

RichMan_MainHall_Text_1:
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Woman$"

RichLady_MainHall_Text_1:
# 300 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kobayashi$"

Teacher_MainHall_Text_1:
# 311 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh Akihiko, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_2:
# 316 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, Akihiko?$"

Teacher_MainHall_Text_3:
# 321 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care, dear.$"

Teacher_MainHall_Text_4:
# 325 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kenichi$"

Boy_3_MainHall_Text_1:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, Akihiko! Miki is waiting for you\n"
	.string "outside.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}I know, thanks!$"

Boy_3_MainHall_Text_2:
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}We will!$"

Boy_3_MainHall_Text_3:
# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokémon in the\n"
	.string "woods?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Pawmi is rare?$"

DiningRoom_Text_0:
# 350 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 366 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 374 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 394 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokémon\n"
	.string "Storage. If only I had a Pokémon.$"

MartLady_Text_0:
# 403 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Tanaba$"

MartLady_Text_1:
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi Akihiko, what should I get you?$"

MartLady_Text_2:
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 442 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokémon.$"

BlisseyHealedPawmi_Text_0:
# 451 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 474 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 488 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0:
# 502 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Good morning, Akihiko, Shinjiro.\p"
	.string "Sorry to trouble you but can you two go\n"
	.string "pick up a package for me?\p"
	.string "It should be delivered at the Pokémon\n"
	.string "Center in Sunshine Town by now.\p"
	.string "You can get there by going through\n"
	.string "Sunshine Woods.\p"
	.string "Pawmi is with you now so it should be\n"
	.string "fine.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Of course, Ms. Kobayashi.\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Here, you may need these.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1:
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Stay safe, dear.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Ms. Kobayashi!$"

Eventscript_StarterPokemonTips::
# 139 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR GREEN}Tips: The shiny chance is roughly\n"
	.string "1/100.\p"
	.string "No Pokémon are shiny locked, including\n"
	.string "the story starters.\p"
	.string "The story starters have been buffed\n"
	.string "and come with pre-determined Nature\l"
	.string "and Perfect IVs.\p"
	.string "You also can not release them.$"

NewLabTest_NotChosen::
# 491 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
