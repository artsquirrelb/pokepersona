SunshineOrphanageMainHall_MapScripts::
# 4 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 33 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSHINE_ORPHANAGE
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 7
	goto_if_lt SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineOrphanageMainHall/scripts.pory"
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
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_2
# 12 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
# 16 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 11, 23
# 17 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
	goto SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HIDE_HELP_BUTTON
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
	setflag FLAG_TEMP_3
# 28 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectxyperm 4, 6, 22
# 29 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_OnWarp7
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 7, SunshineOrphanageMainHall_Eventscript_OnFrame7
# 35 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 11, SunshineOrphanageMainHall_Eventscript_OnFrame11
	.2byte 0


# 38 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceright:
# 39 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
	step_end

# 42 "data/maps/SunshineOrphanageMainHall/scripts.pory"
faceleft:
# 43 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_left
	step_end

SunshineOrphanageMainHall_OnWarp7::
# 47 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


SunshineOrphanageMainHall_Eventscript_OnFrame7::
# 50 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_HealingPawmi
	return


SunshineOrphanageMainHall_Eventscript_OnFrame11::
# 54 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage
	return


SunshineOrphanageMainHall_Eventscript_HealingPawmi::
# 58 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 59 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 60 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 61 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 62 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 63 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiIsHealed
	return


# 65 "data/maps/SunshineOrphanageMainHall/scripts.pory"
facedown:
# 66 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_down
	step_end

# 68 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHealingPawmi:
# 69 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed::
# 73 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 74 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHealingPawmi
# 75 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 77 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 78 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 79 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, facedown
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, facedown
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 82 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 83 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	showobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 84 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PutdownbyAkihiko
# 85 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 86 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 89 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 90 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated
	return


# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PutdownbyAkihiko:
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_down
# 96 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
# 97 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 98 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
# 99 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 100 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated::
# 104 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 105 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 111 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 112 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 113 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 114 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_SHINY
# 123 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 124 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 131 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 132 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_6
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_5:
# 137 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 8
# 138 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 20, 10
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 139 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 106 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_6:
# 133 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_ShowHelpShinyChance
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_ShowHelpStarter
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HELP_WINDOW_GET
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_5


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 144 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 145 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 146 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 152 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 153 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 154 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 155 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 159 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 160 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 161 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 199 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 201 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_METAL_CLAW, isStoryStarter = TRUE
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 195 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_3
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 180 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 186 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 188 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 189 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hideobjectat 15, MAP_SUNSHINE_ORPHANAGE_MAIN_HALL
# 190 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 192 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 206 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 210 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 211 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 20
# 212 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 213 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 9
# 219 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 220 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 221 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 222 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 223 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 224 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 225 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 226 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 30
# 227 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warpsilent MAP_BLANK_MAP, 0, 0
# 228 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


# 231 "data/maps/SunshineOrphanageMainHall/scripts.pory"
TeacherFacingAkihiko:
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_up
	step_end

Boy_1_MainHall::
# 238 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 239 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 240 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_1_MainHall_Text_0
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_1
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girl_1_MainHall::
# 250 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 251 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_1_MainHall_Text_0
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_1
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Boy_2_MainHall::
# 260 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 261 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 262 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_2_MainHall_Text_0
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_1
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girl_2_MainHall::
# 270 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 271 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 272 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_2_MainHall_Text_0
# 273 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Girl_2_MainHall_2
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_2
Girl_2_MainHall_1:
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Girl_2_MainHall_2:
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_1
	goto Girl_2_MainHall_1


RichMan_MainHall::
# 284 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 286 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichMan_MainHall_Text_0
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_1
# 288 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RichLady_MainHall::
# 293 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 294 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 295 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichLady_MainHall_Text_0
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_1
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Teacher_MainHall::
# 303 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Teacher_MainHall_Text_0
# 305 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_lt Teacher_MainHall_2
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Teacher_MainHall_7
Teacher_MainHall_6:
# 316 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_ge Teacher_MainHall_4
# 321 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_4
Teacher_MainHall_1:
# 323 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Teacher_MainHall_2:
# 306 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 307 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 311 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 312 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
	goto Teacher_MainHall_1

Teacher_MainHall_4:
# 317 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 318 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_3
	goto Teacher_MainHall_1

Teacher_MainHall_7:
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 6
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_6


Boy_3_MainHall::
# 328 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 329 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_3_MainHall_Text_0
# 331 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_2
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq Boy_3_MainHall_3
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_3
Boy_3_MainHall_1:
# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Boy_3_MainHall_2:
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
	goto Boy_3_MainHall_1


