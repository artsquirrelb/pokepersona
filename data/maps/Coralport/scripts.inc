Coralport_MapScripts::
# 2 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 80 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Coralport_MapScripts_UpdatingShipState
# 70 "data/maps/Coralport/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Coralport_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 76 "data/maps/Coralport/scripts.pory"
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
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 3
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 34 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 43 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 53 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6
	goto_if_eq Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Coralport/scripts.pory"
	manuallysettime WEEKDAY_MON, 8, 0, 0
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/Coralport/scripts.pory"
	setobjectxyperm M_CORAL, 13, 10
# 13 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype M_CORAL, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/Coralport/scripts.pory"
	setobjectxyperm S_CORAL, 11, 11
# 16 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype S_CORAL, MOVEMENT_TYPE_FACE_LEFT
# 18 "data/maps/Coralport/scripts.pory"
	setobjectxyperm A_CORAL, 13, 13
# 19 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype A_CORAL, MOVEMENT_TYPE_FACE_DOWN
# 20 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 21 "data/maps/Coralport/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 25 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 15, 29
# 26 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 16, 29
# 27 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_RIGHT
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 31 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 32 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 35 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 36 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 37 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 36, 27
# 38 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 36, 29
# 39 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 26, 36, 28
# 40 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 41 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_LEFT
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 44 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 45 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 46 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 36, 27
# 47 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 42, 26
# 48 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 26, 41, 26
# 49 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 50 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_UP
# 51 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	goto Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Coralport_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 54 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_3
# 55 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 56 "data/maps/Coralport/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 57 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 59 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 28, 20, 11
# 60 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 62 "data/maps/Coralport/scripts.pory"
	setobjectxyperm 27, 21, 11
# 63 "data/maps/Coralport/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/Coralport/scripts.pory"
	setobjectxyperm S_CORAL, 22, 13
# 66 "data/maps/Coralport/scripts.pory"
	setobjectxyperm M_CORAL, 21, 13
# 67 "data/maps/Coralport/scripts.pory"
	setobjectxyperm A_CORAL, 20, 13
	return

Coralport_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 72 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 3, Coralport_MapScripts_OnFrame3
# 73 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 1, Coralport_MapScripts_QuestOldRodOnFrame1
# 74 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6, Coralport_MapScripts_QuestOldRodOnFrame6
	.2byte 0

Coralport_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 77 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3, Coralport_MapScripts_QuestOldRodOnWarp3
# 78 "data/maps/Coralport/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4, Coralport_MapScripts_QuestOldRodOnWarp4
	.2byte 0


Coralport_MapScripts_UpdatingShipState::
# 84 "data/maps/Coralport/scripts.pory"
	gettime
# 85 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_lt Coralport_MapScripts_UpdatingShipState_1
# 85 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_ge Coralport_MapScripts_UpdatingShipState_1
# 89 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_5
	return

Coralport_MapScripts_UpdatingShipState_1:
# 86 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_5
	return


Coralport_MapScripts_OnFrame3::
# 94 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp
	return


Coralport_MapScripts_QuestOldRodOnFrame1::
# 98 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast
	return


Coralport_MapScripts_QuestOldRodOnFrame6::
# 102 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe
	return


Coralport_MapScripts_QuestOldRodOnWarp3::
# 106 "data/maps/Coralport/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 107 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 36
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp3_2
	return

Coralport_MapScripts_QuestOldRodOnWarp3_1:
# 108 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return

Coralport_MapScripts_QuestOldRodOnWarp3_2:
# 107 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp3_1
	return


Coralport_MapScripts_QuestOldRodOnWarp4::
# 113 "data/maps/Coralport/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 114 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 41
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp4_2
	return

Coralport_MapScripts_QuestOldRodOnWarp4_1:
# 115 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return

Coralport_MapScripts_QuestOldRodOnWarp4_2:
# 114 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8001, 26
	goto_if_eq Coralport_MapScripts_QuestOldRodOnWarp4_1
	return


Coralport_Eventscript_DirectionSign::
# 120 "data/maps/Coralport/scripts.pory"
	lock
# 121 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_DirectionSign_Text_0
# 123 "data/maps/Coralport/scripts.pory"
	closemessage
# 124 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_TownSign::
# 129 "data/maps/Coralport/scripts.pory"
	lock
# 130 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TownSign_Text_0
# 132 "data/maps/Coralport/scripts.pory"
	closemessage
# 133 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_PoliceStationSign::
# 138 "data/maps/Coralport/scripts.pory"
	lock
# 139 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_PoliceStationSign_Text_0
# 141 "data/maps/Coralport/scripts.pory"
	closemessage
