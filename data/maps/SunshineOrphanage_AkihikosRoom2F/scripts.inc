SunshineOrphanage_AkihikosRoom2F_MapScripts::
# 6 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 4 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_SHINJIRO
# 9 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 1, SunshineOrphanage_AkihikosRoom2F_OnWarp1
	.2byte 0

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 1, AkihikosRoom2F_ONFRAME1
	.2byte 0


SunshineOrphanage_AkihikosRoom2F_OnWarp1::
# 15 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 16 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
	return


# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
walkdown:
# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 20 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
faceup:
# 20 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_up
	step_end

AkihikosRoom2F_ONFRAME1::
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


# 28 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 29 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 34 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 36 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 38 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 39 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 41 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 45 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 45 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 57 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 61 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 68 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 69 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 72 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_ORPHANAGE
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 2
# 74 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 75 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 76 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 77 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 90 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 91 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 91 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 96 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 97 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 98 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 99 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 100 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 107 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	set_invisible
	step_end

# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 117 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 118 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 119 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 123 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 124 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 128 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 129 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, SetWallclock_2
# 133 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 32, 0
# 134 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 135 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 140 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 142 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 144 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 3
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	resumefakertc
SetWallclock_1:
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SetWallclock_2:
# 130 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto SetWallclock_1


GiveRunningShoesAtStart::
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 153 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 154 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 156 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 159 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 160 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 161 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 166 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


RunningShoesToggleManual::
# 171 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 172 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox RunningShoesToggleManual_Text_0
# 173 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosPC::
# 177 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 178 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 179 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 180 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 186 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 187 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 188 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 189 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 190 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 194 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 195 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 196 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 201 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 202 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 203 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 205 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 210 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 213 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


BookshelfRight::
# 217 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 218 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 220 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


ChoresList::
# 224 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 225 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 226 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 227 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


Calendar::
# 232 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 233 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 237 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


TrashcanEmptyAkihikoRoom::
# 241 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 242 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 244 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 248 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 249 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 250 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 257 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 264 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 10
# 269 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 270 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 259 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 260 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 262 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 263 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 273 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 274 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 275 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 276 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1::
# 281 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 282 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 283 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 288 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 289 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 290 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 291 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji2::
# 296 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 297 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 298 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 299 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 303 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 304 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 305 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1:
# 311 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 311 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 311 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 312 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 312 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 312 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2:
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit::
# 320 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 321 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, walkdown
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 323 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1::
# 327 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 328 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 332 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 333 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 335 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 336 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 339 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji2::
# 343 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 344 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 348 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 349 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 351 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 352 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 353 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 354 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 355 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 53 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}BIG BRO!$"

GoSetTheClock_Text_0:
# 117 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}{SPEAKER NAME_AKIHIKO}I should fix the clock.$"

SetWallclock_Text_0:
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Let's see... The current time is...\n"
	.string "4:32PM.$"

SetWallclock_Text_1:
# 142 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

RunningShoesToggleManual_Text_0:
# 172 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can toggle various settings\n"
	.string "in Options Menu.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 195 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's an older model\n"
	.string "from Kirijo Electronics.$"

ShinjirosPC_Text_0:
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"

BookshelfLeft_Text_0:
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime characters.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 218 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokemon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}{SPEAKER NAME_AKIHIKO} I hope I can get my own Pokemon soon.$"

ChoresList_Text_0:
# 227 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Shinji and my chores list.$"

Calendar_Text_0:
# 233 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji on the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 242 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0:
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Hey, Akihiko.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0:
# 328 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1:
# 333 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Lets_Go_Play::
# 81 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}{SPEAKER NAME_AKIHIKO} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MIKI}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
