Coralport_MapScripts::
# 2 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 67 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Coralport_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 73 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Coralport_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Coralport/scripts.pory"
	setflag FLAG_VISITED_CORALPORT
# 4 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_4
# 7 "data/maps/Coralport/scripts.pory"
	setrespawn HEAL_LOCATION_CORALPORT
# 8 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, C1_WAITING_SHIP
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 31 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 40 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 50 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Coralport/scripts.pory"
	setobjectxyperm M_CORAL, 13, 10
# 10 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype M_CORAL, MOVEMENT_TYPE_FACE_DOWN
# 12 "data/maps/Coralport/scripts.pory"
	setobjectxyperm S_CORAL, 11, 11
# 13 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype S_CORAL, MOVEMENT_TYPE_FACE_LEFT
# 15 "data/maps/Coralport/scripts.pory"
	setobjectxyperm A_CORAL, 13, 13
# 16 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype A_CORAL, MOVEMENT_TYPE_FACE_DOWN
# 17 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 18 "data/maps/Coralport/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 22 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 15, 29
# 23 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 16, 29
# 24 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_RIGHT
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 28 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 29 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 32 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 33 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 34 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 36, 27
# 35 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 36, 29
# 36 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 26, 36, 28
# 37 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 38 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_LEFT
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 41 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 42 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 43 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 36, 27
# 44 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 42, 26
# 45 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 26, 41, 26
# 46 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 47 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 51 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 52 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 53 "data/maps/Coralport/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 54 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 56 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 20, 11
# 57 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 59 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 21, 11
# 60 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 62 "data/maps/Coralport/scripts.pory"
	setobjectxyperm S_CORAL, 22, 13
# 63 "data/maps/Coralport/scripts.pory"
	setobjectxyperm M_CORAL, 21, 13
# 64 "data/maps/Coralport/scripts.pory"
	setobjectxyperm A_CORAL, 20, 13
	return

Coralport_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 69 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, C1_WAITING_SHIP, Coralport_MapScripts_OnFrame3
# 70 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1, Coralport_MapScripts_QuestOldRodOnFrame1
# 71 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6, Coralport_MapScripts_QuestOldRodOnFrame6
	.2byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 74 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3, Coralport_MapScripts_QuestOldRodOnWarp3
# 75 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4, Coralport_MapScripts_QuestOldRodOnWarp4
	.2byte 0


Coralport_MapScripts_OnFrame3::
# 80 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp
	return


Coralport_MapScripts_QuestOldRodOnFrame1::
# 84 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast
	return


Coralport_MapScripts_QuestOldRodOnFrame6::
# 88 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe
	return


Coralport_MapScripts_QuestOldRodOnWarp3::
# 92 "data/maps/Coralport/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 93 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 36
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp3_2
	return

Coralport_MapScripts_QuestOldRodOnWarp3_1:
# 94 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return

Coralport_MapScripts_QuestOldRodOnWarp3_2:
# 93 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp3_1
	return


Coralport_MapScripts_QuestOldRodOnWarp4::
# 99 "data/maps/Coralport/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 100 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp4_2
	return

Coralport_MapScripts_QuestOldRodOnWarp4_1:
# 101 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return

Coralport_MapScripts_QuestOldRodOnWarp4_2:
# 100 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp4_1
	return


Coralport_Eventscript_DirectionSign::
# 106 "data/maps/Coralport/scripts.pory"
	lock
# 107 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_DirectionSign_Text_0
# 109 "data/maps/Coralport/scripts.pory"
	closemessage
# 110 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TownSign::
# 115 "data/maps/Coralport/scripts.pory"
	lock
# 116 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TownSign_Text_0
# 118 "data/maps/Coralport/scripts.pory"
	closemessage
# 119 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_PoliceStationSign::
# 124 "data/maps/Coralport/scripts.pory"
	lock
# 125 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_PoliceStationSign_Text_0
# 127 "data/maps/Coralport/scripts.pory"
	closemessage
# 128 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CandyShopSign::
# 133 "data/maps/Coralport/scripts.pory"
	lock
# 134 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CandyShopSign_Text_0
# 136 "data/maps/Coralport/scripts.pory"
	closemessage
# 137 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Policeman::
# 142 "data/maps/Coralport/scripts.pory"
	lock
# 143 "data/maps/Coralport/scripts.pory"
	faceplayer
# 144 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Policeman_Text_0
# 145 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Policeman_Text_1
# 147 "data/maps/Coralport/scripts.pory"
	closemessage
# 148 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldMan::
# 153 "data/maps/Coralport/scripts.pory"
	lock
# 154 "data/maps/Coralport/scripts.pory"
	faceplayer
# 155 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldMan_Text_0
# 156 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldMan_Text_1
# 161 "data/maps/Coralport/scripts.pory"
	closemessage
# 162 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 167 "data/maps/Coralport/scripts.pory"
	lock
# 168 "data/maps/Coralport/scripts.pory"
	faceplayer
