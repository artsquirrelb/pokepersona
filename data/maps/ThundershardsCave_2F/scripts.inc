ThundershardsCave_2F_MapScripts::
# 4 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/ThundershardsCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 13
	goto_if_eq ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 5 "data/maps/ThundershardsCave_2F/scripts.pory"
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
	goto_if_gt ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	return

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_3
# 7 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 8 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_5
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

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 23 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_3
	return

ThundershardsCave_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1::
# 29 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 30 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 31 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0
# 33 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 34 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 35 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 36 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2::
# 40 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 41 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 14
# 42 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0
# 44 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 45 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 30
# 46 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadenewbgm MUS_ABNORMAL_WEATHER
# 47 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff
# 48 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 51 "data/maps/ThundershardsCave_2F/scripts.pory"
walkinplaceleft:
# 52 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_in_place_left
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff::
# 56 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 57 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0
# 59 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, walkinplaceleft
# 61 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	setspeaker ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1
# 68 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 69 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, walkinplaceright
# 70 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_2
# 72 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 14, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1
# 74 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 75 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 14
# 76 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 78 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3
# 83 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 84 "data/maps/ThundershardsCave_2F/scripts.pory"
	playfirstmoncry
# 85 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 86 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 87 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_LetsJumpKGStaff::
# 92 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0
# 94 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 95 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 96 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_KirijoGenesisStaff::
# 101 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 102 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 103 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 105 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 107 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_PIN
# 108 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0
# 109 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 111 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferpartymonnick STR_VAR_2, 1
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0
# 114 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 115 "data/maps/ThundershardsCave_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_KG_STAFF_M_THUNDERSHARDS_CAVE_1F, KG_Staff_M_defeated, TRAINER_KG_STAFF_F_THUNDERSHARDS_CAVE_1F, KG_Staff_F_defeated
# 116 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle
# 117 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle::
# 121 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 122 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 123 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, faceup
# 124 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 126 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, facedown
# 127 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0
# 131 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0
# 133 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1
# 135 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/ThundershardsCave_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 137 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1:
# 141 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1
# 142 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 143 "data/maps/ThundershardsCave_2F/scripts.pory"
	goto ThundershardsCave_2F_Eventscript_FreezingKGStaff
# 144 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2:
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2
# 139 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_3:
# 137 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_2
	goto ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_1


ThundershardsCave_2F_Eventscript_FreezingKGStaff::
# 148 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_4
# 149 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 21, MAP_THUNDERSHARDS_CAVE_2F
# 150 "data/maps/ThundershardsCave_2F/scripts.pory"
	showobjectat 21, MAP_THUNDERSHARDS_CAVE_2F
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0
# 152 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 153 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_LEDGE
# 154 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 21
# 155 "data/maps/ThundershardsCave_2F/scripts.pory"
	special SpawnCameraObject
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1
# 157 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 158 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE, 1
# 159 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 160 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 161 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 162 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_BUBBLE_BEAM
# 163 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 164 "data/maps/ThundershardsCave_2F/scripts.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 165 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmoncry
# 166 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_ICY_WIND
# 167 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 168 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 12, invisible
# 169 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 13, invisible
# 170 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 171 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 12
# 172 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 13
# 173 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 174 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_TEMP_3
# 175 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 19
# 176 "data/maps/ThundershardsCave_2F/scripts.pory"
	addobject 20
# 177 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 178 "data/maps/ThundershardsCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 179 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 180 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, shakehorizontal
# 181 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 182 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 4
# 183 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, shakehorizontal
# 184 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_M_HARDEN
# 185 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 186 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 8
# 187 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2
# 188 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/ThundershardsCave_2F/scripts.pory"
	special RemoveCameraObject
# 190 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay 20
# 191 "data/maps/ThundershardsCave_2F/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0
# 194 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 21, ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2
# 196 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement
# 197 "data/maps/ThundershardsCave_2F/scripts.pory"
	removeobject 21
# 198 "data/maps/ThundershardsCave_2F/scripts.pory"
	setflag FLAG_TEMP_4
