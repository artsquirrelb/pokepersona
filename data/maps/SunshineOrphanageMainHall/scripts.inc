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
	compare VAR_AKIHIKOS_INTRO_STATE, 6
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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, Akihiko_FaceUp
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 6, SunshineOrphanageMainHall_Eventscript_OnFrame6
	.2byte 0


# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

SunshineOrphanageMainHall_Eventscript_OnFrame6::
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
	compare VAR_AKIHIKOS_INTRO_STATE, 7
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
	setvar VAR_AKIHIKOS_INTRO_STATE, 7
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
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
# 169 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 170 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_MIKI_IN_AKIHIKOS_INTRO
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warp MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 180 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 187 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 188 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_0
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_1_MainHall::
# 197 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 199 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_0
# 201 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_2_MainHall::
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 206 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 207 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_0
# 209 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_2_MainHall::
# 213 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 215 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_0
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichMan_MainHall::
# 222 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 223 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_0
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichLady_MainHall::
# 230 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 231 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_0
# 234 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Teacher_MainHall::
# 238 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 239 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_lt Teacher_MainHall_2
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Teacher_MainHall_5
Teacher_MainHall_4:
# 251 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
Teacher_MainHall_1:
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Teacher_MainHall_2:
# 240 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_0
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 245 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_5:
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_4


Boy_3_MainHall::
# 257 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 258 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 259 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq Boy_3_MainHall_2
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_3
# 267 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
Boy_3_MainHall_1:
# 271 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Boy_3_MainHall_2:
# 260 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_0
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1


DiningRoom::
# 275 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


BackyardDoor::
# 282 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 283 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girls_HallwayMainHall::
# 289 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 293 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RestroomMainHall::
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


PokeballShelf::
# 306 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 311 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Porygon_PC::
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 316 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 317 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 318 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 319 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 325 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 331 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_0
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MartLady_2
# 334 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 336 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_ExpandedItems
	goto MartLady_1


# 340 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 342 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 343 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 344 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 345 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 346 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 348 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_ExpandedItems::
# 350 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 351 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 352 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 353 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	end
# 354 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 356 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 358 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 359 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 360 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 361 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 362 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 365 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 366 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 367 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 368 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 369 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_eq Blissey_Heal_1
# 374 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_2
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_1
# 380 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Blissey_Heal_1:
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 372 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 373 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Blissey_Heal_2:
# 375 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 376 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 389 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 390 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


NicknamePartyMon::
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 399 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 402 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 409 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 412 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 410 "data/maps/SunshineOrphanageMainHall/scripts.pory"
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
	.string "{DESTROY_MUGSHOT}Ms. Kobayashi: Normally children here\p"
	.string "aren't allowed to have their own\n"
	.string "Pokemon.\p"
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
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The story starters are buffed.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_1:
# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Kobayashi: Alrigh.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to rest.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 200 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 208 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\l"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER}! I'm also getting adopted\n"
	.string "next week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 242 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh {PLAYER}, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_1:
# 247 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, {PLAYER}?$"

Teacher_MainHall_Text_2:
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, {PLAYER}! Miki is waiting for\n"
	.string "you outside.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} I know, thanks!$"

Boy_3_MainHall_Text_1:
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} We will!$"

Boy_3_MainHall_Text_2:
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} Pawmi is rare?$"

DiningRoom_Text_0:
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 283 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 291 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 299 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I have a Pokemon.$"

MartLady_Text_0:
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi {PLAYER}, what should I get you?$"

MartLady_Text_1:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

Blissey_Heal_Text_1:
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokemon.$"

NicknamePartyMon_Text_0:
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 412 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

NewLabTest_NotChosen::
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