DiningRoom::
# 346 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


BackyardDoor::
# 354 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girls_HallwayMainHall::
# 362 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 365 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RestroomMainHall::
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 372 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


PokeballShelf::
# 377 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 379 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Porygon_PC::
# 384 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 386 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 387 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 388 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 393 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 389 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 399 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker MartLady_Text_0
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 402 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MartLady_2
# 406 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart GeneralMart_PreDex
MartLady_1:
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_2
# 409 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 403 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart GeneralMart_Prologue
	goto MartLady_1


Blissey_Heal::
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 416 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 417 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq Blissey_Heal_2
# 419 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_3
# 425 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 427 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
Blissey_Heal_1:
	end

Blissey_Heal_2:
# 418 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	goto Blissey_Heal_1

Blissey_Heal_3:
# 420 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 422 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 423 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	goto Blissey_Heal_1


BlisseyHealedPawmi::
# 433 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 434 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 435 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 436 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 437 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 438 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end


# 441 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 442 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 443 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 447 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 448 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 449 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 450 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


NicknamePartyMon::
# 457 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 458 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 459 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 460 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 461 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 466 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 467 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 468 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 471 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 469 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage::
# 480 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 481 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 482 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_PIN
# 483 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight
# 484 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 485 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0
# 493 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 494 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 495 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 496 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1
# 499 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, walkup
# 500 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 501 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 502 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 12
# 504 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 40
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 509 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight:
# 510 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_exclamation_mark
# 511 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
# 512 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_16
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 513 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
	step_end

# 516 "data/maps/SunshineOrphanageMainHall/scripts.pory"
walkup:
# 517 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_up
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 115 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Can we keep it?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Normally you aren't allowed to have your\n"
	.string "own Pokémon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MK}Yay!\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Here, I'll give you a pokeball to keep it.\p"
	.string "{SPEAKER NAME_NONE}Ms. Kobayashi gave {PLAYER} a Cherish\n"
	.string "Ball.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 146 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 154 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MK}Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Received Pawmi.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{COLOR GREEN}Tips: You can rename a Pokémon in its\n"
	.string "summary screen.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_3:
# 195 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to bed.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 240 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Jin$"

Boy_1_MainHall_Text_1:
# 241 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Riko$"

Girl_1_MainHall_Text_1:
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 262 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Yamamoto$"

Boy_2_MainHall_Text_1:
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokémon of our own but we can still play\l"
	.string "with the staff's Pokémon.$"

Girl_2_MainHall_Text_0:
# 272 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Momo$"

Girl_2_MainHall_Text_1:
# 274 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Your Pokémon looks so round and cute!$"

Girl_2_MainHall_Text_2:
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Akihiko! I'm also getting adopted next\n"
	.string "week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY}That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 286 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Man$"

RichMan_MainHall_Text_1:
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 295 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Woman$"

RichLady_MainHall_Text_1:
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kobayashi$"

Teacher_MainHall_Text_1:
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh Akihiko, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_2:
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now. Can you go\n"
	.string "play somewhere else, Akihiko?$"

Teacher_MainHall_Text_3:
# 318 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care, dear.$"

Teacher_MainHall_Text_4:
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kenichi$"

Boy_3_MainHall_Text_1:
# 332 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, Akihiko! Miki is waiting for you\n"
	.string "outside.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}I know, thanks!$"

Boy_3_MainHall_Text_2:
# 335 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}We will!$"

Boy_3_MainHall_Text_3:
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokémon in the\n"
	.string "woods?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Pawmi is rare?$"

DiningRoom_Text_0:
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL} Porygon can access the Pokémon\n"
	.string "Storage. If only I had a Pokémon.$"

MartLady_Text_0:
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Tanaba$"

MartLady_Text_1:
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi Akihiko, what should I get you?$"

MartLady_Text_2:
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 425 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokémon.$"

BlisseyHealedPawmi_Text_0:
# 434 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 457 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 471 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0:
# 485 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Good morning, Akihiko, Shinjiro.\p"
	.string "Sorry to trouble you but can you two go\n"
	.string "pick up a package for me?\p"
	.string "It should be delivered at the Pokémon\n"
	.string "Center in Sunshine Town by now.\p"
	.string "You can get there by going through\n"
	.string "Sunshine Woods.\p"
	.string "Pawmi is with you now so it should be\n"
	.string "fine.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}Of course, Ms. Kobayashi.\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Here, you may need these.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1:
# 496 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Stay safe, dear.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Thank you, Ms. Kobayashi!$"

NewLabTest_NotChosen::
# 474 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