# 169 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 170 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 180 "data/maps/Coralport/scripts.pory"
	closemessage
# 181 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 186 "data/maps/Coralport/scripts.pory"
	lock
# 187 "data/maps/Coralport/scripts.pory"
	faceplayer
# 188 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 189 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 192 "data/maps/Coralport/scripts.pory"
	closemessage
# 193 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 194 "data/maps/Coralport/scripts.pory"
	waitmovement
# 195 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 200 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_MACHAMP
# 201 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Vigoroth::
# 206 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_VIGOROTH
# 207 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnHarbor::
# 212 "data/maps/Coralport/scripts.pory"
	lock
# 213 "data/maps/Coralport/scripts.pory"
	faceplayer
# 214 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 215 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 217 "data/maps/Coralport/scripts.pory"
	closemessage
# 218 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 223 "data/maps/Coralport/scripts.pory"
	lock
# 224 "data/maps/Coralport/scripts.pory"
	faceplayer
# 225 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 226 "data/maps/Coralport/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 227 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_2
# 234 "data/maps/Coralport/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 235 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_5
# 242 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP
	goto_if_lt Coralport_Eventscript_SailorOnGuard_8
# 255 "data/maps/Coralport/scripts.pory"
	showmoneybox 0, 0
# 256 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_2, MSGBOX_YESNO
# 260 "data/maps/Coralport/scripts.pory"
	closemessage
# 261 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_13
# 286 "data/maps/Coralport/scripts.pory"
	hidemoneybox
Coralport_Eventscript_SailorOnGuard_7:
# 289 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_2:
# 228 "data/maps/Coralport/scripts.pory"
	showhelpwindow HELP_PROTAGONISTS
# 229 "data/maps/Coralport/scripts.pory"
	waitbuttonpress
# 230 "data/maps/Coralport/scripts.pory"
	hidehelpwindow
# 231 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_5:
# 236 "data/maps/Coralport/scripts.pory"
	showhelpwindow HELP_PROTAGONISTS
# 237 "data/maps/Coralport/scripts.pory"
	waitbuttonpress
# 238 "data/maps/Coralport/scripts.pory"
	hidehelpwindow
# 239 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_8:
# 244 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 248 "data/maps/Coralport/scripts.pory"
	closemessage
# 249 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, C1_START
	goto_if_eq Coralport_Eventscript_SailorOnGuard_11
	goto Coralport_Eventscript_SailorOnGuard_7

Coralport_Eventscript_SailorOnGuard_11:
# 250 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_NotYetBoardingTime
	goto Coralport_Eventscript_SailorOnGuard_7

Coralport_Eventscript_SailorOnGuard_13:
# 262 "data/maps/Coralport/scripts.pory"
	checkmoney 300
# 263 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_16
# 278 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 279 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_4
# 280 "data/maps/Coralport/scripts.pory"
	hidemoneybox
# 281 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_16:
# 264 "data/maps/Coralport/scripts.pory"
	playse SE_SHOP
# 265 "data/maps/Coralport/scripts.pory"
	removemoney 300
# 266 "data/maps/Coralport/scripts.pory"
	updatemoneybox
# 267 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 268 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_3
# 269 "data/maps/Coralport/scripts.pory"
	closemessage
# 270 "data/maps/Coralport/scripts.pory"
	hidemoneybox
# 271 "data/maps/Coralport/scripts.pory"
	applymove 10, walkinplaceup
# 272 "data/maps/Coralport/scripts.pory"
	delay 30
# 273 "data/maps/Coralport/scripts.pory"
	addtime 0, 3, 0
# 274 "data/maps/Coralport/scripts.pory"
	warp MAP_WINDWARD_PORT_HARBOR, 23, 20
# 275 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_SailorOnGuard_7


Coralport_Eventscript_ShipSchedule::
# 294 "data/maps/Coralport/scripts.pory"
	setspeaker 0
# 295 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ShipSchedule_Text_0
# 297 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_NotYetBoardingTime::
# 302 "data/maps/Coralport/scripts.pory"
	release
# 303 "data/maps/Coralport/scripts.pory"
	addtime 0, 2, 0
# 304 "data/maps/Coralport/scripts.pory"
	lock
# 305 "data/maps/Coralport/scripts.pory"
	hidefollower
# 306 "data/maps/Coralport/scripts.pory"
	hidefollowernpc
# 307 "data/maps/Coralport/scripts.pory"
	delay 20
# 308 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 309 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 310 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 311 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 312 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 313 "data/maps/Coralport/scripts.pory"
	waitmovement
# 314 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 315 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_0
# 316 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_1
# 317 "data/maps/Coralport/scripts.pory"
	waitmovement
# 318 "data/maps/Coralport/scripts.pory"
	delay 30
# 319 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_NotYetBoardingTime_Text_0
# 324 "data/maps/Coralport/scripts.pory"
	closemessage
# 325 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 326 "data/maps/Coralport/scripts.pory"
	delay 4
# 327 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 328 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 329 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 330 "data/maps/Coralport/scripts.pory"
	waitmovement
