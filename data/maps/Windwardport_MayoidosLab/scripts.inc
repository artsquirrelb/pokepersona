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
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 123 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_Mayoido_4
	return

Windwardport_MayoidosLab_Mayoido_2:
# 120 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_Mayoido_PrePickGrookey
	goto Windwardport_MayoidosLab_Mayoido_1

Windwardport_MayoidosLab_Mayoido_4:
# 124 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart
	return


Windwardport_MayoidosLab_ScientistF::
# 128 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 129 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 130 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 131 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 132 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_ScientistF_4
Windwardport_MayoidosLab_ScientistF_3:
# 132 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Windwardport_MayoidosLab_ScientistF_7
Windwardport_MayoidosLab_ScientistF_1:
# 136 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	gettimeofday
# 137 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Windwardport_MayoidosLab_ScientistF_11
# 137 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Windwardport_MayoidosLab_ScientistF_11
# 141 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ScientistF_Night
Windwardport_MayoidosLab_ScientistF_10:
# 143 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_ScientistF_2:
# 134 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade
	goto Windwardport_MayoidosLab_ScientistF_1

Windwardport_MayoidosLab_ScientistF_4:
# 132 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto_if_unset FLAG_STARTER_TRADE_DONE_M, Windwardport_MayoidosLab_ScientistF_2
	goto Windwardport_MayoidosLab_ScientistF_3

Windwardport_MayoidosLab_ScientistF_7:
# 132 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto_if_unset FLAG_STARTER_TRADE_DONE_F, Windwardport_MayoidosLab_ScientistF_2
	goto Windwardport_MayoidosLab_ScientistF_1

Windwardport_MayoidosLab_ScientistF_11:
# 138 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ScientistF_Day
	goto Windwardport_MayoidosLab_ScientistF_10


Windwardport_MayoidosLab_StarterTrade::
# 148 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_0
# 150 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 151 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_1
# 162 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 163 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_2, MSGBOX_YESNO
# 164 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_7
# 168 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_1:
# 152 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 153 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Text_1, MSGBOX_YESNO
# 154 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_StarterTrade_4
# 158 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_4:
# 155 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return

Windwardport_MayoidosLab_StarterTrade_7:
# 165 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return


Windwardport_MayoidosLab_StarterTrade_Reject::
# 174 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 175 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 176 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Reject_Text_0, MSGBOX_YESNO
# 177 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_StarterTrade_Reject_1
# 186 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
	return

Windwardport_MayoidosLab_StarterTrade_Reject_1:
# 178 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 179 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Reject_Text_1
# 180 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_M
# 181 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_F
# 182 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_StarterTrade_WhichRegion::
# 191 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, 0
# 192 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 193 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_0
# 194 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_1, 0
# 195 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_2, 1
# 196 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_3, 2
# 197 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_4, 3
# 198 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_5, 4
# 199 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_6, 5
# 200 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_7, 6
# 201 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_8, 7
# 202 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_9, 8
# 203 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 0, FALSE, 6, FALSE, 0, NULL
# 204 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_WhichRegion_2
# 207 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_WhichRegion_3
# 208 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_WhichRegion_4
# 209 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 3, Windwardport_MayoidosLab_StarterTrade_WhichRegion_5
# 210 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 4, Windwardport_MayoidosLab_StarterTrade_WhichRegion_6
# 211 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 5, Windwardport_MayoidosLab_StarterTrade_WhichRegion_7
# 212 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 6, Windwardport_MayoidosLab_StarterTrade_WhichRegion_8
# 213 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 7, Windwardport_MayoidosLab_StarterTrade_WhichRegion_9
# 214 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 8, Windwardport_MayoidosLab_StarterTrade_WhichRegion_10
# 215 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_2:
# 206 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Kanto
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_3:
# 207 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Johto
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_4:
# 208 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_5:
# 209 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_6:
# 210 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Unova
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_7:
# 211 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Kalos
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_8:
# 212 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Alola
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_9:
# 213 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Galar
	return

Windwardport_MayoidosLab_StarterTrade_WhichRegion_10:
# 214 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Paldea
	return


Windwardport_MayoidosLab_StarterTrade_Kanto::
# 220 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 221 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Kanto_Text_0
# 222 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_1, 0
# 223 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_2, 1
# 224 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_3, 2
# 225 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 226 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Kanto_3
# 229 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Kanto_4
# 230 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Kanto_5
# 231 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Kanto_1:
# 233 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Kanto_3:
# 228 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1

Windwardport_MayoidosLab_StarterTrade_Kanto_4:
# 229 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1

Windwardport_MayoidosLab_StarterTrade_Kanto_5:
# 230 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
	goto Windwardport_MayoidosLab_StarterTrade_Kanto_1


Windwardport_MayoidosLab_StarterTrade_Johto::
# 237 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 238 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Johto_Text_0
# 239 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_1, 0
# 240 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_2, 1
# 241 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Johto_Text_3, 2
# 242 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 243 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Johto_3
# 246 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Johto_4
# 247 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Johto_5
# 248 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Johto_1:
# 250 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Johto_3:
# 245 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1

