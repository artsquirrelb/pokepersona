Windwardport_MayoidosLab_MapScripts::
# 2 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Windwardport_MayoidosLab_MapScripts_OnTransition
# 3 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Windwardport_MayoidosLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Windwardport_MayoidosLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Windwardport_MayoidosLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 5, Windwardport_MayoidosLab_MapScripts_OnFrame5
# 5 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 6, Windwardport_MayoidosLab_MapScripts_OnFrame6
# 6 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY, Windwardport_MayoidosLab_MapScripts_PostGrookey
	.2byte 0

Windwardport_MayoidosLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, 6, Windwardport_MayoidosLab_MapScripts_OnWarp
# 10 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	map_script_2 VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY, Windwardport_MayoidosLab_MapScripts_OnWarp
	.2byte 0


Windwardport_MayoidosLab_MapScripts_OnWarp::
# 15 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideobjectat IRIA_WWH, MAP_WINDWARDPORT_MAYOIDOS_LAB
# 16 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideobjectat WACHI_WWH, MAP_WINDWARDPORT_MAYOIDOS_LAB
# 17 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideobjectat AEGISLASH_WWH, MAP_WINDWARDPORT_MAYOIDOS_LAB
# 18 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideobjectat SINISTCHA_WWH, MAP_WINDWARDPORT_MAYOIDOS_LAB
	return


Windwardport_MayoidosLab_MapScripts_OnTransition::
# 22 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_TEMP_2
# 24 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 5
	goto_if_eq Windwardport_MayoidosLab_MapScripts_OnTransition_2
Windwardport_MayoidosLab_MapScripts_OnTransition_1:
# 32 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 6
	goto_if_eq Windwardport_MayoidosLab_MapScripts_OnTransition_5
Windwardport_MayoidosLab_MapScripts_OnTransition_4:
# 45 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY
	goto_if_eq Windwardport_MayoidosLab_MapScripts_OnTransition_8
Windwardport_MayoidosLab_MapScripts_OnTransition_7:
# 60 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY
	goto_if_gt Windwardport_MayoidosLab_MapScripts_OnTransition_10
	return

Windwardport_MayoidosLab_MapScripts_OnTransition_2:
# 26 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 27 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm WACHI_WWH, 7, 17
# 28 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype WACHI_WWH, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm MAYOIDO_WWH, 8, 17
# 30 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype MAYOIDO_WWH, MOVEMENT_TYPE_FACE_LEFT
	goto Windwardport_MayoidosLab_MapScripts_OnTransition_1

Windwardport_MayoidosLab_MapScripts_OnTransition_5:
# 33 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 34 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 35 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 36 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_2
# 37 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_3
# 38 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm M_WWH, 9, 7
# 39 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm S_WWH, 8, 7
# 40 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm A_WWH, 10, 7
# 41 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 42 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 43 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
	goto Windwardport_MayoidosLab_MapScripts_OnTransition_4

Windwardport_MayoidosLab_MapScripts_OnTransition_8:
# 46 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 47 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 48 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 49 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm M_WWH, 5, 18
# 50 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm S_WWH, 4, 18
# 51 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm A_WWH, 6, 18
# 52 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm WACHI_WWH, 18, 18
# 53 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype M_WWH, MOVEMENT_TYPE_FACE_DOWN
# 54 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype S_WWH, MOVEMENT_TYPE_FACE_DOWN
# 55 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype A_WWH, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 57 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 58 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
	goto Windwardport_MayoidosLab_MapScripts_OnTransition_7

Windwardport_MayoidosLab_MapScripts_OnTransition_10:
# 61 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	gettimeofday
# 62 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_eq Windwardport_MayoidosLab_MapScripts_OnTransition_12
# 62 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 4
	goto_if_eq Windwardport_MayoidosLab_MapScripts_OnTransition_12
	return

Windwardport_MayoidosLab_MapScripts_OnTransition_12:
# 63 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm WACHI_WWH, 3, 9
# 64 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype WACHI_WWH, MOVEMENT_TYPE_FACE_UP
# 65 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm IRIA_WWH, 13, 15
# 66 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectmovementtype IRIA_WWH, MOVEMENT_TYPE_FACE_UP
	return


Windwardport_MayoidosLab_MapScripts_OnFrame5::
# 73 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 74 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	destroyfollowernpc
# 75 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_COMPANION_MENU_GET
# 76 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_WachiGettingScolded
	return


Windwardport_MayoidosLab_MapScripts_OnFrame6::
# 80 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 81 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_Get2ndStarter
	return


Windwardport_MayoidosLab_MapScripts_PostGrookey::
# 85 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideobjectat WACHI_WWH, MAP_WINDWARDPORT_MAYOIDOS_LAB
# 86 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ContinueGoingThroughRoute4
	return


Windwardport_MayoidosLab_BedroomSign::
# 89 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 90 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_BedroomSign_Text_0
# 91 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_LabRoomSign::
# 96 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 97 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_LabRoomSign_Text_0
# 98 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Aegislash::
# 103 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	moncryscript SPECIES_AEGISLASH
# 104 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Aegislash_Text_0
# 105 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Sinistcha::
# 110 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	moncryscript SPECIES_SINISTCHA
# 111 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Mayoido::
# 116 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 117 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 118 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 119 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_CHAPTER_1_STATE, 7
	goto_if_eq Windwardport_MayoidosLab_Mayoido_2
Windwardport_MayoidosLab_Mayoido_1:
# 122 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 123 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_Mayoido_6
Windwardport_MayoidosLab_Mayoido_4:
# 126 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 127 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_Mayoido_10
Windwardport_MayoidosLab_Mayoido_9:
# 130 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS
# 131 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_Mayoido_13
# 135 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto MayoidosLab_Mayoido_AllStartersFound
Windwardport_MayoidosLab_Mayoido_12:
# 137 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 138 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 139 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Mayoido_2:
# 120 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_Mayoido_PrePickGrookey
	goto Windwardport_MayoidosLab_Mayoido_1