# 331 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 332 "data/maps/Coralport/scripts.pory"
	delay 1
# 333 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 334 "data/maps/Coralport/scripts.pory"
	delay 1
# 335 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 336 "data/maps/Coralport/scripts.pory"
	delay 1
# 337 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_TO_POLICE_STATION
# 338 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 339 "data/maps/Coralport/scripts.pory"
	updatefollowingmon
# 340 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TuberM::
# 345 "data/maps/Coralport/scripts.pory"
	lock
# 346 "data/maps/Coralport/scripts.pory"
	faceplayer
# 347 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 348 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 349 "data/maps/Coralport/scripts.pory"
	closemessage
# 350 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 355 "data/maps/Coralport/scripts.pory"
	lock
# 356 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 357 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 358 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 359 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 360 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 361 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 362 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 363 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 368 "data/maps/Coralport/scripts.pory"
	lock
# 369 "data/maps/Coralport/scripts.pory"
	faceplayer
# 370 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 371 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 374 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 375 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 379 "data/maps/Coralport/scripts.pory"
	closemessage
# 380 "data/maps/Coralport/scripts.pory"
	hidefollowernpc
# 381 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 382 "data/maps/Coralport/scripts.pory"
	waitmovement
# 383 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 388 "data/maps/Coralport/scripts.pory"
	lock
# 389 "data/maps/Coralport/scripts.pory"
	faceplayer
# 390 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 391 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 394 "data/maps/Coralport/scripts.pory"
	closemessage
# 395 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 400 "data/maps/Coralport/scripts.pory"
	lockall
# 401 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 402 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 403 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 404 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 409 "data/maps/Coralport/scripts.pory"
	lock
# 410 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 411 "data/maps/Coralport/scripts.pory"
	waitmovement
# 412 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 413 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 418 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 421 "data/maps/Coralport/scripts.pory"
	closemessage
# 422 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 414 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 427 "data/maps/Coralport/scripts.pory"
	lock
# 428 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 429 "data/maps/Coralport/scripts.pory"
	closemessage
# 430 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 431 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 432 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp::
# 437 "data/maps/Coralport/scripts.pory"
	delay 20
# 438 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0
# 439 "data/maps/Coralport/scripts.pory"
	waitmovement
# 440 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0
# 441 "data/maps/Coralport/scripts.pory"
	closemessage
# 442 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 443 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 444 "data/maps/Coralport/scripts.pory"
	waitmovement
# 445 "data/maps/Coralport/scripts.pory"
	delay 20
# 446 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1
# 448 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 449 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2
# 456 "data/maps/Coralport/scripts.pory"
	closemessage
# 457 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, faceleft
# 458 "data/maps/Coralport/scripts.pory"
	waitmovement
# 459 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3
# 460 "data/maps/Coralport/scripts.pory"
	delay 4
# 461 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 462 "data/maps/Coralport/scripts.pory"
	delay 30
# 463 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4
# 467 "data/maps/Coralport/scripts.pory"
	closemessage
# 468 "data/maps/Coralport/scripts.pory"
	delay 30
# 469 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5
# 470 "data/maps/Coralport/scripts.pory"
	delay 20
# 471 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6
# 473 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1
# 474 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7
# 475 "data/maps/Coralport/scripts.pory"
	closemessage
# 476 "data/maps/Coralport/scripts.pory"
	delay 30
# 477 "data/maps/Coralport/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 478 "data/maps/Coralport/scripts.pory"
	delay 30
# 479 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 480 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, emoteexclamation
# 481 "data/maps/Coralport/scripts.pory"
	delay 4
# 482 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 483 "data/maps/Coralport/scripts.pory"
	delay 4
# 484 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 485 "data/maps/Coralport/scripts.pory"
	delay 60
# 486 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, faceup
# 487 "data/maps/Coralport/scripts.pory"
	delay 4
# 488 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 489 "data/maps/Coralport/scripts.pory"
	waitmovement
# 490 "data/maps/Coralport/scripts.pory"
	delay 30
# 491 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_8
# 493 "data/maps/Coralport/scripts.pory"
	closemessage
# 494 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 495 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3
# 496 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 497 "data/maps/Coralport/scripts.pory"
	waitmovement S_CORAL
# 498 "data/maps/Coralport/scripts.pory"
	waitmovement
# 499 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4
# 500 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 501 "data/maps/Coralport/scripts.pory"
	delay 1
# 502 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 503 "data/maps/Coralport/scripts.pory"
	delay 1
# 504 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 505 "data/maps/Coralport/scripts.pory"
	delay 1
# 506 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 507 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, C1_BOARDING_SHIP
# 508 "data/maps/Coralport/scripts.pory"
	addminutes 10
# 509 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast::
# 514 "data/maps/Coralport/scripts.pory"
	lock
# 515 "data/maps/Coralport/scripts.pory"
	delay 20
# 516 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 517 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0
# 518 "data/maps/Coralport/scripts.pory"
	waitmovement
