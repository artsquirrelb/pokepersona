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
# 14 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceup
# 15 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
	return


# 18 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
walkdown:
# 18 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
faceup:
# 19 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_up
	step_end

AkihikosRoom2F_ONFRAME1::
# 22 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 1
	goto_if_eq AkihikosRoom2F_ONFRAME1_2
AkihikosRoom2F_ONFRAME1_1:
# 24 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return

AkihikosRoom2F_ONFRAME1_2:
# 23 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Cutscene1
	goto AkihikosRoom2F_ONFRAME1_1


# 27 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
emotepensive:
# 28 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_pensive
	step_end

AkihikosRoom2F_Cutscene1::
# 33 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 34 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, emotepensive
# 35 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 60
# 37 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	clearflag FLAG_HIDE_MIKI
# 38 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 40 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto AkihikosRoom2F_Eventscript_MikiAppears
	return


# 42 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Appears:
# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 43 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
# 44 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_up
	step_end

AkihikosRoom2F_Eventscript_MikiAppears::
# 48 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 49 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special SpawnCameraObject
# 50 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_On_Miki
# 51 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox AkihikosRoom2F_Eventscript_MikiAppears_Text_0
# 54 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 55 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PIN
# 56 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, Akihiko_Surprised
# 57 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Appears
# 58 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 8
# 60 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Lets_Go_Play
# 61 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
# 62 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto Miki_Inviting_Akihiko_To_Play
	return


Miki_Inviting_Akihiko_To_Play::
# 65 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 67 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 1, Miki_Leaves
# 68 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_EXIT
# 70 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_MIKI
# 71 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_VISITED_SUNSHINE_ORPHANAGE
# 72 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 2
# 73 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 1
# 74 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special RemoveCameraObject
# 75 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	end


# 88 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_On_Miki:
# 89 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 89 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 89 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Akihiko_Surprised:
# 95 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	face_down
# 97 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 98 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay_16
# 99 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 99 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 99 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Miki_Leaves:
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
# 104 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_down
	step_end

# 107 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
Camera_Back_to_Player:
# 108 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 108 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
# 108 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_fast_up
	step_end

GoSetTheClock::
# 113 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 114 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GoSetTheClock_Text_0
# 120 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement LOCALID_PLAYER, StepBack
# 121 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


# 125 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
StepBack:
# 126 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_up
	step_end

SetWallclock::
# 130 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK PlayersHouse_2F_EventScript_CheckWallClock
# 131 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_0
# 132 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 133 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	delay 30
# 134 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 135 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SetWallclock_Text_2
# 137 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 3
# 138 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 139 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


GiveRunningShoesAtStart::
# 144 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 145 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 146 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_0
# 148 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_HAPPY
# 149 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SetWallclock_Text_1
# 150 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_1
# 151 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 152 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker NULL
# 153 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitfanfare
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox GiveRunningShoesAtStart_Text_2
# 156 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 157 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 4
# 158 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


RunningShoesToggleManual::
# 163 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox RunningShoesToggleManual_Text_0
# 165 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


AkihikosPC::
# 169 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 170 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	checkplayergender
# 171 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT MALE SunshineOrphanage_AkihikosRoom2F_PlayersPC
# 172 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_eq VAR_RESULT FEMALE SunshineOrphanage_AkihikosRoom2F_RivalsPC
	return


SunshineOrphanage_AkihikosRoom2F_PlayersPC::
# 178 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playse SE_PC_ON
# 179 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 180 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	special BedroomPC
# 181 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitstate
# 182 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


SunshineOrphanage_AkihikosRoom2F_RivalsPC::
# 186 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 187 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_MITSURU
# 188 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0
# 189 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


ShinjirosPC::
# 194 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 195 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 196 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 197 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ShinjirosPC_Text_0
# 198 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	end


BookshelfLeft::
# 203 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfLeft_Text_0
# 206 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


BookshelfRight::
# 210 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lockall
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox BookshelfRight_Text_0
# 213 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	releaseall
	return


ChoresList::
# 217 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 218 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	createfieldmugshot MUGSHOT_AKIHIKO EMOTE_NORMAL
# 219 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setspeaker SP_NAME_AKIHIKO
# 220 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox ChoresList_Text_0
# 221 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


Calendar::
# 225 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 226 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox Calendar_Text_0
# 231 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


TrashcanEmptyAkihikoRoom::
# 235 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox TrashcanEmptyAkihikoRoom_Text_0
# 238 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi::
# 242 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 243 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	faceplayer
# 244 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2
# 249 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1
# 251 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5:
# 258 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
# 261 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 262 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 10
# 263 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_TEMP_1
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1:
# 264 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_2:
# 245 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_1

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_6:
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2
# 253 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 254 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 255 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmoncry
# 256 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack
# 257 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
	goto SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_5


