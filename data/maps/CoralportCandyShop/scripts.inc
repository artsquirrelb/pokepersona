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
# 55 "data/maps/CoralportCandyShop/scripts.pory"
	pokemart AmeAmeCandy_C1
# 56 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_set FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_ShopKeeperM_2
# 60 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperM_Text_3
CoralportCandyShop_Eventscript_ShopKeeperM_1:
# 64 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 65 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_ShopKeeperM_2:
# 57 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperM_Text_2
	goto CoralportCandyShop_Eventscript_ShopKeeperM_1


	.align 2
# 69 "data/maps/CoralportCandyShop/scripts.pory"
AmeAmeCandy_C1:
# 70 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 71 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 72 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 73 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 74 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 78 "data/maps/CoralportCandyShop/scripts.pory"
AmeAmeCandy_C2:
# 79 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 80 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 81 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 82 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 83 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 84 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 85 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 86 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 87 "data/maps/CoralportCandyShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_NONE

CoralportCandyShop_Eventscript_ShopKeeperF::
# 91 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 92 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 93 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 94 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 95 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_ShopKeeperF_2
# 131 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 132 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_ShopKeeperF_8
# 136 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_6
# 138 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_ShopKeeperF_1:
# 141 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 142 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 143 "data/maps/CoralportCandyShop/scripts.pory"
	refreshquesticon
	end

CoralportCandyShop_Eventscript_ShopKeeperF_2:
# 96 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_1
# 97 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 98 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 99 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 1, emoteexclamation
# 100 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 101 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 102 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_2, MSGBOX_YESNO
# 103 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_ShopKeeperF_5
# 125 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 126 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_5
# 127 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_ShopKeeperF_1

CoralportCandyShop_Eventscript_ShopKeeperF_5:
# 104 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 105 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_3
# 109 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 110 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_PARTTIME_GET, CoralportCandyShop_Eventscript_ShopKeeperF_12
CoralportCandyShop_Eventscript_ShopKeeperF_11:
# 114 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_AMEAME_PARTTIME_UNLOCKED
# 115 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_AMEAME_PARTTIME
# 116 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 117 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 118 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_4
# 119 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 120 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 121 "data/maps/CoralportCandyShop/scripts.pory"
	refreshquesticon
	end

CoralportCandyShop_Eventscript_ShopKeeperF_8:
# 133 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_QuestGiveReward
	goto CoralportCandyShop_Eventscript_ShopKeeperF_1

CoralportCandyShop_Eventscript_ShopKeeperF_12:
# 111 "data/maps/CoralportCandyShop/scripts.pory"
	call EventScript_ShowHelpPartTime
# 112 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_PARTTIME_GET
	goto CoralportCandyShop_Eventscript_ShopKeeperF_11


CoralportCandyShop_Eventscript_TimeClock::
# 148 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 149 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_TimeClock_2
# 157 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_1, MSGBOX_YESNO
# 159 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 160 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_TimeClock_5
CoralportCandyShop_Eventscript_TimeClock_1:
# 172 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_2:
# 150 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_0
# 152 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 153 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_5:
# 161 "data/maps/CoralportCandyShop/scripts.pory"
	gettime
# 162 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 8
	goto_if_ge CoralportCandyShop_Eventscript_TimeClock_9
CoralportCandyShop_Eventscript_TimeClock_8:
# 166 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox AmeAmeShiftStart
# 167 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_7:
# 163 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TimeClock_1

CoralportCandyShop_Eventscript_TimeClock_9:
# 162 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 15
	goto_if_le CoralportCandyShop_Eventscript_TimeClock_7
	goto CoralportCandyShop_Eventscript_TimeClock_8


CoralportCandyShop_Eventscript_RandomizeCutscenes::
# 181 "data/maps/CoralportCandyShop/scripts.pory"
	random 3
# 182 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_RandomizeCutscenes_2
# 185 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_RandomizeCutscenes_3
# 187 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_RandomizeCutscenes_4
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_2:
# 184 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_3:
# 186 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_4:
# 188 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime
	return


CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime::
# 193 "data/maps/CoralportCandyShop/scripts.pory"
	checkplayergender
# 194 "data/maps/CoralportCandyShop/scripts.pory"
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
# 195 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_set FLAG_LOCK_AKIHIKO, CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_4
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
# 218 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 219 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 2
# 220 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 10, 6
	return

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_2:
# 210 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_set FLAG_LOCK_MITSURU, CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4
# 215 "data/maps/CoralportCandyShop/scripts.pory"
	switchmaincharacter
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4:
# 212 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1


CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime::
# 224 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 225 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 3
# 226 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 5, 4
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_1::
# 230 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 231 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 233 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_3
# 234 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 3, MAP_CORALPORT_CANDY_SHOP
# 235 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 238 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 239 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_VEND
# 240 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 243 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 244 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 247 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 248 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 249 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 252 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 253 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 254 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 257 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 258 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 259 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 260 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 262 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_2::
# 266 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 269 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 270 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 271 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_2
# 272 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5, MAP_CORALPORT_CANDY_SHOP
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	delay 8
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1
# 275 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 276 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 280 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	delay 4
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 285 "data/maps/CoralportCandyShop/scripts.pory"
	delay 40
# 286 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 287 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 288 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6
# 289 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 290 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 291 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 292 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 294 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 295 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 296 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 299 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 300 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 301 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 302 "data/maps/CoralportCandyShop/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 9, 5, DIR_SOUTH, 2
# 303 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 304 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 305 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 306 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 307 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 309 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_3::
# 313 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 314 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 315 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 316 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, emotepensive
# 317 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 318 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0
# 319 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 320 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceleft
# 321 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 322 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 324 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 325 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, facedown
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	delay 60
# 329 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 332 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 333 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 334 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 337 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceright
# 338 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 339 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 340 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 341 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 342 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 344 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 345 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 346 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 350 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 352 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 356 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 357 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 358 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 2000
# 359 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 360 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 361 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTime_RandomizeReward::
# 366 "data/maps/CoralportCandyShop/scripts.pory"
	random 8
# 367 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 369 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 370 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 371 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 372 "data/maps/CoralportCandyShop/scripts.pory"
	case 3, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 375 "data/maps/CoralportCandyShop/scripts.pory"
	case 4, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4
# 378 "data/maps/CoralportCandyShop/scripts.pory"
	case 5, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5
# 381 "data/maps/CoralportCandyShop/scripts.pory"
	case 6, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6
# 384 "data/maps/CoralportCandyShop/scripts.pory"
	case 7, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1:
# 388 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 1
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9
# 393 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 2
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10
# 400 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2
# 402 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8:
# 404 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 0
# 405 "data/maps/CoralportCandyShop/scripts.pory"
	addtime 0, 6, 0
# 406 "data/maps/CoralportCandyShop/scripts.pory"
	call EventScript_CheckDaysLeft
# 407 "data/maps/CoralportCandyShop/scripts.pory"
	call CoralportCandyShop_Eventscript_PartTime_QuestCheckDone
# 408 "data/maps/CoralportCandyShop/scripts.pory"
	warp MAP_CORALPORT, 17, 17
# 409 "data/maps/CoralportCandyShop/scripts.pory"
	waitstate
# 410 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3:
# 373 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_EXP_CANDY_M
# 374 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_EXP_CANDY_M
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4:
# 376 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_SERIOUS_MINT
# 377 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SERIOUS_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5:
# 379 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_SWEET_HEART
# 380 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SWEET_HEART
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6:
# 382 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_EXP_CANDY_S
# 383 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_EXP_CANDY_S
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7:
# 385 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_LAVA_COOKIE
# 386 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LAVA_COOKIE
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9:
# 389 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0
# 391 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10:
# 395 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1
# 397 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8


CoralportCandyShop_Eventscript_PartTime_QuestCheckDone::
# 415 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 30
	goto_if_lt CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2
CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1:
# 419 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 420 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 30
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2:
# 417 "data/maps/CoralportCandyShop/scripts.pory"
	addvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 1
	goto CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4:
# 422 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0
# 424 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 425 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5:
# 420 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4
	return


CoralportCandyShop_Eventscript_QuestGiveReward::
# 430 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 431 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 432 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_0
# 433 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 1, emoteexclamation
# 434 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 435 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 436 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_1
# 438 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 439 "data/maps/CoralportCandyShop/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 440 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_2
# 441 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 442 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_AMEAME_PARTTIME
# 443 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 31
# 444 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Slurpuff::
# 448 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 449 "data/maps/CoralportCandyShop/scripts.pory"
	showmonpic SPECIES_SLURPUFF, 18, 5
# 450 "data/maps/CoralportCandyShop/scripts.pory"
	playmoncry SPECIES_SLURPUFF, CRY_MODE_NORMAL
# 451 "data/maps/CoralportCandyShop/scripts.pory"
	waitmoncry
# 452 "data/maps/CoralportCandyShop/scripts.pory"
	setseenmon SPECIES_SLURPUFF
# 453 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 454 "data/maps/CoralportCandyShop/scripts.pory"
	hidemonpic
# 455 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_FatMan::
# 460 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 461 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 462 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_FatMan_Text_0
# 463 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_FatMan_Text_1
# 464 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 465 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Twin::
# 470 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 471 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 472 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 473 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_CORALPORT_TRADED_SWEET_HEART, CoralportCandyShop_Eventscript_Twin_2
# 506 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_6
# 507 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_Twin_1:
# 509 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_2:
# 474 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_1, MSGBOX_YESNO
# 476 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_Twin_5
# 499 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 500 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_5
# 501 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_Twin_1

CoralportCandyShop_Eventscript_Twin_5:
	checkitem ITEM_SWEET_HEART
# 0 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CoralportCandyShop_Eventscript_Twin_8
# 484 "data/maps/CoralportCandyShop/scripts.pory"
	removeitem ITEM_SWEET_HEART
# 485 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_WHIPPED_DREAM
# 486 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 487 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 488 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_3
# 489 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 490 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 491 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_4
# 492 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 493 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_CORALPORT_TRADED_SWEET_HEART
# 494 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_8:
# 478 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_2
# 479 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 480 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


# 236 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0:
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
	step_end

# 241 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1:
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	face_up
	step_end

# 245 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2:
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 250 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3:
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 255 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4:
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
	step_end

# 267 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0:
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 274 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1:
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	emote_exclamation_mark
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 277 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2:
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 278 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3:
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 281 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4:
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 283 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5:
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6:
# 288 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 288 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 291 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7:
# 291 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 297 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8:
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 318 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0:
# 318 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 318 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 327 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1:
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 330 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2:
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
	step_end

# 335 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3:
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
	step_end

# 347 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4:
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 353 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5:
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6:
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
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

CoralportCandyShop_Eventscript_ShopKeeperM_Text_0:
# 52 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Kande$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_1:
# 53 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Welcome to AmeAme.\n"
	.string "How can I help you?$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_2:
# 57 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you and please come again!$"

CoralportCandyShop_Eventscript_ShopKeeperM_Text_3:
# 60 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you and please come again!\p"
	.string "By the way, we're looking for a\n"
	.string "part-time worker.\p"
	.string "If you're interested, please speak to\n"
	.string "my wife over there.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_0:
# 94 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Gumi$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_1:
# 96 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Welcome to AmeAme!$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_2:
# 102 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Oh! Are you interested in working\n"
	.string "part-time here?$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_3:
# 105 "data/maps/CoralportCandyShop/scripts.pory"
	.string "That's great! You can start working\n"
	.string "right away!\p"
	.string "Your shift will last for {COLOR RED}6 hours{COLOR 2} and we'll\n"
	.string "pay you {COLOR RED}¥2000{COLOR 2}.\p"
	.string "Simply check the time clock to start\n"
	.string "the work.\p"
	.string "Oh, and you can only start your shift\n"
	.string "here between {COLOR BLUE}7AM and 3PM{COLOR 2}.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_4:
# 118 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You now can work part-time at {COLOR BLUE}AmeAme\n"
	.string "Candy Shop{COLOR GREEN}!$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_5:
# 126 "data/maps/CoralportCandyShop/scripts.pory"
	.string "If you know someone who's willing to\n"
	.string "work for us, please let us know.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_6:
# 136 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you so much for accepting the\n"
	.string "job.\p"
	.string "We now can spend more time with our\n"
	.string "daughter.$"

CoralportCandyShop_Eventscript_TimeClock_Text_0:
# 150 "data/maps/CoralportCandyShop/scripts.pory"
	.string "“We're looking for part-time workers\n"
	.string "for our shop.\p"
	.string "Please speak to Gumi for more\n"
	.string "information.”$"

CoralportCandyShop_Eventscript_TimeClock_Text_1:
# 157 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Start working at {COLOR BLUE}AmeAme Candy Shop{COLOR 2}?\p"
	.string "Your shift will last for {COLOR RED}6 hours{COLOR 2} and you\n"
	.string "will be paid {COLOR RED}¥2000{COLOR 2}.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0:
# 389 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Akihiko received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "He also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1:
# 395 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Mitsuru received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "She also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "her hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2:
# 400 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Shinjiro received {COLOR 7}¥2000{COLOR 2} for the job.\p"
	.string "He also received a {COLOR 7}{STR_VAR_1}{COLOR 2} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0:
# 422 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You have worked part-time at AmeAme\n"
	.string "Candy Shop at least 10 times.\p"
	.string "Check back with Gumi for a reward.$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_0:
# 432 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Hello {PLAYER}! Here to start your\n"
	.string "shift?$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_1:
# 436 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Oh my. Now that I think of it, you've\n"
	.string "been working for us for quite a while,\l"
	.string "right?\p"
	.string "Here, you can have this. Just think it\n"
	.string "as a gift for helping us!$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_2:
# 440 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Feel free to come back anytime! We'll be\n"
	.string "very appreciative!$"

CoralportCandyShop_Eventscript_FatMan_Text_0:
# 462 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Nozomi$"

CoralportCandyShop_Eventscript_FatMan_Text_1:
# 463 "data/maps/CoralportCandyShop/scripts.pory"
	.string "I love that the candies from this shop\n"
	.string "aren't too sweet.$"

CoralportCandyShop_Eventscript_Twin_Text_0:
# 472 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aiko$"

CoralportCandyShop_Eventscript_Twin_Text_1:
# 474 "data/maps/CoralportCandyShop/scripts.pory"
	.string "My Tinkatink back home loves {COLOR 7}Sweet\n"
	.string "Heart {COLOR 2}a lot.\p"
	.string "If you have one, do you mind trading it\n"
	.string "with me?$"

CoralportCandyShop_Eventscript_Twin_Text_2:
# 478 "data/maps/CoralportCandyShop/scripts.pory"
	.string "But you don't have a {COLOR 7}Sweet Heart{COLOR 2}...$"

CoralportCandyShop_Eventscript_Twin_Text_3:
# 488 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{PLAYER} traded a {COLOR 7}Sweet Heart{COLOR 2} for a\n"
	.string "{COLOR 7}Whipped Dream{COLOR 2}.$"

CoralportCandyShop_Eventscript_Twin_Text_4:
# 491 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you!! My Tinkatink would be so\n"
	.string "happy!$"

CoralportCandyShop_Eventscript_Twin_Text_5:
# 500 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aw... I understand.$"

CoralportCandyShop_Eventscript_Twin_Text_6:
# 506 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you for making my Tinkatink\n"
	.string "happy!$"

AmeAmeShiftStart::
# 176 "data/maps/CoralportCandyShop/scripts.pory"
	.string "You can only start your shift here\n"
	.string "between 7AM and 3PM.$"
