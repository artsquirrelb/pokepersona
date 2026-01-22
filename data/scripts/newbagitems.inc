EventScript_CampGears::
# 2 "data/scripts/newbagitems.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_3
EventScript_CampGears_1:
# 5 "data/scripts/newbagitems.pory"
	callnative ScrCmd_CanNotUseCampGears
# 6 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_CampGears_7
EventScript_CampGears_6:
# 17 "data/scripts/newbagitems.pory"
	iscurrentmap MAP_WINDWARD_PORT_HARBOR
# 18 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_CampGears_12
EventScript_CampGears_11:
# 26 "data/scripts/newbagitems.pory"
	playse SE_SELECT
# 27 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_2
# 28 "data/scripts/newbagitems.pory"
	multichoice 25, 4, MULTI_TIME_OF_DAY, 0
# 29 "data/scripts/newbagitems.pory"
	closemessage
# 30 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CampGears_31
# 36 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_CampGears_32
# 42 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CampGears_33
# 48 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_CampGears_34
# 55 "data/scripts/newbagitems.pory"
	playse SE_PC_OFF
# 56 "data/scripts/newbagitems.pory"
	waitse
EventScript_CampGears_9:
# 59 "data/scripts/newbagitems.pory"
	updatefollowingmon
# 60 "data/scripts/newbagitems.pory"
	release
	end

EventScript_CampGears_2:
# 3 "data/scripts/newbagitems.pory"
	call EventScript_CampGears_NotTheTime
	goto EventScript_CampGears_1

EventScript_CampGears_3:
# 2 "data/scripts/newbagitems.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_lt EventScript_CampGears_2
	goto EventScript_CampGears_1

EventScript_CampGears_7:
# 7 "data/scripts/newbagitems.pory"
	playse SE_BOO
# 8 "data/scripts/newbagitems.pory"
	checkplayergender
# 9 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_CampGears_28
# 13 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_1
EventScript_CampGears_27:
# 15 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CampGears_6

EventScript_CampGears_10:
# 23 "data/scripts/newbagitems.pory"
	call EventScript_CampGears_NotTheTime
	goto EventScript_CampGears_9

EventScript_CampGears_12:
# 18 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 1
	goto_if_eq EventScript_CampGears_10
# 18 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 3
	goto_if_eq EventScript_CampGears_10
# 19 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 5
	goto_if_eq EventScript_CampGears_10
# 19 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 7
	goto_if_eq EventScript_CampGears_10
# 20 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 9
	goto_if_eq EventScript_CampGears_10
# 20 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 11
	goto_if_eq EventScript_CampGears_10
# 21 "data/scripts/newbagitems.pory"
	compare VAR_WINDWARD_HARBOR_GHOST_BOY, 13
	goto_if_eq EventScript_CampGears_10
	goto EventScript_CampGears_11

EventScript_CampGears_28:
# 10 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_Text_0
	goto EventScript_CampGears_27

EventScript_CampGears_31:
# 31 "data/scripts/newbagitems.pory"
	fwdtime MORNING_HOUR_BEGIN, 0
# 32 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 33 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 34 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_9

EventScript_CampGears_32:
# 37 "data/scripts/newbagitems.pory"
	fwdtime DAY_HOUR_BEGIN, 0
# 38 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 39 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 40 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_9

EventScript_CampGears_33:
# 43 "data/scripts/newbagitems.pory"
	fwdtime EVENING_HOUR_BEGIN, 0
# 44 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 45 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 46 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_9

EventScript_CampGears_34:
# 49 "data/scripts/newbagitems.pory"
	fwdtime NIGHT_HOUR_BEGIN, 0
# 50 "data/scripts/newbagitems.pory"
	special SetCB2LoadMap
# 51 "data/scripts/newbagitems.pory"
	callnative RunOnResumeMapScript
# 52 "data/scripts/newbagitems.pory"
	call EventScript_CheckDaysLeft
	goto EventScript_CampGears_9


EventScript_CampGears_NotTheTime::
# 65 "data/scripts/newbagitems.pory"
	checkplayergender
# 66 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_CampGears_NotTheTime_2
# 70 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_NotTheTime_Text_1
EventScript_CampGears_NotTheTime_1:
# 72 "data/scripts/newbagitems.pory"
	closemessage
	return

EventScript_CampGears_NotTheTime_2:
# 67 "data/scripts/newbagitems.pory"
	msgbox EventScript_CampGears_NotTheTime_Text_0
	goto EventScript_CampGears_NotTheTime_1


EventScript_TellTheTimeDayHourMinute::
# 76 "data/scripts/newbagitems.pory"
	callnative Script_CalculateTime
# 77 "data/scripts/newbagitems.pory"
	msgbox EventScript_TellTheTimeDayHourMinute_Text_0
# 78 "data/scripts/newbagitems.pory"
	closemessage
	return


EventScript_CheckDaysLeft::
# 82 "data/scripts/newbagitems.pory"
	dotimebasedevents
# 83 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 1
	goto_if_eq EventScript_CheckDaysLeft_2
EventScript_CheckDaysLeft_1:
# 87 "data/scripts/newbagitems.pory"
	compare VAR_DAYS_LEFT, 0
	goto_if_eq EventScript_CheckDaysLeft_4
	return