# 142 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CandyShopSign::
# 147 "data/maps/Coralport/scripts.pory"
	lock
# 148 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CandyShopSign_Text_0
# 150 "data/maps/Coralport/scripts.pory"
	closemessage
# 151 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Policeman::
# 156 "data/maps/Coralport/scripts.pory"
	lock
# 157 "data/maps/Coralport/scripts.pory"
	faceplayer
# 158 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Policeman_Text_0
# 159 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Policeman_Text_1
# 161 "data/maps/Coralport/scripts.pory"
	closemessage
# 162 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldMan::
# 167 "data/maps/Coralport/scripts.pory"
	lock
# 168 "data/maps/Coralport/scripts.pory"
	faceplayer
# 169 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldMan_Text_0
# 170 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldMan_Text_1
# 172 "data/maps/Coralport/scripts.pory"
	closemessage
# 173 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_OldWoman::
# 178 "data/maps/Coralport/scripts.pory"
	lock
# 179 "data/maps/Coralport/scripts.pory"
	faceplayer
# 180 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_OldWoman_Text_0
# 181 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_OldWoman_Text_1
# 186 "data/maps/Coralport/scripts.pory"
	closemessage
# 187 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnBreak::
# 192 "data/maps/Coralport/scripts.pory"
	lock
# 193 "data/maps/Coralport/scripts.pory"
	faceplayer
# 194 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnBreak_Text_0
# 195 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnBreak_Text_1
# 197 "data/maps/Coralport/scripts.pory"
	closemessage
# 198 "data/maps/Coralport/scripts.pory"
	applymovement VAR_LAST_TALKED, facedown
# 199 "data/maps/Coralport/scripts.pory"
	waitmovement
# 200 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Machamp::
# 205 "data/maps/Coralport/scripts.pory"
	lockall
# 206 "data/maps/Coralport/scripts.pory"
	faceplayer
# 207 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_MACHAMP, 18, 5
# 208 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 209 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 210 "data/maps/Coralport/scripts.pory"
	delay 30
# 211 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_MACHAMP
# 212 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 213 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_Vigoroth::
# 218 "data/maps/Coralport/scripts.pory"
	lockall
# 219 "data/maps/Coralport/scripts.pory"
	faceplayer
# 220 "data/maps/Coralport/scripts.pory"
	showmonpic SPECIES_VIGOROTH, 18, 5
# 221 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 222 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 223 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_VIGOROTH
# 224 "data/maps/Coralport/scripts.pory"
	delay 30
# 225 "data/maps/Coralport/scripts.pory"
	hidemonpic
# 226 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_SailorOnHarbor::
# 231 "data/maps/Coralport/scripts.pory"
	lock
# 232 "data/maps/Coralport/scripts.pory"
	faceplayer
# 233 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnHarbor_Text_0
# 234 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnHarbor_Text_1
# 236 "data/maps/Coralport/scripts.pory"
	closemessage
# 237 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_SailorOnGuard::
# 242 "data/maps/Coralport/scripts.pory"
	lock
# 243 "data/maps/Coralport/scripts.pory"
	faceplayer
# 244 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 245 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 4
	goto_if_lt Coralport_Eventscript_SailorOnGuard_2
# 256 "data/maps/Coralport/scripts.pory"
	gettime
# 257 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 7
	goto_if_ge Coralport_Eventscript_SailorOnGuard_9
Coralport_Eventscript_SailorOnGuard_8:
# 266 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_ShipHasDeparted
Coralport_Eventscript_SailorOnGuard_1:
# 269 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_2:
# 247 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_1
# 249 "data/maps/Coralport/scripts.pory"
	closemessage
# 250 "data/maps/Coralport/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 0
	goto_if_eq Coralport_Eventscript_SailorOnGuard_5
	goto Coralport_Eventscript_SailorOnGuard_1

Coralport_Eventscript_SailorOnGuard_5:
# 251 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_NotYetBoardingTime
	goto Coralport_Eventscript_SailorOnGuard_1

Coralport_Eventscript_SailorOnGuard_7:
# 258 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_2, MSGBOX_YESNO
# 260 "data/maps/Coralport/scripts.pory"
	closemessage
# 261 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_12
	goto Coralport_Eventscript_SailorOnGuard_1

Coralport_Eventscript_SailorOnGuard_9:
# 257 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le Coralport_Eventscript_SailorOnGuard_7
	goto Coralport_Eventscript_SailorOnGuard_8

