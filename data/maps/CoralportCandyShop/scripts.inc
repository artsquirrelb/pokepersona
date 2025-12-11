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
# 128 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 129 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_ShopKeeperF_8
# 133 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_6
# 135 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_ShopKeeperF_1:
# 138 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 139 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 140 "data/maps/CoralportCandyShop/scripts.pory"
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
# 122 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 123 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_5
# 124 "data/maps/CoralportCandyShop/scripts.pory"
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
	waitmovement
# 110 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_AMEAME_PARTTIME_UNLOCKED
# 111 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_AMEAME_PARTTIME
# 112 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 113 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 114 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_ShopKeeperF_Text_4
# 115 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 116 "data/maps/CoralportCandyShop/scripts.pory"
	release
# 117 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 118 "data/maps/CoralportCandyShop/scripts.pory"
	refreshquesticon
	end

CoralportCandyShop_Eventscript_ShopKeeperF_8:
# 130 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_QuestGiveReward
	goto CoralportCandyShop_Eventscript_ShopKeeperF_1


CoralportCandyShop_Eventscript_TimeClock::
# 145 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 146 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_AMEAME_PARTTIME_UNLOCKED, CoralportCandyShop_Eventscript_TimeClock_2
# 154 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_1, MSGBOX_YESNO
# 156 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 157 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_TimeClock_5
CoralportCandyShop_Eventscript_TimeClock_1:
# 170 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_2:
# 147 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_0
# 149 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 150 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_5:
# 158 "data/maps/CoralportCandyShop/scripts.pory"
	gettime
# 159 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 8
	goto_if_ge CoralportCandyShop_Eventscript_TimeClock_9
CoralportCandyShop_Eventscript_TimeClock_8:
# 163 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_TimeClock_Text_2
# 164 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 165 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_TimeClock_7:
# 160 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TimeClock_1

CoralportCandyShop_Eventscript_TimeClock_9:
# 159 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_0x8000, 15
	goto_if_le CoralportCandyShop_Eventscript_TimeClock_7
	goto CoralportCandyShop_Eventscript_TimeClock_8


CoralportCandyShop_Eventscript_RandomizeCutscenes::
# 175 "data/maps/CoralportCandyShop/scripts.pory"
	random 3
# 176 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_RandomizeCutscenes_2
# 179 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_RandomizeCutscenes_3
# 181 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_RandomizeCutscenes_4
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_2:
# 178 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_3:
# 180 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime
	return

CoralportCandyShop_Eventscript_RandomizeCutscenes_4:
# 182 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime
	return


CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime::
# 187 "data/maps/CoralportCandyShop/scripts.pory"
	checkplayergender
# 188 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_2
CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1:
# 197 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 198 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 1
# 199 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 12, 3
	return

CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_2:
# 189 "data/maps/CoralportCandyShop/scripts.pory"
	getcharaAvailability CHARACTER_AKIHIKO
# 190 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_4
# 194 "data/maps/CoralportCandyShop/scripts.pory"
	switchmaincharacter
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1

CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_4:
# 191 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TryStartingAkihikoPartTime_1


CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime::
# 203 "data/maps/CoralportCandyShop/scripts.pory"
	checkplayergender
# 204 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_2
CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1:
# 214 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 215 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 2
# 216 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 11, 6
	return

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_2:
# 205 "data/maps/CoralportCandyShop/scripts.pory"
	getcharaAvailability CHARACTER_MITSURU
# 206 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4
# 211 "data/maps/CoralportCandyShop/scripts.pory"
	switchmaincharacter
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1

CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_4:
# 208 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto CoralportCandyShop_Eventscript_TryStartingMitsuruPartTime_1


CoralportCandyShop_Eventscript_TryStartingShinjiroPartTime::
# 220 "data/maps/CoralportCandyShop/scripts.pory"
	destroyfollowernpc
