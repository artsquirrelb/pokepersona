CoralportCandyShop_MapScripts::
# 2 "data/maps/CoralportCandyShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/CoralportCandyShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 29 "data/maps/CoralportCandyShop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_4
# 4 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 0
	goto_if_ne CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 1
	goto_if_eq CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 2
	goto_if_eq CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 3
	goto_if_eq CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_1
	goto CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/CoralportCandyShop/scripts.pory"
	setobjectxyperm 3, 9, 9
# 11 "data/maps/CoralportCandyShop/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	goto CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_2
# 15 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_TEMP_3
# 16 "data/maps/CoralportCandyShop/scripts.pory"
	setobjectxyperm 5, 9, 9
# 17 "data/maps/CoralportCandyShop/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	goto CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 21 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_4
	return

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/CoralportCandyShop/scripts.pory"
	map_script_2 VAR_AMEAME_CANDY_SHOP, 1, CoralportCandyShop_MapScripts_OnFrame1
# 26 "data/maps/CoralportCandyShop/scripts.pory"
	map_script_2 VAR_AMEAME_CANDY_SHOP, 2, CoralportCandyShop_MapScripts_OnFrame2
# 27 "data/maps/CoralportCandyShop/scripts.pory"
	map_script_2 VAR_AMEAME_CANDY_SHOP, 3, CoralportCandyShop_MapScripts_OnFrame3
	.2byte 0

CoralportCandyShop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 30 "data/maps/CoralportCandyShop/scripts.pory"
	map_script_2 VAR_AMEAME_CANDY_SHOP, 2, CoralportCandyShop_MapScripts_OnWarp2
	.2byte 0


CoralportCandyShop_MapScripts_OnWarp2::
# 35 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
	return


CoralportCandyShop_MapScripts_OnFrame1::
# 39 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTimeCutscene_1
	return


CoralportCandyShop_MapScripts_OnFrame2::
# 43 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTimeCutscene_2
	return


CoralportCandyShop_MapScripts_OnFrame3::
# 47 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTimeCutscene_3
	return


CoralportCandyShop_Eventscript_ShopKeeperM::
# 51 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 52 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperM_Text_0
# 53 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperM_Text_1
# 54 "data/maps/CoralportCandyShop/scripts.pory"
	pokemart AmeAmeCandy_C1
# 55 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_set FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_ShopKeeperM_2
# 59 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperM_Text_3
CoralportCandyShop_Eventscript_ShopKeeperM_1:
# 63 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 64 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_ShopKeeperM_2:
# 56 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperM_Text_2
	goto CoralportCandyShop_Eventscript_ShopKeeperM_1


	.align 2
# 68 "data/maps/CoralportCandyShop/scripts.pory"
AmeAmeCandy_C1:
# 69 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 70 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 71 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 72 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 73 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 77 "data/maps/CoralportCandyShop/scripts.pory"
AmeAmeCandy_C2:
# 78 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 79 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 80 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 81 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 82 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 83 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 84 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 85 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 86 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_NONE

CoralportCandyShop_Eventscript_ShopKeeperF::
# 90 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 91 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 92 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 93 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 94 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_ShopKeeperF_2
# 130 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 131 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_ShopKeeperF_8
# 135 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_6
# 137 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_ShopKeeperF_1:
# 140 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 141 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 142 "data/maps/CoralportCandyShop/scripts.pory"
	refreshquesticon
	end

CoralportCandyShop_Eventscript_ShopKeeperF_2:
# 95 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_1
# 96 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 97 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 98 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 1, emoteexclamation
# 99 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 100 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 101 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_2, MSGBOX_YESNO
# 102 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_ShopKeeperF_5
# 124 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 125 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_5
# 126 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_ShopKeeperF_1

CoralportCandyShop_Eventscript_ShopKeeperF_5:
# 103 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 104 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_3
# 108 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 109 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_PARTTIME_GET, CoralportCandyShop_Eventscript_ShopKeeperF_12
CoralportCandyShop_Eventscript_ShopKeeperF_11:
# 113 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_AMEAME_PARTTIME_UNLOCKED
# 114 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_AMEAME_PARTTIME
# 115 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 116 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 117 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_4
# 118 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 119 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 120 "data/maps/CoralportCandyShop/scripts.pory"
	refreshquesticon
	end

CoralportCandyShop_Eventscript_ShopKeeperF_8:
# 132 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_QuestGiveReward
	goto CoralportCandyShop_Eventscript_ShopKeeperF_1

CoralportCandyShop_Eventscript_ShopKeeperF_12:
# 110 "data/maps/CoralportCandyShop/scripts.pory"
	call EventScript_ShowHelpPartTime
