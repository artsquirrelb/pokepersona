EventScript_CampGears::
# 2 "data/scripts/newbagitems.pory"
	lock
# 3 "data/scripts/newbagitems.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_lt EventScript_CampGears_1
# 8 "data/scripts/newbagitems.pory"
	msgbox gText_WaitUntilTime
# 9 "data/scripts/newbagitems.pory"
	multichoice 25, 4, MULTI_TIME_OF_DAY, 0
# 10 "data/scripts/newbagitems.pory"
	closemessage
# 11 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CampGears_5
# 17 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_CampGears_6
# 23 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CampGears_7
# 29 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_CampGears_8
# 36 "data/scripts/newbagitems.pory"
	playse SE_PC_OFF
# 37 "data/scripts/newbagitems.pory"
	waitse
EventScript_CampGears_4:
# 39 "data/scripts/newbagitems.pory"
	release
	end

EventScript_CampGears_1:
# 4 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_0
# 5 "data/scripts/newbagitems.pory"
	closemessage
	return

EventScript_CampGears_5:
# 12 "data/scripts/newbagitems.pory"
	fwdtime MORNING_HOUR_BEGIN, 0
# 13 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 14 "data/scripts/newbagitems.pory"
	delay 60
# 15 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_4

EventScript_CampGears_6:
# 18 "data/scripts/newbagitems.pory"
	fwdtime DAY_HOUR_BEGIN, 0
# 19 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 20 "data/scripts/newbagitems.pory"
	delay 60
# 21 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_4

EventScript_CampGears_7:
# 24 "data/scripts/newbagitems.pory"
	fwdtime EVENING_HOUR_BEGIN, 0
# 25 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 26 "data/scripts/newbagitems.pory"
	delay 60
# 27 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_4

EventScript_CampGears_8:
# 30 "data/scripts/newbagitems.pory"
	fwdtime NIGHT_HOUR_BEGIN, 0
# 31 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 32 "data/scripts/newbagitems.pory"
	delay 60
# 33 "data/scripts/newbagitems.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto EventScript_CampGears_4


EventScript_TellTheTimeDayHourMinute::
# 45 "data/scripts/newbagitems.pory"
	callnative Script_CalculateTime
# 46 "data/scripts/newbagitems.pory"
	msgbox EventScript_TellTheTimeDayHourMinute_Text_0
# 47 "data/scripts/newbagitems.pory"
	closemessage
	return


EventScript_CampGears_Text_0:
# 4 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Now is not the time for camping).$"

EventScript_TellTheTimeDayHourMinute_Text_0:
# 46 "data/scripts/newbagitems.pory"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}.\n"
	.string "$"
