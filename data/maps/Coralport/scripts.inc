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
# 288 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_ShipHasDeparted
Coralport_Eventscript_SailorOnGuard_1:
# 291 "data/maps/Coralport/scripts.pory"
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
# 278 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 279 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_4
# 280 "data/maps/Coralport/scripts.pory"
	closemessage
# 281 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_SailorOnGuard_14:
# 265 "data/maps/Coralport/scripts.pory"
	playse SE_SHOP
# 266 "data/maps/Coralport/scripts.pory"
	removemoney 300
# 267 "data/maps/Coralport/scripts.pory"
	updatemoneybox
# 268 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_SailorOnGuard_Text_0
# 269 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_SailorOnGuard_Text_3
# 270 "data/maps/Coralport/scripts.pory"
	closemessage
# 271 "data/maps/Coralport/scripts.pory"
	applymovement 10, walkinplaceup
# 272 "data/maps/Coralport/scripts.pory"
	waitmovement
# 273 "data/maps/Coralport/scripts.pory"
	delay 30
# 274 "data/maps/Coralport/scripts.pory"
	warp MAP_WINDWARD_PORT_HARBOR, 23, 27
# 275 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_SailorOnGuard_1


Coralport_Eventscript_ShipHasDeparted::
# 296 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ShipHasDeparted_Text_0
# 298 "data/maps/Coralport/scripts.pory"
	closemessage
# 299 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_NotYetBoardingTime::
# 303 "data/maps/Coralport/scripts.pory"
	delay 20
# 304 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_2
# 305 "data/maps/Coralport/scripts.pory"
	addobject S_CORAL
# 306 "data/maps/Coralport/scripts.pory"
	addobject A_CORAL
# 307 "data/maps/Coralport/scripts.pory"
	addobject M_CORAL
# 308 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 309 "data/maps/Coralport/scripts.pory"
	waitmovement
# 310 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 311 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_0
# 312 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_NotYetBoardingTime_Movement_1
# 313 "data/maps/Coralport/scripts.pory"
	waitmovement
# 314 "data/maps/Coralport/scripts.pory"
	delay 30
# 315 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_NotYetBoardingTime_Text_0
# 320 "data/maps/Coralport/scripts.pory"
	closemessage
# 321 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 322 "data/maps/Coralport/scripts.pory"
	delay 4
# 323 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, walkleft
# 324 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, facedown
# 325 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 326 "data/maps/Coralport/scripts.pory"
	waitmovement
# 327 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 328 "data/maps/Coralport/scripts.pory"
	delay 1
# 329 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 330 "data/maps/Coralport/scripts.pory"
	delay 1
# 331 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 332 "data/maps/Coralport/scripts.pory"
	delay 1
# 333 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 1
	return


Coralport_Eventscript_TuberM::
# 337 "data/maps/Coralport/scripts.pory"
	lock
# 338 "data/maps/Coralport/scripts.pory"
	faceplayer
# 339 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_TuberM_Text_0
# 340 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_TuberM_Text_1
# 341 "data/maps/Coralport/scripts.pory"
	closemessage
# 342 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Sandygast::
# 347 "data/maps/Coralport/scripts.pory"
	lock
# 348 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_NORMAL
# 349 "data/maps/Coralport/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 11
# 350 "data/maps/Coralport/scripts.pory"
	dowildbattle
# 351 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 352 "data/maps/Coralport/scripts.pory"
	setmetatile 11, 29, 0x246, FALSE
# 353 "data/maps/Coralport/scripts.pory"
	special DrawWholeMapView
# 354 "data/maps/Coralport/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 355 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Beauty::
# 360 "data/maps/Coralport/scripts.pory"
	lock
# 361 "data/maps/Coralport/scripts.pory"
	faceplayer
# 362 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 363 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_1
# 366 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Beauty_Text_0
# 367 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Beauty_Text_2
# 370 "data/maps/Coralport/scripts.pory"
	closemessage
# 371 "data/maps/Coralport/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 22, 29, DIR_NORTH, 2
# 372 "data/maps/Coralport/scripts.pory"
	waitmovement
# 373 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Fisherman::
# 378 "data/maps/Coralport/scripts.pory"
	lock
# 379 "data/maps/Coralport/scripts.pory"
	faceplayer
