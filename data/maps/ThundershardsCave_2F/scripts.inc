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
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 49 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0
# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 52 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 53 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 54 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2::
# 58 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 59 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 60 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 64 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 66 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 69 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 70 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 74 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 75 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 86 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 87 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 88 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 90 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 50
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 103 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 105 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 110 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 111 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 113 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 119 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 120 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 121 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 129 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 135 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 139 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 140 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 141 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 142 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 144 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 145 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 166 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 167 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 168 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 171 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 193 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 201 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 202 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 203 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 205 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 206 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 207 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 209 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 212 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 231 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 232 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 233 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 234 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 235 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 238 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 243 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ShakeScreenNoSound::
# 248 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 249 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 250 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 251 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 252 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 253 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 254 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitstate
# 255 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
	return


ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave::
# 259 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 260 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 261 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 262 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 263 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 264 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 265 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 37
# 266 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 7
# 267 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 270 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 272 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 275 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0
# 278 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 280 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 282 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 283 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 284 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 285 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 286 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 287 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 288 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 289 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 290 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 29
# 291 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 10
# 292 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 293 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 294 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 297 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 302 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 305 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 306 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 307 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 308 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 309 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 310 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 311 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 312 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 313 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 17
# 314 "data/maps/ThundershardsCave_2F/scripts.pory"
	warp MAP_SUNSHINE_MEADOW, 11, 3
	return


# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0:
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 50 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0:
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock_facing_direction
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0:
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_up
	step_end

# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1:
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2:
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "The subjects were successfully\n"
	.string "transported to the new lab.\p"
	.string "There's only a few leftover reports I\n"
	.string "need to fetch.\p"
	.string "The cops already caught onto this lab\n"
	.string "so we need to move fast.\p"
	.string "Make sure no curious cats get in before\n"
	.string "I finish.\p"
	.string "There's already a weird man mining the\n"
	.string "rocks in the floor below.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2:
# 89 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 111 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beated both us out of nowhere, she\n"
	.string "must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 233 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(Magnifique.)$"

ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0:
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Looks like those two managed to\n"
	.string "escape.\p"
	.string "That's a relief.)$"

KG_Staff_M_defeated::
# 222 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 226 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