# 199 "data/maps/ThundershardsCave_2F/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
# 200 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	end


ThundershardsCave_2F_Eventscript_FrozenStaff::
# 213 "data/maps/ThundershardsCave_2F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 14
	goto_if_eq ThundershardsCave_2F_Eventscript_FrozenStaff_1
	return

ThundershardsCave_2F_Eventscript_FrozenStaff_1:
# 214 "data/maps/ThundershardsCave_2F/scripts.pory"
	lock
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0
# 216 "data/maps/ThundershardsCave_2F/scripts.pory"
	closemessage
# 217 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_SELECT
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 19, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 219 "data/maps/ThundershardsCave_2F/scripts.pory"
	applymovement 20, ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0
# 220 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitmovement 0
# 221 "data/maps/ThundershardsCave_2F/scripts.pory"
	playse SE_CLICK
# 222 "data/maps/ThundershardsCave_2F/scripts.pory"
	waitse
# 223 "data/maps/ThundershardsCave_2F/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1
# 224 "data/maps/ThundershardsCave_2F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 15
# 225 "data/maps/ThundershardsCave_2F/scripts.pory"
	release
	return


# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff1_Movement_0:
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 32 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruNoticingKGStaff2_Movement_0:
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	delay_16
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	player_run_right
# 43 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 58 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_0:
# 58 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 58 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
	step_end

# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_1:
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_right
# 73 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Movement_2:
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 77 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
	step_end

# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Movement_0:
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	emote_exclamation_mark
# 104 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_left
	step_end

# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_0:
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 132 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_1:
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 134 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Movement_2:
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_down
# 138 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_right
	step_end

# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_0:
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_visible
# 151 "data/maps/ThundershardsCave_2F/scripts.pory"
	jump_right
	step_end

# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_1:
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 156 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
	step_end

# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FreezingKGStaff_Movement_2:
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_left
# 195 "data/maps/ThundershardsCave_2F/scripts.pory"
	set_invisible
	step_end

# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
ThundershardsCave_2F_Eventscript_FrozenStaff_Movement_0:
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	walk_fast_right
# 218 "data/maps/ThundershardsCave_2F/scripts.pory"
	face_down
	step_end

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_0:
# 62 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Scientist$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_1:
# 63 "data/maps/ThundershardsCave_2F/scripts.pory"
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
# 71 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}Don't worry sir. That's our job.$"

ThundershardsCave_2F_Eventscript_MitsuruEavesdroppingKGStaff_Text_3:
# 81 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}.........\p"
	.string "({STR_VAR_1}, are you ready?)$"

ThundershardsCave_2F_Eventscript_LetsJumpKGStaff_Text_0:
# 93 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(They haven't noticed me yet. Let's\n"
	.string "surprise those people.)$"

ThundershardsCave_2F_Eventscript_KirijoGenesisStaff_Text_0:
# 112 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_WIB}What the- Why are you here-\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}{STR_VAR_1}, {STR_VAR_2}.$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_0:
# 128 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MIB}(Should we report to the manager?)\p"
	.string "{SPEAKER NAME_WIB}(She beated both us out of nowhere, she\n"
	.string "must be here for trouble.)\p"
	.string "{SPEAKER NAME_MIB}(Exactly, let's go.)$"

ThundershardsCave_2F_Eventscript_Post_KirijoGenesisStaffM_Battle_Text_1:
# 141 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Not so fast.$"

ThundershardsCave_2F_Eventscript_FreezingKGStaff_Text_0:
# 192 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Don't worry, you'll thaw out in about 20\n"
	.string "minutes.\p"
	.string "Let's go, {STR_VAR_1}, Inteleon.$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_0:
# 215 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(I should be able to push them.)$"

ThundershardsCave_2F_Eventscript_FrozenStaff_Text_1:
# 223 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}(Magnifique.)$"

KG_Staff_M_defeated::
# 204 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Dammit. I knew she graduated the\n"
	.string "Ranger School early but still-$"

KG_Staff_F_defeated::
# 208 "data/maps/ThundershardsCave_2F/scripts.pory"
	.string "Why is the Kirijo young lady here?$"