Windwardport_MayoidosLab_Mayoido_5:
# 124 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto MayoidosLab_Mayoido_FoundSquirtle
	goto Windwardport_MayoidosLab_Mayoido_4

Windwardport_MayoidosLab_Mayoido_6:
# 123 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CHILLING_WATER, Windwardport_MayoidosLab_Mayoido_5
	goto Windwardport_MayoidosLab_Mayoido_4

Windwardport_MayoidosLab_Mayoido_10:
# 128 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart
	goto Windwardport_MayoidosLab_Mayoido_9

Windwardport_MayoidosLab_Mayoido_13:
# 132 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto MayoidosLab_Mayoido_StartersNotFound
	goto Windwardport_MayoidosLab_Mayoido_12


Windwardport_MayoidosLab_ScientistF::
# 143 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 144 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 145 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 146 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 147 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_ScientistF_4
Windwardport_MayoidosLab_ScientistF_3:
# 147 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Windwardport_MayoidosLab_ScientistF_7
Windwardport_MayoidosLab_ScientistF_1:
# 151 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	gettimeofday
# 152 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Windwardport_MayoidosLab_ScientistF_11
# 152 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Windwardport_MayoidosLab_ScientistF_11
# 156 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ScientistF_Night
Windwardport_MayoidosLab_ScientistF_10:
# 158 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_ScientistF_2:
# 149 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade
	goto Windwardport_MayoidosLab_ScientistF_1

Windwardport_MayoidosLab_ScientistF_4:
# 147 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto_if_unset FLAG_STARTER_TRADE_DONE_M, Windwardport_MayoidosLab_ScientistF_2
	goto Windwardport_MayoidosLab_ScientistF_3

Windwardport_MayoidosLab_ScientistF_7:
# 147 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto_if_unset FLAG_STARTER_TRADE_DONE_F, Windwardport_MayoidosLab_ScientistF_2
	goto Windwardport_MayoidosLab_ScientistF_1

Windwardport_MayoidosLab_ScientistF_11:
# 153 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ScientistF_Day
	goto Windwardport_MayoidosLab_ScientistF_10


Windwardport_MayoidosLab_StarterTrade::
# 163 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_0
# 165 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 166 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_1
# 177 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 178 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_2, MSGBOX_YESNO
# 179 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_7
# 183 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_1:
# 167 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 168 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_1, MSGBOX_YESNO
# 169 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_4
# 173 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_4:
# 170 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return

Windwardport_MayoidosLab_StarterTrade_7:
# 180 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return


Windwardport_MayoidosLab_StarterTrade_Reject::
# 189 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 190 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 191 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Reject_Text_0, MSGBOX_YESNO
# 192 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_StarterTrade_Reject_1
# 201 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_Reject_1:
# 193 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 194 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Reject_Text_1
# 195 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_M
# 196 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_F
# 197 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_StarterTrade_WhichRegion::
# 206 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 207 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 208 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_0
# 209 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_1, 0
# 210 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_2, 1
# 211 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_3, 2
# 212 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_4, 3
# 213 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_5, 4
# 214 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_6, 5
# 215 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_7, 6
# 216 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_8, 7
# 217 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_9, 8
# 218 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 0, FALSE, 6, FALSE, 0, NULL
# 219 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_WhichRegion_2
# 222 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_WhichRegion_3
# 223 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_WhichRegion_4
# 224 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 3, Windwardport_MayoidosLab_StarterTrade_WhichRegion_5
# 225 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 4, Windwardport_MayoidosLab_StarterTrade_WhichRegion_6
# 226 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 5, Windwardport_MayoidosLab_StarterTrade_WhichRegion_7
# 227 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 6, Windwardport_MayoidosLab_StarterTrade_WhichRegion_8
# 228 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 7, Windwardport_MayoidosLab_StarterTrade_WhichRegion_9
# 229 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 8, Windwardport_MayoidosLab_StarterTrade_WhichRegion_10
# 230 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_2:
# 221 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Kanto
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_3:
# 222 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Johto
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_4:
# 223 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_5:
# 224 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_6:
# 225 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Unova
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_7:
# 226 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Kalos
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_8:
# 227 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Alola
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_9:
# 228 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Galar
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_10:
# 229 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Paldea
	return


Windwardport_MayoidosLab_StarterTrade_Kanto::
# 235 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 236 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Kanto_Text_0
# 237 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_1, 0
# 238 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_2, 1
# 239 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_3, 2
# 240 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 241 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Kanto_3
# 244 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Kanto_4
# 245 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Kanto_5
# 246 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Kanto_1:
# 248 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Kanto_3:
# 243 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1

Windwardport_MayoidosLab_StarterTrade_Kanto_4:
# 244 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1

Windwardport_MayoidosLab_StarterTrade_Kanto_5:
# 245 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1


Windwardport_MayoidosLab_StarterTrade_Johto::
# 252 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 253 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Johto_Text_0
# 254 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_1, 0
# 255 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_2, 1
# 256 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_3, 2
# 257 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 258 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Johto_3
# 261 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Johto_4
# 262 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Johto_5
# 263 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Johto_1:
# 265 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Johto_3:
# 260 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1

Windwardport_MayoidosLab_StarterTrade_Johto_4:
# 261 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CYNDAQUIL
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1

Windwardport_MayoidosLab_StarterTrade_Johto_5:
# 262 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOTODILE
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1


Windwardport_MayoidosLab_StarterTrade_Hoenn::
# 269 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 270 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_0
# 271 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_1, 0
# 272 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_2, 1
# 273 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_3, 2
# 274 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 275 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Hoenn_3
# 278 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Hoenn_4
# 279 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Hoenn_5
# 280 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Hoenn_1:
# 282 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Hoenn_3:
# 277 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TREECKO
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1

Windwardport_MayoidosLab_StarterTrade_Hoenn_4:
# 278 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TORCHIC
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1

Windwardport_MayoidosLab_StarterTrade_Hoenn_5:
# 279 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MUDKIP
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1