Coralport_Eventscript_SailorOnGuard_12:
# 262 "data/maps/Coralport/scripts.pory"
	warp MAP_WINDWARD_PORT, 39, 20
	goto Coralport_Eventscript_SailorOnGuard_1


Coralport_Eventscript_ShipHasDeparted::
# 274 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ShipHasDeparted_Text_0
# 276 "data/maps/Coralport/scripts.pory"
	closemessage
# 277 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_NotYetBoardingTime::
# 281 "data/maps/Coralport/scripts.pory"
	delay 20
# 282 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 283 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 284 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 285 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 286 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 287 "data/maps/Coralport/scripts.pory"
	waitmovement
# 288 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 289 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_0
# 290 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_1
# 291 "data/maps/Coralport/scripts.pory"
	waitmovement
# 292 "data/maps/Coralport/scripts.pory"
	delay 30
# 293 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_NotYetBoardingTime_Text_0
# 298 "data/maps/Coralport/scripts.pory"
	closemessage
# 299 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 300 "data/maps/Coralport/scripts.pory"
	delay 4
# 301 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 302 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 303 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 304 "data/maps/Coralport/scripts.pory"
	waitmovement
# 305 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 306 "data/maps/Coralport/scripts.pory"
	delay 1
# 307 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 308 "data/maps/Coralport/scripts.pory"
	delay 1
# 309 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 310 "data/maps/Coralport/scripts.pory"
	delay 1
# 311 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 1
	return


Coralport_Eventscript_TuberM::
# 315 "data/maps/Coralport/scripts.pory"
	lock
# 316 "data/maps/Coralport/scripts.pory"
	faceplayer
# 317 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 318 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 319 "data/maps/Coralport/scripts.pory"
	closemessage
# 320 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 325 "data/maps/Coralport/scripts.pory"
	lock
# 326 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 327 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 328 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 329 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 330 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 331 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 332 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 333 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 338 "data/maps/Coralport/scripts.pory"
	lock
# 339 "data/maps/Coralport/scripts.pory"
	faceplayer
# 340 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 341 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 344 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 345 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 348 "data/maps/Coralport/scripts.pory"
	closemessage
# 349 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 350 "data/maps/Coralport/scripts.pory"
	waitmovement
# 351 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 356 "data/maps/Coralport/scripts.pory"
	lock
# 357 "data/maps/Coralport/scripts.pory"
	faceplayer
# 358 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 359 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 362 "data/maps/Coralport/scripts.pory"
	closemessage
# 363 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 368 "data/maps/Coralport/scripts.pory"
	lockall
# 369 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 370 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 371 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 372 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 377 "data/maps/Coralport/scripts.pory"
	lock
# 378 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 379 "data/maps/Coralport/scripts.pory"
	waitmovement
# 380 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 381 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 386 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 389 "data/maps/Coralport/scripts.pory"
	closemessage
# 390 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 382 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 395 "data/maps/Coralport/scripts.pory"
	lock
# 396 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 397 "data/maps/Coralport/scripts.pory"
	closemessage
# 398 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 399 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 400 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp::
# 405 "data/maps/Coralport/scripts.pory"
	delay 20
# 406 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0
# 407 "data/maps/Coralport/scripts.pory"
	waitmovement
# 408 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0
# 409 "data/maps/Coralport/scripts.pory"
	closemessage
# 410 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 411 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 412 "data/maps/Coralport/scripts.pory"
	waitmovement
# 413 "data/maps/Coralport/scripts.pory"
	delay 20
# 414 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1
# 416 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 417 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2
# 424 "data/maps/Coralport/scripts.pory"
	closemessage
# 425 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 426 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1
# 427 "data/maps/Coralport/scripts.pory"
	waitmovement
# 428 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3
# 430 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceleft
# 431 "data/maps/Coralport/scripts.pory"
	delay 4
# 432 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 433 "data/maps/Coralport/scripts.pory"
	delay 30
# 434 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4
# 438 "data/maps/Coralport/scripts.pory"
	closemessage
# 439 "data/maps/Coralport/scripts.pory"
	delay 30
# 440 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5
# 441 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 442 "data/maps/Coralport/scripts.pory"
	delay 20
# 443 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6
# 446 "data/maps/Coralport/scripts.pory"
	closemessage
# 447 "data/maps/Coralport/scripts.pory"
	delay 30
# 448 "data/maps/Coralport/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 449 "data/maps/Coralport/scripts.pory"
	delay 30
# 450 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 451 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, emoteexclamation
# 452 "data/maps/Coralport/scripts.pory"
	delay 4
# 453 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 454 "data/maps/Coralport/scripts.pory"
	delay 4
# 455 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 456 "data/maps/Coralport/scripts.pory"
	delay 60
