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
# 287 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_ShipHasDeparted
Coralport_Eventscript_SailorOnGuard_1:
# 290 "data/maps/Coralport/scripts.pory"
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
	showmoneybox 0, 0
# 259 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_2, MSGBOX_YESNO
# 261 "data/maps/Coralport/scripts.pory"
	closemessage
# 262 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_12
	goto Coralport_Eventscript_SailorOnGuard_1

Coralport_Eventscript_SailorOnGuard_9:
# 257 "data/maps/Coralport/scripts.pory"
	compare VAR_0x8000, 17
	goto_if_le Coralport_Eventscript_SailorOnGuard_7
	goto Coralport_Eventscript_SailorOnGuard_8

Coralport_Eventscript_SailorOnGuard_12:
# 263 "data/maps/Coralport/scripts.pory"
	checkmoney 300
# 264 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_SailorOnGuard_14
# 277 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 278 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_4
# 279 "data/maps/Coralport/scripts.pory"
	closemessage
# 280 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_14:
# 265 "data/maps/Coralport/scripts.pory"
	playse SE_SHOP
# 266 "data/maps/Coralport/scripts.pory"
	removemoney 300
# 267 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 268 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_3
# 269 "data/maps/Coralport/scripts.pory"
	closemessage
# 270 "data/maps/Coralport/scripts.pory"
	applymovement 10, walkinplaceup
# 271 "data/maps/Coralport/scripts.pory"
	waitmovement
# 272 "data/maps/Coralport/scripts.pory"
	delay 30
# 273 "data/maps/Coralport/scripts.pory"
	warp MAP_WINDWARD_PORT_HARBOR, 23, 27
# 274 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_SailorOnGuard_1


Coralport_Eventscript_ShipHasDeparted::
# 295 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ShipHasDeparted_Text_0
# 297 "data/maps/Coralport/scripts.pory"
	closemessage
# 298 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_NotYetBoardingTime::
# 302 "data/maps/Coralport/scripts.pory"
	delay 20
# 303 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 304 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 305 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 306 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 307 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 308 "data/maps/Coralport/scripts.pory"
	waitmovement
# 309 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 310 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_0
# 311 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_1
# 312 "data/maps/Coralport/scripts.pory"
	waitmovement
# 313 "data/maps/Coralport/scripts.pory"
	delay 30
# 314 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_NotYetBoardingTime_Text_0
# 319 "data/maps/Coralport/scripts.pory"
	closemessage
# 320 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 321 "data/maps/Coralport/scripts.pory"
	delay 4
# 322 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 323 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 324 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 325 "data/maps/Coralport/scripts.pory"
	waitmovement
# 326 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 327 "data/maps/Coralport/scripts.pory"
	delay 1
# 328 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 329 "data/maps/Coralport/scripts.pory"
	delay 1
# 330 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 331 "data/maps/Coralport/scripts.pory"
	delay 1
# 332 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 1
	return


Coralport_Eventscript_TuberM::
# 336 "data/maps/Coralport/scripts.pory"
	lock
# 337 "data/maps/Coralport/scripts.pory"
	faceplayer
# 338 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 339 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 340 "data/maps/Coralport/scripts.pory"
	closemessage
# 341 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 346 "data/maps/Coralport/scripts.pory"
	lock
# 347 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 348 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 349 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 350 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 351 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 352 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 353 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 354 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 359 "data/maps/Coralport/scripts.pory"
	lock
# 360 "data/maps/Coralport/scripts.pory"
	faceplayer
# 361 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 362 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 365 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 366 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 369 "data/maps/Coralport/scripts.pory"
	closemessage
# 370 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 371 "data/maps/Coralport/scripts.pory"
	waitmovement
# 372 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 377 "data/maps/Coralport/scripts.pory"
	lock
# 378 "data/maps/Coralport/scripts.pory"
	faceplayer
# 379 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 380 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 383 "data/maps/Coralport/scripts.pory"
	closemessage
# 384 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 389 "data/maps/Coralport/scripts.pory"
	lockall
# 390 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 391 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 392 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 393 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 398 "data/maps/Coralport/scripts.pory"
	lock
# 399 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 400 "data/maps/Coralport/scripts.pory"
	waitmovement
