SunshineOrphanageMainHall_MapScripts::
# 4 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 28 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 8 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 11, 23
# 9 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 10 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 13 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 12, 5
# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 13, 18, 6
# 16 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 6, 22
# 20 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 21 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 1, 0, 21
# 22 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 1, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 23 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 2, 0, 18
# 24 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 2, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_OnWarp7
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
# 30 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 11, SunshineOrphanageMainHall_Eventscript_OnFrame11
	.2byte 0


# 33 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

# 37 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceleft:
# 38 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_left
	step_end

SunshineOrphanageMainHall_OnWarp7::
# 42 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineOrphanageMainHall_Eventscript_OnFrame7::
# 45 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_OnFrame11::
# 49 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
# 53 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 54 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 55 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 56 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 57 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 58 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


# 60 "data/maps/SunshineOrphanageMainHall/scripts.pory"
facedown:
# 61 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_down
	step_end

# 63 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHealingPawmi:
# 64 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
# 68 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 69 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHealingPawmi
# 70 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 71 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 72 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 73 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 74 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, facedown
# 75 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, facedown
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 77 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 78 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 79 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PutdownbyAkihiko
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
# 83 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 84 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 85 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


# 89 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PutdownbyAkihiko:
# 90 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_down
# 91 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
# 92 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 93 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
# 99 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 100 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
# 104 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 105 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 106 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 107 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 108 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 116 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 117 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 118 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 123 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2
# 124 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_3
# 129 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 101 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 136 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 137 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 141 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 142 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 143 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 144 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 150 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 153 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 154 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 155 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 159 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 160 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 161 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 186 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknamePartyMon
# 169 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknameBoxMon
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 190 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 195 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 196 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 197 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
# 203 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 204 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 206 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 207 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 208 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 209 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 210 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 211 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 212 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 223 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_1_MainHall_Text_0
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_1
# 228 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_1_MainHall::
# 234 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 235 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 236 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_1_MainHall_Text_0
# 237 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_1
# 239 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_2_MainHall::
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 245 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_2_MainHall_Text_0
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_1
# 248 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_2_MainHall::
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_2_MainHall_Text_0
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Girl_2_MainHall_2
# 258 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_2
Girl_2_MainHall_1:
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Girl_2_MainHall_2:
# 256 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_1
	goto Girl_2_MainHall_1


RichMan_MainHall::
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 267 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichMan_MainHall_Text_0
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_1
# 270 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichLady_MainHall::
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichLady_MainHall_Text_0
# 277 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_1
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Teacher_MainHall::
# 283 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 284 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Teacher_MainHall_Text_0
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_7
Teacher_MainHall_6:
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Teacher_MainHall_4
# 301 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_4
Teacher_MainHall_1:
# 303 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Teacher_MainHall_2:
# 286 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 291 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 292 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
	goto Teacher_MainHall_1

Teacher_MainHall_4:
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_3
	goto Teacher_MainHall_1

Teacher_MainHall_7:
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_6


Boy_3_MainHall::
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_3_MainHall_Text_0
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
# 318 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_3
Boy_3_MainHall_1:
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Boy_3_MainHall_2:
# 311 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
	goto Boy_3_MainHall_1


DiningRoom::
# 326 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 329 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


BackyardDoor::
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 336 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girls_HallwayMainHall::
# 340 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 344 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RestroomMainHall::
# 348 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 353 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


PokeballShelf::
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 362 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Porygon_PC::
# 366 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 367 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 368 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 369 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 373 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 376 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 382 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker MartLady_Text_0
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MartLady_2
# 386 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 387 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_2
# 388 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_ExpandedItems
	goto MartLady_1


# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 393 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 394 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 395 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 396 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 397 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 399 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_ExpandedItems::
# 402 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 403 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 405 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	end
# 406 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 409 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 410 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 411 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 412 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 413 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 417 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 419 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 420 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_1
# 422 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_2
# 426 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 428 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return

