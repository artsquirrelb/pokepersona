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
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 55 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2::
# 59 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 60 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 64 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 66 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 67 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 70 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 71 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 75 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 87 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 88 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 89 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 50
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 100 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 103 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 105 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 111 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 113 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 120 "data/maps/ThundershardsCave_2F/scripts.pory"
	hidetalkbutton
# 121 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 135 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 140 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 141 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 142 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 143 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 145 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 147 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 167 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 168 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 171 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 193 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 201 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 202 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 203 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 205 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 206 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 207 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 209 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 211 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 232 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 233 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 234 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 235 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 238 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 243 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 244 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ShakeScreenNoSound::
# 249 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 250 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 251 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 252 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 253 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 254 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 255 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitstate
# 256 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
	return


ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave::
# 260 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 261 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 262 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 263 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 264 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 265 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 266 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 37
# 267 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 7
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0
# 270 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 272 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 275 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 277 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 280 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 282 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 283 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 284 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 285 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 286 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 287 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 288 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 289 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 290 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 291 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 29
# 292 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 10
# 293 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 294 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1
# 297 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 302 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 305 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 306 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 307 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 308 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 309 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 310 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 311 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 312 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 313 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 314 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 17
# 315 "data/maps/ThundershardsCave_2F/scripts.pory"
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

# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0:
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock_facing_direction
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0:
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_up
	step_end

# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1:
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2:
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
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
# 90 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 100 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 147 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beated both us out of nowhere, she\n"
	.string "must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 211 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 234 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(Magnifique.)$"

ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0:
# 277 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Looks like those two managed to\n"
	.string "escape.\p"
	.string "That's a relief.)$"

KG_Staff_M_defeated::
# 223 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 227 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