# 519 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 520 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 521 "data/maps/Coralport/scripts.pory"
	waitmovement
# 522 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1
# 523 "data/maps/Coralport/scripts.pory"
	delay 4
# 524 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 525 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2
# 526 "data/maps/Coralport/scripts.pory"
	delay 60
# 527 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3
# 528 "data/maps/Coralport/scripts.pory"
	waitmovement
# 529 "data/maps/Coralport/scripts.pory"
	special RemoveCameraObject
# 530 "data/maps/Coralport/scripts.pory"
	delay 30
# 531 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
# 532 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 533 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 534 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 535 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 13, 27
# 536 "data/maps/Coralport/scripts.pory"
	waitstate
	return


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER::
# 540 "data/maps/Coralport/scripts.pory"
	lock
# 541 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 542 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 543 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1:
# 550 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4:
# 555 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9:
# 561 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 562 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 563 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2:
# 544 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 546 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5:
# 551 "data/maps/Coralport/scripts.pory"
	faceplayer
# 552 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2
# 553 "data/maps/Coralport/scripts.pory"
	closemessage
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7:
# 547 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10:
# 556 "data/maps/Coralport/scripts.pory"
	faceplayer
# 557 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 568 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplaceright
# 569 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 570 "data/maps/Coralport/scripts.pory"
	closemessage
# 571 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 572 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 573 "data/maps/Coralport/scripts.pory"
	waitmovement
# 574 "data/maps/Coralport/scripts.pory"
	delay 30
# 575 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 576 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 577 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 578 "data/maps/Coralport/scripts.pory"
	waitmovement
# 579 "data/maps/Coralport/scripts.pory"
	delay 40
# 580 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 581 "data/maps/Coralport/scripts.pory"
	waitmovement
# 582 "data/maps/Coralport/scripts.pory"
	delay 20
# 583 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 584 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 585 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 586 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 587 "data/maps/Coralport/scripts.pory"
	waitmovement
# 588 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 589 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 590 "data/maps/Coralport/scripts.pory"
	closemessage
# 591 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkright
# 592 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 593 "data/maps/Coralport/scripts.pory"
	waitmovement
# 594 "data/maps/Coralport/scripts.pory"
	delay 20
# 595 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 596 "data/maps/Coralport/scripts.pory"
	playse SE_BALL_OPEN
# 597 "data/maps/Coralport/scripts.pory"
	addobject 26
# 598 "data/maps/Coralport/scripts.pory"
	applymovement 26, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 599 "data/maps/Coralport/scripts.pory"
	waitmovement
# 600 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 601 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 602 "data/maps/Coralport/scripts.pory"
	lock
# 603 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 604 "data/maps/Coralport/scripts.pory"
	release
# 605 "data/maps/Coralport/scripts.pory"
	delay 30
# 606 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 607 "data/maps/Coralport/scripts.pory"
	waitmovement
# 608 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 609 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
# 610 "data/maps/Coralport/scripts.pory"
	closemessage
# 611 "data/maps/Coralport/scripts.pory"
	applymovement 28, shakehorizontal
# 612 "data/maps/Coralport/scripts.pory"
	waitmovement
# 613 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_WEAK
# 614 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 615 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceright
# 616 "data/maps/Coralport/scripts.pory"
	waitmovement
# 617 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 618 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
# 622 "data/maps/Coralport/scripts.pory"
	closemessage
# 623 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 624 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 625 "data/maps/Coralport/scripts.pory"
	waitmovement
# 626 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 627 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 628 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 629 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 630 "data/maps/Coralport/scripts.pory"
	closemessage
# 631 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 632 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 633 "data/maps/Coralport/scripts.pory"
	warp MAP_CORALPORT_CAVE, 0
# 634 "data/maps/Coralport/scripts.pory"
	waitstate
	return


# 637 "data/maps/Coralport/scripts.pory"
jumpinplacedown:
# 638 "data/maps/Coralport/scripts.pory"
	jump_in_place_down
	step_end

Coralport_Eventscript_Growlithe::
# 642 "data/maps/Coralport/scripts.pory"
	lock
# 643 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Growlithe_2
# 661 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 662 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 663 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Growlithe_Text_0
# 665 "data/maps/Coralport/scripts.pory"
	closemessage
Coralport_Eventscript_Growlithe_1:
# 667 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Growlithe_2:
# 644 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 645 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 647 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Growlithe_5
# 653 "data/maps/Coralport/scripts.pory"
	closemessage
# 654 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 655 "data/maps/Coralport/scripts.pory"
	release
# 656 "data/maps/Coralport/scripts.pory"
	refreshquesticon
	end

Coralport_Eventscript_Growlithe_5:
# 648 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_Growlithe_Movement_0
# 649 "data/maps/Coralport/scripts.pory"
	waitmovement
# 650 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Growlithe_1


Coralport_Eventscript_Lapras::
# 672 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Lapras_2
Coralport_Eventscript_Lapras_1:
# 687 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_ge Coralport_Eventscript_Lapras_5
Coralport_Eventscript_Lapras_4:
	end

