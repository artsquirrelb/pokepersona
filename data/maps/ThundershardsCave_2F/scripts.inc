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
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 54 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 55 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 56 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2::
# 60 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0
# 64 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 65 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 66 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 67 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 68 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 69 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 72 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 82 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 84 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 89 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 90 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 91 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 50
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 99 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 100 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 105 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_3
# 107 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 108 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 113 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 117 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 129 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 130 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 137 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 139 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 143 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 144 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 145 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 146 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 147 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 148 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 164 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 165 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 166 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 171 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 193 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 201 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 202 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 203 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 205 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 206 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 207 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 209 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 210 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 211 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 212 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 220 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 221 "data/maps/ThundershardsCave_2F/scripts.pory"
	fwdtime 8, 40
# 222 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 235 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 236 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 238 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 239 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 241 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 242 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 243 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 244 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 245 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 246 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 247 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ShakeScreenNoSound::
# 253 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 254 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 255 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 256 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 257 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 258 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 259 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitstate
# 260 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
	return


ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave::
# 264 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 265 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 266 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 267 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 268 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 269 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 270 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 37
# 271 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 7
# 272 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0
# 274 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 275 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 276 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 277 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 278 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkup
# 279 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 280 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0
# 283 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 284 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 285 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, walkdown
# 286 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 287 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 288 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 289 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 290 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 291 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 292 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 293 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 294 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 295 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 0, 29
# 296 "data/maps/ThundershardsCave_2F/scripts.pory"
	setfieldeffectargument 1, 10
# 297 "data/maps/ThundershardsCave_2F/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 298 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 299 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1
# 301 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 302 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2
# 304 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 305 "data/maps/ThundershardsCave_2F/scripts.pory"
	call ShakeScreenNoSound
# 306 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 10
# 307 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 308 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_INTRO_BLAST
# 309 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 310 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8005, 4
# 311 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8006, 6
# 312 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 313 "data/maps/ThundershardsCave_2F/scripts.pory"
	special ShakeCamera
# 314 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 315 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 316 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 317 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 318 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 17
# 319 "data/maps/ThundershardsCave_2F/scripts.pory"
	fwdtime 9, 35
# 320 "data/maps/ThundershardsCave_2F/scripts.pory"
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

# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0:
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_3:
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_in_place_right
	step_end

# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock_facing_direction
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 240 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_0:
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 273 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_up
	step_end

# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_1:
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 300 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Movement_2:
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_up
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_left
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
# 303 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 84 "data/maps/ThundershardsCave_2F/scripts.pory"
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
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beat both of us out of nowhere,\n"
	.string "she must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 237 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 245 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_CONFIDENT}(Magnifique.)$"

ThundershardsCave_2F_Eventscript_MitsuruEscapingTheExplodingCave_Text_0:
# 281 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}(Looks like those two managed to\n"
	.string "escape.\p"
	.string "That's a relief.)$"

KG_Staff_M_defeated::
# 226 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 230 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
