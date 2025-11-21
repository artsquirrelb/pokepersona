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
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 10 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 10 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_lt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 14 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 15 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
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
# 21 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
walkdown:
# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
faceup:
# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_up
	step_end

AkihikosRoom2F_ONFRAME1::
# 28 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 29 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
# 30 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


# 34 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 41 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 42 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 46 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 57 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 61 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 64 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 67 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 68 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 74 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 2
# 78 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 79 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 80 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 81 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 94 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 95 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 95 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 100 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 103 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 105 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 105 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	set_invisible
	step_end

# 114 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 115 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 115 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 122 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 123 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 127 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 128 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 132 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 133 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, SetWallclock_2
# 137 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 32, 0
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	pausefakertc
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 140 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 148 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 149 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 3
SetWallclock_1:
# 151 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SetWallclock_2:
# 134 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto SetWallclock_1


GiveRunningShoesAtStart::
# 156 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 159 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 160 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 161 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 167 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 168 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 169 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 170 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


RunningShoesToggleManual::
# 175 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 176 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox RunningShoesToggleManual_Text_0
# 177 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosPC::
# 181 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 182 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 183 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 184 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 190 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 191 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 192 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 193 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 194 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 198 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 199 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 200 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 205 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 206 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 207 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 208 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 209 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 214 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 215 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 217 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


BookshelfRight::
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 222 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 224 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


ChoresList::
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 229 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 230 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 231 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 232 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


Calendar::
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 237 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 241 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


TrashcanEmptyAkihikoRoom::
# 245 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 246 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 248 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 253 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 259 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 271 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 272 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 10
# 273 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_TEMP_1, 1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 274 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 262 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 263 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 264 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 265 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 266 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 279 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 280 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 281 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1::
# 285 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 286 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 287 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 288 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 293 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 294 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 295 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 296 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji2::
# 300 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 301 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 302 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 303 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 308 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 311 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1:
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
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

# 318 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2:
# 319 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 319 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 320 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 320 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 320 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit::
# 324 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 325 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, walkdown
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 327 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1::
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 332 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 334 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 335 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 336 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 339 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 340 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 341 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 342 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 343 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji2::
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 348 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 350 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 351 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 352 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 353 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 355 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 356 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 357 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 358 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 359 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}BIG BRO!$"

GoSetTheClock_Text_0:
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}{SPEAKER NAME_AKIHIKO}I should fix the clock.$"

SetWallclock_Text_0:
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Let's see... The current time is...\n"
	.string "4:32PM.$"

SetWallclock_Text_1:
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 148 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 159 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 167 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

RunningShoesToggleManual_Text_0:
# 176 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can toggle various settings\n"
	.string "in Options Menu.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 199 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's an older model\n"
	.string "from Kirijo Electronics.$"

ShinjirosPC_Text_0:
# 208 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"

BookshelfLeft_Text_0:
# 215 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime characters.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 222 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokémon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}{SPEAKER NAME_AKIHIKO} I hope I can get my own Pokémon soon.$"

ChoresList_Text_0:
# 231 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Shinji and my chores list.$"

Calendar_Text_0:
# 237 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji on the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 246 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 259 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 262 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0:
# 288 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Hey, Akihiko.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0:
# 332 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1:
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Lets_Go_Play::
# 85 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}{SPEAKER NAME_AKIHIKO} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MIKI}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