Windwardport_MayoidosLab_StarterTrade_Sinnoh::
# 286 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 287 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_0
# 288 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_1, 0
# 289 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_2, 1
# 290 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_3, 2
# 291 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 292 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 294 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Sinnoh_3
# 295 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Sinnoh_4
# 296 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Sinnoh_5
# 297 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Sinnoh_1:
# 299 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Sinnoh_3:
# 294 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TURTWIG
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1

Windwardport_MayoidosLab_StarterTrade_Sinnoh_4:
# 295 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIMCHAR
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1

Windwardport_MayoidosLab_StarterTrade_Sinnoh_5:
# 296 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1


Windwardport_MayoidosLab_StarterTrade_Unova::
# 303 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 304 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Unova_Text_0
# 305 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_1, 0
# 306 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_2, 1
# 307 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_3, 2
# 308 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 309 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Unova_3
# 312 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Unova_4
# 313 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Unova_5
# 314 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Unova_1:
# 316 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Unova_3:
# 311 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SNIVY
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1

Windwardport_MayoidosLab_StarterTrade_Unova_4:
# 312 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TEPIG
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1

Windwardport_MayoidosLab_StarterTrade_Unova_5:
# 313 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_OSHAWOTT
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1


Windwardport_MayoidosLab_StarterTrade_Kalos::
# 320 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 321 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Kalos_Text_0
# 322 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kalos_Text_1, 0
# 323 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kalos_Text_2, 1
# 324 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 8, FALSE, 3, FALSE, 0, NULL
# 325 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Kalos_3
# 328 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Kalos_4
# 329 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Kalos_1:
# 331 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Kalos_3:
# 327 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHESPIN
	goto Windwardport_MayoidosLab_StarterTrade_Kalos_1

Windwardport_MayoidosLab_StarterTrade_Kalos_4:
# 328 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FROAKIE
	goto Windwardport_MayoidosLab_StarterTrade_Kalos_1


Windwardport_MayoidosLab_StarterTrade_Alola::
# 335 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 336 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Alola_Text_0
# 337 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_1, 0
# 338 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_2, 1
# 339 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_3, 2
# 340 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 341 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 343 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Alola_3
# 344 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Alola_4
# 345 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Alola_5
# 346 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Alola_1:
# 348 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Alola_3:
# 343 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROWLET
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1

Windwardport_MayoidosLab_StarterTrade_Alola_4:
# 344 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1

Windwardport_MayoidosLab_StarterTrade_Alola_5:
# 345 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_POPPLIO
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1


Windwardport_MayoidosLab_StarterTrade_Galar::
# 352 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 353 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Galar_Text_0
# 354 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Galar_Text_1, 0
# 355 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Galar_Text_2, 1
# 356 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 8, FALSE, 3, FALSE, 0, NULL
# 357 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 359 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Galar_3
# 360 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Galar_4
# 361 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Galar_1:
# 363 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Galar_3:
# 359 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SCORBUNNY
	goto Windwardport_MayoidosLab_StarterTrade_Galar_1

Windwardport_MayoidosLab_StarterTrade_Galar_4:
# 360 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SOBBLE
	goto Windwardport_MayoidosLab_StarterTrade_Galar_1


Windwardport_MayoidosLab_StarterTrade_Paldea::
# 367 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 368 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Paldea_Text_0
# 369 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_1, 0
# 370 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_2, 1
# 371 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_3, 2
# 372 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 373 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 375 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Paldea_3
# 376 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Paldea_4
# 377 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Paldea_5
# 378 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Paldea_1:
# 380 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Paldea_3:
# 375 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPRIGATITO
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1

Windwardport_MayoidosLab_StarterTrade_Paldea_4:
# 376 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FUECOCO
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1

Windwardport_MayoidosLab_StarterTrade_Paldea_5:
# 377 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_QUAXLY
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1


Windwardport_MayoidosLab_NotTheRightOne::
# 384 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 385 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 386 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 387 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_NotTheRightOne_2
# 391 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_1
Windwardport_MayoidosLab_NotTheRightOne_1:
# 393 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 394 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 395 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 396 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_2, MSGBOX_YESNO
# 397 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_NotTheRightOne_6
# 401 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_NotTheRightOne_5:
# 403 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	return

Windwardport_MayoidosLab_NotTheRightOne_2:
# 388 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_0
	goto Windwardport_MayoidosLab_NotTheRightOne_1

Windwardport_MayoidosLab_NotTheRightOne_6:
# 398 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	goto Windwardport_MayoidosLab_NotTheRightOne_5


Windwardport_MayoidosLab_ChooseMonToTrade::
# 407 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 408 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 409 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_ChooseMonToTrade_1
# 426 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ChooseMonToTrade_Text_1
# 427 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, SPECIES_FENNEKIN
	goto_if_ne Windwardport_MayoidosLab_ChooseMonToTrade_7
# 431 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	callnative Scrcmd_removechosenmon
# 432 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_GiveMon
	return

Windwardport_MayoidosLab_ChooseMonToTrade_1:
# 410 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ChooseMonToTrade_Text_0
# 411 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 412 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special ChooseBoxMon
# 413 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
# 414 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Windwardport_MayoidosLab_ChooseMonToTrade_5
Windwardport_MayoidosLab_ChooseMonToTrade_4:
# 417 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, SPECIES_GROOKEY
	goto_if_ne Windwardport_MayoidosLab_ChooseMonToTrade_10
# 421 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	callnative Scrcmd_removechosenmon
# 422 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_GiveMon
	return

Windwardport_MayoidosLab_ChooseMonToTrade_5:
# 415 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	goto Windwardport_MayoidosLab_ChooseMonToTrade_4

Windwardport_MayoidosLab_ChooseMonToTrade_7:
# 428 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_NotTheRightOne
	return

Windwardport_MayoidosLab_ChooseMonToTrade_10:
# 418 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_NotTheRightOne
	return