# 221 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 3
# 222 "data/maps/CoralportCandyShop/scripts.pory"
	warpsilent MAP_CORALPORT_CANDY_SHOP, 5, 4
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_1::
# 226 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 227 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 228 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 229 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_3
# 230 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 3, MAP_CORALPORT_CANDY_SHOP
# 231 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0
# 233 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 234 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 235 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_VEND
# 236 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1
# 238 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 239 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 240 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2
# 242 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 243 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 244 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 245 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3
# 247 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 248 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 249 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 250 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4
# 252 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 253 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 254 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 255 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 3000
# 256 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 257 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 258 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_2::
# 262 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0
# 264 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 265 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 266 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_BIKE_BELL
# 267 "data/maps/CoralportCandyShop/scripts.pory"
	clearflag FLAG_TEMP_2
# 268 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5, MAP_CORALPORT_CANDY_SHOP
# 269 "data/maps/CoralportCandyShop/scripts.pory"
	delay 8
# 270 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1
# 271 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 272 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3
# 275 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 276 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4
# 278 "data/maps/CoralportCandyShop/scripts.pory"
	delay 4
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5
# 280 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 281 "data/maps/CoralportCandyShop/scripts.pory"
	delay 40
# 282 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 283 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6
# 285 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 286 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 287 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 288 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 289 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 290 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 291 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, facedown
# 292 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8
# 294 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 295 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 296 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 297 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 298 "data/maps/CoralportCandyShop/scripts.pory"
	moveobjecttocoords LOCALID_PLAYER, 9, 5, DIR_SOUTH, 2
# 299 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 300 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 301 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 302 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 3000
# 303 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 304 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 305 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTimeCutscene_3::
# 309 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 310 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 311 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 312 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, emotepensive
# 313 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 314 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0
# 315 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 316 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceleft
# 317 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 318 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 319 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 320 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 321 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 322 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, facedown
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 3, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1
# 324 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 325 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 327 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2
# 328 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 329 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 330 "data/maps/CoralportCandyShop/scripts.pory"
	addobject 5
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3
# 332 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 333 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, faceright
# 334 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 335 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 336 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 337 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7
# 338 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 339 "data/maps/CoralportCandyShop/scripts.pory"
	delay 20
# 340 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_SHOP
# 341 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 342 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 5, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4
# 344 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 345 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_EXIT
# 346 "data/maps/CoralportCandyShop/scripts.pory"
	waitse
# 347 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 348 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5
# 350 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 6, CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6
# 352 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 353 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 354 "data/maps/CoralportCandyShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 355 "data/maps/CoralportCandyShop/scripts.pory"
	addmoney 3000
# 356 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 357 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 358 "data/maps/CoralportCandyShop/scripts.pory"
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward
	return


CoralportCandyShop_Eventscript_PartTime_RandomizeReward::
# 363 "data/maps/CoralportCandyShop/scripts.pory"
	random 8
# 364 "data/maps/CoralportCandyShop/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/CoralportCandyShop/scripts.pory"
	case 0, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 367 "data/maps/CoralportCandyShop/scripts.pory"
	case 1, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 368 "data/maps/CoralportCandyShop/scripts.pory"
	case 2, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 369 "data/maps/CoralportCandyShop/scripts.pory"
	case 3, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3
# 372 "data/maps/CoralportCandyShop/scripts.pory"
	case 4, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4
# 375 "data/maps/CoralportCandyShop/scripts.pory"
	case 5, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5
# 378 "data/maps/CoralportCandyShop/scripts.pory"
	case 6, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6
# 381 "data/maps/CoralportCandyShop/scripts.pory"
	case 7, CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1:
# 385 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 1
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9
# 390 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP, 2
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10
# 397 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2
# 399 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8:
# 401 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP, 0
# 402 "data/maps/CoralportCandyShop/scripts.pory"
	addtime 0, 6, 0
# 403 "data/maps/CoralportCandyShop/scripts.pory"
	call EventScript_CheckDaysLeft
