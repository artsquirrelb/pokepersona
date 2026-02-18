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
	compare VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI
	goto_if_lt SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
	goto_if_ge SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
	goto_if_eq SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 26 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
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
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI, SunshineOrphanageMainHall_OnWarp7
	.2byte 0

SunshineOrphanageMainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_FINDING_PAWMI, SunshineOrphanageMainHall_Eventscript_OnFrame7
# 35 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS, SunshineOrphanageMainHall_Eventscript_OnFrame11
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
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 106 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, HeartPawmi
# 107 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 108 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 109 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 30
# 110 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0
# 117 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 118 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_SHINY
# 119 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 14, MikiHappy
# 120 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1
# 126 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 127 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 128 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2
SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1:
# 133 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_GET_PAWMI
# 134 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 20, 10
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_2:
# 129 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_ShowHelpShinyChance
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_ShowHelpStarter
# 131 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_HELP_WINDOW_GET
	goto SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_1


SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi::
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 141 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 142 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0
# 143 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi::
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 150 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0
# 151 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 155 "data/maps/SunshineOrphanageMainHall/scripts.pory"
HeartPawmi:
# 156 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_up
# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_8
# 158 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_heart
	step_end

# 161 "data/maps/SunshineOrphanageMainHall/scripts.pory"
MikiHappy:
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	jump_in_place_down
	step_end

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter::
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0, MSGBOX_YESNO
# 169 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2
# 190 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 15, PawmiDisappointed
# 191 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NewLabTest_NotChosen
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1:
# 193 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmessage
# 194 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_2:
# 170 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	givemon SPECIES_PAWMI_DELTA, 5, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, isStoryStarter = TRUE
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6
# 187 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_5:
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymove 15, SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Movement_0
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_6:
# 180 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 181 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitfanfare
# 182 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymove 15, SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Movement_0
# 184 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto SunshineOrphanageMainHall_Eventscript_GoToSleep
	goto SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_1


# 197 "data/maps/SunshineOrphanageMainHall/scripts.pory"
PawmiDisappointed:
# 198 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	shake_horizontal
	step_end

SunshineOrphanageMainHall_Eventscript_GoToSleep::
# 202 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 203 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 204 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 20
# 205 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, TeacherFacingAkihiko
# 206 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 207 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0
# 210 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 211 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 212 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 213 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 214 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 215 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 14
# 216 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 15
# 217 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 218 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 30
# 219 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	warpsilent MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F, 3, 7
# 220 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitstate
	return


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
	end


Girl_1_MainHall::
# 242 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 243 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_1_MainHall_Text_0
# 245 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_1
# 247 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Boy_2_MainHall::
# 252 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 253 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_2_MainHall_Text_0
# 255 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_1
# 257 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girl_2_MainHall::
# 262 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 263 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Girl_2_MainHall_Text_0
# 265 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_ge Girl_2_MainHall_2
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_2
Girl_2_MainHall_1:
# 271 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Girl_2_MainHall_2:
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_1
	goto Girl_2_MainHall_1


RichMan_MainHall::
# 276 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 277 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichMan_MainHall_Text_0
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_1
# 280 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RichLady_MainHall::
# 285 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 286 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker RichLady_MainHall_Text_0
# 288 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_1
# 290 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Teacher_MainHall::
# 295 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Teacher_MainHall_Text_0
# 297 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_MEET_MIKI_OUTSIDE
	goto_if_lt Teacher_MainHall_2
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_MEET_MIKI_OUTSIDE
	goto_if_eq Teacher_MainHall_7
Teacher_MainHall_6:
# 308 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
	goto_if_ge Teacher_MainHall_4
# 313 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 314 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_4
Teacher_MainHall_1:
# 315 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Teacher_MainHall_2:
# 298 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 299 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_1
	goto Teacher_MainHall_1

Teacher_MainHall_3:
# 303 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 304 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_2
	goto Teacher_MainHall_1

Teacher_MainHall_4:
# 309 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_3
	goto Teacher_MainHall_1

Teacher_MainHall_7:
# 302 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_TO_SUNSHINE_WOODS
	goto_if_eq Teacher_MainHall_3
	goto Teacher_MainHall_6


