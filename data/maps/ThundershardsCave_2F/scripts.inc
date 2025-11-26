ThundershardsCave_2F_MapScripts::
# 5 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 33 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 13
	goto_if_eq ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 6 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 13
	goto_if_gt ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 14 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_gt ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 18 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 15
	goto_if_eq ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 22 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 15
	goto_if_gt ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 25 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 16
	goto_if_eq ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 29 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 20
	goto_if_lt ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	return

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 9 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 12
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 15 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 16 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 19 "data/maps/ThundershardsCave_2F/scripts.pory"
	setobjectxyperm 19, 34, 8
# 20 "data/maps/ThundershardsCave_2F/scripts.pory"
	setobjectxyperm 20, 33, 8
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 23 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_3
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 26 "data/maps/ThundershardsCave_2F/scripts.pory"
	setweather WEATHER_DROUGHT
# 27 "data/maps/ThundershardsCave_2F/scripts.pory"
	special StartDroughtWeatherBlend
	goto ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 30 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_5
	return

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 16, ThundershardsCave_2F_Eventscript_OnWarp16
	.2byte 0

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 16, ThundershardsCave_2F_Eventscript_OnFrame16
	.2byte 0


ThundershardsCave_2F_Eventscript_OnWarp16::
# 39 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, faceleft
	return


ThundershardsCave_2F_Eventscript_OnFrame16::
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1::
# 47 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 48 "data/maps/ThundershardsCave_2F/scripts.pory"
	hidetalkbutton
# 49 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0
# 52 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 53 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 54 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_P5_MENTAL_BREAKDOWN
# 55 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 56 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 57 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2::
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	hidetalkbutton
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 64 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0
# 66 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 67 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 68 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_P5_MENTAL_BREAKDOWN
# 69 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 70 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 71 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 74 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 75 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 84 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 85 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 86 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 50
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 103 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 107 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 108 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 109 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 110 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 117 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 118 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 119 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	hidetalkbutton
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 129 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 135 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 139 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 140 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 141 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 145 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 147 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 148 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 165 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 166 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 167 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 168 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 193 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 201 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 202 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 203 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 205 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 206 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 207 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 209 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 211 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 212 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 220 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 221 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 222 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 223 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 224 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 238 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 243 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 244 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 245 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 246 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 247 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 248 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 249 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ShakeScreenNoSound::
# 254 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 255 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 256 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 257 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 258 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 259 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 260 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitstate
# 261 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
	return


ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave::
# 265 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 266 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 267 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 270 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 37
# 272 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 7
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0
# 275 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 277 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 278 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 280 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 282 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0
# 284 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 285 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 286 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 287 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 288 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 289 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 290 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 291 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 292 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 293 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 294 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 29
# 297 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 10
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1
# 302 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2
# 305 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 306 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 307 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 308 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 309 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 310 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 311 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 312 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 313 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 314 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 315 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 316 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 317 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 318 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 319 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 17
# 320 "data/maps/ThundershardsCave_2F/scripts.pory"
	warp MAP_SUNSHINE_MEADOW, 11, 3
	return


# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0:
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0:
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock_facing_direction
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0:
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_up
	step_end

# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1:
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2:
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 85 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 86 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "The subjects were successfully\n"
	.string "transported to the new lab.\p"
	.string "There's only a few leftover reports I\n"
	.string "need to fetch.\p"
	.string "The cops already caught onto this lab\n"
	.string "so we need to move fast.\p"
	.string "Make sure no curious cats get in before\n"
	.string "I finish.\p"
	.string "There's already a weird man mining the\n"
	.string "rocks on the floor below.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2:
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beat both of us out of nowhere,\n"
	.string "she must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 165 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 247 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(Magnifique.)$"

ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0:
# 282 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Looks like those two managed to\n"
	.string "escape.\p"
	.string "That's a relief.)$"

KG_Staff_M_defeated::
# 228 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 232 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