Windwardport_MayoidosLab_GiveMon::
# 438 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 439 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 440 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_0
# 441 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 442 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 443 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 444 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_POKENAV_CALL
# 445 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 446 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove 3, Windwardport_MayoidosLab_GiveMon_Movement_0
# 447 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 60
# 448 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 449 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 450 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 451 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 452 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove 3, Windwardport_MayoidosLab_GiveMon_Movement_1
# 453 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
# 454 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 455 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_1
# 456 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 457 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitfanfare
# 458 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon VAR_TEMP_0, 15, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 459 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_2
# 460 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 461 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_GiveMon_2
# 465 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_F
Windwardport_MayoidosLab_GiveMon_1:
# 467 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 468 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_3
# 470 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_GiveMon_2:
# 462 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_M
	goto Windwardport_MayoidosLab_GiveMon_1


Windwardport_MayoidosLab_ScientistF_Day::
# 475 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistF_Day_Text_0
# 478 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_ScientistF_Night::
# 483 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistF_Night_Text_0
# 484 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_ScientistM::
# 489 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 490 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 491 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistM_Text_0
# 492 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	gettimeofday
# 493 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Windwardport_MayoidosLab_ScientistM_2
# 493 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Windwardport_MayoidosLab_ScientistM_2
# 502 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistM_Text_2
Windwardport_MayoidosLab_ScientistM_1:
# 506 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_ScientistM_2:
# 494 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistM_Text_1
	goto Windwardport_MayoidosLab_ScientistM_1


Windwardport_MayoidosLab_WachiGettingScolded::
# 511 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 512 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 20
# 513 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 514 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 515 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 516 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 517 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideplayer
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_0
# 519 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 520 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_1
# 521 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_WachiGettingScolded_Movement_2
# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_3
# 524 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 48
# 525 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 526 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistM_Text_0
# 527 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_0
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 531 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 532 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_4
# 534 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_1
# 535 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 536 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 537 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, facedown
# 538 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 539 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 540 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 541 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_5
# 542 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 543 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_2
# 544 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 8
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_6
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement WACHI_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_7
# 547 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_8
# 549 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 550 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_2
# 551 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 552 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 553 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 554 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_3
# 560 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_9
# 562 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 563 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_4
# 564 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 565 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 566 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_5
# 573 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 574 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 575 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 576 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_10
# 577 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 70
# 578 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 579 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_11
# 580 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_6
# 581 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_12
# 583 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 584 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_7
# 587 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 588 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 6
# 589 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warpsilent MAP_WINDWARDPORT_MAYOIDOS_LAB, 9, 9
# 590 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_Get2ndStarter::
# 594 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 595 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 596 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 597 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_0
# 598 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 599 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_0
# 601 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 602 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 603 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 604 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_2
# 605 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 606 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_1
# 607 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 608 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_3
# 609 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 610 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_3
# 611 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_2
# 613 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 614 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 20
# 615 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_4, 1
# 616 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_5
# 617 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 618 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 619 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_3
# 620 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove OSHA_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_6
# 623 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 70
# 624 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_BALL_OPEN
# 625 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove OSHA_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_7
# 626 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject OSHA_WWH
# 627 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 628 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_8
# 629 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_4
# 630 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 631 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 632 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 633 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Windwardport_MayoidosLab_Get2ndStarter_2
Windwardport_MayoidosLab_Get2ndStarter_1:
# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_9
# 637 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_10
# 638 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject A_WWH
# 639 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 7
# 640 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 641 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	updatefollowingmon
# 642 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Get2ndStarter_2:
# 634 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switchmaincharacter
	goto Windwardport_MayoidosLab_Get2ndStarter_1


Windwardport_MayoidosLab_MustGetGrookey::
# 647 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 648 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	moveobjecttocoords MC, 10, 6, DIR_NORTH
# 649 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitmovement
# 650 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_MustGetGrookey_Text_0
# 651 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Mitsuru::
# 656 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 657 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 658 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mitsuru_Text_0
# 659 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 660 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Shinjiro::
# 665 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 666 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 667 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Shinjiro_Text_0
# 668 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 669 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Mayoido_PrePickGrookey::
# 674 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 675 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 676 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PrePickGrookey_Text_0
# 678 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 679 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Grookey::
# 684 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 685 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 686 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_0, MSGBOX_YESNO
# 687 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_Grookey_1
# 695 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_2, MSGBOX_YESNO
# 696 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_Grookey_5
# 701 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_3
# 702 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 703 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon SPECIES_GROOKEY, 15, ITEM_NONE, ITEM_POKE_BALL, NATURE_ADAMANT, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, shinyMode = SHINY_MODE_NEVER
Windwardport_MayoidosLab_Grookey_4:
# 705 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	turnobject MAYOIDO_WWH, DIR_EAST
# 706 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playmoncry SPECIES_GROOKEY, 0
# 707 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 708 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_0
# 709 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 710 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_1
# 711 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 712 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_2
# 713 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 714 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_3
# 715 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 716 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 717 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_4
# 718 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 719 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_4
# 720 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 721 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_BALL
# 722 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_7
# 723 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject GROO_WWH
# 724 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 725 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_4
# 727 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 728 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ReceiveDexNav
	return

Windwardport_MayoidosLab_Grookey_1:
# 688 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 689 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_12
# 690 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_1
# 691 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Grookey_5:
# 697 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 698 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon SPECIES_GROOKEY, 15, ITEM_NONE, ITEM_POKE_BALL, NATURE_ADAMANT, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, shinyMode = SHINY_MODE_ALWAYS
	goto Windwardport_MayoidosLab_Grookey_4