Blissey_Heal_1:
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	return

Blissey_Heal_2:
# 423 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 424 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


BlisseyHealedPawmi::
# 432 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 433 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 434 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 435 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 436 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 437 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


# 439 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 440 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 441 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 445 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 446 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 447 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 448 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


NicknamePartyMon::
# 454 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 455 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 456 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 457 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 458 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 463 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 464 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 465 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 468 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 466 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage::
# 477 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 478 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_PIN
# 479 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight
# 480 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 481 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0
# 489 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 490 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	giveitem ITEM_POTION, 2
# 491 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 492 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1
# 495 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, walkup
# 496 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 497 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 498 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 499 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 12
# 500 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_ORPHANAGE_MAIN_HALL
# 501 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 504 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight:
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_exclamation_mark
# 506 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
# 507 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_16
# 508 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 508 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 508 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 508 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
	step_end

# 511 "data/maps/SunshineOrphanageMainHall/scripts.pory"
walkup:
# 512 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 82 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
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
# 119 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Yay!\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Here, I'll give you a pokeball to keep it.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2:
# 123 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER} received 1{COLOR LIGHT_GREEN} (hidden){COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Cherish Ball.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_3:
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Tips: The shiny chance is roughly\n"
	.string "1/100.\p"
	.string "No Pokemon are shiny locked, including\n"
	.string "the story starters.\p"
	.string "The story starters have been buffed\n"
	.string "and come with pre-determined Nature\l"
	.string "and Perfect IVs.\p"
	.string "You also can not release them.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 136 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 143 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MIKI}Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 160 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 199 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to rest.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Jin$"

Boy_1_MainHall_Text_1:
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 236 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Riko$"

Girl_1_MainHall_Text_1:
# 238 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 245 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Yamamoto$"

Boy_2_MainHall_Text_1:
# 247 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\l"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Momo$"

Girl_2_MainHall_Text_1:
# 256 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Your Pokémon looks so round and cute!$"

Girl_2_MainHall_Text_2:
# 259 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER}! I'm also getting adopted\n"
	.string "next week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 267 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Wealthy Man$"

RichMan_MainHall_Text_1:
# 269 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Wealthy Woman$"

RichLady_MainHall_Text_1:
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 284 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Kobayashi$"

Teacher_MainHall_Text_1:
# 288 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh {PLAYER}, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_2:
# 293 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, {PLAYER}?$"

Teacher_MainHall_Text_3:
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care, dear.$"

Teacher_MainHall_Text_4:
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kenichi$"

Boy_3_MainHall_Text_1:
# 312 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, {PLAYER}! Miki is waiting for\n"
	.string "you outside.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} I know, thanks!$"

Boy_3_MainHall_Text_2:
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} We will!$"

Boy_3_MainHall_Text_3:
# 319 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} Pawmi is rare?$"

DiningRoom_Text_0:
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 342 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 350 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 359 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 373 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I have a Pokemon.$"

MartLady_Text_0:
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Tanaba$"

MartLady_Text_1:
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi {PLAYER}, what should I get you?$"

MartLady_Text_2:
# 387 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 426 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokemon.$"

BlisseyHealedPawmi_Text_0:
# 433 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 454 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 468 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0:
# 481 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Good morning, Akihiko, Shinjiro.\p"
	.string "Sorry to trouble you but can you two go\n"
	.string "pick up a package for me?\p"
	.string "It should be delivered at the\n"
	.string "Pokecenter in Sunshine Town by now.\p"
	.string "You can get there by going through\n"
	.string "Sunshine Woods.\p"
	.string "You have a Pokémon now so it should be\n"
	.string "fine.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Of course, Ms. Kobayashi.\p"
	.string "{SPEAKER NAME_KOBAYASHI}{DESTROY_MUGSHOT}Here, you may need these.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1:
# 492 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KOBAYASHI}Stay safe, dear.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you, Ms. Kobayashi!$"

NewLabTest_NotChosen::
# 471 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