# 457 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, faceup
# 458 "data/maps/Coralport/scripts.pory"
	delay 4
# 459 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 460 "data/maps/Coralport/scripts.pory"
	waitmovement
# 461 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7
# 463 "data/maps/Coralport/scripts.pory"
	closemessage
# 464 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 465 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3
# 466 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 467 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4
# 468 "data/maps/Coralport/scripts.pory"
	waitmovement S_CORAL
# 469 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 470 "data/maps/Coralport/scripts.pory"
	delay 1
# 471 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 472 "data/maps/Coralport/scripts.pory"
	delay 1
# 473 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 474 "data/maps/Coralport/scripts.pory"
	delay 1
# 475 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 476 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 4
# 477 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast::
# 482 "data/maps/Coralport/scripts.pory"
	lock
# 483 "data/maps/Coralport/scripts.pory"
	delay 20
# 484 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 485 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0
# 486 "data/maps/Coralport/scripts.pory"
	waitmovement
# 487 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 488 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 489 "data/maps/Coralport/scripts.pory"
	waitmovement
# 490 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1
# 491 "data/maps/Coralport/scripts.pory"
	delay 4
# 492 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 493 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2
# 494 "data/maps/Coralport/scripts.pory"
	delay 60
# 495 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3
# 496 "data/maps/Coralport/scripts.pory"
	waitmovement
# 497 "data/maps/Coralport/scripts.pory"
	special RemoveCameraObject
# 498 "data/maps/Coralport/scripts.pory"
	delay 30
# 499 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
# 500 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 501 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 502 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 503 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 13, 27
# 504 "data/maps/Coralport/scripts.pory"
	waitstate
	return


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER::
# 508 "data/maps/Coralport/scripts.pory"
	lock
# 509 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 510 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 511 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1:
# 518 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4:
# 523 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9:
# 529 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 530 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 531 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2:
# 512 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 514 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5:
# 519 "data/maps/Coralport/scripts.pory"
	faceplayer
# 520 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2
# 521 "data/maps/Coralport/scripts.pory"
	closemessage
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7:
# 515 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10:
# 524 "data/maps/Coralport/scripts.pory"
	faceplayer
# 525 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 536 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplaceright
# 537 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 538 "data/maps/Coralport/scripts.pory"
	closemessage
# 539 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 540 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 541 "data/maps/Coralport/scripts.pory"
	waitmovement
# 542 "data/maps/Coralport/scripts.pory"
	delay 30
# 543 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 544 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 545 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 546 "data/maps/Coralport/scripts.pory"
	waitmovement
# 547 "data/maps/Coralport/scripts.pory"
	delay 40
# 548 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 549 "data/maps/Coralport/scripts.pory"
	waitmovement
# 550 "data/maps/Coralport/scripts.pory"
	delay 20
# 551 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 552 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 553 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 554 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 555 "data/maps/Coralport/scripts.pory"
	waitmovement
# 556 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 557 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 558 "data/maps/Coralport/scripts.pory"
	closemessage
# 559 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkright
# 560 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 561 "data/maps/Coralport/scripts.pory"
	waitmovement
# 562 "data/maps/Coralport/scripts.pory"
	delay 20
# 563 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 564 "data/maps/Coralport/scripts.pory"
	playse SE_BALL_OPEN
# 565 "data/maps/Coralport/scripts.pory"
	addobject 26
# 566 "data/maps/Coralport/scripts.pory"
	applymovement 26, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 567 "data/maps/Coralport/scripts.pory"
	waitmovement
# 568 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 569 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 570 "data/maps/Coralport/scripts.pory"
	lock
# 571 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 572 "data/maps/Coralport/scripts.pory"
	release
# 573 "data/maps/Coralport/scripts.pory"
	delay 30
# 574 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 575 "data/maps/Coralport/scripts.pory"
	waitmovement
# 576 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 577 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
# 578 "data/maps/Coralport/scripts.pory"
	closemessage
# 579 "data/maps/Coralport/scripts.pory"
	applymovement 28, shakehorizontal
# 580 "data/maps/Coralport/scripts.pory"
	waitmovement
# 581 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_WEAK
# 582 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 583 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceright
# 584 "data/maps/Coralport/scripts.pory"
	waitmovement
# 585 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 586 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
# 590 "data/maps/Coralport/scripts.pory"
	closemessage
# 591 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 592 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 593 "data/maps/Coralport/scripts.pory"
	waitmovement
# 594 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 595 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 596 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 597 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 598 "data/maps/Coralport/scripts.pory"
	closemessage