Coralport_Eventscript_Lapras_2:
# 673 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_0, MSGBOX_YESNO
# 674 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_7
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_5:
# 688 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_1, MSGBOX_YESNO
# 689 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_9
	goto Coralport_Eventscript_Lapras_4

Coralport_Eventscript_Lapras_7:
# 675 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 676 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 677 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkright
# 678 "data/maps/Coralport/scripts.pory"
	waitmovement
# 679 "data/maps/Coralport/scripts.pory"
	delay 4
# 680 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 681 "data/maps/Coralport/scripts.pory"
	waitmovement
# 682 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 683 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 41, 25
# 684 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_9:
# 690 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 691 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 692 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkdown
# 693 "data/maps/Coralport/scripts.pory"
	waitmovement
# 694 "data/maps/Coralport/scripts.pory"
	delay 4
# 695 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 696 "data/maps/Coralport/scripts.pory"
	waitmovement
# 697 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 698 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 36, 28
# 699 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_4


Coralport_Eventscript_ConfirmEnterCave::
# 706 "data/maps/Coralport/scripts.pory"
	lock
# 707 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ConfirmEnterCave_Text_0, MSGBOX_YESNO
# 709 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_ConfirmEnterCave_1
# 716 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_ConfirmEnterCave_1:
# 710 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 711 "data/maps/Coralport/scripts.pory"
	waitmovement
# 712 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CaveSign::
# 722 "data/maps/Coralport/scripts.pory"
	lock
# 723 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CaveSign_Text_0
# 725 "data/maps/Coralport/scripts.pory"
	closemessage
# 726 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe::
# 731 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0
# 732 "data/maps/Coralport/scripts.pory"
	waitmovement
# 733 "data/maps/Coralport/scripts.pory"
	delay 30
# 734 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplacedown
# 735 "data/maps/Coralport/scripts.pory"
	waitmovement
# 736 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 737 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0
# 740 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 741 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1
# 742 "data/maps/Coralport/scripts.pory"
	closemessage
# 743 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceleft
# 744 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 745 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 746 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2
# 747 "data/maps/Coralport/scripts.pory"
	closemessage
# 748 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 749 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1
# 750 "data/maps/Coralport/scripts.pory"
	waitmovement
# 751 "data/maps/Coralport/scripts.pory"
	applymovement 28, facedown
# 752 "data/maps/Coralport/scripts.pory"
	lock
# 753 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 754 "data/maps/Coralport/scripts.pory"
	release
# 755 "data/maps/Coralport/scripts.pory"
	applymovement 27, facedown
# 756 "data/maps/Coralport/scripts.pory"
	waitmovement
# 757 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 758 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3
# 762 "data/maps/Coralport/scripts.pory"
	closemessage
# 763 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 764 "data/maps/Coralport/scripts.pory"
	waitmovement
# 765 "data/maps/Coralport/scripts.pory"
	delay 30
# 766 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2
# 767 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3
# 768 "data/maps/Coralport/scripts.pory"
	waitmovement 27
# 769 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 770 "data/maps/Coralport/scripts.pory"
	waitmovement 28
# 771 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 772 "data/maps/Coralport/scripts.pory"
	removeobject 27
# 773 "data/maps/Coralport/scripts.pory"
	delay 1
# 774 "data/maps/Coralport/scripts.pory"
	removeobject 28
# 775 "data/maps/Coralport/scripts.pory"
	delay 30
# 776 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 777 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4
# 778 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5
# 779 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6
# 780 "data/maps/Coralport/scripts.pory"
	waitmovement LOCALID_PLAYER
# 781 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 782 "data/maps/Coralport/scripts.pory"
	delay 1
# 783 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 784 "data/maps/Coralport/scripts.pory"
	delay 1
# 785 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 786 "data/maps/Coralport/scripts.pory"
	delay 1
# 787 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
# 788 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 789 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 790 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 791 "data/maps/Coralport/scripts.pory"
	fadedefaultbgm
# 792 "data/maps/Coralport/scripts.pory"
	delay 30
# 793 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 794 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_WOOPER_PALDEA
# 795 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_CLODSIRE
# 796 "data/maps/Coralport/scripts.pory"
	special ShowMapNamePopup
# 797 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Maniac::
# 802 "data/maps/Coralport/scripts.pory"
	lock
# 803 "data/maps/Coralport/scripts.pory"
	faceplayer
# 804 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Maniac_Text_0
# 805 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Maniac_Text_1
# 810 "data/maps/Coralport/scripts.pory"
	doemote VAR_LAST_TALKED, E_SAD
# 811 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Magnemite::
# 816 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_MAGNEMITE
# 817 "data/maps/Coralport/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
# 818 "data/maps/Coralport/scripts.pory"
	delay 30
# 819 "data/maps/Coralport/scripts.pory"
	faceplayer
# 820 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Magnemite_Text_0
# 821 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CoupleF::
# 826 "data/maps/Coralport/scripts.pory"
	lock
