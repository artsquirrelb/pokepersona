SunshineOrphanageMainHall_MapScripts::
# 4 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 31 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 24 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_ge SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 8 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 9 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 11, 23
# 10 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 12, 5
# 16 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 17 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 13, 18, 6
# 18 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 21 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 6, 22
# 22 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 25 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 1, 0, 21
# 26 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 2, 0, 18
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_OnWarp7
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
# 33 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 11, SunshineOrphanageMainHall_Eventscript_OnFrame11
	.2byte 0


# 36 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 37 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

# 40 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceleft:
# 41 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_left
	step_end

SunshineOrphanageMainHall_OnWarp7::
# 45 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineOrphanageMainHall_Eventscript_OnFrame7::
# 48 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_OnFrame11::
# 52 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
# 56 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 57 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 58 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 59 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 60 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 61 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


# 63 "data/maps/SunshineOrphanageMainHall/scripts.pory"
facedown:
# 64 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_down
	step_end

# 66 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHealingPawmi:
# 67 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
# 71 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 72 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHealingPawmi
# 73 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 74 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 75 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 77 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, facedown
# 78 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, facedown
# 79 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 82 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PutdownbyAkihiko
# 83 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 84 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
# 86 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


# 92 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PutdownbyAkihiko:
# 93 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_down
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 96 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
# 97 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 98 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
# 102 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 103 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
# 107 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 108 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 111 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 112 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 119 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 120 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2
# 127 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 128 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_3
# 132 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
# 133 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 104 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 138 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 139 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 141 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 145 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 146 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 151 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 152 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 153 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 154 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 158 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 159 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 188 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 192 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 169 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknamePartyMon
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 180 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknameBoxMon
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 196 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 197 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 201 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 20
# 203 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 204 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 208 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 209 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
# 210 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 211 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 212 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 213 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 215 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 219 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 223 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 230 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 231 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_1_MainHall_Text_0
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_1
# 235 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_1_MainHall::
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 242 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_1_MainHall_Text_0
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_1
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_2_MainHall::
# 250 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 251 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_2_MainHall_Text_0
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_1
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_2_MainHall::
# 259 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 260 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_2_MainHall_Text_0
# 262 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Girl_2_MainHall_2
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_2
Girl_2_MainHall_1:
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Girl_2_MainHall_2:
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_1
	goto Girl_2_MainHall_1


RichMan_MainHall::
# 272 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 273 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichMan_MainHall_Text_0
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_1
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichLady_MainHall::
# 280 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 281 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 282 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichLady_MainHall_Text_0
# 283 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_1
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Teacher_MainHall::
# 289 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Teacher_MainHall_Text_0
# 291 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_7
Teacher_MainHall_6:
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Teacher_MainHall_4
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_4
Teacher_MainHall_1:
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Teacher_MainHall_2:
# 292 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 293 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
	goto Teacher_MainHall_1

Teacher_MainHall_4:
# 303 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_3
	goto Teacher_MainHall_1

Teacher_MainHall_7:
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_6


Boy_3_MainHall::
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 314 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_3_MainHall_Text_0
# 316 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
# 323 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_3
Boy_3_MainHall_1:
# 326 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Boy_3_MainHall_2:
# 317 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
	goto Boy_3_MainHall_1


DiningRoom::
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 331 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


BackyardDoor::
# 337 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 340 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girls_HallwayMainHall::
# 344 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 345 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RestroomMainHall::
# 351 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 352 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 353 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


PokeballShelf::
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 359 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Porygon_PC::
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 364 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 365 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 366 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 367 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 372 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 368 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 377 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 379 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker MartLady_Text_0
# 380 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MartLady_2
# 382 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_2
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Expanded
	goto MartLady_1


# 388 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 389 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 390 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 393 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 394 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 395 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 396 "data/maps/SunshineOrphanageMainHall/scripts.pory"
    
# 397 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 399 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 402 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 403 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 409 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 410 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 411 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_1
# 412 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_2
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 420 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return

Blissey_Heal_1:
# 411 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	return

Blissey_Heal_2:
# 413 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 416 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


BlisseyHealedPawmi::
# 425 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 426 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 427 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 428 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 429 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 430 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


# 432 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 433 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 434 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 438 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 439 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 440 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 441 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


NicknamePartyMon::
# 447 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 448 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 449 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 450 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 451 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 456 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 457 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 458 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 461 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 459 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage::
# 470 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 471 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 472 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_PIN
# 473 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight
# 474 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 475 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0
# 483 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 484 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	giveitem ITEM_POTION, 2
# 485 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 486 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1
# 489 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, walkup
# 490 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 491 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 492 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 493 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 12
# 494 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 495 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_ORPHANAGE_MAIN_HALL
# 496 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 499 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight:
# 500 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_exclamation_mark
# 501 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
# 502 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_16
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
	step_end

# 506 "data/maps/SunshineOrphanageMainHall/scripts.pory"
walkup:
# 507 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 85 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 113 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Can we keep it?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Normally you aren't allowed to have your\n"
	.string "own Pokemon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Yay!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Here, I'll give you a pokeball to keep it.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2:
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER} received 1{COLOR GREEN} (hidden){COLOR DARK_GRAY} Cherish Ball.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_3:
# 128 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR GREEN}Tips: The shiny chance is roughly\n"
	.string "1/100.\p"
	.string "No Pokemon are shiny locked, including\n"
	.string "the story starters.\p"
	.string "The story starters have been buffed\n"
	.string "and come with pre-determined Nature\l"
	.string "and Perfect IVs.\p"
	.string "You also can not release them.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to rest.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Jin$"

Boy_1_MainHall_Text_1:
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Riko$"

Girl_1_MainHall_Text_1:
# 245 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Yamamoto$"

Boy_2_MainHall_Text_1:
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\l"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Momo$"

Girl_2_MainHall_Text_1:
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Your Pokémon looks so round and cute!$"

Girl_2_MainHall_Text_2:
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Akihiko! I'm also getting adopted next\n"
	.string "week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Man$"

RichMan_MainHall_Text_1:
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 282 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Woman$"

RichLady_MainHall_Text_1:
# 284 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kobayashi$"

Teacher_MainHall_Text_1:
# 294 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh Akihiko, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_2:
# 299 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, Akihiko?$"

Teacher_MainHall_Text_3:
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care, dear.$"

Teacher_MainHall_Text_4:
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kenichi$"

Boy_3_MainHall_Text_1:
# 317 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, Akihiko! Miki is waiting for you\n"
	.string "outside.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}I know, thanks!$"

Boy_3_MainHall_Text_2:
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}We will!$"

Boy_3_MainHall_Text_3:
# 323 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Pawmi is rare?$"

DiningRoom_Text_0:
# 331 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 345 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 352 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I had a Pokemon.$"

MartLady_Text_0:
# 379 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Tanaba$"

MartLady_Text_1:
# 380 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi Akihiko, what should I get you?$"

MartLady_Text_2:
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokemon.$"

BlisseyHealedPawmi_Text_0:
# 426 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 447 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 461 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0:
# 475 "data/maps/SunshineOrphanageMainHall/scripts.pory"
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
# 486 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Stay safe, dear.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Ms. Kobayashi!$"

NewLabTest_NotChosen::
# 464 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