# 380 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_Text_0
# 381 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_Text_1
# 384 "data/maps/Coralport/scripts.pory"
	closemessage
# 385 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_Krabby::
# 390 "data/maps/Coralport/scripts.pory"
	lockall
# 391 "data/maps/Coralport/scripts.pory"
	startoverworldencounter 12
# 392 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_1
# 393 "data/maps/Coralport/scripts.pory"
	removeobject VAR_LAST_TALKED
# 394 "data/maps/Coralport/scripts.pory"
	releaseall
	end


Coralport_Eventscript_MustTalkToSailorOnGuard::
# 399 "data/maps/Coralport/scripts.pory"
	lock
# 400 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 401 "data/maps/Coralport/scripts.pory"
	waitmovement
# 402 "data/maps/Coralport/scripts.pory"
	checkplayergender
# 403 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Coralport_Eventscript_MustTalkToSailorOnGuard_2
# 408 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1
Coralport_Eventscript_MustTalkToSailorOnGuard_1:
# 411 "data/maps/Coralport/scripts.pory"
	closemessage
# 412 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_MustTalkToSailorOnGuard_2:
# 404 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0
	goto Coralport_Eventscript_MustTalkToSailorOnGuard_1


setameamequestasreward::
# 417 "data/maps/Coralport/scripts.pory"
	lock
# 418 "data/maps/Coralport/scripts.pory"
	msgbox setameamequestasreward_Text_0
# 419 "data/maps/Coralport/scripts.pory"
	closemessage
# 420 "data/maps/Coralport/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
# 421 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
# 422 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp::
# 427 "data/maps/Coralport/scripts.pory"
	delay 20
# 428 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0
# 429 "data/maps/Coralport/scripts.pory"
	waitmovement
# 430 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0
# 431 "data/maps/Coralport/scripts.pory"
	closemessage
# 432 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 433 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 434 "data/maps/Coralport/scripts.pory"
	waitmovement
# 435 "data/maps/Coralport/scripts.pory"
	delay 20
# 436 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1
# 438 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 439 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2
# 446 "data/maps/Coralport/scripts.pory"
	closemessage
# 447 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 448 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1
# 449 "data/maps/Coralport/scripts.pory"
	waitmovement
# 450 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_3
# 452 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceleft
# 453 "data/maps/Coralport/scripts.pory"
	delay 4
# 454 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, facedown
# 455 "data/maps/Coralport/scripts.pory"
	delay 30
# 456 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4
# 460 "data/maps/Coralport/scripts.pory"
	closemessage
# 461 "data/maps/Coralport/scripts.pory"
	delay 30
# 462 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5
# 463 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 464 "data/maps/Coralport/scripts.pory"
	delay 20
# 465 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6
# 468 "data/maps/Coralport/scripts.pory"
	closemessage
# 469 "data/maps/Coralport/scripts.pory"
	delay 30
# 470 "data/maps/Coralport/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 471 "data/maps/Coralport/scripts.pory"
	delay 30
# 472 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 473 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, emoteexclamation
# 474 "data/maps/Coralport/scripts.pory"
	delay 4
# 475 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 476 "data/maps/Coralport/scripts.pory"
	delay 4
# 477 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2
# 478 "data/maps/Coralport/scripts.pory"
	delay 60
# 479 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, faceup
# 480 "data/maps/Coralport/scripts.pory"
	delay 4
# 481 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, faceright
# 482 "data/maps/Coralport/scripts.pory"
	waitmovement
# 483 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7
# 485 "data/maps/Coralport/scripts.pory"
	closemessage
# 486 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, walkdown
# 487 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3
# 488 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, walkup
# 489 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4
# 490 "data/maps/Coralport/scripts.pory"
	waitmovement S_CORAL
# 491 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 492 "data/maps/Coralport/scripts.pory"
	delay 1
# 493 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 494 "data/maps/Coralport/scripts.pory"
	delay 1
# 495 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 496 "data/maps/Coralport/scripts.pory"
	delay 1
# 497 "data/maps/Coralport/scripts.pory"
	setflag FLAG_TEMP_2
# 498 "data/maps/Coralport/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 4
# 499 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast::
# 504 "data/maps/Coralport/scripts.pory"
	lock