Windwardport_MayoidosLab_StarterTrade_Johto_4:
# 246 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CYNDAQUIL
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1

Windwardport_MayoidosLab_StarterTrade_Johto_5:
# 247 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOTODILE
	goto Windwardport_MayoidosLab_StarterTrade_Johto_1


Windwardport_MayoidosLab_StarterTrade_Hoenn::
# 254 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 255 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_0
# 256 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_1, 0
# 257 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_2, 1
# 258 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_3, 2
# 259 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 260 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Hoenn_3
# 263 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Hoenn_4
# 264 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Hoenn_5
# 265 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Hoenn_1:
# 267 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Hoenn_3:
# 262 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TREECKO
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1

Windwardport_MayoidosLab_StarterTrade_Hoenn_4:
# 263 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TORCHIC
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1

Windwardport_MayoidosLab_StarterTrade_Hoenn_5:
# 264 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MUDKIP
	goto Windwardport_MayoidosLab_StarterTrade_Hoenn_1


Windwardport_MayoidosLab_StarterTrade_Sinnoh::
# 271 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 272 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_0
# 273 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_1, 0
# 274 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_2, 1
# 275 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_3, 2
# 276 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 277 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 279 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Sinnoh_3
# 280 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Sinnoh_4
# 281 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Sinnoh_5
# 282 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Sinnoh_1:
# 284 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Sinnoh_3:
# 279 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TURTWIG
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1

Windwardport_MayoidosLab_StarterTrade_Sinnoh_4:
# 280 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIMCHAR
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1

Windwardport_MayoidosLab_StarterTrade_Sinnoh_5:
# 281 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
	goto Windwardport_MayoidosLab_StarterTrade_Sinnoh_1


Windwardport_MayoidosLab_StarterTrade_Unova::
# 288 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 289 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Unova_Text_0
# 290 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_1, 0
# 291 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_2, 1
# 292 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_3, 2
# 293 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 294 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Unova_3
# 297 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Unova_4
# 298 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Unova_5
# 299 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Unova_1:
# 301 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Unova_3:
# 296 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SNIVY
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1

Windwardport_MayoidosLab_StarterTrade_Unova_4:
# 297 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TEPIG
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1

Windwardport_MayoidosLab_StarterTrade_Unova_5:
# 298 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_OSHAWOTT
	goto Windwardport_MayoidosLab_StarterTrade_Unova_1


Windwardport_MayoidosLab_StarterTrade_Kalos::
# 305 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 306 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Kalos_Text_0
# 307 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kalos_Text_1, 0
# 308 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kalos_Text_2, 1
# 309 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 8, FALSE, 3, FALSE, 0, NULL
# 310 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Kalos_3
# 313 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Kalos_4
# 314 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Kalos_1:
# 316 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Kalos_3:
# 312 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHESPIN
	goto Windwardport_MayoidosLab_StarterTrade_Kalos_1

Windwardport_MayoidosLab_StarterTrade_Kalos_4:
# 313 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FROAKIE
	goto Windwardport_MayoidosLab_StarterTrade_Kalos_1


Windwardport_MayoidosLab_StarterTrade_Alola::
# 320 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 321 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Alola_Text_0
# 322 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_1, 0
# 323 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_2, 1
# 324 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Alola_Text_3, 2
# 325 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 326 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Alola_3
# 329 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Alola_4
# 330 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Alola_5
# 331 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Alola_1:
# 333 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Alola_3:
# 328 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROWLET
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1

Windwardport_MayoidosLab_StarterTrade_Alola_4:
# 329 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1

Windwardport_MayoidosLab_StarterTrade_Alola_5:
# 330 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_POPPLIO
	goto Windwardport_MayoidosLab_StarterTrade_Alola_1


Windwardport_MayoidosLab_StarterTrade_Galar::
# 337 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 338 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Galar_Text_0
# 339 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Galar_Text_1, 0
# 340 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Galar_Text_2, 1
# 341 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 8, FALSE, 3, FALSE, 0, NULL
# 342 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Galar_3
# 345 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Galar_4
# 346 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Galar_1:
# 348 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Galar_3:
# 344 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SCORBUNNY
	goto Windwardport_MayoidosLab_StarterTrade_Galar_1

Windwardport_MayoidosLab_StarterTrade_Galar_4:
# 345 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SOBBLE
	goto Windwardport_MayoidosLab_StarterTrade_Galar_1


Windwardport_MayoidosLab_StarterTrade_Paldea::
# 352 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 353 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_StarterTrade_Paldea_Text_0
# 354 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_1, 0
# 355 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_2, 1
# 356 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Paldea_Text_3, 2
# 357 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 18, 6, FALSE, 3, FALSE, 0, NULL
# 358 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 360 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, Windwardport_MayoidosLab_StarterTrade_Paldea_3
# 361 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, Windwardport_MayoidosLab_StarterTrade_Paldea_4
# 362 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, Windwardport_MayoidosLab_StarterTrade_Paldea_5
# 363 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_StarterTrade_Paldea_1:
# 365 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ChooseMonToTrade
	return

