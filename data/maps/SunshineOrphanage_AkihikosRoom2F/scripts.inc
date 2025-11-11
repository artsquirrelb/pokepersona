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
# 20 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
walkdown:
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
faceup:
# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_up
	step_end

AkihikosRoom2F_ONFRAME1::
# 27 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 28 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
# 29 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


# 32 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 33 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 38 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 39 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 42 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 46 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 53 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 61 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 64 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 69 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 72 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 75 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_ORPHANAGE
# 76 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 2
# 77 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 78 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 79 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 93 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 94 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 94 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 100 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 102 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 103 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	set_invisible
	step_end

# 113 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 114 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 114 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 119 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 122 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 126 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 127 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 131 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 132 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, SetWallclock_2
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 32, 0
# 137 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 144 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 3
# 148 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	resumefakertc
SetWallclock_1:
# 150 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SetWallclock_2:
# 133 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto SetWallclock_1


GiveRunningShoesAtStart::
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 156 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 159 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 160 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 161 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 166 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 167 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 168 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 169 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


RunningShoesToggleManual::
# 174 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 175 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox RunningShoesToggleManual_Text_0
# 176 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosPC::
# 180 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 181 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 182 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 183 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 189 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 190 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 191 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 192 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 193 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 197 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 198 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 199 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 205 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 206 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 207 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 208 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 213 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 214 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 216 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


BookshelfRight::
# 220 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 223 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


ChoresList::
# 227 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 229 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 230 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 231 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


Calendar::
# 235 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 240 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


TrashcanEmptyAkihikoRoom::
# 244 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 245 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 247 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 253 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 260 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 270 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 271 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 10
# 272 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_TEMP_1, 1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 273 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 262 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 263 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 264 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 265 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 266 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 276 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 279 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 280 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1::
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 285 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 286 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 287 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 291 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 293 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 294 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 295 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji2::
# 299 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 300 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 301 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 302 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 308 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


# 313 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1:
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 317 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2:
# 318 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 318 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 319 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 319 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 319 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit::
# 323 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 324 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, walkdown
# 325 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1::
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 333 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 334 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 335 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 336 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 339 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 340 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 341 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 342 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji2::
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 349 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 350 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 351 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 352 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 354 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 355 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 356 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 357 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 358 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}BIG BRO!$"

GoSetTheClock_Text_0:
# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}{SPEAKER NAME_AKIHIKO}I should fix the clock.$"

SetWallclock_Text_0:
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Let's see... The current time is...\n"
	.string "4:32PM.$"

SetWallclock_Text_1:
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 161 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 166 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

RunningShoesToggleManual_Text_0:
# 175 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can toggle various settings\n"
	.string "in Options Menu.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 198 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's an older model\n"
	.string "from Kirijo Electronics.$"

ShinjirosPC_Text_0:
# 207 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"

BookshelfLeft_Text_0:
# 214 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime characters.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokémon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}{SPEAKER NAME_AKIHIKO} I hope I can get my own Pokémon soon.$"

ChoresList_Text_0:
# 230 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Shinji and my chores list.$"

Calendar_Text_0:
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji on the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 245 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0:
# 287 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Hey, Akihiko.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0:
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1:
# 336 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Lets_Go_Play::
# 84 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}{SPEAKER NAME_AKIHIKO} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MIKI}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