# 404 "data/maps/CoralportCandyShop/scripts.pory"
	call CoralportCandyShop_Eventscript_PartTime_QuestCheckDone
# 405 "data/maps/CoralportCandyShop/scripts.pory"
	warp MAP_CORALPORT, 17, 17
# 406 "data/maps/CoralportCandyShop/scripts.pory"
	waitstate
# 407 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_3:
# 370 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_SERIOUS_MINT
# 371 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SERIOUS_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_4:
# 373 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_BOLD_MINT
# 374 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BOLD_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_5:
# 376 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_CALM_MINT
# 377 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALM_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_6:
# 379 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_IMPISH_MINT
# 380 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IMPISH_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_7:
# 382 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_CAREFUL_MINT
# 383 "data/maps/CoralportCandyShop/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CAREFUL_MINT
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_1

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_9:
# 386 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0
# 388 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_10:
# 392 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1
# 394 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_PartTime_RandomizeReward_8


CoralportCandyShop_Eventscript_PartTime_QuestCheckDone::
# 412 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
	goto_if_lt CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2
CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1:
# 416 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_CHECK_REWARD, QUEST_AMEAME_PARTTIME
# 417 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 10
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_2:
# 414 "data/maps/CoralportCandyShop/scripts.pory"
	addvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 1
	goto CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_1

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4:
# 419 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0
# 421 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 422 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_AMEAME_PARTTIME
	return

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_5:
# 417 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_4
	return


CoralportCandyShop_Eventscript_QuestGiveReward::
# 427 "data/maps/CoralportCandyShop/scripts.pory"
	playse SE_PIN
# 428 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 429 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_0
# 430 "data/maps/CoralportCandyShop/scripts.pory"
	applymovement 1, emoteexclamation
# 431 "data/maps/CoralportCandyShop/scripts.pory"
	waitmovement
# 432 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_ShopKeeperF_Text_0
# 433 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_1
# 435 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 436 "data/maps/CoralportCandyShop/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 437 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_QuestGiveReward_Text_2
# 438 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 439 "data/maps/CoralportCandyShop/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_AMEAME_PARTTIME
# 440 "data/maps/CoralportCandyShop/scripts.pory"
	setvar VAR_AMEAME_CANDY_SHOP_QUEST_STATE, 11
# 441 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Slurpuff::
# 445 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 446 "data/maps/CoralportCandyShop/scripts.pory"
	showmonpic SPECIES_SLURPUFF, 18, 5
# 447 "data/maps/CoralportCandyShop/scripts.pory"
	playmoncry SPECIES_SLURPUFF, CRY_MODE_NORMAL
# 448 "data/maps/CoralportCandyShop/scripts.pory"
	waitmoncry
# 449 "data/maps/CoralportCandyShop/scripts.pory"
	setseenmon SPECIES_SLURPUFF
# 450 "data/maps/CoralportCandyShop/scripts.pory"
	delay 30
# 451 "data/maps/CoralportCandyShop/scripts.pory"
	hidemonpic
# 452 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_FatMan::
# 457 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 458 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 459 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_FatMan_Text_0
# 460 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_FatMan_Text_1
# 461 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 462 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


CoralportCandyShop_Eventscript_Twin::
# 467 "data/maps/CoralportCandyShop/scripts.pory"
	lock
# 468 "data/maps/CoralportCandyShop/scripts.pory"
	faceplayer
# 469 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 470 "data/maps/CoralportCandyShop/scripts.pory"
	goto_if_unset FLAG_CORALPORT_TRADED_SWEET_HEART, CoralportCandyShop_Eventscript_Twin_2
# 503 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_6
# 504 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
CoralportCandyShop_Eventscript_Twin_1:
# 506 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_2:
# 471 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_1, MSGBOX_YESNO
# 472 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralportCandyShop_Eventscript_Twin_5
# 496 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 497 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_5
# 498 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
	goto CoralportCandyShop_Eventscript_Twin_1