Windwardport_MayoidosLab_ReceiveDexNav::
# 733 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollower
# 734 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 735 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 736 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	turnobject MAYOIDO_WWH, DIR_SOUTH
# 737 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement CAM, Windwardport_MayoidosLab_ReceiveDexNav_Movement_0
# 738 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_1, 1
# 739 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement M_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 740 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 741 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 742 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	stepinplace MAYOIDO_WWH, DIR_SOUTH
# 743 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_0
# 744 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_ReceiveDexNav_Movement_1
# 746 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_1
# 749 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call EventScript_ShowHelpDexNav
# 750 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call EventScript_ShowHelpBoxLink
# 751 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_2
# 758 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 759 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 760 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_ReceiveDexNav_Movement_2
# 761 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 762 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_ReceiveDexNav_Movement_3
# 763 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 60
# 764 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_5
# 765 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_5, 1
# 766 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_3
# 772 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY
# 774 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 775 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_MACH_BIKE
# 776 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_POKEMON_BOX_LINK
# 777 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 778 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_STARTERS
# 779 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warpsilent MAP_WINDWARDPORT_MAYOIDOS_LAB, 5, 18
# 780 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_ContinueGoingThroughRoute4::
# 784 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 785 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 786 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 787 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer walkdown, 1
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_0
# 789 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_0
# 794 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 795 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_1
# 797 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_EXIT
# 798 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 799 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject M_WWH
# 800 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 801 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 802 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_10
# 803 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_1
# 808 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 809 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 9
# 810 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 811 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 812 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_COMPANION_MENU_GET
# 813 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 814 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warp MAP_WINDWARD_PORT, 0
# 815 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart::
# 819 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollower
# 820 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollowernpc
# 821 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 822 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement CAM, walkdown
# 823 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 824 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 825 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 826 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm A_WWH, VAR_0x8000, VAR_0x8001
# 827 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm M_WWH, VAR_0x8000, VAR_0x8001
# 828 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm S_WWH, VAR_0x8000, VAR_0x8001
# 829 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 830 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 831 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 832 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideplayer
# 833 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_0
# 834 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_1
# 835 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 836 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_0
# 838 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 839 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_1
# 844 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 845 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox
# 846 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_2
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_1:
# 861 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 862 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_4
# 865 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 866 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove CAM, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_1
# 868 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove CAM, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_2
# 870 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special RemoveCameraObject
# 871 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_5
# 873 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 874 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, walkleft
# 875 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, walkright
# 876 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	showplayer
# 877 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject A_WWH
# 878 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 879 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject S_WWH
# 880 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 881 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject M_WWH
# 882 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 883 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_STARTERS
# 884 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 885 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 886 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_2:
# 847 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, E_PENSIVE
# 848 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, walkdown
# 849 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 48
# 850 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, 0
# 851 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_2
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 855 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_0
# 856 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 857 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_3
# 859 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
	goto Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_1


Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox::
# 891 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_FENNEKIN
# 892 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_1
# 905 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_1:
# 893 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_BRAIXEN
# 894 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_4
# 901 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_4:
# 895 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_DELPHOX
# 896 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_7
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_7:
# 897 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Windwardport_MayoidosLab_Mayoido_PC::
# 910 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 911 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_Mayoido_PC_2
# 919 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PC_Text_1
Windwardport_MayoidosLab_Mayoido_PC_1:
# 921 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PC_OFF
# 922 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Mayoido_PC_2:
# 912 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 913 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PC_ON
# 914 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PC_Text_0
# 915 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call MayoidosLab_PC_FolderC1
# 916 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call MayoidosLab_PC_ShowInfo
	goto Windwardport_MayoidosLab_Mayoido_PC_1


MayoidosLab_PC_FolderC1::
# 927 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_10
# 928 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_2
MayoidosLab_PC_FolderC1_1:
# 931 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_14
# 932 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_5
MayoidosLab_PC_FolderC1_4:
# 935 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_3
# 936 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_7
	return

MayoidosLab_PC_FolderC1_2:
# 929 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_1, 0
	goto MayoidosLab_PC_FolderC1_1

MayoidosLab_PC_FolderC1_5:
# 933 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_2, 1
	goto MayoidosLab_PC_FolderC1_4

MayoidosLab_PC_FolderC1_7:
# 937 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_3, 2
	return


MayoidosLab_PC_ShowInfo::
# 942 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 943 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 944 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, MayoidosLab_PC_ShowInfo_2
# 945 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, MayoidosLab_PC_ShowInfo_3
# 946 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, MayoidosLab_PC_ShowInfo_3
MayoidosLab_PC_ShowInfo_3:
# 948 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_PC_ShowInfo_Text_0
	return

MayoidosLab_PC_ShowInfo_2:
# 944 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto ShowSquirtleInfo
	return


ShowSquirtleInfo::
# 953 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox ShowSquirtleInfo_Text_0
# 954 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


MayoidosLab_Mayoido_FoundSquirtle::
# 959 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, 0
# 960 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_Mayoido_FoundSquirtle_Text_0
# 961 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 962 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	giveitem ITEM_TM_CHILLING_WATER
# 963 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_Mayoido_FoundSquirtle_Text_1, MSGBOX_YESNO
# 967 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MayoidosLab_Mayoido_FoundSquirtle_2
# 974 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_Mayoido_FoundSquirtle_Text_2
MayoidosLab_Mayoido_FoundSquirtle_1:
# 977 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS
# 978 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_Mayoido_FoundSquirtle_5
# 982 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, 0
# 983 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto MayoidosLab_Mayoido_AllStartersFound
	return

MayoidosLab_Mayoido_FoundSquirtle_2:
# 968 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 969 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 15, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, move1 = MOVE_YAWN, move2 = MOVE_FAKE_OUT, move3 = MOVE_LIFE_DEW, move4 = MOVE_WATER_PULSE
# 970 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call Eventscript_PostGivemon
# 971 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHILLING_WATER
	goto MayoidosLab_Mayoido_FoundSquirtle_1

MayoidosLab_Mayoido_FoundSquirtle_5:
# 979 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto MayoidosLab_Mayoido_StartersNotFound
	return


MayoidosLab_Mayoido_StartersNotFound::
# 988 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_Mayoido_StartersNotFound_Text_0
# 989 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 990 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 991 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


MayoidosLab_Mayoido_AllStartersFound::
# 996 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_Mayoido_AllStartersFound_Text_0
# 1000 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 1001 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 1002 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


# 395 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_NotTheRightOne_Movement_0:
# 395 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_sweat
	step_end

