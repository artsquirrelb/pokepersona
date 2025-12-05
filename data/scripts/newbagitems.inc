EventScript_CampGears::
# 2 "data/scripts/newbagitems.pory"
	lock
# 3 "data/scripts/newbagitems.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_3
EventScript_CampGears_2:
# 8 "data/scripts/newbagitems.pory"
	msgbox gText_WaitUntilTime
# 9 "data/scripts/newbagitems.pory"
	multichoice 25, 4, MULTI_TIME_OF_DAY, 0
# 10 "data/scripts/newbagitems.pory"
	closemessage
# 11 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CampGears_7
# 18 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_CampGears_8
# 25 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CampGears_9
# 32 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_CampGears_10
# 40 "data/scripts/newbagitems.pory"
	playse SE_PC_OFF
# 41 "data/scripts/newbagitems.pory"
	waitse
EventScript_CampGears_6:
# 43 "data/scripts/newbagitems.pory"
	release
	end

EventScript_CampGears_1:
# 4 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_0
# 5 "data/scripts/newbagitems.pory"
	closemessage
	return

EventScript_CampGears_3:
# 3 "data/scripts/newbagitems.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_1
	goto EventScript_CampGears_2

EventScript_CampGears_7:
# 12 "data/scripts/newbagitems.pory"
	fwdtime MORNING_HOUR_BEGIN, 0
# 13 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 14 "data/scripts/newbagitems.pory"
	delay 60
# 15 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 16 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_8:
# 19 "data/scripts/newbagitems.pory"
	fwdtime DAY_HOUR_BEGIN, 0
# 20 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 21 "data/scripts/newbagitems.pory"
	delay 60
# 22 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 23 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_9:
# 26 "data/scripts/newbagitems.pory"
	fwdtime EVENING_HOUR_BEGIN, 0
# 27 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 28 "data/scripts/newbagitems.pory"
	delay 60
# 29 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 30 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6

EventScript_CampGears_10:
# 33 "data/scripts/newbagitems.pory"
	fwdtime NIGHT_HOUR_BEGIN, 0
# 34 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 35 "data/scripts/newbagitems.pory"
	delay 60
# 36 "data/scripts/newbagitems.pory"
	special DrawWholeMapView
# 37 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_6


EventScript_TellTheTimeDayHourMinute::
# 49 "data/scripts/newbagitems.pory"
	callnative Script_CalculateTime
# 50 "data/scripts/newbagitems.pory"
	msgbox EventScript_TellTheTimeDayHourMinute_Text_0
# 51 "data/scripts/newbagitems.pory"
	closemessage
	return


EventScript_CampGears_Text_0:
# 4 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now is not the time for camping).$"

EventScript_TellTheTimeDayHourMinute_Text_0:
# 50 "data/scripts/newbagitems.pory"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}.\n"
	.string "$"