# 827 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 828 "data/maps/Coralport/scripts.pory"
	stepinplace MIKU_CORAL, DIR_EAST
# 829 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_1
# 830 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 831 "data/maps/Coralport/scripts.pory"
	stepinplace EMI_CORAL, DIR_WEST
# 832 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_3
# 834 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 835 "data/maps/Coralport/scripts.pory"
	stepinplace MIKU_CORAL, DIR_EAST
# 836 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_4
# 837 "data/maps/Coralport/scripts.pory"
	doemote MIKU_CORAL, 0
# 838 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 839 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_5
# 840 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 841 "data/maps/Coralport/scripts.pory"
	stepinplace EMI_CORAL, DIR_WEST
# 842 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_6
# 843 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 844 "data/maps/Coralport/scripts.pory"
	doemote MIKU_CORAL, E_ANGRY
# 845 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_7
# 846 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 847 "data/maps/Coralport/scripts.pory"
	doemote EMI_CORAL, E_SWEAT
# 848 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_8
# 849 "data/maps/Coralport/scripts.pory"
	release
	end


# 315 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_0:
# 315 "data/maps/Coralport/scripts.pory"
	walk_right
# 315 "data/maps/Coralport/scripts.pory"
	walk_down
# 315 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 316 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_1:
# 316 "data/maps/Coralport/scripts.pory"
	walk_down
# 316 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 329 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_2:
# 329 "data/maps/Coralport/scripts.pory"
	walk_down
# 329 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 438 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0:
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
# 438 "data/maps/Coralport/scripts.pory"
	walk_down
	step_end

# 473 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1:
# 473 "data/maps/Coralport/scripts.pory"
	emote_pensive
	step_end

# 482 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2:
# 482 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 482 "data/maps/Coralport/scripts.pory"
	face_down
	step_end

# 495 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3:
# 495 "data/maps/Coralport/scripts.pory"
	walk_right
# 495 "data/maps/Coralport/scripts.pory"
	walk_right
	step_end

# 499 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4:
# 499 "data/maps/Coralport/scripts.pory"
	face_down
# 499 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 517 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0:
# 517 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
# 517 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
	step_end

# 522 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1:
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 522 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 525 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2:
# 525 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 525 "data/maps/Coralport/scripts.pory"
	delay_16
# 525 "data/maps/Coralport/scripts.pory"
	delay_16
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 525 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 527 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3:
# 527 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
# 527 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
	step_end

# 577 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 577 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 577 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 577 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 577 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 577 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
	step_end

# 580 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 580 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 580 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 580 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 580 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 580 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
	step_end

# 592 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 592 "data/maps/Coralport/scripts.pory"
	face_down
# 592 "data/maps/Coralport/scripts.pory"
	lock_facing_direction
# 592 "data/maps/Coralport/scripts.pory"
	walk_up
# 592 "data/maps/Coralport/scripts.pory"
	unlock_facing_direction
	step_end

# 598 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 598 "data/maps/Coralport/scripts.pory"
	set_invisible
# 598 "data/maps/Coralport/scripts.pory"
	exit_pokeball
# 598 "data/maps/Coralport/scripts.pory"
	set_visible
# 598 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 606 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 606 "data/maps/Coralport/scripts.pory"
	walk_left
# 606 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 628 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 628 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 648 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Growlithe_Movement_0:
# 648 "data/maps/Coralport/scripts.pory"
	walk_left
# 648 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 731 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0:
# 731 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 731 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 731 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 731 "data/maps/Coralport/scripts.pory"
	walk_slow_down
	step_end

# 749 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1:
# 749 "data/maps/Coralport/scripts.pory"
	emote_music
# 749 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
	step_end

# 766 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2:
# 766 "data/maps/Coralport/scripts.pory"
	walk_in_place_left
# 766 "data/maps/Coralport/scripts.pory"
	delay_16
# 766 "data/maps/Coralport/scripts.pory"
	delay_16
# 766 "data/maps/Coralport/scripts.pory"
	walk_up
# 766 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 767 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3:
# 767 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
# 767 "data/maps/Coralport/scripts.pory"
	delay_16
# 767 "data/maps/Coralport/scripts.pory"
	delay_16
# 767 "data/maps/Coralport/scripts.pory"
	walk_right
# 767 "data/maps/Coralport/scripts.pory"
	walk_up
# 767 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 777 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4:
# 777 "data/maps/Coralport/scripts.pory"
	walk_left
# 777 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 778 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5:
# 778 "data/maps/Coralport/scripts.pory"
	walk_right
# 778 "data/maps/Coralport/scripts.pory"
	face_down
# 778 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 779 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6:
# 779 "data/maps/Coralport/scripts.pory"
	face_down
# 779 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

Coralport_Eventscript_DirectionSign_Text_0:
# 107 "data/maps/Coralport/scripts.pory"
	.string "Route 3 {LEFT_ARROW}\n"
	.string "Route 2 {RIGHT_ARROW}$"

