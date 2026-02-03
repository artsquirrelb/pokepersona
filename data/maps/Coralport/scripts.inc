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
	compare VAR_CHAPTER_1_STATE, 3
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
	map_script_2 VAR_CHAPTER_1_STATE, 3, Coralport_MapScripts_OnFrame3
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
# 158 "data/maps/Coralport/scripts.pory"
	closemessage
# 159 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 164 "data/maps/Coralport/scripts.pory"
	lock
# 165 "data/maps/Coralport/scripts.pory"
	faceplayer
# 166 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 167 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 172 "data/maps/Coralport/scripts.pory"
	closemessage
# 173 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 178 "data/maps/Coralport/scripts.pory"
	lock
# 179 "data/maps/Coralport/scripts.pory"
	faceplayer
# 180 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 181 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 183 "data/maps/Coralport/scripts.pory"
	closemessage
# 184 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 185 "data/maps/Coralport/scripts.pory"
	waitmovement
# 186 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 191 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_MACHAMP
# 192 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Vigoroth::
# 197 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_VIGOROTH
# 198 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnHarbor::
# 203 "data/maps/Coralport/scripts.pory"
	lock
# 204 "data/maps/Coralport/scripts.pory"
	faceplayer
# 205 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 206 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 208 "data/maps/Coralport/scripts.pory"
	closemessage
# 209 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 214 "data/maps/Coralport/scripts.pory"
	lock
# 215 "data/maps/Coralport/scripts.pory"
	faceplayer
# 216 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 217 "data/maps/Coralport/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, MITSURUS_PROLOGUE
# 218 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_2
# 225 "data/maps/Coralport/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 226 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_5
# 233 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 4
	goto_if_lt Coralport_Eventscript_SailorOnGuard_8
# 244 "data/maps/Coralport/scripts.pory"
	showmoneybox 0, 0
# 245 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_2, MSGBOX_YESNO
# 248 "data/maps/Coralport/scripts.pory"
	closemessage
# 249 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_13
# 274 "data/maps/Coralport/scripts.pory"
	hidemoneybox
Coralport_Eventscript_SailorOnGuard_7:
# 277 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_2:
# 219 "data/maps/Coralport/scripts.pory"
	showhelpwindow HELP_PROTAGONISTS
# 220 "data/maps/Coralport/scripts.pory"
	waitbuttonpress
# 221 "data/maps/Coralport/scripts.pory"
	hidehelpwindow
# 222 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_5:
# 227 "data/maps/Coralport/scripts.pory"
	showhelpwindow HELP_PROTAGONISTS
# 228 "data/maps/Coralport/scripts.pory"
	waitbuttonpress
# 229 "data/maps/Coralport/scripts.pory"
	hidehelpwindow
# 230 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_8:
# 235 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 237 "data/maps/Coralport/scripts.pory"
	closemessage
# 238 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_11
	goto Coralport_Eventscript_SailorOnGuard_7

Coralport_Eventscript_SailorOnGuard_11:
# 239 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_NotYetBoardingTime
	goto Coralport_Eventscript_SailorOnGuard_7

Coralport_Eventscript_SailorOnGuard_13:
# 250 "data/maps/Coralport/scripts.pory"
	checkmoney 300
# 251 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_16
# 266 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 267 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_4
# 268 "data/maps/Coralport/scripts.pory"
	hidemoneybox
# 269 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_16:
# 252 "data/maps/Coralport/scripts.pory"
	playse SE_SHOP
# 253 "data/maps/Coralport/scripts.pory"
	removemoney 300
# 254 "data/maps/Coralport/scripts.pory"
	updatemoneybox
# 255 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 256 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_3
# 257 "data/maps/Coralport/scripts.pory"
	closemessage
# 258 "data/maps/Coralport/scripts.pory"
	hidemoneybox
# 259 "data/maps/Coralport/scripts.pory"
	applymove 10, walkinplaceup
# 260 "data/maps/Coralport/scripts.pory"
	delay 30
# 261 "data/maps/Coralport/scripts.pory"
	addtime 0, 3, 0
# 262 "data/maps/Coralport/scripts.pory"
	warp MAP_WINDWARD_PORT_HARBOR, 23, 20
# 263 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_SailorOnGuard_7


Coralport_Eventscript_ShipSchedule::
# 282 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ShipSchedule_Text_0
# 284 "data/maps/Coralport/scripts.pory"
	closemessage