# 111 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_PARTTIME_GET
	goto CoralportCandyShop_Eventscript_ShopKeeperF_11


CoralportCandyShop_Eventscript_TimeClock::
# 147 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 148 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_TimeClock_2
# 156 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_1, MSGBOX_YESNO
# 158 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 159 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_TimeClock_5
CoralportCandyShop_Eventscript_TimeClock_1:
# 171 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_2:
# 149 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_0
# 151 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 152 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_5:
# 160 "data/maps/CoralportCandyShop/scripts.pory"
	gettime
# 161 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 8
	goto_if_ge CoralportCandyShop_Eventscript_TimeClock_9
CoralportCandyShop_Eventscript_TimeClock_8:
# 165 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox AmeAmeShiftStart
# 166 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_7:
# 162 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TimeClock_1

CoralportCandyShop_Eventscript_TimeClock_9:
# 161 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 15
	goto_if_le CoralportCandyShop_Eventscript_TimeClock_7
	goto CoralportCandyShop_Eventscript_TimeClock_8


CoralportCandyShop_Eventscript_RandomizeCutscenes::
# 180 "data/maps/CoralportCandyShop/scripts.pory"
	random 3
# 181 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_RandomizeCutscenes_2
# 184 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_RandomizeCutscenes_3
# 186 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_RandomizeCutscenes_4
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_2:
# 183 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_3:
# 185 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_4:
# 187 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime
	return


CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime::
# 192 "data/maps/CoralportCandyShop/scripts.pory"
	checkplayergender
# 193 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_2
CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1:
# 202 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 203 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 1
# 204 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 12, 3
	return

CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_2:
# 194 "data/maps/CoralportCandyShop/scripts.pory"
	getcharaAvailability CHARACTER_AKIHIKO
# 195 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_4
# 199 "data/maps/CoralportCandyShop/scripts.pory"
	switchmaincharacter
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1

CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_4:
# 196 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1


CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime::
# 208 "data/maps/CoralportCandyShop/scripts.pory"
	checkplayergender
# 209 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_2
CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1:
# 219 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 220 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 2
# 221 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 10, 6
	return

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_2:
# 210 "data/maps/CoralportCandyShop/scripts.pory"
	getcharaAvailability CHARACTER_MITSURU
# 211 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4
# 216 "data/maps/CoralportCandyShop/scripts.pory"
	switchmaincharacter
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4:
# 213 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1


CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime::
# 225 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 226 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 3
# 227 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 5, 4
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_1::
# 231 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 233 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 234 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_3
# 235 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 3, MAP_CORALPORT_CANDY_SHOP
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0
# 238 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 239 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 240 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_VEND
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1
# 243 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 244 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2
# 247 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 248 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 249 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3
# 252 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 253 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 254 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4
# 257 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 258 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 259 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 260 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 261 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 262 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_2::
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0
# 269 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 270 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 271 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 272 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_2
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5, MAP_CORALPORT_CANDY_SHOP
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	delay 8
# 275 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1
# 276 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3
# 280 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	delay 4
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5
# 285 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 286 "data/maps/CoralportCandyShop/scripts.pory"
	delay 40
# 287 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 288 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 289 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6
# 290 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 291 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 292 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 294 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 295 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 296 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8
# 299 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 300 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 301 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 302 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 303 "data/maps/CoralportCandyShop/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 9, 5, DIR_SOUTH, 2
# 304 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 305 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 306 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 307 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 308 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 309 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 310 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_3::
# 314 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 315 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 316 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 317 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, emotepensive
# 318 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 319 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0
# 320 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 321 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceleft
# 322 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 324 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 325 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, facedown
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1
# 329 "data/maps/CoralportCandyShop/scripts.pory"
	delay 60
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 332 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 333 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 334 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3
# 337 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 338 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceright
# 339 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 340 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 341 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 342 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 344 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 345 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 346 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 350 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 352 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6
# 356 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 357 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 358 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 359 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 360 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 362 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTime_RandomizeReward::
# 367 "data/maps/CoralportCandyShop/scripts.pory"
	random 8
# 368 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 371 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 372 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 373 "data/maps/CoralportCandyShop/scripts.pory"
	case 3, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 376 "data/maps/CoralportCandyShop/scripts.pory"
	case 4, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4
# 379 "data/maps/CoralportCandyShop/scripts.pory"
	case 5, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5
# 382 "data/maps/CoralportCandyShop/scripts.pory"
	case 6, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6
# 385 "data/maps/CoralportCandyShop/scripts.pory"
	case 7, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1:
# 389 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 1
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9
# 394 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 2
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10
# 401 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2
# 403 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8:
# 405 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 0
# 406 "data/maps/CoralportCandyShop/scripts.pory"
	addtime 0, 6, 0
# 407 "data/maps/CoralportCandyShop/scripts.pory"
	call EventScript_CheckDaysLeft
# 408 "data/maps/CoralportCandyShop/scripts.pory"
	call CoralportCandyShop_Eventscript_PartTime_QuestCheckDone
# 409 "data/maps/CoralportCandyShop/scripts.pory"
	warp MAP_CORALPORT, 17, 17
# 410 "data/maps/CoralportCandyShop/scripts.pory"
	waitstate
# 411 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3:
# 374 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_EXP_CANDY_M
# 375 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_EXP_CANDY_M
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4:
# 377 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_SERIOUS_MINT
# 378 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SERIOUS_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5:
# 380 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_SWEET_HEART
# 381 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWEET_HEART
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6:
# 383 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_EXP_CANDY_S
# 384 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_EXP_CANDY_S
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7:
# 386 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_LAVA_COOKIE
# 387 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LAVA_COOKIE
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9:
# 390 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0
# 392 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10:
# 396 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1
# 398 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8


CoralportCandyShop_Eventscript_PartTime_QuestCheckDone::
# 416 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 30
	goto_if_lt CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2
CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1:
# 420 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 421 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 30
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2:
# 418 "data/maps/CoralportCandyShop/scripts.pory"
	addvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 1
	goto CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4:
# 423 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0
# 425 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 426 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5:
# 421 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4
	return


CoralportCandyShop_Eventscript_QuestGiveReward::
# 431 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 432 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 433 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_0
# 434 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 1, emoteexclamation
# 435 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 436 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 437 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_1
# 439 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 440 "data/maps/CoralportCandyShop/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 441 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_2
# 442 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 443 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_AMEAME_PARTTIME
# 444 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 31
# 445 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Slurpuff::
# 449 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 450 "data/maps/CoralportCandyShop/scripts.pory"
	showmonpic SPECIES_SLURPUFF, 18, 5
# 451 "data/maps/CoralportCandyShop/scripts.pory"
	playmoncry SPECIES_SLURPUFF, CRY_MODE_NORMAL
# 452 "data/maps/CoralportCandyShop/scripts.pory"
	waitmoncry
# 453 "data/maps/CoralportCandyShop/scripts.pory"
	setseenmon SPECIES_SLURPUFF
# 454 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 455 "data/maps/CoralportCandyShop/scripts.pory"
	hidemonpic
# 456 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_FatMan::
# 461 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 462 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 463 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_FatMan_Text_0
# 464 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_FatMan_Text_1
# 465 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 466 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Twin::
# 471 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 472 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 473 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 474 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_CORALPORT_TRADED_SWEET_HEART, CoralportCandyShop_Eventscript_Twin_2
# 507 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_6
# 508 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_Twin_1:
# 510 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_2:
# 475 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_1, MSGBOX_YESNO
# 476 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_Twin_5
# 500 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 501 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_5
# 502 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_Twin_1

CoralportCandyShop_Eventscript_Twin_5:
# 477 "data/maps/CoralportCandyShop/scripts.pory"
	checkitem ITEM_SWEET_HEART
# 478 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_Twin_8
# 485 "data/maps/CoralportCandyShop/scripts.pory"
	removeitem ITEM_SWEET_HEART
# 486 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_WHIPPED_DREAM
# 487 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 488 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 489 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_3
# 490 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 491 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 492 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_4
# 493 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 494 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_CORALPORT_TRADED_SWEET_HEART
# 495 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_8:
# 479 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_2
# 480 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 481 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


# 237 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0:
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
	step_end

# 242 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1:
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	face_up
	step_end

# 246 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2:
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 251 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3:
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 256 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4:
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
	step_end

# 268 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0:
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 275 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1:
# 275 "data/maps/CoralportCandyShop/scripts.pory"
	emote_exclamation_mark
# 275 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 278 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2:
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 279 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3:
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4:
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 284 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5:
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 289 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6:
# 289 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 289 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 292 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7:
# 292 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 298 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8:
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 319 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0:
# 319 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 319 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 328 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1:
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 331 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2:
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
	step_end

# 336 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3:
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
	step_end

# 348 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4:
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 354 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5:
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 355 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6:
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