# 401 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 402 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 407 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 410 "data/maps/Coralport/scripts.pory"
	closemessage
# 411 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 403 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 416 "data/maps/Coralport/scripts.pory"
	lock
# 417 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 418 "data/maps/Coralport/scripts.pory"
	closemessage
# 419 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 420 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 421 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp::
# 426 "data/maps/Coralport/scripts.pory"
	delay 20
# 427 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0
# 428 "data/maps/Coralport/scripts.pory"
	waitmovement
# 429 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0
# 430 "data/maps/Coralport/scripts.pory"
	closemessage
# 431 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 432 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 433 "data/maps/Coralport/scripts.pory"
	waitmovement
# 434 "data/maps/Coralport/scripts.pory"
	delay 20
# 435 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1
# 437 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 438 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2
# 445 "data/maps/Coralport/scripts.pory"
	closemessage
# 446 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 447 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1
# 448 "data/maps/Coralport/scripts.pory"
	waitmovement
# 449 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3
# 451 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceleft
# 452 "data/maps/Coralport/scripts.pory"
	delay 4
# 453 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 454 "data/maps/Coralport/scripts.pory"
	delay 30
# 455 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4
# 459 "data/maps/Coralport/scripts.pory"
	closemessage
# 460 "data/maps/Coralport/scripts.pory"
	delay 30
# 461 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5
# 462 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 463 "data/maps/Coralport/scripts.pory"
	delay 20
# 464 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6
# 467 "data/maps/Coralport/scripts.pory"
	closemessage
# 468 "data/maps/Coralport/scripts.pory"
	delay 30
# 469 "data/maps/Coralport/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 470 "data/maps/Coralport/scripts.pory"
	delay 30
# 471 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 472 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, emoteexclamation
# 473 "data/maps/Coralport/scripts.pory"
	delay 4
# 474 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 475 "data/maps/Coralport/scripts.pory"
	delay 4
# 476 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 477 "data/maps/Coralport/scripts.pory"
	delay 60
# 478 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, faceup
# 479 "data/maps/Coralport/scripts.pory"
	delay 4
# 480 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 481 "data/maps/Coralport/scripts.pory"
	waitmovement
# 482 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7
# 484 "data/maps/Coralport/scripts.pory"
	closemessage
# 485 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 486 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3
# 487 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 488 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4
# 489 "data/maps/Coralport/scripts.pory"
	waitmovement S_CORAL
# 490 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 491 "data/maps/Coralport/scripts.pory"
	delay 1
# 492 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 493 "data/maps/Coralport/scripts.pory"
	delay 1
# 494 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 495 "data/maps/Coralport/scripts.pory"
	delay 1
# 496 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 497 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 4
# 498 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast::
# 503 "data/maps/Coralport/scripts.pory"
	lock
# 504 "data/maps/Coralport/scripts.pory"
	delay 20
# 505 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 506 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0
# 507 "data/maps/Coralport/scripts.pory"
	waitmovement
# 508 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 509 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 510 "data/maps/Coralport/scripts.pory"
	waitmovement
# 511 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1
# 512 "data/maps/Coralport/scripts.pory"
	delay 4
# 513 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 514 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2
# 515 "data/maps/Coralport/scripts.pory"
	delay 60
# 516 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3
# 517 "data/maps/Coralport/scripts.pory"
	waitmovement
# 518 "data/maps/Coralport/scripts.pory"
	special RemoveCameraObject
# 519 "data/maps/Coralport/scripts.pory"
	delay 30
# 520 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
# 521 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 522 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 523 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 524 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 13, 27
# 525 "data/maps/Coralport/scripts.pory"
	waitstate
	return


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER::
# 529 "data/maps/Coralport/scripts.pory"
	lock
# 530 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 531 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 532 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1:
# 539 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4:
# 544 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9:
# 550 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 551 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 552 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2:
# 533 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 535 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5:
# 540 "data/maps/Coralport/scripts.pory"
	faceplayer
# 541 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2
# 542 "data/maps/Coralport/scripts.pory"
	closemessage
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7:
# 536 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10:
# 545 "data/maps/Coralport/scripts.pory"
	faceplayer
# 546 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 557 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplaceright
# 558 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 559 "data/maps/Coralport/scripts.pory"
	closemessage