# 446 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_GiveMon_Movement_0:
# 446 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_away_player
	step_end

# 452 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_GiveMon_Movement_1:
# 452 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_player
	step_end

# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_0:
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 520 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_1:
# 520 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 520 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_2:
# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
	step_end

# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_3:
# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	shake_horizontal
# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_cry
	step_end

# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_4:
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 541 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_5:
# 541 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 541 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_6:
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
	step_end

# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_7:
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_8:
# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_9:
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 576 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_10:
# 576 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_pensive
	step_end

# 579 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_11:
# 579 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
	step_end

# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_12:
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_question_mark
	step_end

# 597 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_0:
# 597 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
# 597 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
# 597 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
	step_end

# 603 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_1:
# 603 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 603 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 604 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_2:
# 604 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
	step_end

# 608 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_3:
# 608 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 615 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_4:
# 615 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
	step_end

# 616 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_5:
# 616 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_6:
# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_in_place_down
	step_end

# 625 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_7:
# 625 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	enter_pokeball
	step_end

# 628 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_8:
# 628 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 628 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_9:
# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_southeast
# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_visible
	step_end

# 637 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_10:
# 637 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_invisible
	step_end

# 659 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mitsuru_Movement_0:
# 659 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_original_direction
	step_end

# 708 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_0:
# 708 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
# 708 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_right
	step_end

# 710 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_1:
# 710 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_up
	step_end

# 712 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_2:
# 712 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_left
	step_end

# 714 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_3:
# 714 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_down
	step_end

# 717 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_4:
# 717 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_in_place_down
	step_end

# 737 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_0:
# 737 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
	step_end

# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_1:
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 760 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_2:
# 760 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 760 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 762 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_3:
# 762 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 762 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_0:
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_1:
# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_8
# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_invisible
	step_end

# 855 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_0:
# 855 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 855 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_1:
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_northwest
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_northwest
	step_end

# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_2:
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_southeast
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_southeast
	step_end

Windwardport_MayoidosLab_BedroomSign_Text_0:
# 90 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Staff's Restroom.$"

Windwardport_MayoidosLab_LabRoomSign_Text_0:
# 97 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Laboratory.$"

Windwardport_MayoidosLab_Aegislash_Text_0:
# 104 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "The Aegislash refused to budge no\n"
	.string "matter what.$"

Windwardport_MayoidosLab_ScientistF_Text_0:
# 145 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Iria$"

Windwardport_MayoidosLab_StarterTrade_Text_0:
# 163 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "I know a friend who can trade each of\n"
	.string "you a different starter Pokémon from\l"
	.string "other regions.\p"
	.string "I can't guaranteer you their potential,\n"
	.string "though.$"

Windwardport_MayoidosLab_StarterTrade_Text_1:
# 168 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Do you want to trade your {COLOR GREEN}Grookey{COLOR 2} for\n"
	.string "another starter?$"

Windwardport_MayoidosLab_StarterTrade_Text_2:
# 178 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Do you want to trade your {COLOR GREEN}Fennekin{COLOR 2} for\n"
	.string "another starter?$"

Windwardport_MayoidosLab_StarterTrade_Reject_Text_0:
# 191 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Are you sure you don't want to trade? I\n"
	.string "won't ask you again about this matter.$"

Windwardport_MayoidosLab_StarterTrade_Reject_Text_1:
# 194 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Understood.\n"
	.string "Good luck on your journey.$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_0:
# 208 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "From which region would you want to get\n"
	.string "your new starter?$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_1:
# 209 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Kanto$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_2:
# 210 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Johto$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_3:
# 211 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Hoenn$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_4:
# 212 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sinnoh$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_5:
# 213 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Unova$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_6:
# 214 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Kalos$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_7:
# 215 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Alola$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_8:
# 216 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Galar$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_9:
# 217 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Paldea$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_0:
# 236 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Kanto do you want?$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_1:
# 237 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Bulbasaur$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_2:
# 238 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Charmander$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_3:
# 239 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Squirtle$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_0:
# 253 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Johto do you want?$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_1:
# 254 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chikorita$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_2:
# 255 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Cyndaquil$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_3:
# 256 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Totodile$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_0:
# 270 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Hoenn do you want?$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_1:
# 271 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Treecko$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_2:
# 272 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Torchic$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_3:
# 273 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Mudkip$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_0:
# 287 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Sinnoh do you want?$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_1:
# 288 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Turtwig$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_2:
# 289 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chimchar$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_3:
# 290 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Piplup$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_0:
# 304 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Unova do you want?$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_1:
# 305 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Snivy$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_2:
# 306 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Tepig$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_3:
# 307 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Oshawott$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_0:
# 321 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Kalos do you want?$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_1:
# 322 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chespin$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_2:
# 323 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Froakie$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_0:
# 336 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Alola do you want?$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_1:
# 337 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Rowlet$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_2:
# 338 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Litten$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_3:
# 339 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Popplio$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_0:
# 353 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Galar do you want?$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_1:
# 354 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Scorbunny$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_2:
# 355 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sobble$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_0:
# 368 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Paldea do you want?$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_1:
# 369 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sprigatito$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_2:
# 370 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Fuecoco$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_3:
# 371 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Quaxly$"

Windwardport_MayoidosLab_NotTheRightOne_Text_0:
# 388 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "That's not a {COLOR GREEN}Grookey{COLOR 2}. Don't waste my\n"
	.string "time.$"

Windwardport_MayoidosLab_NotTheRightOne_Text_1:
# 391 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "That's not a {COLOR GREEN}Fennekin{COLOR 2}. Please don't\n"
	.string "waste my time.$"

Windwardport_MayoidosLab_NotTheRightOne_Text_2:
# 396 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Choose again?$"

Windwardport_MayoidosLab_ChooseMonToTrade_Text_0:
# 410 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Now I'll take your {COLOR GREEN}Grookey{COLOR 2}.$"

Windwardport_MayoidosLab_ChooseMonToTrade_Text_1:
# 426 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Now I'll take your {COLOR GREEN}Fennekin{COLOR 2}.$"