CoralportCandyShop_Eventscript_Twin_5:
# 473 "data/maps/CoralportCandyShop/scripts.pory"
	checkitem ITEM_SWEET_HEART
# 474 "data/maps/CoralportCandyShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoralportCandyShop_Eventscript_Twin_8
# 481 "data/maps/CoralportCandyShop/scripts.pory"
	removeitem ITEM_SWEET_HEART
# 482 "data/maps/CoralportCandyShop/scripts.pory"
	additem ITEM_WHIPPED_DREAM
# 483 "data/maps/CoralportCandyShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 484 "data/maps/CoralportCandyShop/scripts.pory"
	waitfanfare
# 485 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_3
# 486 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 487 "data/maps/CoralportCandyShop/scripts.pory"
	setspeaker CoralportCandyShop_Eventscript_Twin_Text_0
# 488 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_4
# 489 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 490 "data/maps/CoralportCandyShop/scripts.pory"
	setflag FLAG_CORALPORT_TRADED_SWEET_HEART
# 491 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end

CoralportCandyShop_Eventscript_Twin_8:
# 475 "data/maps/CoralportCandyShop/scripts.pory"
	msgbox CoralportCandyShop_Eventscript_Twin_Text_2
# 476 "data/maps/CoralportCandyShop/scripts.pory"
	closemessage
# 477 "data/maps/CoralportCandyShop/scripts.pory"
	release
	end


# 232 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_0:
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
# 232 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_up
	step_end

# 237 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_1:
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 237 "data/maps/CoralportCandyShop/scripts.pory"
	face_up
	step_end

# 241 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_2:
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 241 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 246 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_3:
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 246 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 251 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_1_Movement_4:
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 251 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
	step_end

# 263 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_0:
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	delay_16
# 263 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 270 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_1:
# 270 "data/maps/CoralportCandyShop/scripts.pory"
	emote_exclamation_mark
# 270 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 273 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_2:
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 273 "data/maps/CoralportCandyShop/scripts.pory"
	face_down
	step_end

# 274 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_3:
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 274 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 277 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_4:
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 277 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 279 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_5:
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_left
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 279 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 284 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_6:
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	face_right
# 284 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 287 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_7:
# 287 "data/maps/CoralportCandyShop/scripts.pory"
	emote_happy
	step_end

# 293 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_2_Movement_8:
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 293 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 314 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_0:
# 314 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 314 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
	step_end

# 323 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_1:
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 326 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_2:
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
# 326 "data/maps/CoralportCandyShop/scripts.pory"
	walk_down
	step_end

# 331 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_3:
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_left
	step_end

# 343 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_4:
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_right
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	walk_fast_down
# 343 "data/maps/CoralportCandyShop/scripts.pory"
	set_invisible
	step_end

# 349 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_5:
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 349 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/CoralportCandyShop/scripts.pory"
CoralportCandyShop_Eventscript_PartTimeCutscene_3_Movement_6:
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	walk_right
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 351 "data/maps/CoralportCandyShop/scripts.pory"
	walk_up
# 351 "data/maps/CoralportCandyShop/scripts.pory"
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
	.string "pay you {COLOR RED}¥3000{COLOR 2}.\p"
	.string "Simply check the time clock to start\n"
	.string "the work.\p"
	.string "Oh, and you can only start your shift\n"
	.string "here between {COLOR BLUE}7AM and 3PM{COLOR 2}.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_4:
# 114 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You now can work part-time at {COLOR BLUE}AmeAme\n"
	.string "Candy Shop{COLOR GREEN}!$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_5:
# 123 "data/maps/CoralportCandyShop/scripts.pory"
	.string "If you know someone who's willing to\n"
	.string "work for us, please let us know.$"

CoralportCandyShop_Eventscript_ShopKeeperF_Text_6:
# 133 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you so much for accepting the\n"
	.string "job.\p"
	.string "We now can spend more time with our\n"
	.string "daughter.$"