# 560 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 561 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 562 "data/maps/Coralport/scripts.pory"
	waitmovement
# 563 "data/maps/Coralport/scripts.pory"
	delay 30
# 564 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 565 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 566 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 567 "data/maps/Coralport/scripts.pory"
	waitmovement
# 568 "data/maps/Coralport/scripts.pory"
	delay 40
# 569 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 570 "data/maps/Coralport/scripts.pory"
	waitmovement
# 571 "data/maps/Coralport/scripts.pory"
	delay 20
# 572 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 573 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 574 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 575 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 576 "data/maps/Coralport/scripts.pory"
	waitmovement
# 577 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 578 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 579 "data/maps/Coralport/scripts.pory"
	closemessage
# 580 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkright
# 581 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 582 "data/maps/Coralport/scripts.pory"
	waitmovement
# 583 "data/maps/Coralport/scripts.pory"
	delay 20
# 584 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 585 "data/maps/Coralport/scripts.pory"
	playse SE_BALL_OPEN
# 586 "data/maps/Coralport/scripts.pory"
	addobject 26
# 587 "data/maps/Coralport/scripts.pory"
	applymovement 26, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 588 "data/maps/Coralport/scripts.pory"
	waitmovement
# 589 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 590 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 591 "data/maps/Coralport/scripts.pory"
	lock
# 592 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 593 "data/maps/Coralport/scripts.pory"
	release
# 594 "data/maps/Coralport/scripts.pory"
	delay 30
# 595 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 596 "data/maps/Coralport/scripts.pory"
	waitmovement
# 597 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 598 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
# 599 "data/maps/Coralport/scripts.pory"
	closemessage
# 600 "data/maps/Coralport/scripts.pory"
	applymovement 28, shakehorizontal
# 601 "data/maps/Coralport/scripts.pory"
	waitmovement
# 602 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_WEAK
# 603 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 604 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceright
# 605 "data/maps/Coralport/scripts.pory"
	waitmovement
# 606 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 607 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
# 611 "data/maps/Coralport/scripts.pory"
	closemessage
# 612 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 613 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 614 "data/maps/Coralport/scripts.pory"
	waitmovement
# 615 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 616 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 617 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 618 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 619 "data/maps/Coralport/scripts.pory"
	closemessage
# 620 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 621 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 622 "data/maps/Coralport/scripts.pory"
	warp MAP_CORALPORT_CAVE, 0
# 623 "data/maps/Coralport/scripts.pory"
	waitstate
	return


# 626 "data/maps/Coralport/scripts.pory"
jumpinplacedown:
# 627 "data/maps/Coralport/scripts.pory"
	jump_in_place_down
	step_end

Coralport_Eventscript_Growlithe::
# 631 "data/maps/Coralport/scripts.pory"
	lock
# 632 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Growlithe_2
# 650 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 651 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 652 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Growlithe_Text_0
# 654 "data/maps/Coralport/scripts.pory"
	closemessage
Coralport_Eventscript_Growlithe_1:
# 656 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Growlithe_2:
# 633 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 634 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 636 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Growlithe_5
# 642 "data/maps/Coralport/scripts.pory"
	closemessage
# 643 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 644 "data/maps/Coralport/scripts.pory"
	release
# 645 "data/maps/Coralport/scripts.pory"
	refreshquesticon
	end

Coralport_Eventscript_Growlithe_5:
# 637 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_Growlithe_Movement_0
# 638 "data/maps/Coralport/scripts.pory"
	waitmovement
# 639 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Growlithe_1


Coralport_Eventscript_Lapras::
# 661 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Lapras_2
Coralport_Eventscript_Lapras_1:
# 676 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_ge Coralport_Eventscript_Lapras_5
Coralport_Eventscript_Lapras_4:
	end

Coralport_Eventscript_Lapras_2:
# 662 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_0, MSGBOX_YESNO
# 663 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_7
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_5:
# 677 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_1, MSGBOX_YESNO
# 678 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_9
	goto Coralport_Eventscript_Lapras_4

Coralport_Eventscript_Lapras_7:
# 664 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 665 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 666 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkright
# 667 "data/maps/Coralport/scripts.pory"
	waitmovement
# 668 "data/maps/Coralport/scripts.pory"
	delay 4