# 505 "data/maps/Coralport/scripts.pory"
	delay 20
# 506 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 507 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0
# 508 "data/maps/Coralport/scripts.pory"
	waitmovement
# 509 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 510 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 511 "data/maps/Coralport/scripts.pory"
	waitmovement
# 512 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1
# 513 "data/maps/Coralport/scripts.pory"
	delay 4
# 514 "data/maps/Coralport/scripts.pory"
	playse SE_PIN
# 515 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2
# 516 "data/maps/Coralport/scripts.pory"
	delay 60
# 517 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3
# 518 "data/maps/Coralport/scripts.pory"
	waitmovement
# 519 "data/maps/Coralport/scripts.pory"
	special RemoveCameraObject
# 520 "data/maps/Coralport/scripts.pory"
	delay 30
# 521 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
# 522 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 523 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 524 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 525 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 13, 27
# 526 "data/maps/Coralport/scripts.pory"
	waitstate
	return


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER::
# 530 "data/maps/Coralport/scripts.pory"
	lock
# 531 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 532 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 533 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1:
# 540 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4:
# 545 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_eq Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9:
# 551 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 552 "data/maps/Coralport/scripts.pory"
	refreshquesticon
# 553 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_2:
# 534 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 536 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_5:
# 541 "data/maps/Coralport/scripts.pory"
	faceplayer
# 542 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2
# 543 "data/maps/Coralport/scripts.pory"
	closemessage
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_4

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_7:
# 537 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_1

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_10:
# 546 "data/maps/Coralport/scripts.pory"
	faceplayer
# 547 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_9


Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start::
# 558 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplaceright
# 559 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0
# 560 "data/maps/Coralport/scripts.pory"
	closemessage
# 561 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 562 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 563 "data/maps/Coralport/scripts.pory"
	waitmovement
# 564 "data/maps/Coralport/scripts.pory"
	delay 30
# 565 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 566 "data/maps/Coralport/scripts.pory"
	special SpawnCameraObject
# 567 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0
# 568 "data/maps/Coralport/scripts.pory"
	waitmovement
# 569 "data/maps/Coralport/scripts.pory"
	delay 40
# 570 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_CAMERA, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1
# 571 "data/maps/Coralport/scripts.pory"
	waitmovement
# 572 "data/maps/Coralport/scripts.pory"
	delay 20
# 573 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 574 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1
# 575 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 576 "data/maps/Coralport/scripts.pory"
	applymovement 28, jumpinplaceleft
# 577 "data/maps/Coralport/scripts.pory"
	waitmovement
# 578 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 579 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2
# 580 "data/maps/Coralport/scripts.pory"
	closemessage
# 581 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkright
# 582 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2
# 583 "data/maps/Coralport/scripts.pory"
	waitmovement
# 584 "data/maps/Coralport/scripts.pory"
	delay 20
# 585 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_TEMP_4
# 586 "data/maps/Coralport/scripts.pory"
	playse SE_BALL_OPEN
# 587 "data/maps/Coralport/scripts.pory"
	addobject 26
# 588 "data/maps/Coralport/scripts.pory"
	applymovement 26, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3
# 589 "data/maps/Coralport/scripts.pory"
	waitmovement
# 590 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 591 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 592 "data/maps/Coralport/scripts.pory"
	lock
# 593 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 594 "data/maps/Coralport/scripts.pory"
	release
# 595 "data/maps/Coralport/scripts.pory"
	delay 30
# 596 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4
# 597 "data/maps/Coralport/scripts.pory"
	waitmovement
# 598 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 599 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3
# 600 "data/maps/Coralport/scripts.pory"
	closemessage
# 601 "data/maps/Coralport/scripts.pory"
	applymovement 28, shakehorizontal
# 602 "data/maps/Coralport/scripts.pory"
	waitmovement
# 603 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_WEAK
# 604 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 605 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceright
# 606 "data/maps/Coralport/scripts.pory"
	waitmovement
# 607 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 608 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4
# 612 "data/maps/Coralport/scripts.pory"
	closemessage
# 613 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 614 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 615 "data/maps/Coralport/scripts.pory"
	waitmovement
# 616 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 617 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5
# 618 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5
# 619 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6
# 620 "data/maps/Coralport/scripts.pory"
	closemessage