# 285 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_NotYetBoardingTime::
# 290 "data/maps/Coralport/scripts.pory"
	addtime 0, 2, 0
# 291 "data/maps/Coralport/scripts.pory"
	release
# 292 "data/maps/Coralport/scripts.pory"
	hidefollower
# 293 "data/maps/Coralport/scripts.pory"
	hidefollowernpc
# 294 "data/maps/Coralport/scripts.pory"
	delay 20
# 295 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 296 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 297 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 298 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 299 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 300 "data/maps/Coralport/scripts.pory"
	waitmovement
# 301 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 302 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_0
# 303 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_1
# 304 "data/maps/Coralport/scripts.pory"
	waitmovement
# 305 "data/maps/Coralport/scripts.pory"
	delay 30
# 306 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_NotYetBoardingTime_Text_0
# 311 "data/maps/Coralport/scripts.pory"
	closemessage
# 312 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 313 "data/maps/Coralport/scripts.pory"
	delay 4
# 314 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 315 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 316 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 317 "data/maps/Coralport/scripts.pory"
	waitmovement
# 318 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 319 "data/maps/Coralport/scripts.pory"
	delay 1
# 320 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 321 "data/maps/Coralport/scripts.pory"
	delay 1
# 322 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 323 "data/maps/Coralport/scripts.pory"
	delay 1
# 324 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 1
# 325 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 326 "data/maps/Coralport/scripts.pory"
	updatefollowingmon
	end


Coralport_Eventscript_TuberM::
# 331 "data/maps/Coralport/scripts.pory"
	lock
# 332 "data/maps/Coralport/scripts.pory"
	faceplayer
# 333 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 334 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 335 "data/maps/Coralport/scripts.pory"
	closemessage
# 336 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 341 "data/maps/Coralport/scripts.pory"
	lock
# 342 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 343 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 344 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 345 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 346 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 347 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 348 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 349 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 354 "data/maps/Coralport/scripts.pory"
	lock
# 355 "data/maps/Coralport/scripts.pory"
	faceplayer
# 356 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 357 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 360 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 361 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 364 "data/maps/Coralport/scripts.pory"
	closemessage
# 365 "data/maps/Coralport/scripts.pory"
	hidefollowernpc
# 366 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 367 "data/maps/Coralport/scripts.pory"
	waitmovement
# 368 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 373 "data/maps/Coralport/scripts.pory"
	lock
# 374 "data/maps/Coralport/scripts.pory"
	faceplayer
# 375 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 376 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 379 "data/maps/Coralport/scripts.pory"
	closemessage
# 380 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 385 "data/maps/Coralport/scripts.pory"
	lockall
# 386 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 387 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 388 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 389 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 394 "data/maps/Coralport/scripts.pory"
	lock
# 395 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 396 "data/maps/Coralport/scripts.pory"
	waitmovement
# 397 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 398 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 403 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 406 "data/maps/Coralport/scripts.pory"
	closemessage
# 407 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 399 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 412 "data/maps/Coralport/scripts.pory"
	lock
# 413 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 414 "data/maps/Coralport/scripts.pory"
	closemessage
# 415 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 416 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 417 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp::
# 422 "data/maps/Coralport/scripts.pory"
	delay 20
# 423 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0
# 424 "data/maps/Coralport/scripts.pory"
	waitmovement
# 425 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0
# 426 "data/maps/Coralport/scripts.pory"
	closemessage
# 427 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 428 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 429 "data/maps/Coralport/scripts.pory"
	waitmovement
# 430 "data/maps/Coralport/scripts.pory"
	delay 20
# 431 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1
# 433 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 434 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2
# 441 "data/maps/Coralport/scripts.pory"
	closemessage
# 442 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, faceleft
# 443 "data/maps/Coralport/scripts.pory"
	waitmovement
# 444 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3
# 445 "data/maps/Coralport/scripts.pory"
	delay 4
# 446 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 447 "data/maps/Coralport/scripts.pory"
	delay 30
# 448 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4
# 452 "data/maps/Coralport/scripts.pory"
	closemessage
# 453 "data/maps/Coralport/scripts.pory"
	delay 30
# 454 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5
# 455 "data/maps/Coralport/scripts.pory"
	delay 20