Boy_3_MainHall::
# 320 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 321 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker Boy_3_MainHall_Text_0
# 323 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_MEET_MIKI_OUTSIDE
	goto_if_eq Boy_3_MainHall_2
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_TO_SUNSHINE_WOODS
	goto_if_eq Boy_3_MainHall_3
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_3
Boy_3_MainHall_1:
# 333 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Boy_3_MainHall_2:
# 324 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
	goto Boy_3_MainHall_1


DiningRoom::
# 338 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 339 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 341 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


BackyardDoor::
# 346 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 349 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Girls_HallwayMainHall::
# 354 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 357 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


RestroomMainHall::
# 362 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 364 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


PokeballShelf::
# 369 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 371 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


Porygon_PC::
# 376 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 377 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 378 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 379 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 380 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 385 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 381 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 390 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 391 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setspeaker MartLady_Text_0
# 393 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 394 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, MartLady_2
# 398 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart GeneralMart_PreDex
MartLady_1:
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_2
# 401 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 395 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart GeneralMart_Prologue
	goto MartLady_1


Blissey_Heal::
# 406 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 407 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 408 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 409 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 410 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GET_PAWMI
	goto_if_eq Blissey_Heal_2
# 413 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_3
# 419 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 421 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
Blissey_Heal_1:
	end

Blissey_Heal_2:
# 411 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto BlisseyHealedPawmi
	goto Blissey_Heal_1

Blissey_Heal_3:
# 414 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse MUS_HEAL
# 415 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitse
# 416 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 417 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	goto Blissey_Heal_1


BlisseyHealedPawmi::
# 427 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lockall
# 428 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BlisseyHealedPawmi_Text_0
# 429 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 430 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 11, BlisseyHappy
# 431 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 432 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	releaseall
	end


# 435 "data/maps/SunshineOrphanageMainHall/scripts.pory"
BlisseyHappy:
# 436 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_in_place_slow_down
# 437 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_music
	step_end

Minccino_NPC::
# 441 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	moncryscript SPECIES_MINCCINO
# 442 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


NicknamePartyMon::
# 449 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 450 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 451 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 452 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 453 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 458 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 459 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	hidemonpic
# 460 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 463 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 461 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage::
# 472 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 473 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay 16
# 474 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playse SE_PIN
# 475 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 4, SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight
# 476 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement 0
# 477 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0
# 485 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 486 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 487 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	closemessage
# 488 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1
# 491 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	applymovement 13, walkup
# 492 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmovement
# 493 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	removeobject 13
# 494 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setflag FLAG_TEMP_3
# 495 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_GO_GET_PACKAGE
# 496 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	fwdtime 8, 40
# 497 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end


# 501 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_MsKobayashiMoveRight:
# 502 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	emote_exclamation_mark
# 503 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	face_right
# 504 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	delay_16
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
# 505 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_right
	step_end

# 508 "data/maps/SunshineOrphanageMainHall/scripts.pory"
walkup:
# 509 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Movement_0:
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	enter_pokeball
	step_end

SunshineOrphanageMainHall_Eventscript_PawmiIsHealed_Text_0:
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}There you go.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_0:
# 111 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Looks like it wants to stay with you.\p"
	.string "{SPEAKER NAME_MK}{DESTROY_MUGSHOT}Can we keep it?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Can we, Ms. Kobayashi?\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Normally you aren't allowed to have your\n"
	.string "own Pokémon here.\p"
	.string "However, since you are going to leave in\n"
	.string "a few days, we can make an exception.\p"
	.string "Just make sure to not cause trouble in\n"
	.string "the mean time.$"

SunshineOrphanageMainHall_Eventscript_PawmiAppreciated_Text_1:
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MK}Yay!\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}Thank you, Ms. Kobayashi!\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Here, I'll give you a pokeball to keep it.\p"
	.string "{SPEAKER NAME_NONE}Ms. Kobayashi gave {PLAYER} a Cherish\n"
	.string "Ball.$"