# 669 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 670 "data/maps/Coralport/scripts.pory"
	waitmovement
# 671 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 672 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 41, 25
# 673 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_9:
# 679 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 680 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 681 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkdown
# 682 "data/maps/Coralport/scripts.pory"
	waitmovement
# 683 "data/maps/Coralport/scripts.pory"
	delay 4
# 684 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 685 "data/maps/Coralport/scripts.pory"
	waitmovement
# 686 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 687 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 36, 28
# 688 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_4


Coralport_Eventscript_ConfirmEnterCave::
# 695 "data/maps/Coralport/scripts.pory"
	lock
# 696 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ConfirmEnterCave_Text_0, MSGBOX_YESNO
# 698 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_ConfirmEnterCave_1
# 705 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_ConfirmEnterCave_1:
# 699 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 700 "data/maps/Coralport/scripts.pory"
	waitmovement
# 701 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CaveSign::
# 711 "data/maps/Coralport/scripts.pory"
	lock
# 712 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CaveSign_Text_0
# 714 "data/maps/Coralport/scripts.pory"
	closemessage
# 715 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe::
# 720 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0
# 721 "data/maps/Coralport/scripts.pory"
	waitmovement
# 722 "data/maps/Coralport/scripts.pory"
	delay 30
# 723 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplacedown
# 724 "data/maps/Coralport/scripts.pory"
	waitmovement
# 725 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 726 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0
# 729 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 730 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1
# 731 "data/maps/Coralport/scripts.pory"
	closemessage
# 732 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceleft
# 733 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 734 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 735 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2
# 736 "data/maps/Coralport/scripts.pory"
	closemessage
# 737 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 738 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1
# 739 "data/maps/Coralport/scripts.pory"
	waitmovement
# 740 "data/maps/Coralport/scripts.pory"
	applymovement 28, facedown
# 741 "data/maps/Coralport/scripts.pory"
	lock
# 742 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 743 "data/maps/Coralport/scripts.pory"
	release
# 744 "data/maps/Coralport/scripts.pory"
	applymovement 27, facedown
# 745 "data/maps/Coralport/scripts.pory"
	waitmovement
# 746 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 747 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3
# 751 "data/maps/Coralport/scripts.pory"
	closemessage
# 752 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 753 "data/maps/Coralport/scripts.pory"
	waitmovement
# 754 "data/maps/Coralport/scripts.pory"
	delay 30
# 755 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2
# 756 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3
# 757 "data/maps/Coralport/scripts.pory"
	waitmovement 27
# 758 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 759 "data/maps/Coralport/scripts.pory"
	waitmovement 28
# 760 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 761 "data/maps/Coralport/scripts.pory"
	removeobject 27
# 762 "data/maps/Coralport/scripts.pory"
	delay 1
# 763 "data/maps/Coralport/scripts.pory"
	removeobject 28
# 764 "data/maps/Coralport/scripts.pory"
	delay 30
# 765 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 766 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4
# 767 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5
# 768 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6
# 769 "data/maps/Coralport/scripts.pory"
	waitmovement LOCALID_PLAYER
# 770 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 771 "data/maps/Coralport/scripts.pory"
	delay 1
# 772 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 773 "data/maps/Coralport/scripts.pory"
	delay 1
# 774 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 775 "data/maps/Coralport/scripts.pory"
	delay 1
# 776 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
# 777 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 778 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 779 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 780 "data/maps/Coralport/scripts.pory"
	fadedefaultbgm
# 781 "data/maps/Coralport/scripts.pory"
	delay 30
# 782 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 783 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_WOOPER_PALDEA
# 784 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_CLODSIRE
# 785 "data/maps/Coralport/scripts.pory"
	special ShowMapNamePopup
# 786 "data/maps/Coralport/scripts.pory"
	release
	end


# 310 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_0:
# 310 "data/maps/Coralport/scripts.pory"
	walk_right
# 310 "data/maps/Coralport/scripts.pory"
	walk_down
# 310 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 311 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_1:
# 311 "data/maps/Coralport/scripts.pory"
	walk_down
# 311 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 324 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_2:
# 324 "data/maps/Coralport/scripts.pory"
	walk_down
# 324 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 427 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0:
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
# 427 "data/maps/Coralport/scripts.pory"
	walk_down
	step_end