# 456 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6
# 458 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1
# 459 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7
# 460 "data/maps/Coralport/scripts.pory"
	closemessage
# 461 "data/maps/Coralport/scripts.pory"
	delay 30
# 462 "data/maps/Coralport/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 463 "data/maps/Coralport/scripts.pory"
	delay 30
# 464 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 465 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, emoteexclamation
# 466 "data/maps/Coralport/scripts.pory"
	delay 4
# 467 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 468 "data/maps/Coralport/scripts.pory"
	delay 4
# 469 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 470 "data/maps/Coralport/scripts.pory"
	delay 60
# 471 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, faceup
# 472 "data/maps/Coralport/scripts.pory"
	delay 4
# 473 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 474 "data/maps/Coralport/scripts.pory"
	waitmovement
# 475 "data/maps/Coralport/scripts.pory"
	delay 30
# 476 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_8
# 478 "data/maps/Coralport/scripts.pory"
	closemessage
# 479 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 480 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3
# 481 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 482 "data/maps/Coralport/scripts.pory"
	waitmovement S_CORAL
# 483 "data/maps/Coralport/scripts.pory"
	waitmovement
# 484 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4
# 485 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 486 "data/maps/Coralport/scripts.pory"
	delay 1
# 487 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 488 "data/maps/Coralport/scripts.pory"
	delay 1
# 489 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 490 "data/maps/Coralport/scripts.pory"
	delay 1
# 491 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 492 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 4
# 493 "data/maps/Coralport/scripts.pory"
	addminutes 10
# 494 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast::
# 499 "data/maps/Coralport/scripts.pory"
	lock
# 500 "data/maps/Coralport/scripts.pory"
	delay 20
# 501 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 502 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0
# 503 "data/maps/Coralport/scripts.pory"
	waitmovement
# 504 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 505 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 506 "data/maps/Coralport/scripts.pory"
	waitmovement
# 507 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1
# 508 "data/maps/Coralport/scripts.pory"
	delay 4
# 509 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 510 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2
# 511 "data/maps/Coralport/scripts.pory"
	delay 60
# 512 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3
# 513 "data/maps/Coralport/scripts.pory"
	waitmovement
# 514 "data/maps/Coralport/scripts.pory"
	special RemoveCameraObject
# 515 "data/maps/Coralport/scripts.pory"
	delay 30
# 516 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
# 517 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 518 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 519 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 520 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 13, 27
# 521 "data/maps/Coralport/scripts.pory"
	waitstate
	return


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER::
# 525 "data/maps/Coralport/scripts.pory"
	lock
# 526 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 527 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 528 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1:
# 535 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4:
# 540 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9:
# 546 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 547 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 548 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2:
# 529 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 531 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5:
# 536 "data/maps/Coralport/scripts.pory"
	faceplayer
# 537 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2
# 538 "data/maps/Coralport/scripts.pory"
	closemessage
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7:
# 532 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10:
# 541 "data/maps/Coralport/scripts.pory"
	faceplayer
# 542 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 553 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplaceright
# 554 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 555 "data/maps/Coralport/scripts.pory"
	closemessage
# 556 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 557 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 558 "data/maps/Coralport/scripts.pory"
	waitmovement
# 559 "data/maps/Coralport/scripts.pory"
	delay 30
# 560 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 561 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 563 "data/maps/Coralport/scripts.pory"
	waitmovement
# 564 "data/maps/Coralport/scripts.pory"
	delay 40
# 565 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 566 "data/maps/Coralport/scripts.pory"
	waitmovement
# 567 "data/maps/Coralport/scripts.pory"
	delay 20
# 568 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 569 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 570 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 571 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 572 "data/maps/Coralport/scripts.pory"
	waitmovement
# 573 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 574 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 575 "data/maps/Coralport/scripts.pory"
	closemessage
# 576 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkright
# 577 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 578 "data/maps/Coralport/scripts.pory"
	waitmovement
# 579 "data/maps/Coralport/scripts.pory"
	delay 20
# 580 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 581 "data/maps/Coralport/scripts.pory"
	playse SE_BALL_OPEN
# 582 "data/maps/Coralport/scripts.pory"
	addobject 26
# 583 "data/maps/Coralport/scripts.pory"
	applymovement 26, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 584 "data/maps/Coralport/scripts.pory"
	waitmovement