# 599 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 600 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 601 "data/maps/Coralport/scripts.pory"
	warp MAP_CORALPORT_CAVE, 0
# 602 "data/maps/Coralport/scripts.pory"
	waitstate
	return


# 605 "data/maps/Coralport/scripts.pory"
jumpinplacedown:
# 606 "data/maps/Coralport/scripts.pory"
	jump_in_place_down
	step_end

Coralport_Eventscript_Growlithe::
# 610 "data/maps/Coralport/scripts.pory"
	lock
# 611 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Growlithe_2
# 629 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 630 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 631 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Growlithe_Text_0
# 633 "data/maps/Coralport/scripts.pory"
	closemessage
Coralport_Eventscript_Growlithe_1:
# 635 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Growlithe_2:
# 612 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 613 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 615 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Growlithe_5
# 621 "data/maps/Coralport/scripts.pory"
	closemessage
# 622 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 623 "data/maps/Coralport/scripts.pory"
	release
# 624 "data/maps/Coralport/scripts.pory"
	refreshquesticon
	end

Coralport_Eventscript_Growlithe_5:
# 616 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_Growlithe_Movement_0
# 617 "data/maps/Coralport/scripts.pory"
	waitmovement
# 618 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Growlithe_1


Coralport_Eventscript_Lapras::
# 640 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Lapras_2
Coralport_Eventscript_Lapras_1:
# 655 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_ge Coralport_Eventscript_Lapras_5
Coralport_Eventscript_Lapras_4:
	end

Coralport_Eventscript_Lapras_2:
# 641 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_0, MSGBOX_YESNO
# 642 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_7
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_5:
# 656 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_1, MSGBOX_YESNO
# 657 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_9
	goto Coralport_Eventscript_Lapras_4

Coralport_Eventscript_Lapras_7:
# 643 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 644 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 645 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkright
# 646 "data/maps/Coralport/scripts.pory"
	waitmovement
# 647 "data/maps/Coralport/scripts.pory"
	delay 4
# 648 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 649 "data/maps/Coralport/scripts.pory"
	waitmovement
# 650 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 651 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 41, 25
# 652 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_9:
# 658 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 659 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 660 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkdown
# 661 "data/maps/Coralport/scripts.pory"
	waitmovement
# 662 "data/maps/Coralport/scripts.pory"
	delay 4
# 663 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 664 "data/maps/Coralport/scripts.pory"
	waitmovement
# 665 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 666 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 36, 28
# 667 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_4


Coralport_Eventscript_ConfirmEnterCave::
# 674 "data/maps/Coralport/scripts.pory"
	lock
# 675 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ConfirmEnterCave_Text_0, MSGBOX_YESNO
# 677 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_ConfirmEnterCave_1
# 684 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_ConfirmEnterCave_1:
# 678 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 679 "data/maps/Coralport/scripts.pory"
	waitmovement
# 680 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CaveSign::
# 690 "data/maps/Coralport/scripts.pory"
	lock
# 691 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CaveSign_Text_0
# 693 "data/maps/Coralport/scripts.pory"
	closemessage
# 694 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe::
# 699 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0
# 700 "data/maps/Coralport/scripts.pory"
	waitmovement
# 701 "data/maps/Coralport/scripts.pory"
	delay 30
# 702 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplacedown
# 703 "data/maps/Coralport/scripts.pory"
	waitmovement
# 704 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 705 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0
# 708 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 709 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1
# 710 "data/maps/Coralport/scripts.pory"
	closemessage
# 711 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceleft
# 712 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 713 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 714 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2
# 715 "data/maps/Coralport/scripts.pory"
	closemessage
# 716 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 717 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1
# 718 "data/maps/Coralport/scripts.pory"
	waitmovement
# 719 "data/maps/Coralport/scripts.pory"
	applymovement 28, facedown
# 720 "data/maps/Coralport/scripts.pory"
	lock
# 721 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 722 "data/maps/Coralport/scripts.pory"
	release
# 723 "data/maps/Coralport/scripts.pory"
	applymovement 27, facedown
# 724 "data/maps/Coralport/scripts.pory"
	waitmovement
# 725 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 726 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3
# 730 "data/maps/Coralport/scripts.pory"
	closemessage
# 731 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 732 "data/maps/Coralport/scripts.pory"
	waitmovement
# 733 "data/maps/Coralport/scripts.pory"
	delay 30
# 734 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2
# 735 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3
# 736 "data/maps/Coralport/scripts.pory"
	waitmovement 27
# 737 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 738 "data/maps/Coralport/scripts.pory"
	waitmovement 28