# 447 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1:
# 447 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 447 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 474 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2:
# 474 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 474 "data/maps/Coralport/scripts.pory"
	face_down
	step_end

# 486 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3:
# 486 "data/maps/Coralport/scripts.pory"
	walk_right
# 486 "data/maps/Coralport/scripts.pory"
	walk_right
	step_end

# 488 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4:
# 488 "data/maps/Coralport/scripts.pory"
	face_down
# 488 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 506 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0:
# 506 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
# 506 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
	step_end

# 511 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1:
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 511 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 514 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2:
# 514 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 514 "data/maps/Coralport/scripts.pory"
	delay_16
# 514 "data/maps/Coralport/scripts.pory"
	delay_16
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 514 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 516 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3:
# 516 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
# 516 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
	step_end

# 566 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 566 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 566 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 566 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 566 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 566 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
	step_end

# 569 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 569 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 569 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 569 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 569 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 569 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
	step_end

# 581 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 581 "data/maps/Coralport/scripts.pory"
	face_down
# 581 "data/maps/Coralport/scripts.pory"
	lock_facing_direction
# 581 "data/maps/Coralport/scripts.pory"
	walk_up
# 581 "data/maps/Coralport/scripts.pory"
	unlock_facing_direction
	step_end

# 587 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 587 "data/maps/Coralport/scripts.pory"
	set_invisible
# 587 "data/maps/Coralport/scripts.pory"
	exit_pokeball
# 587 "data/maps/Coralport/scripts.pory"
	set_visible
# 587 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 595 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 595 "data/maps/Coralport/scripts.pory"
	walk_left
# 595 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 617 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 617 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 637 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Growlithe_Movement_0:
# 637 "data/maps/Coralport/scripts.pory"
	walk_left
# 637 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 720 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0:
# 720 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 720 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 720 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 720 "data/maps/Coralport/scripts.pory"
	walk_slow_down
	step_end

# 738 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1:
# 738 "data/maps/Coralport/scripts.pory"
	emote_music
# 738 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
	step_end

# 755 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2:
# 755 "data/maps/Coralport/scripts.pory"
	walk_in_place_left
# 755 "data/maps/Coralport/scripts.pory"
	delay_16
# 755 "data/maps/Coralport/scripts.pory"
	delay_16
# 755 "data/maps/Coralport/scripts.pory"
	walk_up
# 755 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 756 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3:
# 756 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
# 756 "data/maps/Coralport/scripts.pory"
	delay_16
# 756 "data/maps/Coralport/scripts.pory"
	delay_16
# 756 "data/maps/Coralport/scripts.pory"
	walk_right
# 756 "data/maps/Coralport/scripts.pory"
	walk_up
# 756 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 766 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4:
# 766 "data/maps/Coralport/scripts.pory"
	walk_left
# 766 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 767 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5:
# 767 "data/maps/Coralport/scripts.pory"
	walk_right
# 767 "data/maps/Coralport/scripts.pory"
	face_down
# 767 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 768 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6:
# 768 "data/maps/Coralport/scripts.pory"
	face_down
# 768 "data/maps/Coralport/scripts.pory"
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
# 259 "data/maps/Coralport/scripts.pory"
	.string "This ship is departing for Windward\n"
	.string "Port.\p"
	.string "It costs 100 Pokedollars per ticket.\n"
	.string "Would you like to board the ship?$"

Coralport_Eventscript_SailorOnGuard_Text_3:
# 268 "data/maps/Coralport/scripts.pory"
	.string "This way, please.$"

Coralport_Eventscript_SailorOnGuard_Text_4:
# 278 "data/maps/Coralport/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

Coralport_Eventscript_ShipHasDeparted_Text_0:
# 295 "data/maps/Coralport/scripts.pory"
	.string "The ship has already departed for\n"
	.string "Windward Port.\p"
	.string "If you want to board the ship, please\n"
	.string "come back between 7AM and 5PM.$"