# 585 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 586 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 587 "data/maps/Coralport/scripts.pory"
	lock
# 588 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 589 "data/maps/Coralport/scripts.pory"
	release
# 590 "data/maps/Coralport/scripts.pory"
	delay 30
# 591 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 592 "data/maps/Coralport/scripts.pory"
	waitmovement
# 593 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 594 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
# 595 "data/maps/Coralport/scripts.pory"
	closemessage
# 596 "data/maps/Coralport/scripts.pory"
	applymovement 28, shakehorizontal
# 597 "data/maps/Coralport/scripts.pory"
	waitmovement
# 598 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_WEAK
# 599 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 600 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceright
# 601 "data/maps/Coralport/scripts.pory"
	waitmovement
# 602 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 603 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
# 607 "data/maps/Coralport/scripts.pory"
	closemessage
# 608 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 609 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 610 "data/maps/Coralport/scripts.pory"
	waitmovement
# 611 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 612 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 613 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 614 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 615 "data/maps/Coralport/scripts.pory"
	closemessage
# 616 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 617 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 618 "data/maps/Coralport/scripts.pory"
	warp MAP_CORALPORT_CAVE, 0
# 619 "data/maps/Coralport/scripts.pory"
	waitstate
	return


# 622 "data/maps/Coralport/scripts.pory"
jumpinplacedown:
# 623 "data/maps/Coralport/scripts.pory"
	jump_in_place_down
	step_end

Coralport_Eventscript_Growlithe::
# 627 "data/maps/Coralport/scripts.pory"
	lock
# 628 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Growlithe_2
# 646 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 647 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 648 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Growlithe_Text_0
# 650 "data/maps/Coralport/scripts.pory"
	closemessage
Coralport_Eventscript_Growlithe_1:
# 652 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Growlithe_2:
# 629 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 630 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 632 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Growlithe_5
# 638 "data/maps/Coralport/scripts.pory"
	closemessage
# 639 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 640 "data/maps/Coralport/scripts.pory"
	release
# 641 "data/maps/Coralport/scripts.pory"
	refreshquesticon
	end

Coralport_Eventscript_Growlithe_5:
# 633 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_Growlithe_Movement_0
# 634 "data/maps/Coralport/scripts.pory"
	waitmovement
# 635 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Growlithe_1


Coralport_Eventscript_Lapras::
# 657 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Lapras_2
Coralport_Eventscript_Lapras_1:
# 672 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_ge Coralport_Eventscript_Lapras_5
Coralport_Eventscript_Lapras_4:
	end

Coralport_Eventscript_Lapras_2:
# 658 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_0, MSGBOX_YESNO
# 659 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_7
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_5:
# 673 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_1, MSGBOX_YESNO
# 674 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_9
	goto Coralport_Eventscript_Lapras_4

Coralport_Eventscript_Lapras_7:
# 660 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 661 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 662 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkright
# 663 "data/maps/Coralport/scripts.pory"
	waitmovement
# 664 "data/maps/Coralport/scripts.pory"
	delay 4
# 665 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 666 "data/maps/Coralport/scripts.pory"
	waitmovement
# 667 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 668 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 41, 25
# 669 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_9:
# 675 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 676 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 677 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkdown
# 678 "data/maps/Coralport/scripts.pory"
	waitmovement
# 679 "data/maps/Coralport/scripts.pory"
	delay 4
# 680 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 681 "data/maps/Coralport/scripts.pory"
	waitmovement
# 682 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 683 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 36, 28
# 684 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_4


Coralport_Eventscript_ConfirmEnterCave::
# 691 "data/maps/Coralport/scripts.pory"
	lock
# 692 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ConfirmEnterCave_Text_0, MSGBOX_YESNO
# 694 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_ConfirmEnterCave_1
# 701 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_ConfirmEnterCave_1:
# 695 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 696 "data/maps/Coralport/scripts.pory"
	waitmovement
# 697 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CaveSign::
# 707 "data/maps/Coralport/scripts.pory"
	lock
# 708 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CaveSign_Text_0
# 710 "data/maps/Coralport/scripts.pory"
	closemessage
# 711 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe::
# 716 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0
# 717 "data/maps/Coralport/scripts.pory"
	waitmovement
# 718 "data/maps/Coralport/scripts.pory"
	delay 30
# 719 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplacedown
# 720 "data/maps/Coralport/scripts.pory"
	waitmovement