# 739 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 740 "data/maps/Coralport/scripts.pory"
	removeobject 27
# 741 "data/maps/Coralport/scripts.pory"
	delay 1
# 742 "data/maps/Coralport/scripts.pory"
	removeobject 28
# 743 "data/maps/Coralport/scripts.pory"
	delay 30
# 744 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 745 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4
# 746 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5
# 747 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6
# 748 "data/maps/Coralport/scripts.pory"
	waitmovement LOCALID_PLAYER
# 749 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 750 "data/maps/Coralport/scripts.pory"
	delay 1
# 751 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 752 "data/maps/Coralport/scripts.pory"
	delay 1
# 753 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 754 "data/maps/Coralport/scripts.pory"
	delay 1
# 755 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
# 756 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 757 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 758 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 759 "data/maps/Coralport/scripts.pory"
	fadedefaultbgm
# 760 "data/maps/Coralport/scripts.pory"
	delay 30
# 761 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 762 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_WOOPER_PALDEA
# 763 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_CLODSIRE
# 764 "data/maps/Coralport/scripts.pory"
	special ShowMapNamePopup
# 765 "data/maps/Coralport/scripts.pory"
	release
	end


# 289 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_0:
# 289 "data/maps/Coralport/scripts.pory"
	walk_right
# 289 "data/maps/Coralport/scripts.pory"
	walk_down
# 289 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 290 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_1:
# 290 "data/maps/Coralport/scripts.pory"
	walk_down
# 290 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 303 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_2:
# 303 "data/maps/Coralport/scripts.pory"
	walk_down
# 303 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 406 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0:
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
# 406 "data/maps/Coralport/scripts.pory"
	walk_down
	step_end

# 426 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1:
# 426 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 426 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 453 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2:
# 453 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 453 "data/maps/Coralport/scripts.pory"
	face_down
	step_end

# 465 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3:
# 465 "data/maps/Coralport/scripts.pory"
	walk_right
# 465 "data/maps/Coralport/scripts.pory"
	walk_right
	step_end

# 467 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4:
# 467 "data/maps/Coralport/scripts.pory"
	face_down
# 467 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 485 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0:
# 485 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
# 485 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
	step_end

# 490 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1:
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 490 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 493 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2:
# 493 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 493 "data/maps/Coralport/scripts.pory"
	delay_16
# 493 "data/maps/Coralport/scripts.pory"
	delay_16
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 493 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 495 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3:
# 495 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
# 495 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
	step_end

# 545 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 545 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 545 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 545 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 545 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 545 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
	step_end

# 548 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 548 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 548 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 548 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 548 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 548 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
	step_end

# 560 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 560 "data/maps/Coralport/scripts.pory"
	face_down
# 560 "data/maps/Coralport/scripts.pory"
	lock_facing_direction
# 560 "data/maps/Coralport/scripts.pory"
	walk_up
# 560 "data/maps/Coralport/scripts.pory"
	unlock_facing_direction
	step_end

# 566 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 566 "data/maps/Coralport/scripts.pory"
	set_invisible
# 566 "data/maps/Coralport/scripts.pory"
	exit_pokeball
# 566 "data/maps/Coralport/scripts.pory"
	set_visible
# 566 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 574 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 574 "data/maps/Coralport/scripts.pory"
	walk_left
# 574 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 596 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 596 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 616 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Growlithe_Movement_0:
# 616 "data/maps/Coralport/scripts.pory"
	walk_left
# 616 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 699 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0:
# 699 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 699 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 699 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 699 "data/maps/Coralport/scripts.pory"
	walk_slow_down
	step_end

# 717 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1:
# 717 "data/maps/Coralport/scripts.pory"
	emote_music
# 717 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
	step_end

# 734 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2:
# 734 "data/maps/Coralport/scripts.pory"
	walk_in_place_left
# 734 "data/maps/Coralport/scripts.pory"
	delay_16
# 734 "data/maps/Coralport/scripts.pory"
	delay_16
# 734 "data/maps/Coralport/scripts.pory"
	walk_up
# 734 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 735 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3:
# 735 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
# 735 "data/maps/Coralport/scripts.pory"
	delay_16
# 735 "data/maps/Coralport/scripts.pory"
	delay_16
# 735 "data/maps/Coralport/scripts.pory"
	walk_right
# 735 "data/maps/Coralport/scripts.pory"
	walk_up
# 735 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 745 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4:
# 745 "data/maps/Coralport/scripts.pory"
	walk_left
# 745 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 746 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5:
# 746 "data/maps/Coralport/scripts.pory"
	walk_right
# 746 "data/maps/Coralport/scripts.pory"
	face_down