# 621 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 622 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 623 "data/maps/Coralport/scripts.pory"
	warp MAP_CORALPORT_CAVE, 0
# 624 "data/maps/Coralport/scripts.pory"
	waitstate
	return


# 627 "data/maps/Coralport/scripts.pory"
jumpinplacedown:
# 628 "data/maps/Coralport/scripts.pory"
	jump_in_place_down
	step_end

Coralport_Eventscript_Growlithe::
# 632 "data/maps/Coralport/scripts.pory"
	lock
# 633 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 2
	goto_if_eq Coralport_Eventscript_Growlithe_2
# 651 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 652 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 653 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Growlithe_Text_0
# 655 "data/maps/Coralport/scripts.pory"
	closemessage
Coralport_Eventscript_Growlithe_1:
# 657 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_Growlithe_2:
# 634 "data/maps/Coralport/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 635 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1, MSGBOX_YESNO
# 637 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Growlithe_5
# 643 "data/maps/Coralport/scripts.pory"
	closemessage
# 644 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 645 "data/maps/Coralport/scripts.pory"
	release
# 646 "data/maps/Coralport/scripts.pory"
	refreshquesticon
	end

Coralport_Eventscript_Growlithe_5:
# 638 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_Growlithe_Movement_0
# 639 "data/maps/Coralport/scripts.pory"
	waitmovement
# 640 "data/maps/Coralport/scripts.pory"
	goto Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start
	goto Coralport_Eventscript_Growlithe_1


Coralport_Eventscript_Lapras::
# 662 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
	goto_if_eq Coralport_Eventscript_Lapras_2
Coralport_Eventscript_Lapras_1:
# 677 "data/maps/Coralport/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_ge Coralport_Eventscript_Lapras_5
Coralport_Eventscript_Lapras_4:
	end

Coralport_Eventscript_Lapras_2:
# 663 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_0, MSGBOX_YESNO
# 664 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_7
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_5:
# 678 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_Lapras_Text_1, MSGBOX_YESNO
# 679 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Coralport_Eventscript_Lapras_9
	goto Coralport_Eventscript_Lapras_4

Coralport_Eventscript_Lapras_7:
# 665 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 666 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 667 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkright
# 668 "data/maps/Coralport/scripts.pory"
	waitmovement
# 669 "data/maps/Coralport/scripts.pory"
	delay 4
# 670 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 671 "data/maps/Coralport/scripts.pory"
	waitmovement
# 672 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
# 673 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 41, 25
# 674 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_1

Coralport_Eventscript_Lapras_9:
# 680 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
# 681 "data/maps/Coralport/scripts.pory"
	waitmoncry
# 682 "data/maps/Coralport/scripts.pory"
	applymovement 26, walkdown
# 683 "data/maps/Coralport/scripts.pory"
	waitmovement
# 684 "data/maps/Coralport/scripts.pory"
	delay 4
# 685 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkdown
# 686 "data/maps/Coralport/scripts.pory"
	waitmovement
# 687 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 688 "data/maps/Coralport/scripts.pory"
	warpsilent MAP_CORALPORT, 36, 28
# 689 "data/maps/Coralport/scripts.pory"
	waitstate
	goto Coralport_Eventscript_Lapras_4


Coralport_Eventscript_ConfirmEnterCave::
# 696 "data/maps/Coralport/scripts.pory"
	lock
# 697 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_ConfirmEnterCave_Text_0, MSGBOX_YESNO
# 699 "data/maps/Coralport/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Coralport_Eventscript_ConfirmEnterCave_1
# 706 "data/maps/Coralport/scripts.pory"
	release
	end

Coralport_Eventscript_ConfirmEnterCave_1:
# 700 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, walkright
# 701 "data/maps/Coralport/scripts.pory"
	waitmovement
# 702 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_CaveSign::
# 712 "data/maps/Coralport/scripts.pory"
	lock
# 713 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_CaveSign_Text_0
# 715 "data/maps/Coralport/scripts.pory"
	closemessage
# 716 "data/maps/Coralport/scripts.pory"
	release
	end


Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe::
# 721 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0
# 722 "data/maps/Coralport/scripts.pory"
	waitmovement
# 723 "data/maps/Coralport/scripts.pory"
	delay 30