Coralport_Eventscript_TownSign_Text_0:
# 116 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Welcome to Coralport!\n"
	.string "{CLEAR_TO 30}“Home of the sea breeze.”$"

Coralport_Eventscript_PoliceStationSign_Text_0:
# 125 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport Police Station\n"
	.string "{CLEAR_TO 60}“For the people.”$"

Coralport_Eventscript_CandyShopSign_Text_0:
# 134 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}AmeAme Candy Shop\n"
	.string "{CLEAR_TO 24}“Welcome all the sweet lovers!”$"

Coralport_Eventscript_Policeman_Text_0:
# 144 "data/maps/Coralport/scripts.pory"
	.string "Takagi$"

Coralport_Eventscript_Policeman_Text_1:
# 145 "data/maps/Coralport/scripts.pory"
	.string "Welcome to Coralport!\p"
	.string "If you have any problems, please let us\n"
	.string "know.$"

Coralport_Eventscript_OldMan_Text_0:
# 155 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 156 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n around the world.\p Coralport has this special charm that\n made us want to spend the rest of\l our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 169 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 170 "data/maps/Coralport/scripts.pory"
	.string "This guy said to me one day,\n"
	.string "“Let's travel the world!”\p"
	.string "We were still so young and I agreed.\p"
	.string "Then we went to all kinds of\n"
	.string "beautiful places.\p"
	.string "It was only until last year that\n"
	.string "he proposed, on the beach here.\p"
	.string "That was quite a while ago now.\p"
	.string "I was also having so much fun\n"
	.string "being around him.$"

Coralport_Eventscript_SailorOnBreak_Text_0:
# 188 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 189 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me.\n"
	.string "I'm on my break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 214 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 215 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels on board\n"
	.string "before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 225 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 244 "data/maps/Coralport/scripts.pory"
	.string "We're extremely sorry but there's\n a problem with the shipment.\p The departure to Windward Port has\n been delayed until further notice.$"

Coralport_Eventscript_SailorOnGuard_Text_2:
# 256 "data/maps/Coralport/scripts.pory"
	.string "This ship is departing for Windward\n"
	.string "Port.\p"
	.string "The trip will estimatedly take {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket.\n"
	.string "Would you like to board the ship?$"

Coralport_Eventscript_SailorOnGuard_Text_3:
# 268 "data/maps/Coralport/scripts.pory"
	.string "This way, please.$"

Coralport_Eventscript_SailorOnGuard_Text_4:
# 279 "data/maps/Coralport/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

Coralport_Eventscript_ShipSchedule_Text_0:
# 295 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 30}Coralport -> Windward Port\n"
	.string "{CLEAR_TO 30}Boarding time: {COLOR 7}6AM - 5:59PM.$"

Coralport_Eventscript_NotYetBoardingTime_Text_0:
# 319 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 347 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 348 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 370 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 371 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation,\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 375 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type.\n"
	.string "How old are you?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 390 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 391 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\p"
	.string "We promised to go fishing together but\n"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 414 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 418 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 428 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0:
# 440 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1:
# 446 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Kirijo.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, Sanada?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2:
# 449 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}If you know who's behind the explosion,\n"
	.string "why didn't you say anything to the\l"
	.string "police?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}I'd prefer not to get them involved.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}What?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Besides, I doubt they'd be any help,\n"
	.string "even if they knew.\p"
	.string "Otherwise I wouldn't be here, asking you\n"
	.string "two to accompany me on this journey.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}But- why?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Corruption or something like that?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3:
# 459 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Exactly.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4:
# 463 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}The illegal experiments have already\n"
	.string "proceeded to the state of producing\l"
	.string "successful prototypes.\p"
	.string "Why do you think they haven't already\n"
	.string "been caught nor stopped?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5:
# 469 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_PENSIVE}... But Kurosawa-san has always been\n"
	.string "really kind and willingly helped us.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6:
# 471 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Not all cops are the same.\p"
	.string "I guess he also has a battle he's\n"
	.string "fighting on his own.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7:
# 474 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_PENSIVE}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_8:
# 491 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I suppose the ship is ready for\n"
	.string "boarding.\l"
	.string "Let's move out.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0:
# 542 "data/maps/Coralport/scripts.pory"
	.string "Ikumi$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1:
# 544 "data/maps/Coralport/scripts.pory"
	.string "{COLOR RED}Continuing this quest will fast forward\n"
	.string "the clock at least 4 hours.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2:
# 552 "data/maps/Coralport/scripts.pory"
	.string "You're back! Let's hop on my Lapras to\n"
	.string "go back to Coralport Cave entrance!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3:
# 557 "data/maps/Coralport/scripts.pory"
	.string "You need to stock up on healing items?\n"
	.string "Feel free to hop on my Lapras to go\l"
	.string "back to the main land.\p"
	.string "Please come back soon, though.\l"
	.string "My daughter is still in there.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 569 "data/maps/Coralport/scripts.pory"
	.string "How is it now, Growlithe?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 584 "data/maps/Coralport/scripts.pory"
	.string "You mean Misa is in that cave over\n"
	.string "there?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 589 "data/maps/Coralport/scripts.pory"
	.string "Alright!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 609 "data/maps/Coralport/scripts.pory"
	.string "Lapras can carry all of us. Let us\n"
	.string "proceed then!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 618 "data/maps/Coralport/scripts.pory"
	.string "What's wrong, Growlithe?\p"
	.string "Oh, right. You're scared of water, aren't\n"
	.string "you?\p"
	.string "Well... I don't have your Pokéball and\n"
	.string "returning to your owner to get it would\l"
	.string "be time-consuming...\p"
	.string "Can you wait for us here?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 627 "data/maps/Coralport/scripts.pory"
	.string "Thank you, you're such a good boy.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 629 "data/maps/Coralport/scripts.pory"
	.string "Let's go, my daughter is waiting!$"

Coralport_Eventscript_Growlithe_Text_0:
# 663 "data/maps/Coralport/scripts.pory"
	.string "Growlithe looks worried. It seems like it\n"
	.string "won't go back to its owner until you\l"
	.string "rescue Misa.\p"
	.string "What a good boy!$"

Coralport_Eventscript_Lapras_Text_0:
# 673 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go to Coralport Cave\n"
	.string "entrance?$"

Coralport_Eventscript_Lapras_Text_1:
# 688 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go back to the main\n"
	.string "land?$"

Coralport_Eventscript_ConfirmEnterCave_Text_0:
# 707 "data/maps/Coralport/scripts.pory"
	.string "{COLOR GREEN}Once you enter this cave, leaving it will\n"
	.string "fast forward the clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_CaveSign_Text_0:
# 723 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}Coralport Cave\n"
	.string "{CLEAR_TO 45}{COLOR GREEN}Time forwarding: {COLOR RED}4 hours{COLOR GREEN}.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0:
# 737 "data/maps/Coralport/scripts.pory"
	.string "Thank you so much for saving my family\n"
	.string "back there.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You're welcome, Ikumi-san.\n"
	.string "We're glad that Misa was found safely.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1:
# 741 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Indeed, indeed.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2:
# 746 "data/maps/Coralport/scripts.pory"
	.string "Thanks to you too, Growlithe! Without\n"
	.string "you, I wouldn't even know where she\l"
	.string "went to.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3:
# 758 "data/maps/Coralport/scripts.pory"
	.string "Now I have to return the Growlithe to\n"
	.string "the policeman.\p"
	.string "Please make sure to come by my house\n"
	.string "later. I want to give you all something.\p"
	.string "Misa and Wooper would also be really\n"
	.string "happy to see you.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}We will!$"

Coralport_Eventscript_Maniac_Text_0:
# 804 "data/maps/Coralport/scripts.pory"
	.string "Chuuei$"

Coralport_Eventscript_Maniac_Text_1:
# 805 "data/maps/Coralport/scripts.pory"
	.string "Whenever I'm here I'm reminded of a\n"
	.string "proposal scene of an old couple.\p"
	.string "I witnessed it, you know. It was so\n"
	.string "cute.\p"
	.string "Man... I want a love like that too...\p"
	.string "Boy or girl, I don't really mind, as long\n"
	.string "as they're breathing.\p"
	.string "Ah... I'm so lonely.$"

Coralport_Eventscript_Magnemite_Text_0:
# 820 "data/maps/Coralport/scripts.pory"
	.string "Magnemite seems to be worried about its\n"
	.string "trainer's love life.$"

Coralport_Eventscript_CoupleF_Text_0:
# 827 "data/maps/Coralport/scripts.pory"
	.string "Miku$"

Coralport_Eventscript_CoupleF_Text_1:
# 829 "data/maps/Coralport/scripts.pory"
	.string "How's the work going, sweetie?$"

Coralport_Eventscript_CoupleF_Text_2:
# 830 "data/maps/Coralport/scripts.pory"
	.string "Emi$"

Coralport_Eventscript_CoupleF_Text_3:
# 832 "data/maps/Coralport/scripts.pory"
	.string "The Riolus are still young so it's hard\n"
	.string "to teach them new moves.\p"
	.string "The owner is a kind old lady, though.$"

Coralport_Eventscript_CoupleF_Text_4:
# 836 "data/maps/Coralport/scripts.pory"
	.string "I'm glad it's going well, Emi.$"

Coralport_Eventscript_CoupleF_Text_5:
# 839 "data/maps/Coralport/scripts.pory"
	.string "Wait, you got bruises on your arms!$"

Coralport_Eventscript_CoupleF_Text_6:
# 842 "data/maps/Coralport/scripts.pory"
	.string "Oh, don't worry. They were just from the\n"
	.string "baby Riolus-$"

Coralport_Eventscript_CoupleF_Text_7:
# 845 "data/maps/Coralport/scripts.pory"
	.string "Shut up and let me treat them.$"

Coralport_Eventscript_CoupleF_Text_8:
# 848 "data/maps/Coralport/scripts.pory"
	.string "Y-yes, ma'am.$"