Windwardport_MayoidosLab_GiveMon_Text_0:
# 440 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Alright, give me one moment to contact\n"
	.string "my friend.$"

Windwardport_MayoidosLab_GiveMon_Text_1:
# 455 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "They just sent me your {STR_VAR_1}.\n"
	.string "There you go.$"

Windwardport_MayoidosLab_GiveMon_Text_2:
# 459 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{STR_VAR_1} has been sent to your\n"
	.string "party.$"

Windwardport_MayoidosLab_GiveMon_Text_3:
# 468 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Treat your Pokémon well and good luck\n"
	.string "on your journey.\p"
	.string "Now I have to go back to my work.\n"
	.string "Excuse me.$"

Windwardport_MayoidosLab_ScientistF_Day_Text_0:
# 475 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Professor Mayoido often goes to the\n"
	.string "city's Pokémon Ranger building to\l"
	.string "collect data.\p"
	.string "Apparently, there have been a rise of\n"
	.string "cases where wild Pokémon developping\l"
	.string "new abilities and/or change color.\p"
	.string "We're still researching the cause.$"

Windwardport_MayoidosLab_ScientistF_Night_Text_0:
# 483 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Taking breaks is as important. Make\n"
	.string "sure you stay hydrate, too.$"

Windwardport_MayoidosLab_ScientistM_Text_0:
# 491 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Wachi$"

Windwardport_MayoidosLab_ScientistM_Text_1:
# 494 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "I'm in charge of cooking for the team,\n"
	.string "actually.\p"
	.string "I'm just your average home chef,\n"
	.string "though.\p"
	.string "Prof. Mayoido is a very capable woman\n"
	.string "but you really, really don't want her\l"
	.string "near a kitchen.\p"
	.string "The last time she did, the house nearly\n"
	.string "exploded.\p"
	.string "As for Iria-san... well, she's\n"
	.string "overworked.\p"
	.string "So yeah, I'm the only one who can.$"

Windwardport_MayoidosLab_ScientistM_Text_2:
# 502 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Prof. Mayoido graduated from Kitoha\n"
	.string "College and taught there for a while.\l"
	.string "She was my teacher, actually.\p"
	.string "She can be a geek sometimes but\n"
	.string "following her around has broadened my\l"
	.string "knowledge tremendously.\p"
	.string "I can't wait for the next time our team\n"
	.string "take on a field work.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_0:
# 527 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Prof. Mayoido... I'm very sorry!!\p"
	.string "{SPEAKER NAME_PROF}Sigh... You have one job, boy. How could\n"
	.string "you forget to lock the lab...\p"
	.string "I already promised the Kirijo young\n"
	.string "lady.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_1:
# 534 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Kirijo-kun. You're here.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_2:
# 550 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Is there something wrong, Professor\n"
	.string "Mayoido?$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_3:
# 554 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Apologies, Kirijo-kun.\n"
	.string "We had a little accident and most of the\l"
	.string "Pokémon we'd prepared for your mission\l"
	.string "run away.\p"
	.string "We only managed to secure 2 of them at\n"
	.string "the moment.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}I see.\n"
	.string "What about the items?\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}All done and functioning well.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Magnifique.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_4:
# 563 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Oh right, I suppose introduction is due.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_5:
# 566 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Professor, this is Akihiko Sanada-kun\n"
	.string "and Shinjiro Aragaki-kun.\p"
	.string "They're my companions for the mission.\p"
	.string "Sanada-kun, Aragaki-kun, this is\n"
	.string "Professor Mayoido.\p"
	.string "I did field works for her a few years\n"
	.string "ago.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Please to meet you!\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Same here.\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Please to meet you too, Sanada-kun and\n"
	.string "Aragaki-kun.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_6:
# 580 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Fufufu.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_7:
# 584 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Professor?\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Ah, don't mind me.{PAUSE_UNTIL_PRESS}\n"
	.string "Let's get you three the Pokémon and\l"
	.string "the items now, shall we?$"

Windwardport_MayoidosLab_Get2ndStarter_Text_0:
# 599 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Here's the two Pokémon we have left in\n"
	.string "the lab. My apologies again for the lack\l"
	.string "of choices.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}It's fine, Prof. I appreciate it all the\n"
	.string "same.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_1:
# 606 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}You two can go ahead. I suppose you\n"
	.string "need them more than me.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_2:
# 611 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Really?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Don't mind if I do then.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_3:
# 619 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Now, now, good boy, come here.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_4:
# 629 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Your turn, Aki. Don't keep {COLOR GREEN}Grookey{COLOR 2}\n"
	.string "waiting.$"

Windwardport_MayoidosLab_MustGetGrookey_Text_0:
# 650 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(I should pick up {COLOR GREEN}Grookey{COLOR 2}.)$"

Windwardport_MayoidosLab_Mitsuru_Text_0:
# 658 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Go ahead, Sanada-kun. {COLOR GREEN}Grookey{COLOR 2} seems to\n"
	.string "be very excited to have you as its\l"
	.string "trainer.$"

Windwardport_MayoidosLab_Shinjiro_Text_0:
# 667 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}What are you waiting for, Aki? Hurry up\n"
	.string "so we can move along.$"

Windwardport_MayoidosLab_Mayoido_PrePickGrookey_Text_0:
# 676 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Apologies for the lack of choices.\p"
	.string "These two Pokémon are all we have left\n"
	.string "in the lab but I assure you they're well\l"
	.string "prepared and would make great\l"
	.string "companions.$"

Windwardport_MayoidosLab_Grookey_Text_0:
# 686 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Hold out a Pokéball to {COLOR GREEN}Grookey{COLOR 2}?$"

Windwardport_MayoidosLab_Grookey_Text_1:
# 690 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR GREEN}Grookey{COLOR 2} is wondering what you are.$"

Windwardport_MayoidosLab_Grookey_Text_2:
# 695 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Huh? Is that some sparkling dust\n"
	.string "around it?)$"