# 724 "data/maps/Coralport/scripts.pory"
	applymovement 27, walkinplacedown
# 725 "data/maps/Coralport/scripts.pory"
	waitmovement
# 726 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 727 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0
# 730 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 731 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1
# 732 "data/maps/Coralport/scripts.pory"
	closemessage
# 733 "data/maps/Coralport/scripts.pory"
	applymovement 27, faceleft
# 734 "data/maps/Coralport/scripts.pory"
	applymovement 28, faceright
# 735 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 736 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2
# 737 "data/maps/Coralport/scripts.pory"
	closemessage
# 738 "data/maps/Coralport/scripts.pory"
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
# 739 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1
# 740 "data/maps/Coralport/scripts.pory"
	waitmovement
# 741 "data/maps/Coralport/scripts.pory"
	applymovement 28, facedown
# 742 "data/maps/Coralport/scripts.pory"
	lock
# 743 "data/maps/Coralport/scripts.pory"
	setobjectnewmovementtype 28, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 744 "data/maps/Coralport/scripts.pory"
	release
# 745 "data/maps/Coralport/scripts.pory"
	applymovement 27, facedown
# 746 "data/maps/Coralport/scripts.pory"
	waitmovement
# 747 "data/maps/Coralport/scripts.pory"
	setspeaker Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0
# 748 "data/maps/Coralport/scripts.pory"
	msgbox Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3
# 752 "data/maps/Coralport/scripts.pory"
	closemessage
# 753 "data/maps/Coralport/scripts.pory"
	applymovement 28, walkinplacedown
# 754 "data/maps/Coralport/scripts.pory"
	waitmovement
# 755 "data/maps/Coralport/scripts.pory"
	delay 30
# 756 "data/maps/Coralport/scripts.pory"
	applymovement 27, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2
# 757 "data/maps/Coralport/scripts.pory"
	applymovement 28, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3
# 758 "data/maps/Coralport/scripts.pory"
	waitmovement 27
# 759 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 760 "data/maps/Coralport/scripts.pory"
	waitmovement 28
# 761 "data/maps/Coralport/scripts.pory"
	playse SE_EXIT
# 762 "data/maps/Coralport/scripts.pory"
	removeobject 27
# 763 "data/maps/Coralport/scripts.pory"
	delay 1
# 764 "data/maps/Coralport/scripts.pory"
	removeobject 28
# 765 "data/maps/Coralport/scripts.pory"
	delay 30
# 766 "data/maps/Coralport/scripts.pory"
	applymovement LOCALID_PLAYER, Coralport_Eventscript_NotYetBoardingTime_Movement_2
# 767 "data/maps/Coralport/scripts.pory"
	applymovement S_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4
# 768 "data/maps/Coralport/scripts.pory"
	applymovement A_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5
# 769 "data/maps/Coralport/scripts.pory"
	applymovement M_CORAL, Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6
# 770 "data/maps/Coralport/scripts.pory"
	waitmovement LOCALID_PLAYER
# 771 "data/maps/Coralport/scripts.pory"
	removeobject S_CORAL
# 772 "data/maps/Coralport/scripts.pory"
	delay 1
# 773 "data/maps/Coralport/scripts.pory"
	removeobject A_CORAL
# 774 "data/maps/Coralport/scripts.pory"
	delay 1
# 775 "data/maps/Coralport/scripts.pory"
	removeobject M_CORAL
# 776 "data/maps/Coralport/scripts.pory"
	delay 1
# 777 "data/maps/Coralport/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 7
# 778 "data/maps/Coralport/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_FIND_FISHERMANS_DAUGHTER
# 779 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 780 "data/maps/Coralport/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 781 "data/maps/Coralport/scripts.pory"
	fadedefaultbgm
# 782 "data/maps/Coralport/scripts.pory"
	delay 30
# 783 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_GROWLITHE
# 784 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_WOOPER_PALDEA
# 785 "data/maps/Coralport/scripts.pory"
	setseenmon SPECIES_CLODSIRE
# 786 "data/maps/Coralport/scripts.pory"
	special ShowMapNamePopup
# 787 "data/maps/Coralport/scripts.pory"
	release
	end


# 311 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_0:
# 311 "data/maps/Coralport/scripts.pory"
	walk_right
