EventScript_CampGears::
# 2 "data/scripts/newbagitems.pory"
	lock
# 4 "data/scripts/newbagitems.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_3
EventScript_CampGears_2:
# 9 "data/scripts/newbagitems.pory"
	msgbox gText_WaitUntilTime
# 10 "data/scripts/newbagitems.pory"
	multichoice 25, 4, MULTI_TIME_OF_DAY, 0
# 11 "data/scripts/newbagitems.pory"
	closemessage
# 12 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CampGears_7
# 19 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_CampGears_8
# 26 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CampGears_9
# 33 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_CampGears_10
# 41 "data/scripts/newbagitems.pory"
	playse SE_PC_OFF
# 42 "data/scripts/newbagitems.pory"
	waitse
EventScript_CampGears_6:
# 44 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
# 45 "data/scripts/newbagitems.pory"
	release
	end

EventScript_CampGears_1:
# 5 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_0
# 6 "data/scripts/newbagitems.pory"
	closemessage
	return

EventScript_CampGears_3:
# 4 "data/scripts/newbagitems.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_1
	goto EventScript_CampGears_2

EventScript_CampGears_7:
# 13 "data/scripts/newbagitems.pory"
	fwdtime MORNING_HOUR_BEGIN, 0
# 14 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 15 "data/scripts/newbagitems.pory"
	delay 60
# 16 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 17 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_8:
# 20 "data/scripts/newbagitems.pory"
	fwdtime DAY_HOUR_BEGIN, 0
# 21 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 22 "data/scripts/newbagitems.pory"
	delay 60
# 23 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 24 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_9:
# 27 "data/scripts/newbagitems.pory"
	fwdtime EVENING_HOUR_BEGIN, 0
# 28 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 29 "data/scripts/newbagitems.pory"
	delay 60
# 30 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 31 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_10:
# 34 "data/scripts/newbagitems.pory"
	fwdtime NIGHT_HOUR_BEGIN, 0
# 35 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/scripts/newbagitems.pory"
	delay 60
# 37 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 38 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6


EventScript_TellTheTimeDayHourMinute::
# 51 "data/scripts/newbagitems.pory"
	callnative Script_CalculateTime
# 52 "data/scripts/newbagitems.pory"
	msgbox EventScript_TellTheTimeDayHourMinute_Text_0
# 53 "data/scripts/newbagitems.pory"
	closemessage
	return


EventScript_CheckDaysLeft::
# 57 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 1
	goto_if_eq EventScript_CheckDaysLeft_2
EventScript_CheckDaysLeft_1:
# 61 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 0
	goto_if_eq EventScript_CheckDaysLeft_4
	return

EventScript_CheckDaysLeft_2:
# 58 "data/scripts/newbagitems.pory"
	msgbox EventScript_CheckDaysLeft_Text_0
# 59 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CheckDaysLeft_1

EventScript_CheckDaysLeft_4:
# 62 "data/scripts/newbagitems.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 63 "data/scripts/newbagitems.pory"
	waitstate
	return


EventScript_CampGears_Text_0:
# 5 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now is not the time for camping).$"

EventScript_TellTheTimeDayHourMinute_Text_0:
# 52 "data/scripts/newbagitems.pory"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}.\n"
	.string "$"

EventScript_CheckDaysLeft_Text_0:
# 58 "data/scripts/newbagitems.pory"
	.string "{COLOR GREEN}YOU HAVE {COLOR RED}ONE DAY LEFT {COLOR GREEN}TO COMPLETE THE\n"
	.string "CURRENT STORY QUEST.$"
