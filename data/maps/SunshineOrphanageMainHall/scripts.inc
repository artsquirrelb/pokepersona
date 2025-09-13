SunshineOrphanageMainHall_MapScripts::
# 3 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	clearflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 11, 23
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 8 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, Akihiko_FaceUp
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
	.2byte 0


# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

SunshineOrphanageMainHall_Eventscript_OnFrame7::
# 19 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
# 24 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 25 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 26 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 27 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 28 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 29 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


# 31 "data/maps/SunshineOrphanageMainHall/scripts.pory"
facedown:
# 32 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_down
	step_end

# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHealingPawmi:
# 35 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
# 39 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 40 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHealingPawmi
# 41 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 42 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 43 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 44 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 45 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, facedown
# 46 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, facedown
# 47 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 48 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 49 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 50 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PutdownbyAkihiko
# 51 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 52 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
# 54 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 55 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 56 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


# 60 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PutdownbyAkihiko:
# 61 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_down
# 62 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
# 63 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 64 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
# 65 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 66 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
# 70 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 71 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
# 75 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 77 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 78 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 79 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 89 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 93 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 96 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 72 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 100 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 101 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 102 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 103 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 107 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 108 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 113 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 114 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 115 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 116 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 119 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 120 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 127 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 151 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 152 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 128 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 129 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_PATCH, ITEM_CHERISH_BALL, NATURE_ADAMANT, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 137 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 145 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 131 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 133 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknamePartyMon
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 138 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 141 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call NicknameBoxMon
# 142 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 156 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 161 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warp MAP_BLANK_MAP, 0, 0
# 178 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 184 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 190 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_0
# 193 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_1_MainHall::
# 199 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 200 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 201 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_0
# 203 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_2_MainHall::
# 207 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 208 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 209 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_0
# 211 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_2_MainHall::
# 215 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_0
# 220 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichMan_MainHall::
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_0
# 228 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichLady_MainHall::
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 234 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_0
# 236 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Teacher_MainHall::
# 240 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_5
Teacher_MainHall_4:
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
Teacher_MainHall_1:
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Teacher_MainHall_2:
# 242 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_0
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 247 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 248 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_5:
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_4


Boy_3_MainHall::
# 259 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 260 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
# 269 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
Boy_3_MainHall_1:
# 273 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Boy_3_MainHall_2:
# 262 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_0
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1


DiningRoom::
# 277 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 280 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


BackyardDoor::
# 284 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girls_HallwayMainHall::
# 291 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 292 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 295 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RestroomMainHall::
# 299 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 300 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


PokeballShelf::
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Porygon_PC::
# 317 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 318 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 319 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 321 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 324 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_0
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MartLady_2
# 336 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 337 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_ExpandedItems
	goto MartLady_1


# 342 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 343 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 344 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 345 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 346 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 348 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 350 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 351 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_ExpandedItems::
# 352 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 353 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 354 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	end
# 356 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 359 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 360 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 361 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 362 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 364 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 367 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 368 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 369 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_1
# 372 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_2
# 376 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return

Blissey_Heal_1:
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	return

Blissey_Heal_2:
# 373 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 374 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


BlisseyHealedPawmi::
# 382 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 386 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 387 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	return


# 389 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 390 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 395 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 396 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 397 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


NicknamePartyMon::
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 405 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 406 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 413 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 416 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 53 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{DESTROY_MUGSHOT}Miki: Can we keep it?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{DESTROY_MUGSHOT}Ms. Kobayashi: Normally you aren't\n"
	.string "allowed to have your own Pokemon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
# 90 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Miki: Yay!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{DESTROY_MUGSHOT}Ms. Kobayashi: Here, I'll give you a\n"
	.string "pokeball to keep it.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_2:
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER} received 1{COLOR GREEN}{SHADOW LIGHT_GREEN} (hidden){COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Cherish Ball.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 102 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Miki: Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 132 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 145 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Tips: The shiny chance is roughly\n"
	.string "1/100.\p"
	.string "No Pokemon are shiny locked, including\n"
	.string "the story starters.\p"
	.string "The story starters have been buffed\n"
	.string "and come with pre-determined Nature\l"
	.string "and Perfect IVs.\p"
	.string "You also can not release them.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1:
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Kobayashi: Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to rest.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 210 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\l"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER}! I'm also getting adopted\n"
	.string "next week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 227 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 235 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh {PLAYER}, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_1:
# 249 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, {PLAYER}?$"

Teacher_MainHall_Text_2:
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, {PLAYER}! Miki is waiting for\n"
	.string "you outside.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} I know, thanks!$"

Boy_3_MainHall_Text_1:
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} We will!$"

Boy_3_MainHall_Text_2:
# 270 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} Pawmi is rare?$"

DiningRoom_Text_0:
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 293 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 301 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 324 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I have a Pokemon.$"

MartLady_Text_0:
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi {PLAYER}, what should I get you?$"

MartLady_Text_1:
# 337 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 376 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokemon.$"

BlisseyHealedPawmi_Text_0:
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 404 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

NewLabTest_NotChosen::
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