# 311 "data/maps/Coralport/scripts.pory"
	walk_down
# 311 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 312 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_1:
# 312 "data/maps/Coralport/scripts.pory"
	walk_down
# 312 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 325 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_NotYetBoardingTime_Movement_2:
# 325 "data/maps/Coralport/scripts.pory"
	walk_down
# 325 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 428 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_0:
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
# 428 "data/maps/Coralport/scripts.pory"
	walk_down
	step_end

# 448 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_1:
# 448 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 448 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 475 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_2:
# 475 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 475 "data/maps/Coralport/scripts.pory"
	face_down
	step_end

# 487 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_3:
# 487 "data/maps/Coralport/scripts.pory"
	walk_right
# 487 "data/maps/Coralport/scripts.pory"
	walk_right
	step_end

# 489 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Movement_4:
# 489 "data/maps/Coralport/scripts.pory"
	face_down
# 489 "data/maps/Coralport/scripts.pory"
	set_visible
	step_end

# 507 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_0:
# 507 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
# 507 "data/maps/Coralport/scripts.pory"
	walk_diag_southeast
	step_end

# 512 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_1:
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 512 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 515 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_2:
# 515 "data/maps/Coralport/scripts.pory"
	emote_exclamation_mark
# 515 "data/maps/Coralport/scripts.pory"
	delay_16
# 515 "data/maps/Coralport/scripts.pory"
	delay_16
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
# 515 "data/maps/Coralport/scripts.pory"
	walk_fast_right
	step_end

# 517 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodSeeingFishermanAndGrowlitheRunToTheEast_Movement_3:
# 517 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
# 517 "data/maps/Coralport/scripts.pory"
	walk_diag_northwest
	step_end

# 567 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_0:
# 567 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 567 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 567 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 567 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
# 567 "data/maps/Coralport/scripts.pory"
	walk_diag_northeast
	step_end

# 570 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_1:
# 570 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 570 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 570 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 570 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
# 570 "data/maps/Coralport/scripts.pory"
	walk_diag_southwest
	step_end

# 582 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_2:
# 582 "data/maps/Coralport/scripts.pory"
	face_down
# 582 "data/maps/Coralport/scripts.pory"
	lock_facing_direction
# 582 "data/maps/Coralport/scripts.pory"
	walk_up
# 582 "data/maps/Coralport/scripts.pory"
	unlock_facing_direction
	step_end

# 588 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_3:
# 588 "data/maps/Coralport/scripts.pory"
	set_invisible
# 588 "data/maps/Coralport/scripts.pory"
	exit_pokeball
# 588 "data/maps/Coralport/scripts.pory"
	set_visible
# 588 "data/maps/Coralport/scripts.pory"
	face_left
	step_end

# 596 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_4:
# 596 "data/maps/Coralport/scripts.pory"
	walk_left
# 596 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 618 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Movement_5:
# 618 "data/maps/Coralport/scripts.pory"
	face_player
	step_end

# 638 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_Growlithe_Movement_0:
# 638 "data/maps/Coralport/scripts.pory"
	walk_left
# 638 "data/maps/Coralport/scripts.pory"
	face_up
	step_end

# 721 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_0:
# 721 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 721 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 721 "data/maps/Coralport/scripts.pory"
	walk_slow_down
# 721 "data/maps/Coralport/scripts.pory"
	walk_slow_down
	step_end

# 739 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_1:
# 739 "data/maps/Coralport/scripts.pory"
	emote_music
# 739 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
	step_end

# 756 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_2:
# 756 "data/maps/Coralport/scripts.pory"
	walk_in_place_left
# 756 "data/maps/Coralport/scripts.pory"
	delay_16
# 756 "data/maps/Coralport/scripts.pory"
	delay_16
# 756 "data/maps/Coralport/scripts.pory"
	walk_up
# 756 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 757 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_3:
# 757 "data/maps/Coralport/scripts.pory"
	walk_in_place_right
# 757 "data/maps/Coralport/scripts.pory"
	delay_16
# 757 "data/maps/Coralport/scripts.pory"
	delay_16
# 757 "data/maps/Coralport/scripts.pory"
	walk_right
# 757 "data/maps/Coralport/scripts.pory"
	walk_up