CoralportCandyShop_Eventscript_TimeClock_Text_0:
# 147 "data/maps/CoralportCandyShop/scripts.pory"
	.string "“We're looking for part-time workers\n"
	.string "for our shop.\p"
	.string "Please speak to Gumi for more\n"
	.string "information.”$"

CoralportCandyShop_Eventscript_TimeClock_Text_1:
# 154 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Start working at {COLOR BLUE}AmeAme Candy Shop{COLOR 2}?\p"
	.string "Your shift will last for {COLOR RED}6 hours{COLOR 2} and you\n"
	.string "will be paid {COLOR RED}¥3000{COLOR 2}.$"

CoralportCandyShop_Eventscript_TimeClock_Text_2:
# 163 "data/maps/CoralportCandyShop/scripts.pory"
	.string "You can only start your shift here\n"
	.string "between 7AM and 3PM.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_0:
# 386 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Akihiko received ¥3000 for the job.\p"
	.string "He also received a {STR_VAR_1} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_1:
# 392 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Mitsuru received ¥3000 for the job.\p"
	.string "She also received a {STR_VAR_1} for\n"
	.string "her hard work.$"

CoralportCandyShop_Eventscript_PartTime_RandomizeReward_Text_2:
# 397 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Shinjiro received ¥3000 for the job.\p"
	.string "He also received a {STR_VAR_1} for\n"
	.string "his hard work.$"

CoralportCandyShop_Eventscript_PartTime_QuestCheckDone_Text_0:
# 419 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{COLOR GREEN}You have worked part-time at AmeAme\n"
	.string "Candy Shop for at least 10 times.\p"
	.string "Check back with Gumi for reward.$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_0:
# 429 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Hello {PLAYER}! here to start your\n"
	.string "shift?$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_1:
# 433 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Oh my. Now that I think of it, you've\n"
	.string "been working for us for quite a while,\l"
	.string "right?\p"
	.string "Here, you can have this. Just think it\n"
	.string "as a gift for helping us!$"

CoralportCandyShop_Eventscript_QuestGiveReward_Text_2:
# 437 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Feel free to come back anytime! We'll be\n"
	.string "very appreciated!$"

CoralportCandyShop_Eventscript_FatMan_Text_0:
# 459 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Nozomi$"

CoralportCandyShop_Eventscript_FatMan_Text_1:
# 460 "data/maps/CoralportCandyShop/scripts.pory"
	.string "I love that the candies from this shop\n"
	.string "aren't too sweet.$"

CoralportCandyShop_Eventscript_Twin_Text_0:
# 469 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aiko$"

CoralportCandyShop_Eventscript_Twin_Text_1:
# 471 "data/maps/CoralportCandyShop/scripts.pory"
	.string "My Tinkatink back home loves {COLOR BLUE}Sweet\n"
	.string "Heart {COLOR 2}a lot. If you have one, do you mind\l"
	.string "trading it to me for a really cool item?$"

CoralportCandyShop_Eventscript_Twin_Text_2:
# 475 "data/maps/CoralportCandyShop/scripts.pory"
	.string "But you don't have a {COLOR BLUE}Sweet Heart{COLOR 2}...$"

CoralportCandyShop_Eventscript_Twin_Text_3:
# 485 "data/maps/CoralportCandyShop/scripts.pory"
	.string "{PLAYER} traded a {COLOR BLUE}Sweet Heart{COLOR 2} for a\n"
	.string "{COLOR BLUE}Whipped Dream{COLOR 2}.$"

CoralportCandyShop_Eventscript_Twin_Text_4:
# 488 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you!! My Tinkatink would be so\n"
	.string "happy!$"

CoralportCandyShop_Eventscript_Twin_Text_5:
# 497 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Aw... I understand.$"

CoralportCandyShop_Eventscript_Twin_Text_6:
# 503 "data/maps/CoralportCandyShop/scripts.pory"
	.string "Thank you for making my Tinkatink\n"
	.string "happy!$"