# 721 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 722 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0
# 725 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 726 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1
# 727 "data/maps/Coralport/scripts.pory"
	closemessage
# 728 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceleft
# 729 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 730 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 731 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2
# 732 "data/maps/Coralport/scripts.pory"
	closemessage
# 733 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 734 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1
# 735 "data/maps/Coralport/scripts.pory"
	waitmovement
# 736 "data/maps/Coralport/scripts.pory"
	applymovement 28, facedown
# 737 "data/maps/Coralport/scripts.pory"
	lock
# 738 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 739 "data/maps/Coralport/scripts.pory"
	release
# 740 "data/maps/Coralport/scripts.pory"
	applymovement 27, facedown
# 741 "data/maps/Coralport/scripts.pory"
	waitmovement
# 742 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 743 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3
# 747 "data/maps/Coralport/scripts.pory"
	closemessage
# 748 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 749 "data/maps/Coralport/scripts.pory"
	waitmovement
# 750 "data/maps/Coralport/scripts.pory"
	delay 30
# 751 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2
# 752 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3
# 753 "data/maps/Coralport/scripts.pory"
	waitmovement 27
# 754 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 755 "data/maps/Coralport/scripts.pory"
	waitmovement 28
# 756 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 757 "data/maps/Coralport/scripts.pory"
	removeobject 27
# 758 "data/maps/Coralport/scripts.pory"
	delay 1
# 759 "data/maps/Coralport/scripts.pory"
	removeobject 28
# 760 "data/maps/Coralport/scripts.pory"
	delay 30
# 761 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 762 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4
# 763 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5
# 764 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6
# 765 "data/maps/Coralport/scripts.pory"
	waitmovement LOCALID_PLAYER
# 766 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 767 "data/maps/Coralport/scripts.pory"
	delay 1
# 768 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 769 "data/maps/Coralport/scripts.pory"
	delay 1
# 770 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 771 "data/maps/Coralport/scripts.pory"
	delay 1
# 772 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
# 773 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 774 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 775 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 776 "data/maps/Coralport/scripts.pory"
	fadedefaultbgm
# 777 "data/maps/Coralport/scripts.pory"
	delay 30
# 778 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 779 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_WOOPER_PALDEA
# 780 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_CLODSIRE
# 781 "data/maps/Coralport/scripts.pory"
	special ShowMapNamePopup
# 782 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Maniac::
# 787 "data/maps/Coralport/scripts.pory"
	lock
# 788 "data/maps/Coralport/scripts.pory"
	faceplayer
# 789 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Maniac_Text_0
# 790 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Maniac_Text_1
# 795 "data/maps/Coralport/scripts.pory"
	doemote VAR_LAST_TALKED, E_SAD
# 796 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Magnemite::
# 801 "data/maps/Coralport/scripts.pory"
	moncryscript SPECIES_MAGNEMITE
# 802 "data/maps/Coralport/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
# 803 "data/maps/Coralport/scripts.pory"
	delay 30
# 804 "data/maps/Coralport/scripts.pory"
	faceplayer
# 805 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Magnemite_Text_0
# 806 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CoupleF::
# 811 "data/maps/Coralport/scripts.pory"
	lock
# 812 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 813 "data/maps/Coralport/scripts.pory"
	stepinplace MIKU_CORAL, DIR_EAST
# 814 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_1
# 815 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 816 "data/maps/Coralport/scripts.pory"
	stepinplace EMI_CORAL, DIR_WEST
# 817 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_3
# 819 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 820 "data/maps/Coralport/scripts.pory"
	stepinplace MIKU_CORAL, DIR_EAST
# 821 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_4
# 822 "data/maps/Coralport/scripts.pory"
	doemote MIKU_CORAL, 0
# 823 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 824 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_5
# 825 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 826 "data/maps/Coralport/scripts.pory"
	stepinplace EMI_CORAL, DIR_WEST
# 827 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_6
# 828 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_0
# 829 "data/maps/Coralport/scripts.pory"
	doemote MIKU_CORAL, E_ANGRY
# 830 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_7
# 831 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_CoupleF_Text_2
# 832 "data/maps/Coralport/scripts.pory"
	doemote EMI_CORAL, E_SWEAT
# 833 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CoupleF_Text_8
# 834 "data/maps/Coralport/scripts.pory"
	release
	end