Windwardport_MayoidosLab_StarterTrade_Paldea_3:
# 360 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPRIGATITO
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1

Windwardport_MayoidosLab_StarterTrade_Paldea_4:
# 361 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FUECOCO
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1

Windwardport_MayoidosLab_StarterTrade_Paldea_5:
# 362 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_QUAXLY
	goto Windwardport_MayoidosLab_StarterTrade_Paldea_1


Windwardport_MayoidosLab_NotTheRightOne::
# 369 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 370 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 371 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 372 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_NotTheRightOne_2
# 376 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_1
Windwardport_MayoidosLab_NotTheRightOne_1:
# 378 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 379 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 380 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 381 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_2, MSGBOX_YESNO
# 382 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_NotTheRightOne_6
# 386 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_WhichRegion
Windwardport_MayoidosLab_NotTheRightOne_5:
# 388 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	return

Windwardport_MayoidosLab_NotTheRightOne_2:
# 373 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_NotTheRightOne_Text_0
	goto Windwardport_MayoidosLab_NotTheRightOne_1

Windwardport_MayoidosLab_NotTheRightOne_6:
# 383 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	goto Windwardport_MayoidosLab_NotTheRightOne_5


Windwardport_MayoidosLab_ChooseMonToTrade::
# 392 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 393 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 394 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_ChooseMonToTrade_1
# 411 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ChooseMonToTrade_Text_1
# 412 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, SPECIES_FENNEKIN
	goto_if_ne Windwardport_MayoidosLab_ChooseMonToTrade_7
# 416 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	callnative Scrcmd_removechosenmon
# 417 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_GiveMon
	return

Windwardport_MayoidosLab_ChooseMonToTrade_1:
# 395 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ChooseMonToTrade_Text_0
# 396 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 397 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special ChooseBoxMon
# 398 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
# 399 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Windwardport_MayoidosLab_ChooseMonToTrade_5
Windwardport_MayoidosLab_ChooseMonToTrade_4:
# 402 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, SPECIES_GROOKEY
	goto_if_ne Windwardport_MayoidosLab_ChooseMonToTrade_10
# 406 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	callnative Scrcmd_removechosenmon
# 407 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_GiveMon
	return

Windwardport_MayoidosLab_ChooseMonToTrade_5:
# 400 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_StarterTrade_Reject
	goto Windwardport_MayoidosLab_ChooseMonToTrade_4

Windwardport_MayoidosLab_ChooseMonToTrade_7:
# 413 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_NotTheRightOne
	return

Windwardport_MayoidosLab_ChooseMonToTrade_10:
# 403 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_NotTheRightOne
	return


Windwardport_MayoidosLab_GiveMon::
# 423 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 424 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 425 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_0
# 426 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 427 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 428 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 429 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_POKENAV_CALL
# 430 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 431 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove 3, Windwardport_MayoidosLab_GiveMon_Movement_0
# 432 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 60
# 433 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 434 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 435 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 436 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 437 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove 3, Windwardport_MayoidosLab_GiveMon_Movement_1
# 438 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
# 439 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 440 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_1
# 441 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 442 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitfanfare
# 443 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon VAR_TEMP_0, 15, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 444 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_2
# 445 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 446 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Windwardport_MayoidosLab_GiveMon_2
# 450 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_F
Windwardport_MayoidosLab_GiveMon_1:
# 452 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistF_Text_0
# 453 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_GiveMon_Text_3
# 455 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_GiveMon_2:
# 447 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_STARTER_TRADE_DONE_M
	goto Windwardport_MayoidosLab_GiveMon_1


Windwardport_MayoidosLab_ScientistF_Day::
# 460 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistF_Day_Text_0
# 463 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_ScientistF_Night::
# 468 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistF_Night_Text_0
# 469 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_ScientistM::
# 474 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 475 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 476 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistM_Text_0
# 477 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	gettimeofday
# 478 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Windwardport_MayoidosLab_ScientistM_2
# 478 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Windwardport_MayoidosLab_ScientistM_2
# 487 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistM_Text_2
Windwardport_MayoidosLab_ScientistM_1:
# 491 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_ScientistM_2:
# 479 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ScientistM_Text_1
	goto Windwardport_MayoidosLab_ScientistM_1


