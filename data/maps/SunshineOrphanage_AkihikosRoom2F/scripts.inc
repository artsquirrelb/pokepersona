SunshineOrphanage_AkihikosRoom2F_MapScripts::
	.byte 0


GoSetTheClock::
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 6 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 7 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 8 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepBack
# 9 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 10 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 13 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 14 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 18 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK PlayersHouse_2F_EventScript_CheckWallClock
# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 20 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 21 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 22 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_1
# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO, 1
# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 26 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


GiveRunningShoesAtStart::
# 31 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 32 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 33 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 34 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 36 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removefieldmugshot
# 37 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 39 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 41 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO, 2
# 42 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


AkihikosPC::
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 57 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 64 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 72 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 74 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


GoSetTheClock_Text_0:
# 7 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "I should fix the clock.$"

SetWallclock_Text_0:
# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock is stopped.$"

SetWallclock_Text_1:
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Done.$"

GiveRunningShoesAtStart_Text_0:
# 33 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 38 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER}{KUN} put on the running shoes.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's from Kirijo Electronics.$"

ShinjirosPC_Text_0:
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"
