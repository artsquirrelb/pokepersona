SunshineOrphanage_AkihikosRoom2F_MapScripts::
# 7 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 4 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 0
	goto_if_gt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_lt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 15 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 16 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 1, SunshineOrphanage_AkihikosRoom2F_OnWarp1
	.2byte 0

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 1, AkihikosRoom2F_ONFRAME1
# 6 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, 9, SunshineOrphanage_AkihikosRoom2F_OnFrame9
	.2byte 0


SunshineOrphanage_AkihikosRoom2F_OnWarp1::
# 22 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
	return


# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
walkdown:
# 25 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 26 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
faceup:
# 26 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_up
	step_end

AkihikosRoom2F_ONFRAME1::
# 29 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 30 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
# 31 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


SunshineOrphanage_AkihikosRoom2F_OnFrame9::
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
	end


# 39 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 45 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 46 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 53 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 61 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 67 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 68 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 69 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 72 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 76 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 78 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 79 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 82 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_ORPHANAGE
# 83 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 2
# 84 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 85 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 86 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 100 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 101 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 107 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 108 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 109 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 110 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 115 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 117 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	set_invisible
	step_end

# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 126 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 127 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 128 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 129 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 133 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 134 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, SetWallclock_2
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 32, 0
# 144 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 148 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 150 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 151 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 153 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 154 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 3
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	resumefakertc
SetWallclock_1:
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SetWallclock_2:
# 140 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto SetWallclock_1


GiveRunningShoesAtStart::
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 166 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 167 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 168 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 169 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 170 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 171 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 173 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 174 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 175 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 176 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


RunningShoesToggleManual::
# 181 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 182 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox RunningShoesToggleManual_Text_0
# 183 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosPC::
# 187 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 188 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 189 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 190 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 196 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 197 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 198 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 199 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 200 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 205 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 206 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 212 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 213 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 214 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 215 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 220 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 223 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


BookshelfRight::
# 227 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 230 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


ChoresList::
# 234 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 235 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 237 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 238 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


Calendar::
# 242 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 243 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 247 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


TrashcanEmptyAkihikoRoom::
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 259 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 260 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 265 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 274 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 10
# 279 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_TEMP_1, 1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 280 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 269 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 270 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 271 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 272 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 273 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 283 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 285 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 286 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 287 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1::
# 291 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 293 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 294 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 298 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 299 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 300 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 301 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 302 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji2::
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 308 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 313 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 317 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


# 320 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1:
# 321 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 321 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 321 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 324 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2:
# 325 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 325 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit::
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, walkdown
# 332 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 333 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1::
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 340 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 341 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 342 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 343 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 345 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 348 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 349 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji2::
# 353 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 354 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 356 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 357 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 358 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 359 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 361 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 362 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 363 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 364 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 365 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}BIG BRO!$"

GoSetTheClock_Text_0:
# 127 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}{SPEAKER NAME_AKIHIKO}I should fix the clock.$"

SetWallclock_Text_0:
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Let's see... The current time is...\n"
	.string "4:32PM.$"

SetWallclock_Text_1:
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 153 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 168 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 173 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

RunningShoesToggleManual_Text_0:
# 182 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can toggle various settings\n"
	.string "in Options Menu.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 205 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's an older model\n"
	.string "from Kirijo Electronics.$"

ShinjirosPC_Text_0:
# 214 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"

BookshelfLeft_Text_0:
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime characters.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokémon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}{SPEAKER NAME_AKIHIKO} I hope I can get my own Pokémon soon.$"

ChoresList_Text_0:
# 237 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Shinji and my chores list.$"

Calendar_Text_0:
# 243 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji on the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 265 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0:
# 294 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Hey, Akihiko.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0:
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1:
# 343 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

Lets_Go_Play::
# 91 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}{SPEAKER NAME_AKIHIKO} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MIKI}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