Windwardport_MayoidosLab_WachiGettingScolded::
# 496 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 497 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 20
# 498 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 499 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 500 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 501 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 502 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideplayer
# 503 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_0
# 504 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 505 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_1
# 506 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 507 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_WachiGettingScolded_Movement_2
# 508 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_3
# 509 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 48
# 510 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 511 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setspeaker Windwardport_MayoidosLab_ScientistM_Text_0
# 512 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_0
# 515 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 516 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 517 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_4
# 519 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_1
# 520 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 521 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 522 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, facedown
# 523 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 524 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove WACHI_WWH, Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 525 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 526 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_5
# 527 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 528 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_2
# 529 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 8
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_6
# 531 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement WACHI_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_7
# 532 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_8
# 534 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 535 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_2
# 536 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 537 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 538 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_NotTheRightOne_Movement_0
# 539 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_3
# 545 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_9
# 547 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_4
# 549 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 550 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 551 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_5
# 558 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 559 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 560 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_10
# 562 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 70
# 563 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 564 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement MAYOIDO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_11
# 565 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_6
# 566 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 567 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_12
# 568 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 569 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_WachiGettingScolded_Text_7
# 572 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 573 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 6
# 574 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warpsilent MAP_WINDWARDPORT_MAYOIDOS_LAB, 9, 9
# 575 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_Get2ndStarter::
# 579 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 580 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 581 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_0
# 583 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 584 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_0
# 586 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 587 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 588 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 589 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_2
# 590 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 591 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_1
# 592 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 593 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_3
# 594 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 595 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_3
# 596 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_2
# 598 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 599 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 20
# 600 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_4, 1
# 601 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_5
# 602 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 603 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 604 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_3
# 605 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 606 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, 0
# 607 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove OSHA_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_6
# 608 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 70
# 609 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_BALL_OPEN
# 610 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove OSHA_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_7
# 611 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject OSHA_WWH
# 612 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 613 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_8
# 614 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Get2ndStarter_Text_4
# 615 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 616 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 617 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 618 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Windwardport_MayoidosLab_Get2ndStarter_2
Windwardport_MayoidosLab_Get2ndStarter_1:
# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_9
# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove A_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_10
# 623 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject A_WWH
# 624 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 7
# 625 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 626 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	updatefollowingmon
# 627 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Get2ndStarter_2:
# 619 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switchmaincharacter
	goto Windwardport_MayoidosLab_Get2ndStarter_1


Windwardport_MayoidosLab_MustGetGrookey::
# 632 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 633 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	moveobjecttocoords MC, 10, 6, DIR_NORTH
# 634 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitmovement
# 635 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_MustGetGrookey_Text_0
# 636 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Mitsuru::
# 641 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 642 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 643 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mitsuru_Text_0
# 644 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 645 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Shinjiro::
# 650 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 651 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 652 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Shinjiro_Text_0
# 653 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 654 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Mayoido_PrePickGrookey::
# 659 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 660 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 661 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PrePickGrookey_Text_0
# 663 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Mitsuru_Movement_0
# 664 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end


Windwardport_MayoidosLab_Grookey::
# 669 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 670 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	faceplayer
# 671 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_0, MSGBOX_YESNO
# 672 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_Grookey_1
# 680 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_2, MSGBOX_YESNO
# 681 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_Grookey_5
# 686 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_3
# 687 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 688 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon SPECIES_GROOKEY, 15, ITEM_NONE, ITEM_POKE_BALL, NATURE_ADAMANT, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, shinyMode = SHINY_MODE_NEVER
Windwardport_MayoidosLab_Grookey_4:
# 690 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	turnobject MAYOIDO_WWH, DIR_EAST
# 691 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playmoncry SPECIES_GROOKEY, 0
# 692 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 693 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_0
# 694 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 695 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_1
# 696 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 697 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_2
# 698 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 699 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_3
# 700 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 701 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 702 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_4
# 703 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_LEDGE
# 704 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Grookey_Movement_4
# 705 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 706 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_BALL
# 707 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_7
# 708 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject GROO_WWH
# 709 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 710 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_4
# 712 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 713 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	goto Windwardport_MayoidosLab_ReceiveDexNav
	return

Windwardport_MayoidosLab_Grookey_1:
# 673 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 674 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove GROO_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_12
# 675 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Grookey_Text_1
# 676 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Grookey_5:
# 682 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 683 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	givemon SPECIES_GROOKEY, 15, ITEM_NONE, ITEM_POKE_BALL, NATURE_ADAMANT, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31, shinyMode = SHINY_MODE_ALWAYS
	goto Windwardport_MayoidosLab_Grookey_4