# 302 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_0:
# 302 "data/maps/Coralport/scripts.pory"
	walk_right
# 302 "data/maps/Coralport/scripts.pory"
	walk_down
# 302 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 303 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_1:
# 303 "data/maps/Coralport/scripts.pory"
	walk_down
# 303 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 316 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_2:
# 316 "data/maps/Coralport/scripts.pory"
	walk_down
# 316 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 423 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0:
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
# 423 "data/maps/Coralport/scripts.pory"
	walk_down
	step_end

# 458 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1:
# 458 "data/maps/Coralport/scripts.pory"
	emote_pensive
	step_end

# 467 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2:
# 467 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 467 "data/maps/Coralport/scripts.pory"
	face_down
	step_end

# 480 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3:
# 480 "data/maps/Coralport/scripts.pory"
	walk_right
# 480 "data/maps/Coralport/scripts.pory"
	walk_right
	step_end

# 484 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4:
# 484 "data/maps/Coralport/scripts.pory"
	face_down
# 484 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 502 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0:
# 502 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
# 502 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
	step_end

# 507 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1:
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 507 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 510 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2:
# 510 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 510 "data/maps/Coralport/scripts.pory"
	delay_16
# 510 "data/maps/Coralport/scripts.pory"
	delay_16
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 510 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 512 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3:
# 512 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
# 512 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
	step_end

# 562 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 562 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 562 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 562 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 562 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 562 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
	step_end

# 565 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 565 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 565 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 565 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 565 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 565 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
	step_end

# 577 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 577 "data/maps/Coralport/scripts.pory"
	face_down
# 577 "data/maps/Coralport/scripts.pory"
	lock_facing_direction
# 577 "data/maps/Coralport/scripts.pory"
	walk_up
# 577 "data/maps/Coralport/scripts.pory"
	unlock_facing_direction
	step_end

# 583 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 583 "data/maps/Coralport/scripts.pory"
	set_invisible
# 583 "data/maps/Coralport/scripts.pory"
	exit_pokeball
# 583 "data/maps/Coralport/scripts.pory"
	set_visible
# 583 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 591 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 591 "data/maps/Coralport/scripts.pory"
	walk_left
# 591 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 613 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 613 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 633 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Growlithe_Movement_0:
# 633 "data/maps/Coralport/scripts.pory"
	walk_left
# 633 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 716 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0:
# 716 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 716 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 716 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 716 "data/maps/Coralport/scripts.pory"
	walk_slow_down
	step_end

# 734 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1:
# 734 "data/maps/Coralport/scripts.pory"
	emote_music
# 734 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
	step_end

# 751 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2:
# 751 "data/maps/Coralport/scripts.pory"
	walk_in_place_left
# 751 "data/maps/Coralport/scripts.pory"
	delay_16
# 751 "data/maps/Coralport/scripts.pory"
	delay_16
# 751 "data/maps/Coralport/scripts.pory"
	walk_up
# 751 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 752 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3:
# 752 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
# 752 "data/maps/Coralport/scripts.pory"
	delay_16
# 752 "data/maps/Coralport/scripts.pory"
	delay_16
# 752 "data/maps/Coralport/scripts.pory"
	walk_right
# 752 "data/maps/Coralport/scripts.pory"
	walk_up
# 752 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 762 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4:
# 762 "data/maps/Coralport/scripts.pory"
	walk_left
# 762 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 763 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5:
# 763 "data/maps/Coralport/scripts.pory"
	walk_right
# 763 "data/maps/Coralport/scripts.pory"
	face_down
# 763 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 764 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6:
# 764 "data/maps/Coralport/scripts.pory"
	face_down
# 764 "data/maps/Coralport/scripts.pory"
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
	.string "Welcome to Coralport!\n"
	.string "If you have any problems, please let us\l"
	.string "know.\p"
	.string "We'd be happy to help.$"

Coralport_Eventscript_OldMan_Text_0:
# 155 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 156 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n"
	.string "around the world.\p"
	.string "Coralport has this special charm to it\n"
	.string "that made us want to spend the rest of\l"
	.string "our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 166 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 167 "data/maps/Coralport/scripts.pory"
	.string "This guy said to me one day, “Let's\n"
	.string "travel the world!”\p"
	.string "We were still so young and I agreed.\n"
	.string "Then he brought us to all kinds of\l"
	.string "beautiful places.\p"
	.string "It was only until last year that he\n"
	.string "proposed, just on the beach over there.\p"
	.string "That was quite awhile ago now that I\n"
	.string "think about it.\p"
	.string "Although it also kind of slipped my mind,\n"
	.string "since I was having so much fun being\l"
	.string "around him.$"

