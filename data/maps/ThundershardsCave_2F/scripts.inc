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
	fadenewbgm MUS_MENTAL_BREAKDOWN
# 66 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 67 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 68 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 71 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 72 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 88 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 89 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 90 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 50
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 100 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 103 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 105 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 107 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 113 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 121 "data/maps/ThundershardsCave_2F/scripts.pory"
	hidetalkbutton
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 129 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 135 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 137 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 142 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 143 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 144 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 145 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 147 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 148 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 164 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 165 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 171 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 193 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 201 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 202 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 203 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 205 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 206 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 207 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 209 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 211 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 212 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 220 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 221 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 234 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 235 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 238 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 243 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 244 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 245 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 246 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ShakeScreenNoSound::
# 251 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 252 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 253 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 254 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 255 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 256 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 257 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitstate
# 258 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
	return


ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave::
# 262 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 263 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 264 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 265 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 266 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 267 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 37
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 7
# 270 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0
# 272 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 275 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 277 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 278 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 282 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 283 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 284 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 285 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 286 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 287 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 288 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 289 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 290 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 291 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 292 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 293 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 29
# 294 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 10
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 297 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2
# 302 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 305 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 306 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 307 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 308 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 309 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 310 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 311 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 312 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 313 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 314 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 315 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 316 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 17
# 317 "data/maps/ThundershardsCave_2F/scripts.pory"
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

# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock_facing_direction
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0:
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_up
	step_end

# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1:
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2:
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
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
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 113 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beat both of us out of nowhere,\n"
	.string "she must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 244 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(Magnifique.)$"

ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0:
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Looks like those two managed to\n"
	.string "escape.\p"
	.string "That's a relief.)$"

KG_Staff_M_defeated::
# 225 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 229 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