Windwardport_MayoidosLab_ReceiveDexNav::
# 718 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollower
# 719 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 720 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 721 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	turnobject MAYOIDO_WWH, DIR_SOUTH
# 722 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement CAM, Windwardport_MayoidosLab_ReceiveDexNav_Movement_0
# 723 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_1, 1
# 724 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement M_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 725 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 726 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_4
# 727 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	stepinplace MAYOIDO_WWH, DIR_SOUTH
# 728 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_0
# 729 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_ReceiveDexNav_Movement_1
# 731 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 732 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_1
# 734 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call EventScript_ShowHelpDexNav
# 735 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call EventScript_ShowHelpBoxLink
# 736 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_2
# 743 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 744 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PIN
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_ReceiveDexNav_Movement_2
# 746 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 4
# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_ReceiveDexNav_Movement_3
# 748 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 60
# 749 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement S_WWH, Windwardport_MayoidosLab_Get2ndStarter_Movement_5
# 750 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_5, 1
# 751 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ReceiveDexNav_Text_3
# 757 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 758 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, VAR_RECEIVED_GROOKEY
# 759 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_ESCAPE_ROPE
# 760 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_MACH_BIKE
# 761 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	additem ITEM_POKEMON_BOX_LINK
# 762 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 763 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, QUEST_FIND_STARTERS
# 764 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warpsilent MAP_WINDWARDPORT_MAYOIDOS_LAB, 5, 18
# 765 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_ContinueGoingThroughRoute4::
# 769 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 770 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 771 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 772 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer walkdown, 1
# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_0
# 774 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_0
# 779 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 780 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 781 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove M_WWH, Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_1
# 782 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_EXIT
# 783 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitse
# 784 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject M_WWH
# 785 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 786 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_M_BUBBLE
# 787 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_10
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_1
# 793 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 794 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_CHAPTER_1_STATE, 9
# 795 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_PREVENT_OVERWORLD_SPEEDUP
# 796 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 797 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setflag FLAG_COMPANION_MENU_GET
# 798 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 799 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	warp MAP_WINDWARD_PORT, 0
# 800 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	waitstate
	return


Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart::
# 804 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollower
# 805 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hidefollowernpc
# 806 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 807 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement CAM, walkdown
# 808 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymoveplayer Windwardport_MayoidosLab_Get2ndStarter_Movement_1
# 809 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 810 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_TEMP_1
# 811 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm A_WWH, VAR_0x8000, VAR_0x8001
# 812 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm M_WWH, VAR_0x8000, VAR_0x8001
# 813 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setobjectxyperm S_WWH, VAR_0x8000, VAR_0x8001
# 814 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject A_WWH
# 815 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject S_WWH
# 816 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	addobject M_WWH
# 817 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	hideplayer
# 818 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_0
# 819 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, Windwardport_MayoidosLab_WachiGettingScolded_Movement_1
# 820 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 821 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_0
# 823 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkplayergender
# 824 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_1
# 829 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 830 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox
# 831 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_2
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_1:
# 846 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 847 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_4
# 850 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 851 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special SpawnCameraObject
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove CAM, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_1
# 853 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 40
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove CAM, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_2
# 855 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	special RemoveCameraObject
# 856 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_5
# 858 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 859 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymovement A_WWH, walkleft
# 860 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove S_WWH, walkright
# 861 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	showplayer
# 862 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject A_WWH
# 863 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 864 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject S_WWH
# 865 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 866 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	removeobject M_WWH
# 867 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 1
# 868 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FIND_STARTERS
# 869 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 870 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	refreshquesticon
# 871 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_2:
# 832 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, E_PENSIVE
# 833 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, walkdown
# 834 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 48
# 835 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	doemote MAYOIDO_WWH, 0
# 836 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_2
# 839 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
# 840 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	applymove MAYOIDO_WWH, Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_0
# 841 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay 30
# 842 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_3
# 844 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	closemessage
	goto Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_1


Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox::
# 876 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_FENNEKIN
# 877 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_1
# 890 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_1:
# 878 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_BRAIXEN
# 879 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_4
# 886 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_4:
# 880 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	checkpartyboxspecies SPECIES_DELPHOX
# 881 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_7
	return

Windwardport_MayoidosLab_CheckIfFennekinLineInPartyBox_7:
# 882 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Windwardport_MayoidosLab_Mayoido_PC::
# 895 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_STARTERS
# 896 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Windwardport_MayoidosLab_Mayoido_PC_2
# 904 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PC_Text_1
Windwardport_MayoidosLab_Mayoido_PC_1:
# 906 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PC_OFF
# 907 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	release
	end

Windwardport_MayoidosLab_Mayoido_PC_2:
# 897 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	lock
# 898 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	playse SE_PC_ON
# 899 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox Windwardport_MayoidosLab_Mayoido_PC_Text_0
# 900 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call MayoidosLab_PC_FolderC1
# 901 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	call MayoidosLab_PC_ShowInfo
	goto Windwardport_MayoidosLab_Mayoido_PC_1


MayoidosLab_PC_FolderC1::
# 912 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_1
# 913 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_2
MayoidosLab_PC_FolderC1_1:
# 916 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_14
# 917 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_5
MayoidosLab_PC_FolderC1_4:
# 920 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_STARTERS, SUB_QUEST_FIND_STARTER_12
# 921 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MayoidosLab_PC_FolderC1_7
	return

MayoidosLab_PC_FolderC1_2:
# 914 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Kanto_Text_1, 0
	goto MayoidosLab_PC_FolderC1_1

MayoidosLab_PC_FolderC1_5:
# 918 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Unova_Text_2, 1
	goto MayoidosLab_PC_FolderC1_4

MayoidosLab_PC_FolderC1_7:
# 922 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultipush Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_3, 2
	return


MayoidosLab_PC_ShowInfo::
# 927 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 928 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	switch VAR_RESULT
# 929 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 0, MayoidosLab_PC_ShowInfo_2
# 930 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 1, MayoidosLab_PC_ShowInfo_2
# 931 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	case 2, MayoidosLab_PC_ShowInfo_2
MayoidosLab_PC_ShowInfo_2:
# 933 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	msgbox MayoidosLab_PC_ShowInfo_Text_0
	return


# 380 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_NotTheRightOne_Movement_0:
# 380 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_sweat
	step_end

# 431 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_GiveMon_Movement_0:
# 431 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_away_player
	step_end