Coralport_Eventscript_SailorOnBreak_Text_0:
# 180 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 181 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me. I'm on my break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 205 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 206 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels onto the\n"
	.string "board before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 216 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 235 "data/maps/Coralport/scripts.pory"
	.string "We're extremely sorry but there's a\n"
	.string "problem with the shipment.\p"
	.string "The departure to Windward Port has\n"
	.string "been delayed until further notice.$"

Coralport_Eventscript_SailorOnGuard_Text_2:
# 245 "data/maps/Coralport/scripts.pory"
	.string "This ship is departing for Windward\n"
	.string "Port.\p"
	.string "The trip will estimatedly take {COLOR RED}3 hours{COLOR 2}.\p"
	.string "It costs {COLOR GREEN}¥100 {COLOR 2}per ticket. Would you like\n"
	.string "to board the ship?$"

Coralport_Eventscript_SailorOnGuard_Text_3:
# 256 "data/maps/Coralport/scripts.pory"
	.string "This way, please.$"

Coralport_Eventscript_SailorOnGuard_Text_4:
# 267 "data/maps/Coralport/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

Coralport_Eventscript_ShipSchedule_Text_0:
# 282 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport -> Windward Port\n"
	.string "{CLEAR_TO 30}Boarding time: 6AM - 5:59PM.$"

Coralport_Eventscript_NotYetBoardingTime_Text_0:
# 306 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 333 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 334 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 356 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 357 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation,\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 361 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 375 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 376 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 399 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 403 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 413 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0:
# 425 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1:
# 431 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Kirijo.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}Yes, Sanada-kun?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2:
# 434 "data/maps/Coralport/scripts.pory"
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
# 444 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}Exactly.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4:
# 448 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}The illegal experiments have already\n"
	.string "proceeded to the state of producing\l"
	.string "successful prototypes.\p"
	.string "Why do you think they haven't already\n"
	.string "been caught nor stopped?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5:
# 454 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_PENSIVE}... But Kurosawa-san has always been\n"
	.string "really kind and willingly helped us.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6:
# 456 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Not all cops are the same.\p"
	.string "I guess he also has a battle he's\n"
	.string "fighting on his own.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7:
# 459 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_PENSIVE}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_8:
# 476 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}I suppose the ship is ready for\n"
	.string "boarding.\l"
	.string "Let's move out.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0:
# 527 "data/maps/Coralport/scripts.pory"
	.string "Ikumi$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1:
# 529 "data/maps/Coralport/scripts.pory"
	.string "{COLOR RED}Continuing this quest will fast forward\n"
	.string "the clock at least 4 hours.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2:
# 537 "data/maps/Coralport/scripts.pory"
	.string "You're back! Let's hop on my Lapras to\n"
	.string "go back to Coralport Cave entrance!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3:
# 542 "data/maps/Coralport/scripts.pory"
	.string "You need to stock up on healing items?\n"
	.string "Feel free to hop on my Lapras to go\l"
	.string "back to the main land.\p"
	.string "Please come back soon, though.\l"
	.string "My daughter is still in there.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 554 "data/maps/Coralport/scripts.pory"
	.string "How is it now, Growlithe?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 569 "data/maps/Coralport/scripts.pory"
	.string "You mean Misa is in that cave over\n"
	.string "there?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 574 "data/maps/Coralport/scripts.pory"
	.string "Alright!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 594 "data/maps/Coralport/scripts.pory"
	.string "Lapras can carry all of us. Let us\n"
	.string "proceed then!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 603 "data/maps/Coralport/scripts.pory"
	.string "What's wrong, Growlithe?\p"
	.string "Oh, right. You're scared of water, aren't\n"
	.string "you?\p"
	.string "Well... I don't have your Pokéball and\n"
	.string "returning to your owner to get it would\l"
	.string "be time-consuming...\p"
	.string "Can you wait for us here?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 612 "data/maps/Coralport/scripts.pory"
	.string "Thank you, you're such a good boy.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 614 "data/maps/Coralport/scripts.pory"
	.string "Let's go, my daughter is waiting!$"