# 746 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 747 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6:
# 747 "data/maps/Coralport/scripts.pory"
	face_down
# 747 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

Coralport_Eventscript_DirectionSign_Text_0:
# 121 "data/maps/Coralport/scripts.pory"
	.string "Route 3 {LEFT_ARROW}\n"
	.string "Route 2 {RIGHT_ARROW}$"

Coralport_Eventscript_TownSign_Text_0:
# 130 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Welcome to Coralport!\n"
	.string "{CLEAR_TO 30}“Home of the sea breeze.”$"

Coralport_Eventscript_PoliceStationSign_Text_0:
# 139 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 45}Coralport Police Station\n"
	.string "{CLEAR_TO 60}“For the people.”$"

Coralport_Eventscript_CandyShopSign_Text_0:
# 148 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}AmeAme Candy Shop\n"
	.string "{CLEAR_TO 24}“Welcome all the sweet lovers!”$"

Coralport_Eventscript_Policeman_Text_0:
# 158 "data/maps/Coralport/scripts.pory"
	.string "Takagi$"

Coralport_Eventscript_Policeman_Text_1:
# 159 "data/maps/Coralport/scripts.pory"
	.string "Welcome to Coralport!\n"
	.string "If you have any problem, please let us\l"
	.string "know.\p"
	.string "We'd be happy to help.$"

Coralport_Eventscript_OldMan_Text_0:
# 169 "data/maps/Coralport/scripts.pory"
	.string "Tomoki$"

Coralport_Eventscript_OldMan_Text_1:
# 170 "data/maps/Coralport/scripts.pory"
	.string "I and my darling have been travelling\n"
	.string "around the world.\p"
	.string "Coralport has this special charm to it\n"
	.string "that made us want to spend the rest of\l"
	.string "our days here.$"

Coralport_Eventscript_OldWoman_Text_0:
# 180 "data/maps/Coralport/scripts.pory"
	.string "Yukine$"

Coralport_Eventscript_OldWoman_Text_1:
# 181 "data/maps/Coralport/scripts.pory"
	.string "This guy said to me one day “Let's\n"
	.string "travel the world!”\p"
	.string "We were still so young and I agreed.\n"
	.string "Then he brought us to all kind of\l"
	.string "beautiful places.\p"
	.string "It was only until last year that he\n"
	.string "proposed, just on the beach over there.\p"
	.string "That was quite late now that I think\n"
	.string "about it.\p"
	.string "Although it also kind of slipped out of\n"
	.string "my mind, since I was having so much fun\l"
	.string "being around him.$"

Coralport_Eventscript_SailorOnBreak_Text_0:
# 194 "data/maps/Coralport/scripts.pory"
	.string "Etsuo$"

Coralport_Eventscript_SailorOnBreak_Text_1:
# 195 "data/maps/Coralport/scripts.pory"
	.string "Please don't talk to me. I'm on break.\p"
	.string "If you need help, talk to the sailors on\n"
	.string "the harbor.$"

Coralport_Eventscript_SailorOnHarbor_Text_0:
# 233 "data/maps/Coralport/scripts.pory"
	.string "Chikatake$"

Coralport_Eventscript_SailorOnHarbor_Text_1:
# 234 "data/maps/Coralport/scripts.pory"
	.string "We have to move these barrels onto the\n"
	.string "board before departure.\p"
	.string "Please excuse us, we're very busy.$"

Coralport_Eventscript_SailorOnGuard_Text_0:
# 244 "data/maps/Coralport/scripts.pory"
	.string "Umito$"

Coralport_Eventscript_SailorOnGuard_Text_1:
# 247 "data/maps/Coralport/scripts.pory"
	.string "This ship will depart for Windward Port.\p"
	.string "Please come back later when it's\n"
	.string "boarding time.$"

Coralport_Eventscript_SailorOnGuard_Text_2:
# 258 "data/maps/Coralport/scripts.pory"
	.string "This ship is departing for Windward\n"
	.string "Port.\p"
	.string "Would you like to board the ship?$"

Coralport_Eventscript_ShipHasDeparted_Text_0:
# 274 "data/maps/Coralport/scripts.pory"
	.string "The ship has already departed for\n"
	.string "Windward Port.\p"
	.string "If you want to board the ship, please\n"
	.string "come back between 7AM and 5PM.$"