# 437 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_GiveMon_Movement_1:
# 437 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_player
	step_end

# 503 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_0:
# 503 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 503 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 505 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_1:
# 505 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 505 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 507 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_2:
# 507 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 507 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 507 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
	step_end

# 508 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_3:
# 508 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	shake_horizontal
# 508 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 508 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_cry
	step_end

# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_4:
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 518 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 526 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_5:
# 526 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 526 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_6:
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 530 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
	step_end

# 531 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_7:
# 531 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 531 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_8:
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 533 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_9:
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 546 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_10:
# 561 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_pensive
	step_end

# 564 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_11:
# 564 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
	step_end

# 567 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_WachiGettingScolded_Movement_12:
# 567 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_question_mark
	step_end

# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_0:
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
# 582 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_slow_up
	step_end

# 588 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_1:
# 588 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 588 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 589 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_2:
# 589 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
	step_end

# 593 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_3:
# 593 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 600 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_4:
# 600 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
	step_end

# 601 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_5:
# 601 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 607 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_6:
# 607 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
# 607 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_in_place_down
	step_end

# 610 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_7:
# 610 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	enter_pokeball
	step_end

# 613 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_8:
# 613 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 613 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_9:
# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_southeast
# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
# 621 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_visible
	step_end

# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Get2ndStarter_Movement_10:
# 622 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_invisible
	step_end

# 644 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mitsuru_Movement_0:
# 644 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_original_direction
	step_end

# 693 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_0:
# 693 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_happy
# 693 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_right
	step_end

# 695 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_1:
# 695 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_up
	step_end

# 697 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_2:
# 697 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_left
	step_end

# 699 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_3:
# 699 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_down
	step_end

# 702 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Grookey_Movement_4:
# 702 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	jump_in_place_down
	step_end

# 722 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_0:
# 722 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
	step_end

# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_1:
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_16
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 730 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_2:
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 745 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_right
	step_end

# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ReceiveDexNav_Movement_3:
# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	emote_exclamation_mark
# 747 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_left
	step_end

# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_0:
# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_down
# 773 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_up
	step_end

# 781 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Movement_1:
# 781 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
# 781 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	delay_8
# 781 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	set_invisible
	step_end

# 840 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_0:
# 840 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_up
# 840 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	face_down
	step_end

# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_1:
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_left
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_northwest
# 852 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_northwest
	step_end

# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Movement_2:
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_right
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	walk_diag_southeast
# 854 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 130 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Iria$"

Windwardport_MayoidosLab_StarterTrade_Text_0:
# 148 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "I know a friend who can trade each of\n"
	.string "you a different starter Pokémon from\l"
	.string "other regions.\p"
	.string "I can't guaranteer you their potential,\n"
	.string "though.$"

Windwardport_MayoidosLab_StarterTrade_Text_1:
# 153 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Do you want to trade your {COLOR GREEN}Grookey{COLOR 2} for\n"
	.string "another starter?$"

Windwardport_MayoidosLab_StarterTrade_Text_2:
# 163 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Do you want to trade your {COLOR GREEN}Fennekin{COLOR 2} for\n"
	.string "another starter?$"

Windwardport_MayoidosLab_StarterTrade_Reject_Text_0:
# 176 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Are you sure you don't want to trade? I\n"
	.string "won't ask you again about this matter.$"

Windwardport_MayoidosLab_StarterTrade_Reject_Text_1:
# 179 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Understood.\n"
	.string "Good luck on your journey.$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_0:
# 193 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "From which region would you want to get\n"
	.string "your new starter?$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_1:
# 194 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Kanto$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_2:
# 195 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Johto$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_3:
# 196 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Hoenn$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_4:
# 197 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sinnoh$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_5:
# 198 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Unova$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_6:
# 199 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Kalos$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_7:
# 200 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Alola$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_8:
# 201 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Galar$"

Windwardport_MayoidosLab_StarterTrade_WhichRegion_Text_9:
# 202 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Paldea$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_0:
# 221 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Kanto do you want?$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_1:
# 222 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Bulbasaur$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_2:
# 223 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Charmander$"

Windwardport_MayoidosLab_StarterTrade_Kanto_Text_3:
# 224 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Squirtle$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_0:
# 238 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Johto do you want?$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_1:
# 239 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chikorita$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_2:
# 240 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Cyndaquil$"

Windwardport_MayoidosLab_StarterTrade_Johto_Text_3:
# 241 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Totodile$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_0:
# 255 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Hoenn do you want?$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_1:
# 256 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Treecko$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_2:
# 257 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Torchic$"

Windwardport_MayoidosLab_StarterTrade_Hoenn_Text_3:
# 258 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Mudkip$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_0:
# 272 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Sinnoh do you want?$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_1:
# 273 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Turtwig$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_2:
# 274 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chimchar$"

Windwardport_MayoidosLab_StarterTrade_Sinnoh_Text_3:
# 275 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Piplup$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_0:
# 289 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Unova do you want?$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_1:
# 290 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Snivy$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_2:
# 291 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Tepig$"