Coralport_Eventscript_NotYetBoardingTime_Text_0:
# 314 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 338 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 339 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 361 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 362 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 366 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 379 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 380 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 403 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 407 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 417 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0:
# 429 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1:
# 435 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Kirijo.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Sanada-kun?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2:
# 438 "data/maps/Coralport/scripts.pory"
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
# 449 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Aragaki-kun, language.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Tch.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4:
# 455 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}But indeed.\p"
	.string "The illegal experiments have already\n"
	.string "proceeded to the state of producing\l"
	.string "successful prototypes.\p"
	.string "Why do you think they haven't already\n"
	.string "been caught nor stopped?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5:
# 461 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}... But Kurosawa-san was really kind and\n"
	.string "tried really hard to help me and Shinji.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6:
# 464 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Not all cops are the same.\p"
	.string "I guess he also has a battle he's\n"
	.string "fighting on his own.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7:
# 482 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I suppose the ship is ready for\n"
	.string "boarding.\l"
	.string "Let's move out.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0:
# 531 "data/maps/Coralport/scripts.pory"
	.string "Ikumi$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1:
# 533 "data/maps/Coralport/scripts.pory"
	.string "{COLOR RED}Continuing this quest will fast forward\n"
	.string "the clock at least 4 hours.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2:
# 541 "data/maps/Coralport/scripts.pory"
	.string "You're back! Let's hop on my Lapras to\n"
	.string "go back to Coralport Cave entrance!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3:
# 546 "data/maps/Coralport/scripts.pory"
	.string "You need to stock up on healing items?\n"
	.string "Feel free to hop on my Lapras to go\l"
	.string "back to the main land.\p"
	.string "Please come back soon, though.\l"
	.string "My daughter is still in there.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 558 "data/maps/Coralport/scripts.pory"
	.string "How is it now, Growlithe?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 573 "data/maps/Coralport/scripts.pory"
	.string "You mean Misa is in that cave over\n"
	.string "there?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 578 "data/maps/Coralport/scripts.pory"
	.string "Alright!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 598 "data/maps/Coralport/scripts.pory"
	.string "Lapras can carry all of us. Let us\n"
	.string "proceed then!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 607 "data/maps/Coralport/scripts.pory"
	.string "What's wrong, Growlithe?\p"
	.string "Oh, right. You're scared of water, aren't\n"
	.string "you?\p"
	.string "Well... I don't have your Pokéball and\n"
	.string "returning to your owner to get it would\l"
	.string "be time-wasting...\p"
	.string "Can you wait for us here?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 616 "data/maps/Coralport/scripts.pory"
	.string "Thank you, you're such a good boy.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 618 "data/maps/Coralport/scripts.pory"
	.string "Let's go, my daughter is waiting!$"

Coralport_Eventscript_Growlithe_Text_0:
# 652 "data/maps/Coralport/scripts.pory"
	.string "Growlithe looks worried. It seems like it\n"
	.string "won't go back to its owner until you\l"
	.string "rescue Misa.\p"
	.string "What a good boy!$"

Coralport_Eventscript_Lapras_Text_0:
# 662 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go to Coralport Cave\n"
	.string "entrance?$"

Coralport_Eventscript_Lapras_Text_1:
# 677 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go back to the main\n"
	.string "land?$"

Coralport_Eventscript_ConfirmEnterCave_Text_0:
# 696 "data/maps/Coralport/scripts.pory"
	.string "{COLOR GREEN}Once you enter this cave, leaving it will\n"
	.string "fast forward the clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_CaveSign_Text_0:
# 712 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}Coralport Cave\n"
	.string "{CLEAR_TO 45}{COLOR GREEN}Time forwarding: {COLOR RED}4 hours{COLOR GREEN}.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0:
# 726 "data/maps/Coralport/scripts.pory"
	.string "Thank you so much for saving my family\n"
	.string "back there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You're welcome, Ikumi-san.\n"
	.string "We're glad that Misa was found safely.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1:
# 730 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Indeed, indeed.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2:
# 735 "data/maps/Coralport/scripts.pory"
	.string "Thanks to you too, Growlithe! Without\n"
	.string "you, I wouldn't even know where she\l"
	.string "went to.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3:
# 747 "data/maps/Coralport/scripts.pory"
	.string "Now I have to return the Growlithe to\n"
	.string "the policeman.\p"
	.string "Please make sure to come by my house\n"
	.string "later. I want to give you all something.\p"
	.string "Misa and Wooper would also be really\n"
	.string "happy to see you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}We will!$"