Windwardport_MayoidosLab_Grookey_Text_3:
# 701 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Nah, my eyes were just playing tricks on\n"
	.string "me.$"

Windwardport_MayoidosLab_Grookey_Text_4:
# 725 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR GREEN}Grookey{COLOR 2} excitedly went into the\n"
	.string "Pokéball.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Welcome to the team, Grookey.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_0:
# 743 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Very well, now these are the items you\n"
	.string "requested, Kirijo-kun.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_1:
# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}{COLOR 7}DexNav{COLOR 2}, {COLOR 7}Escape Rope{COLOR 2}, {COLOR 7}Bike{COLOR 2} and {COLOR 7}Pokémon\n"
	.string "Box Link{COLOR 2}, for each of you.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_2:
# 751 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Woah...{PAUSE_UNTIL_PRESS}\n"
	.string "We can get all these stuff for free?\p"
	.string "I'm pretty sure the {COLOR 7}DexNav{COLOR 2} alone costs\n"
	.string "a fortune...\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}There's no free meal in this world, my\n"
	.string "young guy.\p"
	.string "Let's just say it's a fair trade.\p"
	.string "I, more than anyone, want Kirijo-kun's\n"
	.string "mission to be a success.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SERIOUS}Rest assured, Prof. I'll do whatever it\n"
	.string "takes. Even if it's risking my life.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_3:
# 766 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Ahahaha, you and your father are really\n"
	.string "two peas in a pot.\p"
	.string "Anyway, that's all I have for you right\n"
	.string "now but feel free to help out in the lab\l"
	.string "as you usually do, Kirijo-kun.\p"
	.string "Sanada-kun and Aragaki-kun are\n"
	.string "welcomed to as well, considering that\l"
	.string "you were hand-picked by Kirijo-kun.\p"
	.string "There'll be rewards for your\n"
	.string "contribution, of course.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}I appreciate your help, Prof. Mayoido.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}We'll take our leaves now. Please take\n"
	.string "care.$"

Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_0:
# 789 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Now that we received our package, we\n"
	.string "should continue going west of the city\l"
	.string "for Goldenwings Mt.\p"
	.string "Is there any question?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}... {PAUSE 30}Nope.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_PENSIVE}... {PAUSE 60}Me neither.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}..... {PAUSE 60}Very well then, let's get going.$"

Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_1:
# 803 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_PENSIVE}She would even risk her life, she said...\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_PENSIVE}I wonder what she's fighting for.\p"
	.string "I'm sure if Miki is in danger I'll\n"
	.string "definitely risk my life to save her.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}I guess we'll know when we reach\n"
	.string "Goldenwings Mt.\p"
	.string "Let's go.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_0:
# 836 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Hello, my lovely children. The lab has\n"
	.string "been busy and we appreciate any help we\l"
	.string "can get.\p"
	.string "If you can spare the time, would you\n"
	.string "like to help us?$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_1:
# 839 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Certainly. How can we help you?\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}As you've known, the Pokémon we've\n"
	.string "worked so hard to prepared for your\l"
	.string "journey have run away.\p"
	.string "When you're travelling through the\n"
	.string "region, if you happen to see them,\l"
	.string "please secure them for us.\p"
	.string "They're the starter Pokémon in other\n"
	.string "regions and there's a special sparkle on\l"
	.string "each of them.\p"
	.string "You will know right away when you\n"
	.string "approach them.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_2:
# 851 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Your {COLOR 7}{STR_VAR_2}{COLOR 2}! That's the one\n"
	.string "that ran away!\p"
	.string "Well, I'm not sure how it ended up with\n"
	.string "you but it's a relief then, one species\l"
	.string "secured.\p"
	.string "Don't worry, you can keep it.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_3:
# 857 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Now where were we?{PAUSE_UNTIL_PRESS}\n"
	.string "Oh right, yes. The missing Pokémon all\l"
	.string "have the same feature like that.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_4:
# 862 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Understood. We'll keep an eye out for\n"
	.string "them.\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Perfect, our staff will also actively\n"
	.string "look for them as well and will update\l"
	.string "any information they've found in the\l"
	.string "computer over there.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_5:
# 871 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Be sure to check it from time to time.\p"
	.string "Thank you for your help.$"

Windwardport_MayoidosLab_Mayoido_PC_Text_0:
# 914 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR 7}-Retrieving Starter Pokémon-\n"
	.string "{COLOR 2}Which information you'd like to check?$"

Windwardport_MayoidosLab_Mayoido_PC_Text_1:
# 919 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "There's a wall of numbers on the screen\n"
	.string "that makes no sense to you.$"

MayoidosLab_PC_ShowInfo_Text_0:
# 948 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Todo$"

ShowSquirtleInfo_Text_0:
# 953 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR 7}There were sighting of a sparkling\n"
	.string "Squirtle swimming toward Sunshine Town.$"

MayoidosLab_Mayoido_FoundSquirtle_Text_0:
# 960 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}You're back!\n"
	.string "As promised, here's the reward for\l"
	.string "finding the Squirtle!$"

MayoidosLab_Mayoido_FoundSquirtle_Text_1:
# 963 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Well, one more thing, though.\p"
	.string "The Squirtle isn't very happy being\n"
	.string "cooped up in the lab.\p"
	.string "I think it'll be better if it goes with\n"
	.string "you.\p"
	.string "How do you say?$"

MayoidosLab_Mayoido_FoundSquirtle_Text_2:
# 974 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}That's a shame but I respect your\n"
	.string "choice.\p"
	.string "We'll raise it the best we can.$"

MayoidosLab_Mayoido_StartersNotFound_Text_0:
# 988 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}There are still missing starter Pokémon.\n"
	.string "Let's give it our best to retrieve them.$"

MayoidosLab_Mayoido_AllStartersFound_Text_0:
# 996 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}You've found all the missing starters!\p"
	.string "I really can't thank you enough.\p"
	.string "I trust that they're in your good care,\n"
	.string "{VERSION}-kun.\p"
	.string "Well then, if the lab is in need of your\n"
	.string "help again, I'll let you know.$"