Windwardport_MayoidosLab_StarterTrade_Unova_Text_3:
# 292 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Oshawott$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_0:
# 306 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Kalos do you want?$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_1:
# 307 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Chespin$"

Windwardport_MayoidosLab_StarterTrade_Kalos_Text_2:
# 308 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Froakie$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_0:
# 321 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Alola do you want?$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_1:
# 322 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Rowlet$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_2:
# 323 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Litten$"

Windwardport_MayoidosLab_StarterTrade_Alola_Text_3:
# 324 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Popplio$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_0:
# 338 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Galar do you want?$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_1:
# 339 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Scorbunny$"

Windwardport_MayoidosLab_StarterTrade_Galar_Text_2:
# 340 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sobble$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_0:
# 353 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Which starter from Paldea do you want?$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_1:
# 354 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Sprigatito$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_2:
# 355 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Fuecoco$"

Windwardport_MayoidosLab_StarterTrade_Paldea_Text_3:
# 356 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Quaxly$"

Windwardport_MayoidosLab_NotTheRightOne_Text_0:
# 373 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "That's not a {COLOR GREEN}Grookey{COLOR 2}. Don't waste my\n"
	.string "time.$"

Windwardport_MayoidosLab_NotTheRightOne_Text_1:
# 376 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "That's not a {COLOR GREEN}Fennekin{COLOR 2}. Please don't\n"
	.string "waste my time.$"

Windwardport_MayoidosLab_NotTheRightOne_Text_2:
# 381 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Choose again?$"

Windwardport_MayoidosLab_ChooseMonToTrade_Text_0:
# 395 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Now I'll take your {COLOR GREEN}Grookey{COLOR 2}.$"

Windwardport_MayoidosLab_ChooseMonToTrade_Text_1:
# 411 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Now I'll take your {COLOR GREEN}Fennekin{COLOR 2}.$"

Windwardport_MayoidosLab_GiveMon_Text_0:
# 425 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Alright, give me one moment to contact\n"
	.string "my friend.$"

Windwardport_MayoidosLab_GiveMon_Text_1:
# 440 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "They just sent me your {STR_VAR_1}.\n"
	.string "There you go.$"

Windwardport_MayoidosLab_GiveMon_Text_2:
# 444 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{STR_VAR_1} has been sent to your\n"
	.string "party.$"

Windwardport_MayoidosLab_GiveMon_Text_3:
# 453 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Treat your Pokémon well and good luck\n"
	.string "on your journey.\p"
	.string "Now I have to go back to my work.\n"
	.string "Excuse me.$"

Windwardport_MayoidosLab_ScientistF_Day_Text_0:
# 460 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Professor Mayoido often goes to the\n"
	.string "city's Pokémon Ranger building to\l"
	.string "collect data.\p"
	.string "Apparently, there have been a rise of\n"
	.string "cases where wild Pokémon developping\l"
	.string "new abilities and/or change color.\p"
	.string "We're still researching the cause.$"

Windwardport_MayoidosLab_ScientistF_Night_Text_0:
# 468 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Taking breaks is as important. Make\n"
	.string "sure you stay hydrate, too.$"

Windwardport_MayoidosLab_ScientistM_Text_0:
# 476 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Wachi$"

Windwardport_MayoidosLab_ScientistM_Text_1:
# 479 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 487 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Prof. Mayoido graduated from Kitoha\n"
	.string "College and taught there for a while.\l"
	.string "She was my teacher, actually.\p"
	.string "She can be a geek sometimes but\n"
	.string "following her around has broadened my\l"
	.string "knowledge tremendously.\p"
	.string "I can't wait for the next time our team\n"
	.string "take on a field work.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_0:
# 512 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Prof. Mayoido... I'm very sorry!!\p"
	.string "{SPEAKER NAME_PROF}Sigh... You have one job, boy. How could\n"
	.string "you forget to lock the lab...\p"
	.string "I already promised the Kirijo young\n"
	.string "lady.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_1:
# 519 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Kirijo-kun. You're here.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_2:
# 535 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Is there something wrong, Professor\n"
	.string "Mayoido?$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_3:
# 539 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 548 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Oh right, I suppose introduction is due.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_5:
# 551 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 565 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Fufufu.$"

Windwardport_MayoidosLab_WachiGettingScolded_Text_7:
# 569 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Professor?\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Ah, don't mind me.{PAUSE_UNTIL_PRESS}\n"
	.string "Let's get you three the Pokémon and\l"
	.string "the items now, shall we?$"

Windwardport_MayoidosLab_Get2ndStarter_Text_0:
# 584 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Here's the two Pokémon we have left in\n"
	.string "the lab. My apologies again for the lack\l"
	.string "of choices.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}It's fine, Prof. I appreciate it all the\n"
	.string "same.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_1:
# 591 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}You two can go ahead. I suppose you\n"
	.string "need them more than me.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_2:
# 596 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SURPRISED}Really?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Don't mind if I do then.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_3:
# 604 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Now, now, good boy, come here.$"

Windwardport_MayoidosLab_Get2ndStarter_Text_4:
# 614 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_SMILE}Your turn, Aki. Don't keep {COLOR GREEN}Grookey{COLOR 2}\n"
	.string "waiting.$"

