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
	compare VAR_AKIHIKOS_INTRO_STATE, A_INTRO_START
	goto_if_gt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_INTRO_START
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 11 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
	goto_if_ge SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, A_GET_PAWMI
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
	compare VAR_AKIHIKOS_INTRO_STATE, A_GET_PAWMI
	goto_if_lt SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 15 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 16 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
	return

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_INTRO_START, AkihikosRoom2F_OnWarpIntro
	.2byte 0

SunshineOrphanage_AkihikosRoom2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	map_script_2 VAR_AKIHIKOS_INTRO_STATE, A_INTRO_START, AkihikosRoom2F_OnFrameIntro
	.2byte 0


AkihikosRoom2F_OnWarpIntro::
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

AkihikosRoom2F_OnFrameIntro::
# 29 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 30 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
# 31 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 36 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 41 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 42 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	addmoney 3000
# 45 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 46 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 57 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 63 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 66 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 68 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 69 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 70 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 75 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 76 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 78 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
# 79 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_MUST_SET_CLOCK
# 80 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_HELP_BUTTON
# 81 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 82 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 83 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 96 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 97 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 97 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 103 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 105 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 106 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 107 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 107 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 112 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 112 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 113 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	set_invisible
	step_end

# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 117 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 117 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 122 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 123 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 124 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 125 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 129 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 130 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 134 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 135 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	manuallysettime WEEKDAY_WED, 16, 32, 0
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 140 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_A EMOTE_SMILE
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 142 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 143 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_GET_SHOES
# 144 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


GiveRunningShoesAtStart::
# 149 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 150 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_A EMOTE_NORMAL
# 151 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 153 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_A EMOTE_HAPPY
# 154 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 156 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 160 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 161 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 162 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_MEET_MIKI_OUTSIDE
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


AkihikosPC::
# 168 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 169 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 170 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 171 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 177 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 178 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 179 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 180 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 181 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 185 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 186 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 187 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 192 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 193 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 194 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 199 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 200 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 203 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfRight::
# 208 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 209 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ChoresList::
# 216 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 217 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 218 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


Calendar::
# 223 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 224 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 228 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


TrashcanEmptyAkihikoRoom::
# 233 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 234 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 241 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 242 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 243 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 248 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 250 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 257 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 259 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 260 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_TEMP_1, 1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 244 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 253 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 256 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 265 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 266 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 269 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Trigger::
# 274 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	switch VAR_AKIHIKOS_INTRO_STATE
# 276 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	case A_MUST_SET_CLOCK, SunshineOrphanage_AkihikosRoom2F_Trigger_3
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	case A_GET_SHOES, SunshineOrphanage_AkihikosRoom2F_Trigger_4
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	case A_GET_PAWMI, SunshineOrphanage_AkihikosRoom2F_Trigger_5
# 279 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
SunshineOrphanage_AkihikosRoom2F_Trigger_1:
	end

SunshineOrphanage_AkihikosRoom2F_Trigger_3:
# 276 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto GoSetTheClock
	goto SunshineOrphanage_AkihikosRoom2F_Trigger_1

SunshineOrphanage_AkihikosRoom2F_Trigger_4:
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto GiveRunningShoesAtStart
	goto SunshineOrphanage_AkihikosRoom2F_Trigger_1

SunshineOrphanage_AkihikosRoom2F_Trigger_5:
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji
	goto SunshineOrphanage_AkihikosRoom2F_Trigger_1


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji::
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 285 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_2
SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_1:
# 289 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SApproachesA
# 290 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement
# 291 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymoveplayer faceup
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_Text_0
# 296 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymove 2, walkdown
# 297 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	fwdtime 8, 35
# 298 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 299 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 300 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
# 301 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_2:
# 287 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_1


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji::
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji_Text_0
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SApproachesA
# 311 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement
# 312 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji_Text_1
# 313 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymove 2, walkdown
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	fwdtime 8, 35
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_2
# 317 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, A_GO_MEET_KBYS
# 318 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


SApproachesA::
# 323 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 324 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_0x8000, 5
	goto_if_eq SApproachesA_1
# 328 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_eq SApproachesA_2
	return

SApproachesA_1:
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymove 2, SApproachesA_Movement_0
	return

SApproachesA_2:
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymove 2, SApproachesA_Movement_1
	return


Eventscript_PostGivemon::
# 334 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Eventscript_PostGivemon_1
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Eventscript_PostGivemon_2
# 341 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call Eventscript_CantGiveMon
	return

Eventscript_PostGivemon_1:
# 335 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call Eventscript_MonGivenToParty
	return

Eventscript_PostGivemon_2:
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call Eventscript_MonSendToBox
	return


Eventscript_MonGivenToParty::
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Eventscript_MonGivenToParty_Text_0
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
	return


Eventscript_MonSendToBox::
# 351 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Eventscript_MonSendToBox_Text_0
# 352 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
	return


Eventscript_CantGiveMon::
# 356 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Eventscript_CantGiveMon_Text_0
# 358 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
	return


# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SApproachesA_Movement_0:
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_diag_southwest
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SApproachesA_Movement_1:
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MK}BIG BRO!$"

GoSetTheClock_Text_0:
# 123 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE MUGSHOT_A EMOTE_NORMAL}{SPEAKER NAME_A}(I should fix the clock.)$"

SetWallclock_Text_0:
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Let's see... The current time is...\n"
	.string "4:32PM.$"

SetWallclock_Text_1:
# 141 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 142 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "(Now where are my shoes...)$"

GiveRunningShoesAtStart_Text_1:
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "(There they are!)$"

GiveRunningShoesAtStart_Text_2:
# 160 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 186 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_A EMOTE_NORMAL}(It's Akihiko's PC. It's an older model\n"
	.string "from Kirijo Electronics.)$"

ShinjirosPC_Text_0:
# 193 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(It's Shinji's PC. It was a donation.)$"

BookshelfLeft_Text_0:
# 200 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime characters.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 209 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokémon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE MUGSHOT_A EMOTE_HAPPY}{SPEAKER NAME_A}(I hope I can get my own Pokémon soon.)$"

ChoresList_Text_0:
# 217 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}(Shinji and my chores list.)$"

Calendar_Text_0:
# 224 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SMILE} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji on the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE MUGSHOT_A EMOTE_SAD}I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 234 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 244 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 248 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji_Text_0:
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Hey, Aki.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji_Text_0:
# 307 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji_Text_1:
# 312 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_NORMAL}Let's go.$"

Eventscript_MonGivenToParty_Text_0:
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put {STR_VAR_1} in the\n"
	.string "party.$"

Eventscript_MonSendToBox_Text_0:
# 351 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{STR_VAR_1} was sent to the\n"
	.string "Pokémon Storage.$"

Eventscript_CantGiveMon_Text_0:
# 356 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There's no room for {STR_VAR_1}.\n"
	.string "{PLAYER} released it to the wild.$"

Lets_Go_Play::
# 87 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MK}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE MUGSHOT_A EMOTE_SMILE}{SPEAKER NAME_A} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MK}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