# 757 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 767 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_4:
# 767 "data/maps/Coralport/scripts.pory"
	walk_left
# 767 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 768 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_5:
# 768 "data/maps/Coralport/scripts.pory"
	walk_right
# 768 "data/maps/Coralport/scripts.pory"
	face_down
# 768 "data/maps/Coralport/scripts.pory"
	set_invisible
	step_end

# 769 "data/maps/Coralport/scripts.pory"
Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Movement_6:
# 769 "data/maps/Coralport/scripts.pory"
	face_down
# 769 "data/maps/Coralport/scripts.pory"
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
# 269 "data/maps/Coralport/scripts.pory"
	.string "This way, please.$"

Coralport_Eventscript_SailorOnGuard_Text_4:
# 279 "data/maps/Coralport/scripts.pory"
	.string "I'm sorry but you don't have enough\n"
	.string "money for 3 tickets.$"

Coralport_Eventscript_ShipHasDeparted_Text_0:
# 296 "data/maps/Coralport/scripts.pory"
	.string "The ship has already departed for\n"
	.string "Windward Port.\p"
	.string "If you want to board the ship, please\n"
	.string "come back between 7AM and 5PM.$"

Coralport_Eventscript_NotYetBoardingTime_Text_0:
# 315 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}What now?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}It appears that we have no other\n"
	.string "choice but to wait until boarding time.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Maybe we can pay the police station a\n"
	.string "visit?\p"
	.string "I'd like to check if they've found\n"
	.string "anything about Miki.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, let's do that.$"

Coralport_Eventscript_TuberM_Text_0:
# 339 "data/maps/Coralport/scripts.pory"
	.string "Ujou$"

Coralport_Eventscript_TuberM_Text_1:
# 340 "data/maps/Coralport/scripts.pory"
	.string "Sometimes when I poke the sand\n"
	.string "castles, they move!$"

Coralport_Eventscript_Beauty_Text_0:
# 362 "data/maps/Coralport/scripts.pory"
	.string "Harehina$"

Coralport_Eventscript_Beauty_Text_1:
# 363 "data/maps/Coralport/scripts.pory"
	.string "I bought two tickets for this vacation\n"
	.string "but my damned ex cheated on me so I\l"
	.string "brought my younger brother instead.\p"
	.string "I'm enjoying this a lot more than I\n"
	.string "thought.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Good for you.$"

Coralport_Eventscript_Beauty_Text_2:
# 367 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Oh? Wait, you're just my type. How old\n"
	.string "are you?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SURPRISED}W-what?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}(Hey! Let's just bail!)$"

Coralport_Eventscript_Fisherman_Text_0:
# 380 "data/maps/Coralport/scripts.pory"
	.string "Jumaro$"

Coralport_Eventscript_Fisherman_Text_1:
# 381 "data/maps/Coralport/scripts.pory"
	.string "I'm waiting for a friend of mine.\n"
	.string "We promised to go fishing together but\l"
	.string "he's taking so long.\p"
	.string "I wonder what's wrong.$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_0:
# 404 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

Coralport_Eventscript_MustTalkToSailorOnGuard_Text_1:
# 408 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(It's not the time to wander around.\p"
	.string "We need to board the ship to Windward\n"
	.string "Port.)$"

setameamequestasreward_Text_0:
# 418 "data/maps/Coralport/scripts.pory"
	.string "set ameame quest state reward$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_0:
# 430 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_1:
# 436 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Kirijo.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Yes, Sanada-kun?$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_2:
# 439 "data/maps/Coralport/scripts.pory"
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
# 450 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Aragaki-kun, language.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Tch.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_4:
# 456 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}But indeed.\p"
	.string "The illegal experiments have already\n"
	.string "proceeded to the state of producing\l"
	.string "successful prototypes.\p"
	.string "Why do you think they haven't already\n"
	.string "been caught nor stopped?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_5:
# 462 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}... But Kurosawa-san was really kind and\n"
	.string "tried really hard to help me and Shinji.$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_6:
# 465 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Not all cops are the same.\p"
	.string "I guess he also has a battle he's\n"
	.string "fighting on his own.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}......$"

Coralport_Eventscript_AkihikoQuestioningWhyMitsuruDoesntAskPoliceForHelp_Text_7:
# 483 "data/maps/Coralport/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}I suppose the ship is ready for\n"
	.string "boarding.\l"
	.string "Let's move out.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_0:
# 532 "data/maps/Coralport/scripts.pory"
	.string "Ikumi$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_1:
# 534 "data/maps/Coralport/scripts.pory"
	.string "{COLOR RED}Continuing this quest will fast forward\n"
	.string "the clock at least 4 hours.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_2:
# 542 "data/maps/Coralport/scripts.pory"
	.string "You're back! Let's hop on my Lapras to\n"
	.string "go back to Coralport Cave entrance!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Text_3:
# 547 "data/maps/Coralport/scripts.pory"
	.string "You need to stock up on healing items?\n"
	.string "Feel free to hop on my Lapras to go\l"
	.string "back to the main land.\p"
	.string "Please come back soon, though.\l"
	.string "My daughter is still in there.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_0:
# 559 "data/maps/Coralport/scripts.pory"
	.string "How is it now, Growlithe?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_1:
# 574 "data/maps/Coralport/scripts.pory"
	.string "You mean Misa is in that cave over\n"
	.string "there?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_2:
# 579 "data/maps/Coralport/scripts.pory"
	.string "Alright!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_3:
# 599 "data/maps/Coralport/scripts.pory"
	.string "Lapras can carry all of us. Let us\n"
	.string "proceed then!$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_4:
# 608 "data/maps/Coralport/scripts.pory"
	.string "What's wrong, Growlithe?\p"
	.string "Oh, right. You're scared of water, aren't\n"
	.string "you?\p"
	.string "Well... I don't have your Pokéball and\n"
	.string "returning to your owner to get it would\l"
	.string "be time-wasting...\p"
	.string "Can you wait for us here?$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_5:
# 617 "data/maps/Coralport/scripts.pory"
	.string "Thank you, you're such a good boy.$"

Coralport_Eventscript_Fisherman_QUEST_FIND_FISHERMANS_DAUGHTER_Start_Text_6:
# 619 "data/maps/Coralport/scripts.pory"
	.string "Let's go, my daughter is waiting!$"

Coralport_Eventscript_Growlithe_Text_0:
# 653 "data/maps/Coralport/scripts.pory"
	.string "Growlithe looks worried. It seems like it\n"
	.string "won't go back to its owner until you\l"
	.string "rescue Misa.\p"
	.string "What a good boy!$"

Coralport_Eventscript_Lapras_Text_0:
# 663 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go to Coralport Cave\n"
	.string "entrance?$"

Coralport_Eventscript_Lapras_Text_1:
# 678 "data/maps/Coralport/scripts.pory"
	.string "Hop on Lapras and go back to the main\n"
	.string "land?$"

Coralport_Eventscript_ConfirmEnterCave_Text_0:
# 697 "data/maps/Coralport/scripts.pory"
	.string "{COLOR GREEN}Once you enter this cave, leaving it will\n"
	.string "fast forward the clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

Coralport_Eventscript_CaveSign_Text_0:
# 713 "data/maps/Coralport/scripts.pory"
	.string "{CLEAR_TO 60}Coralport Cave\n"
	.string "{CLEAR_TO 45}{COLOR GREEN}Time forwarding: {COLOR RED}4 hours{COLOR GREEN}.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_0:
# 727 "data/maps/Coralport/scripts.pory"
	.string "Thank you so much for saving my family\n"
	.string "back there.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You're welcome, Ikumi-san.\n"
	.string "We're glad that Misa was found safely.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_1:
# 731 "data/maps/Coralport/scripts.pory"
	.string "{DESTROY_MUGSHOT}Indeed, indeed.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_2:
# 736 "data/maps/Coralport/scripts.pory"
	.string "Thanks to you too, Growlithe! Without\n"
	.string "you, I wouldn't even know where she\l"
	.string "went to.$"

Coralport_Eventscript_QuestOldRodFishermanReturningTheGrowlithe_Text_3:
# 748 "data/maps/Coralport/scripts.pory"
	.string "Now I have to return the Growlithe to\n"
	.string "the policeman.\p"
	.string "Please make sure to come by my house\n"
	.string "later. I want to give you all something.\p"
	.string "Misa and Wooper would also be really\n"
	.string "happy to see you.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}We will!$"