SunshinOrphanageMainHall_Eventscript_ShinjiroTellsYouToCatchPawmi_Text_0:
# 142 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Go on, Pawmi is waiting for you.$"

SunshineOrphanageMainHall_Eventscript_MikiTellsYouToCatchPawmi_Text_0:
# 150 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_MK}Let's give Pawmi a home, big bro!$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_0:
# 168 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Let Pawmi in the Cherish Ball?$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_1:
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi happily went into the Pokéball.$"

SunshineOrphanageMainHall_Eventscript_GetPawmiStarter_Text_2:
# 187 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Party full.$"

SunshineOrphanageMainHall_Eventscript_GoToSleep_Text_0:
# 207 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Alright.\p"
	.string "I supposed it's quite late now. You all\n"
	.string "should go to bed.\p"
	.string "See you tomorrow.$"

Boy_1_MainHall_Text_0:
# 232 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Jin$"

Boy_1_MainHall_Text_1:
# 233 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 244 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Riko$"

Girl_1_MainHall_Text_1:
# 246 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 254 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Yamamoto$"

Boy_2_MainHall_Text_1:
# 256 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokémon of our own but we can still play\l"
	.string "with the staff's Pokémon.$"

Girl_2_MainHall_Text_0:
# 264 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Momo$"

Girl_2_MainHall_Text_1:
# 266 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Your Pokémon looks so round and cute!$"

Girl_2_MainHall_Text_2:
# 268 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Akihiko! I'm also getting adopted next\n"
	.string "week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY}That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 278 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Man$"

RichMan_MainHall_Text_1:
# 279 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 287 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kind-looking Woman$"

RichLady_MainHall_Text_1:
# 289 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 296 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kobayashi$"

Teacher_MainHall_Text_1:
# 300 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh Akihiko, Miki is waiting for you\n"
	.string "outside with Shinjiro.$"

Teacher_MainHall_Text_2:
# 305 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I'm a little busy right now.\n"
	.string "Can you go play outside, Akihiko?$"

Teacher_MainHall_Text_3:
# 310 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care, dear.$"

Teacher_MainHall_Text_4:
# 314 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Take care of Pawmi, okay dear?$"

Boy_3_MainHall_Text_0:
# 322 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Kenichi$"

Boy_3_MainHall_Text_1:
# 324 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, Akihiko! Miki is waiting for you\n"
	.string "outside.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}I know, thanks!$"

Boy_3_MainHall_Text_2:
# 327 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}We will!$"

Boy_3_MainHall_Text_3:
# 330 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokémon in the\n"
	.string "woods?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Pawmi is rare?$"

DiningRoom_Text_0:
# 339 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 347 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 355 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 363 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 370 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 383 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} Porygon can access the Pokémon\n"
	.string "Storage. If only I had a Pokémon.$"

MartLady_Text_0:
# 392 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Ms. Tanaba$"

MartLady_Text_1:
# 393 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi Akihiko, what should I get you?$"

MartLady_Text_2:
# 400 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 419 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokémon.$"

BlisseyHealedPawmi_Text_0:
# 428 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Thank you for healing Pawmi, Blissey!$"

NicknamePartyMon_Text_0:
# 449 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 463 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Transfered to PC.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_0:
# 477 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Good morning, Akihiko, Shinjiro.\p"
	.string "Sorry to trouble you but can you two go\n"
	.string "pick up a package for me?\p"
	.string "It should be delivered at the Pokémon\n"
	.string "Center in Sunshine Town by now.\p"
	.string "You can get there by going through\n"
	.string "Sunshine Woods.\p"
	.string "Pawmi is with you now so it should be\n"
	.string "fine.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Of course, Ms. Kobayashi.\p"
	.string "{SPEAKER NAME_KBYS}{DESTROY_MUGSHOT}Here, you may need these.$"

SunshineOrphanageMainHall_Eventscript_MsKobayashiAskedToGoPickUpAPackage_Text_1:
# 488 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{SPEAKER NAME_KBYS}Stay safe, dear.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}Thank you, Ms. Kobayashi!$"

NewLabTest_NotChosen::
# 466 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Pawmi looks at Akihiko expectantly.$"