# 267 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_PawmiGreetsBack:
# 268 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	emote_music
# 269 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock_facing_direction
# 270 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	jump_in_place_down
# 271 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	unlock_facing_direction
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1::
# 275 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 276 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 277 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 282 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 283 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 284 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 285 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 286 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji2::
# 290 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 291 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 292 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 293 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0
# 297 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 298 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 299 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 300 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 301 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


# 304 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1:
# 305 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 305 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 305 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 306 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2:
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 309 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_left
# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
# 310 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	walk_down
	step_end

SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit::
# 314 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 315 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, walkdown
# 316 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 317 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1::
# 321 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 324 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 325 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin1
# 326 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 327 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 329 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 330 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 331 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 332 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 333 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji2::
# 337 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	lock
# 338 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0
# 340 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
# 341 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	applymovement 2, SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiAsksToJoin2
# 342 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	waitmovement 0
# 343 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1
# 345 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	call SunshineOrphanage_AkihikosRoom2F_Eventscript_Shinjijoinexit
# 346 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	removeobject 2
# 347 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setflag FLAG_HIDE_SHINJIRO
# 348 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 11
# 349 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	release
	return


EventScript_VarAkihikoIntroState1::
# 354 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 1
	goto_if_ge EventScript_VarAkihikoIntroState1_2
EventScript_VarAkihikoIntroState1_1:
	end

EventScript_VarAkihikoIntroState1_2:
# 355 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	msgbox EventScript_VarAkihikoIntroState1_Text_0
# 357 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	closemessage
	goto EventScript_VarAkihikoIntroState1_1


AkihikosRoom2F_Eventscript_MikiAppears_Text_0:
# 52 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}BIG BRO!$"

GoSetTheClock_Text_0:
# 116 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}{SPEAKER NAME_AKIHIKO} I should fix the clock.$"

SetWallclock_Text_0:
# 131 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "The clock isn't working.$"

SetWallclock_Text_1:
# 135 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Akihiko$"

SetWallclock_Text_2:
# 136 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "All done.$"

GiveRunningShoesAtStart_Text_0:
# 147 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Now where are my shoes...$"

GiveRunningShoesAtStart_Text_1:
# 150 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "There they are!$"

GiveRunningShoesAtStart_Text_2:
# 155 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{PLAYER} put on the {COLOR GREEN}Running Shoes{COLOR DARK_GRAY}.$"

RunningShoesToggleManual_Text_0:
# 164 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{COLOR GREEN}Tips: You can toggle various settings\n"
	.string "in Options Menu.$"

SunshineOrphanage_AkihikosRoom2F_RivalsPC_Text_0:
# 188 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Akihiko's PC. It's from Kirijo\n"
	.string "Electronics.$"

ShinjirosPC_Text_0:
# 197 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's Shinji's PC. It was a donation.$"

BookshelfLeft_Text_0:
# 204 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book of how to draw anime character.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Miki often asks me to draw her favorite\n"
	.string "character from the game Persona 3.$"

BookshelfRight_Text_0:
# 211 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "A book about Pokemon species in their\n"
	.string "natural habitats.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY}{SPEAKER NAME_AKIHIKO} I hope I can get my own Pokemon soon.$"

ChoresList_Text_0:
# 220 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "Shinji and my chores list.$"

Calendar_Text_0:
# 226 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} My sis and I are going to get adopted\n"
	.string "in 3 days, Shinji in the following day.\p"
	.string "The Sanadas and the Aragakis look like\n"
	.string "they are good people.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD} I'll miss everyone here...$"

TrashcanEmptyAkihikoRoom_Text_0:
# 236 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "It's empty.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Shinji just took out the trash.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_0:
# 245 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi asked for both of us to\n"
	.string "meet her at the main hall.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_1:
# 249 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string " {SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Morning, Akihiko.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_ShinjiroInformingAboutMsKobayashi_Text_2:
# 252 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Morning to you too, Pawmi.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaventTalkedToShinji1_Text_0:
# 278 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Hey, Akihiko.\n"
	.string "Ms. Kobayashi said she wanted to meet\l"
	.string "us at the main hall.\p"
	.string "Let's go.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Oh, sure.$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_0:
# 322 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Oh, you're leaving?$"

SunshineOrphanage_AkihikosRoom2F_Eventscript_HaveTalkedToShinji1_Text_1:
# 327 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go.$"

EventScript_VarAkihikoIntroState1_Text_0:
# 355 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}L Button Talk Test var bigger than 1$"

Lets_Go_Play::
# 79 "data/maps/SunshineOrphanage_AkihikosRoom2F/scripts.pory"
	.string "{SPEAKER NAME_MIKI}It's time!\p"
	.string "You promised to take me out today!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}{SPEAKER NAME_AKIHIKO} Let me fix this clock real quick.\p"
	.string "Otherwise Shinji's gonna grill me.\p"
	.string "{DESTROY_MUGSHOT}{SPEAKER NAME_MIKI}Okay! I'll be waiting outside with Ms.\n"
	.string "Kobayashi!$"
