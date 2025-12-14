EventScript_CampGears::
# 2 "data/scripts/newbagitems.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_3
EventScript_CampGears_1:
# 12 "data/scripts/newbagitems.pory"
	callnative ScrCmd_CanNotUseCampGears
# 13 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_CampGears_7
# 25 "data/scripts/newbagitems.pory"
	playse SE_SELECT
# 26 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_4
# 27 "data/scripts/newbagitems.pory"
	multichoice 25, 4, MULTI_TIME_OF_DAY, 0
# 28 "data/scripts/newbagitems.pory"
	closemessage
# 29 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CampGears_18
# 35 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_CampGears_19
# 41 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CampGears_20
# 47 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_CampGears_21
# 54 "data/scripts/newbagitems.pory"
	playse SE_PC_OFF
# 55 "data/scripts/newbagitems.pory"
	waitse
EventScript_CampGears_6:
# 58 "data/scripts/newbagitems.pory"
	updatefollowingmon
# 59 "data/scripts/newbagitems.pory"
	release
	end

EventScript_CampGears_2:
# 3 "data/scripts/newbagitems.pory"
	checkplayergender
# 4 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_CampGears_11
# 8 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_1
EventScript_CampGears_10:
# 10 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CampGears_1

EventScript_CampGears_3:
# 2 "data/scripts/newbagitems.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_2
	goto EventScript_CampGears_1

EventScript_CampGears_7:
# 14 "data/scripts/newbagitems.pory"
	playse SE_BOO
# 15 "data/scripts/newbagitems.pory"
	checkplayergender
# 16 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_CampGears_15
# 20 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_3
EventScript_CampGears_14:
# 22 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CampGears_6

EventScript_CampGears_11:
# 5 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_0
	goto EventScript_CampGears_10

EventScript_CampGears_15:
# 17 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_2
	goto EventScript_CampGears_14

EventScript_CampGears_18:
# 30 "data/scripts/newbagitems.pory"
	fwdtime MORNING_HOUR_BEGIN, 0
# 31 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 32 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 33 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_6

EventScript_CampGears_19:
# 36 "data/scripts/newbagitems.pory"
	fwdtime DAY_HOUR_BEGIN, 0
# 37 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 38 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 39 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_6

EventScript_CampGears_20:
# 42 "data/scripts/newbagitems.pory"
	fwdtime EVENING_HOUR_BEGIN, 0
# 43 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 44 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 45 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_6

EventScript_CampGears_21:
# 48 "data/scripts/newbagitems.pory"
	fwdtime NIGHT_HOUR_BEGIN, 0
# 49 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 50 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 51 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_6


EventScript_TellTheTimeDayHourMinute::
# 64 "data/scripts/newbagitems.pory"
	callnative Script_CalculateTime
# 65 "data/scripts/newbagitems.pory"
	msgbox EventScript_TellTheTimeDayHourMinute_Text_0
# 66 "data/scripts/newbagitems.pory"
	closemessage
	return


EventScript_CheckDaysLeft::
# 70 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 1
	goto_if_eq EventScript_CheckDaysLeft_2
EventScript_CheckDaysLeft_1:
# 74 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 0
	goto_if_eq EventScript_CheckDaysLeft_4
	return

EventScript_CheckDaysLeft_2:
# 71 "data/scripts/newbagitems.pory"
	msgbox EventScript_CheckDaysLeft_Text_0
# 72 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CheckDaysLeft_1

EventScript_CheckDaysLeft_4:
# 75 "data/scripts/newbagitems.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 76 "data/scripts/newbagitems.pory"
	waitstate
	return


EventScript_CampGears_Text_0:
# 5 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now is not the time for camping.)$"

EventScript_CampGears_Text_1:
# 8 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(Now is not the time for camping.)$"

EventScript_CampGears_Text_2:
# 17 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}(I can't set up a camp here.)$"

EventScript_CampGears_Text_3:
# 20 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_GEEZ}(I shouldn't camp here.)$"

EventScript_CampGears_Text_4:
# 26 "data/scripts/newbagitems.pory"
	.string "Set up camp and wait until?$"

EventScript_TellTheTimeDayHourMinute_Text_0:
# 65 "data/scripts/newbagitems.pory"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}.$"

EventScript_CheckDaysLeft_Text_0:
# 71 "data/scripts/newbagitems.pory"
	.string "{COLOR GREEN}YOU HAVE {COLOR RED}ONE DAY LEFT {COLOR GREEN}TO COMPLETE THE\n"
	.string "CURRENT STORY QUEST.$"