Windwardport_MayoidosLab_MustGetGrookey_Text_0:
# 635 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(I should pick up {COLOR GREEN}Grookey{COLOR 2}.)$"

Windwardport_MayoidosLab_Mitsuru_Text_0:
# 643 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_SMILE}Go ahead, Sanada-kun. {COLOR GREEN}Grookey{COLOR 2} seems to\n"
	.string "be very excited to have you as its\l"
	.string "trainer.$"

Windwardport_MayoidosLab_Shinjiro_Text_0:
# 652 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}What are you waiting for, Aki? Hurry up\n"
	.string "so we can move along.$"

Windwardport_MayoidosLab_Mayoido_PrePickGrookey_Text_0:
# 661 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Apologies for the lack of choices.\p"
	.string "These two Pokémon are all we have left\n"
	.string "in the lab but I assure you they're well\l"
	.string "prepared and would make great\l"
	.string "companions.$"

Windwardport_MayoidosLab_Grookey_Text_0:
# 671 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Hold out a Pokéball to {COLOR GREEN}Grookey{COLOR 2}?$"

Windwardport_MayoidosLab_Grookey_Text_1:
# 675 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR GREEN}Grookey{COLOR 2} is wondering what you are.$"

Windwardport_MayoidosLab_Grookey_Text_2:
# 680 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Huh? Is that some sparkling dust\n"
	.string "around it?)$"

Windwardport_MayoidosLab_Grookey_Text_3:
# 686 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}Nah, my eyes were just playing tricks on\n"
	.string "me.$"

Windwardport_MayoidosLab_Grookey_Text_4:
# 710 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR GREEN}Grookey{COLOR 2} excitedly went into the\n"
	.string "Pokéball.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE}Welcome to the team, Grookey.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_0:
# 728 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Very well, now these are the items you\n"
	.string "requested, Kirijo-kun.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_1:
# 732 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}{COLOR 7}DexNav{COLOR 2}, {COLOR 7}Escape Rope{COLOR 2}, {COLOR 7}Bike{COLOR 2} and {COLOR 7}Pokémon\n"
	.string "Box Link{COLOR 2}, for each of you.$"

Windwardport_MayoidosLab_ReceiveDexNav_Text_2:
# 736 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 751 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 774 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Now that we received our package, we\n"
	.string "should continue going west of the city\l"
	.string "for Goldenwings Mt.\p"
	.string "Is there any question?\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}... {PAUSE 30}Nope.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_PENSIVE}... {PAUSE 60}Me neither.\p"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}..... {PAUSE 60}Very well then, let's get going.$"

Windwardport_MayoidosLab_ContinueGoingThroughRoute4_Text_1:
# 788 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_PENSIVE}She would even risk her life, she said...\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_PENSIVE}I wonder what she's fighting for.\p"
	.string "I'm sure if Miki is in danger I'll\n"
	.string "definitely risk my life to save her.\p"
	.string "{SPEAKER NAME_S}{CREATE_MUGSHOT MUGSHOT_S EMOTE_NORMAL}I guess we'll know when we reach\n"
	.string "Goldenwings Mt.\p"
	.string "Let's go.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_0:
# 821 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Hello, my lovely children. The lab has\n"
	.string "been busy and we appreciate any help we\l"
	.string "can get.\p"
	.string "If you can spare the time, would you\n"
	.string "like to help us?$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_1:
# 824 "data/maps/Windwardport_MayoidosLab/scripts.pory"
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
# 836 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Your {COLOR 7}{STR_VAR_2}{COLOR 2}! That's the one\n"
	.string "that ran away!\p"
	.string "Well, I'm not sure how it ended up with\n"
	.string "you but it's a relief then, one species\l"
	.string "secured.\p"
	.string "Don't worry, you can keep it.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_3:
# 842 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Now where were we?{PAUSE_UNTIL_PRESS}\n"
	.string "Oh right, yes. The missing Pokémon all\l"
	.string "have the same feature like that.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_4:
# 847 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}Understood. We'll keep an eye out for\n"
	.string "them.\p"
	.string "{SPEAKER NAME_PROF}{DESTROY_MUGSHOT}Perfect, our staff will also actively\n"
	.string "look for them as well and will update\l"
	.string "any information they've found in the\l"
	.string "computer over there.$"

Windwardport_MayoidosLab_Mayoido_QuestStarterFindStart_Text_5:
# 856 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{SPEAKER NAME_PROF}Be sure to check it from time to time.\p"
	.string "Thank you for your help.$"

Windwardport_MayoidosLab_Mayoido_PC_Text_0:
# 899 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "{COLOR 7}-Retrieving Starter Pokémon-\n"
	.string "{COLOR 2}Which information you'd like to check?$"

Windwardport_MayoidosLab_Mayoido_PC_Text_1:
# 904 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "There's a wall of numbers on the screen\n"
	.string "that makes no sense to you.$"

MayoidosLab_PC_ShowInfo_Text_0:
# 933 "data/maps/Windwardport_MayoidosLab/scripts.pory"
	.string "Todo$"