Coralport_Eventscript_Growlithe_Text_0:
# 648 "data/maps/Coralport/scripts.pory"
	.string "Growlithe looks worried. It seems like it\n"
	.string "won't go back to its owner until you\l"
	.string "rescue Misa.\p"
	.string "What a good boy!$"

Coralport_Eventscript_Lapras_Text_0:
# 658 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go to Coralport Cave\n"
	.string "entrance?$"

Coralport_Eventscript_Lapras_Text_1:
# 673 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go back to the main\n"
	.string "land?$"

Coralport_Eventscript_ConfirmEnterCave_Text_0:
# 692 "data/maps/Coralport/scripts.pory"
	.string "{COLOR GREEN}Once you enter this cave, leaving it will\n"
	.string "fast forward the clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_CaveSign_Text_0:
# 708 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}Coralport Cave\n"
	.string "{CLEAR_TO 45}{COLOR GREEN}Time forwarding: {COLOR RED}4 hours{COLOR GREEN}.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0:
# 722 "data/maps/Coralport/scripts.pory"
	.string "Thank you so much for saving my family\n"
	.string "back there.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}You're welcome, Ikumi-san.\n"
	.string "We're glad that Misa was found safely.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1:
# 726 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Indeed, indeed.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2:
# 731 "data/maps/Coralport/scripts.pory"
	.string "Thanks to you too, Growlithe! Without\n"
	.string "you, I wouldn't even know where she\l"
	.string "went to.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3:
# 743 "data/maps/Coralport/scripts.pory"
	.string "Now I have to return the Growlithe to\n"
	.string "the policeman.\p"
	.string "Please make sure to come by my house\n"
	.string "later. I want to give you all something.\p"
	.string "Misa and Wooper would also be really\n"
	.string "happy to see you.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE}We will!$"

Coralport_Eventscript_Maniac_Text_0:
# 789 "data/maps/Coralport/scripts.pory"
	.string "Chuuei$"

Coralport_Eventscript_Maniac_Text_1:
# 790 "data/maps/Coralport/scripts.pory"
	.string "Whenever I'm here I'm reminded of a\n"
	.string "proposal scene of an old couple.\p"
	.string "I witnessed it, you know. It was so\n"
	.string "cute.\p"
	.string "Man... I want a love like that too...\p"
	.string "Boy or girl, I don't really mind, as long\n"
	.string "as they're breathing.\p"
	.string "Ah... I'm so lonely.$"

Coralport_Eventscript_Magnemite_Text_0:
# 805 "data/maps/Coralport/scripts.pory"
	.string "Magnemite seems to be worried about its\n"
	.string "trainer's love life.$"

Coralport_Eventscript_CoupleF_Text_0:
# 812 "data/maps/Coralport/scripts.pory"
	.string "Miku$"

Coralport_Eventscript_CoupleF_Text_1:
# 814 "data/maps/Coralport/scripts.pory"
	.string "How's the work going, sweetie?$"

Coralport_Eventscript_CoupleF_Text_2:
# 815 "data/maps/Coralport/scripts.pory"
	.string "Emi$"

Coralport_Eventscript_CoupleF_Text_3:
# 817 "data/maps/Coralport/scripts.pory"
	.string "The Riolus are still young so it's hard\n"
	.string "to teach them new moves.\p"
	.string "The owner is a kind old lady, though.$"

Coralport_Eventscript_CoupleF_Text_4:
# 821 "data/maps/Coralport/scripts.pory"
	.string "I'm glad it's going well, Emi.$"

Coralport_Eventscript_CoupleF_Text_5:
# 824 "data/maps/Coralport/scripts.pory"
	.string "Wait, you got bruises on your arms!$"

Coralport_Eventscript_CoupleF_Text_6:
# 827 "data/maps/Coralport/scripts.pory"
	.string "Oh, don't worry. They were just from the\n"
	.string "baby Riolus-$"

Coralport_Eventscript_CoupleF_Text_7:
# 830 "data/maps/Coralport/scripts.pory"
	.string "Shut up and let me treat them.$"

Coralport_Eventscript_CoupleF_Text_8:
# 833 "data/maps/Coralport/scripts.pory"
	.string "Y-yes, ma'am.$"