CoralportCandyShop_Eventscript_ShopKeeperM_Text_0:
# 52 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Kande$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_1:
# 53 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Welcome to AmeAme. How can I help you?$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_2:
# 56 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you and please come again!$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_3:
# 59 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you and please come again!\p"
	.string "By the way, we're looking for a\n"
	.string "part-time worker.\p"
	.string "If you're interest please speak to my\n"
	.string "wife over there.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_0:
# 93 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Gumi$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_1:
# 95 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Welcome to AmeAme!$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_2:
# 101 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Oh! Are you interested in working\n"
	.string "part-time here?$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_3:
# 104 "data/maps/CoralportCandyShop/scripts.pory"
	.string "That's great! You can start working\n"
	.string "right away!\p"
	.string "Your shift will last for {COLOR RED}6 hours{COLOR 2} and we'll\n"
	.string "pay you {COLOR RED}¥2000{COLOR 2}.\p"
	.string "Simply check the time clock to start\n"
	.string "the work.\p"
	.string "Oh, and you can only start your shift\n"
	.string "here between {COLOR BLUE}7AM and 3PM{COLOR 2}.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_4:
# 117 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You now can work part-time at {COLOR BLUE}AmeAme\n"
	.string "Candy Shop{COLOR GREEN}!$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_5:
# 125 "data/maps/CoralportCandyShop/scripts.pory"
	.string "If you know someone who's willing to\n"
	.string "work for us, please let us know.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_6:
# 135 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you so much for accepting the\n"
	.string "job.\p"
	.string "We now can spend more time with our\n"
	.string "daughter.$"

CoralportCandyShop_Eventscript_TimeClock_Text_0:
# 149 "data/maps/CoralportCandyShop/scripts.pory"
	.string "“We're looking for part-time workers\n"
	.string "for our shop.\p"
	.string "Please speak to Gumi for more\n"
	.string "information.”$"

CoralportCandyShop_Eventscript_TimeClock_Text_1:
# 156 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Start working at {COLOR BLUE}AmeAme Candy Shop{COLOR 2}?\p"
	.string "Your shift will last for {COLOR RED}6 hours{COLOR 2} and you\n"
	.string "will be paid {COLOR RED}¥2000{COLOR 2}.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0:
# 390 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Akihiko received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "He also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1:
# 396 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Mitsuru received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "She also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "her hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2:
# 401 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Shinjiro received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "He also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0:
# 423 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You have worked part-time at AmeAme\n"
	.string "Candy Shop for at least 10 times.\p"
	.string "Check back with Gumi for reward.$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_0:
# 433 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Hello {PLAYER}! here to start your\n"
	.string "shift?$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_1:
# 437 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Oh my. Now that I think of it, you've\n"
	.string "been working for us for quite a while,\l"
	.string "right?\p"
	.string "Here, you can have this. Just think it\n"
	.string "as a gift for helping us!$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_2:
# 441 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Feel free to come back anytime! We'll be\n"
	.string "very appreciated!$"

CoralportCandyShop_Eventscript_FatMan_Text_0:
# 463 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Nozomi$"

CoralportCandyShop_Eventscript_FatMan_Text_1:
# 464 "data/maps/CoralportCandyShop/scripts.pory"
	.string "I love that the candies from this shop\n"
	.string "aren't too sweet.$"

CoralportCandyShop_Eventscript_Twin_Text_0:
# 473 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aiko$"

CoralportCandyShop_Eventscript_Twin_Text_1:
# 475 "data/maps/CoralportCandyShop/scripts.pory"
	.string "My Tinkatink back home loves {COLOR 7}Sweet\n"
	.string "Heart {COLOR 2}a lot. If you have one, do you mind\l"
	.string "trading it to me for a really cool item?$"

CoralportCandyShop_Eventscript_Twin_Text_2:
# 479 "data/maps/CoralportCandyShop/scripts.pory"
	.string "But you don't have a {COLOR 7}Sweet Heart{COLOR 2}...$"

CoralportCandyShop_Eventscript_Twin_Text_3:
# 489 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{PLAYER} traded a {COLOR 7}Sweet Heart{COLOR 2} for a\n"
	.string "{COLOR 7}Whipped Dream{COLOR 2}.$"

CoralportCandyShop_Eventscript_Twin_Text_4:
# 492 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you!! My Tinkatink would be so\n"
	.string "happy!$"

CoralportCandyShop_Eventscript_Twin_Text_5:
# 501 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aw... I understand.$"

CoralportCandyShop_Eventscript_Twin_Text_6:
# 507 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you for making my Tinkatink\n"
	.string "happy!$"

AmeAmeShiftStart::
# 175 "data/maps/CoralportCandyShop/scripts.pory"
	.string "You can only start your shift here\n"
	.string "between 7AM and 3PM.$"