Coralport_Eventscript_NotYetBoardingTime_Text_0:
# 293 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 317 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 318 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 340 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 341 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 345 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 358 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 359 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 382 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 386 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 396 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0:
# 408 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1:
# 414 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Kirijo.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Sanada-kun?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2:
# 417 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}If you know who's behind the explosion,\n"
	.string "why didn't you say anything to the\l"
	.string "police?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}I'd prefer not getting them involved.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}What?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Besides, I doubt they'd be any help,\n"
	.string "even if they knew.\p"
	.string "Otherwise I wouldn't be here, asking you\n"
	.string "two to accompany me on this journey.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}But- why?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Corruption shit or something like that?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3:
# 428 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Aragaki-kun, language.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Tch.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4:
# 434 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}But indeed.\p"
	.string "The illegal experiments have already\n"
	.string "proceeded to the state of producing\l"
	.string "successful prototypes.\p"
	.string "Why do you think they haven't already\n"
	.string "been caught nor stopped?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5:
# 440 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}... But Kurosawa-san was really kind and\n"
	.string "tried really hard to help me and Shinji.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6:
# 443 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Not all cops are the same.\p"
	.string "I guess he also has a battle he's\n"
	.string "fighting on his own.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7:
# 461 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I suppose the ship is ready for\n"
	.string "boarding.\l"
	.string "Let's move out.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0:
# 510 "data/maps/Coralport/scripts.pory"
	.string "Ikumi$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1:
# 512 "data/maps/Coralport/scripts.pory"
	.string "{COLOR RED}Continuing this quest will fast forward\n"
	.string "the clock at least 4 hours.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2:
# 520 "data/maps/Coralport/scripts.pory"
	.string "You're back! Let's hop on my Lapras to\n"
	.string "go back to Coralport Cave entrance!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3:
# 525 "data/maps/Coralport/scripts.pory"
	.string "You need to stock up on healing items?\n"
	.string "Feel free to hop on my Lapras to go\l"
	.string "back to the main land.\p"
	.string "Please come back soon, though.\l"
	.string "My daughter is still in there.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 537 "data/maps/Coralport/scripts.pory"
	.string "How is it now, Growlithe?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 552 "data/maps/Coralport/scripts.pory"
	.string "You mean Misa is in that cave over\n"
	.string "there?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 557 "data/maps/Coralport/scripts.pory"
	.string "Alright!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 577 "data/maps/Coralport/scripts.pory"
	.string "Lapras can carry all of us. Let us\n"
	.string "proceed then!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 586 "data/maps/Coralport/scripts.pory"
	.string "What's wrong, Growlithe?\p"
	.string "Oh, right. You're scared of water, aren't\n"
	.string "you?\p"
	.string "Well... I don't have your Pokéball and\n"
	.string "returning to your owner to get it would\l"
	.string "be time-wasting...\p"
	.string "Can you wait for us here?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 595 "data/maps/Coralport/scripts.pory"
	.string "Thank you, you're such a good boy.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 597 "data/maps/Coralport/scripts.pory"
	.string "Let's go, my daughter is waiting!$"

Coralport_Eventscript_Growlithe_Text_0:
# 631 "data/maps/Coralport/scripts.pory"
	.string "Growlithe looks worried. It seems like it\n"
	.string "won't go back to its owner until you\l"
	.string "rescue Misa.\p"
	.string "What a good boy!$"

Coralport_Eventscript_Lapras_Text_0:
# 641 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go to Coralport Cave\n"
	.string "entrance?$"

Coralport_Eventscript_Lapras_Text_1:
# 656 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go back to the main\n"
	.string "land?$"

Coralport_Eventscript_ConfirmEnterCave_Text_0:
# 675 "data/maps/Coralport/scripts.pory"
	.string "{COLOR GREEN}Once you enter this cave, leaving it will\n"
	.string "fast forward the clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_CaveSign_Text_0:
# 691 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}Coralport Cave\n"
	.string "{CLEAR_TO 45}{COLOR GREEN}Time forwarding: {COLOR RED}4 hours{COLOR GREEN}.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0:
# 705 "data/maps/Coralport/scripts.pory"
	.string "Thank you so much for saving my family\n"
	.string "back there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You're welcome, Ikumi-san.\n"
	.string "We're glad that Misa was found safely.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1:
# 709 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Indeed, indeed.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2:
# 714 "data/maps/Coralport/scripts.pory"
	.string "Thanks to you too, Growlithe! Without\n"
	.string "you, I wouldn't even know where she\l"
	.string "went to.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3:
# 726 "data/maps/Coralport/scripts.pory"
	.string "Now I have to return the Growlithe to\n"
	.string "the policeman.\p"
	.string "Please make sure to come by my house\n"
	.string "later. I want to give you all something.\p"
	.string "Misa and Wooper would also be really\n"
	.string "happy to see you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}We will!$"