EventScript_CheckDaysLeft_2:
# 84 "data/scripts/newbagitems.pory"
	msgbox EventScript_CheckDaysLeft_Text_0
# 85 "data/scripts/newbagitems.pory"
	closemessage
	goto EventScript_CheckDaysLeft_1

EventScript_CheckDaysLeft_4:
# 88 "data/scripts/newbagitems.pory"
	warpsilent MAP_GAME_OVER, 0, 5
# 89 "data/scripts/newbagitems.pory"
	waitstate
	return


EventScript_ConfirmUseEscapeRope::
# 94 "data/scripts/newbagitems.pory"
	buffernumberstring STR_VAR_3, VAR_0x800A
# 95 "data/scripts/newbagitems.pory"
	msgbox ConfirmUseEscapeRope, MSGBOX_YESNO
# 96 "data/scripts/newbagitems.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_ConfirmUseEscapeRope_2
EventScript_ConfirmUseEscapeRope_1:
# 102 "data/scripts/newbagitems.pory"
	release
	end

EventScript_ConfirmUseEscapeRope_2:
# 97 "data/scripts/newbagitems.pory"
	callnative ScrCmd_addhoursEscapeRope
# 98 "data/scripts/newbagitems.pory"
	callnative ResetInitialPlayerAvatarState
# 99 "data/scripts/newbagitems.pory"
	callnative StartEscapeRopeFieldEffect
# 100 "data/scripts/newbagitems.pory"
	waitstate
	goto EventScript_ConfirmUseEscapeRope_1


EventScript_AccessPokemonBoxLink::
# 112 "data/scripts/newbagitems.pory"
	goto_if_set FLAG_PREVENT_BOX_LINK, EventScript_AccessPokemonBoxLink_2
# 117 "data/scripts/newbagitems.pory"
	playse SE_PC_LOGIN
# 118 "data/scripts/newbagitems.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 119 "data/scripts/newbagitems.pory"
	special ShowPokemonStorageSystemPC
# 120 "data/scripts/newbagitems.pory"
	waitstate
# 121 "data/scripts/newbagitems.pory"
	goto EventScript_TurnOffPC
	end

EventScript_AccessPokemonBoxLink_2:
# 113 "data/scripts/newbagitems.pory"
	msgbox EventScript_AccessPokemonBoxLink_Text_0
# 114 "data/scripts/newbagitems.pory"
	release
	end


EventScript_NotFoundNearby::
# 127 "data/scripts/newbagitems.pory"
	goto_if_set FLAG_DEXNAV_FISHING, EventScript_NotFoundNearby_2
# 131 "data/scripts/newbagitems.pory"
	msgbox NotFoundNearby
EventScript_NotFoundNearby_1:
# 133 "data/scripts/newbagitems.pory"
	release
	end

EventScript_NotFoundNearby_2:
# 128 "data/scripts/newbagitems.pory"
	msgbox EventScript_NotFoundNearby_Text_0
	goto EventScript_NotFoundNearby_1


EventScript_CampGears_Text_0:
# 10 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_DOUBT}(I can't set up a camp here.)$"

EventScript_CampGears_Text_1:
# 13 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_GEEZ}(I shouldn't camp here.)$"

EventScript_CampGears_Text_2:
# 27 "data/scripts/newbagitems.pory"
	.string "Set up camp and wait until?$"

EventScript_CampGears_NotTheTime_Text_0:
# 67 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL}(Now is not the time for camping.)$"

EventScript_CampGears_NotTheTime_Text_1:
# 70 "data/scripts/newbagitems.pory"
	.string "{SPEAKER NAME_M}{CREATE_MUGSHOT MUGSHOT_M EMOTE_NORMAL}(Now is not the time for camping.)$"

EventScript_TellTheTimeDayHourMinute_Text_0:
# 77 "data/scripts/newbagitems.pory"
	.string "{STR_VAR_1},\n"
	.string "{STR_VAR_2}:{STR_VAR_3}.$"

EventScript_CheckDaysLeft_Text_0:
# 84 "data/scripts/newbagitems.pory"
	.string "{COLOR GREEN}YOU HAVE {COLOR RED}ONE DAY LEFT {COLOR GREEN}TO COMPLETE THE\n"
	.string "CURRENT STORY QUEST.$"

EventScript_AccessPokemonBoxLink_Text_0:
# 113 "data/scripts/newbagitems.pory"
	.string "Cannot open Pokémon Storage System\n"
	.string "now.$"

EventScript_NotFoundNearby_Text_0:
# 128 "data/scripts/newbagitems.pory"
	.string "Use a fishing rod to encounter the\n"
	.string "registered species!$"

ConfirmUseEscapeRope::
# 106 "data/scripts/newbagitems.pory"
	.string "Exiting this dungeon will advance the\n"
	.string "time by {COLOR RED}{STR_VAR_3} hour(s){COLOR 2}.\p"
	.string "Use Escape Rope?$"

NotFoundNearby::
# 138 "data/scripts/newbagitems.pory"
	.string "It couldn't be found nearby.\n"
	.string "Try looking in a different area!$"
