CoralportCave_MapScripts::
# 2 "data/maps/CoralportCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/CoralportCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CoralportCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_4
# 4 "data/maps/CoralportCave/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto_if_gt CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/CoralportCave/scripts.pory"
	compare VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 5
	goto_if_eq CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_2
# 7 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_3
# 8 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_5
# 9 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_6
	goto CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CoralportCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 1, 36, 7
# 13 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 14 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 2, 36, 6
# 15 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 16 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 3, 34, 6
# 17 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 9, 35, 4
# 20 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 11, 37, 5
# 22 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 10, 37, 6
# 24 "data/maps/CoralportCave/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 26 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_TEMP_1
# 27 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_TEMP_2
# 28 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_TEMP_4
# 29 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return

CoralportCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/CoralportCave/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, CoralportCave_MapScripts_OnFrameTemp0
# 34 "data/maps/CoralportCave/scripts.pory"
	map_script_2 VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 5, CoralportCave_MapScripts_OnFrame5
	.2byte 0


CoralportCave_MapScripts_OnFrameTemp0::
# 39 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft
	return


CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft::
# 43 "data/maps/CoralportCave/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 44 "data/maps/CoralportCave/scripts.pory"
	compare VAR_0x8000, 37
	goto_if_eq CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_3
CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_1:
# 48 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 49 "data/maps/CoralportCave/scripts.pory"
	release
	return

CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_2:
# 45 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 46 "data/maps/CoralportCave/scripts.pory"
	waitmovement
	goto CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_1

CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_3:
# 44 "data/maps/CoralportCave/scripts.pory"
	compare VAR_0x8001, 5
	goto_if_eq CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_2
	goto CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_1


CoralportCave_MapScripts_OnFrame5::
# 53 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_MisaTakingInWooper
	return


CoralportCave_Eventscript_LeavingConfirm::
# 57 "data/maps/CoralportCave/scripts.pory"
	lock
# 58 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_LeavingConfirm_Text_0, MSGBOX_YESNO
# 60 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportCave_Eventscript_LeavingConfirm_1
# 70 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 71 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 72 "data/maps/CoralportCave/scripts.pory"
	release
	end

CoralportCave_Eventscript_LeavingConfirm_1:
# 61 "data/maps/CoralportCave/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 62 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CoralportCave_Eventscript_LeavingConfirm_5
CoralportCave_Eventscript_LeavingConfirm_4:
# 65 "data/maps/CoralportCave/scripts.pory"
	addtime 0, 4, 0
# 66 "data/maps/CoralportCave/scripts.pory"
	warp MAP_CORALPORT, 41, 24
# 67 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return

CoralportCave_Eventscript_LeavingConfirm_5:
# 63 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto CoralportCave_Eventscript_LeavingConfirm_4


CoralportCave_Eventscript_Fisherman::
# 78 "data/maps/CoralportCave/scripts.pory"
	lock
# 79 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 80 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 81 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_Fisherman_Text_1
# 83 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 84 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 85 "data/maps/CoralportCave/scripts.pory"
	refreshquesticon
# 86 "data/maps/CoralportCave/scripts.pory"
	release
	end


CoralportCave_Eventscript_DuskullTrigger1::
# 91 "data/maps/CoralportCave/scripts.pory"
	goto_if_unset FLAG_TEMP_3, CoralportCave_Eventscript_DuskullTrigger1_1
	return

CoralportCave_Eventscript_DuskullTrigger1_1:
# 92 "data/maps/CoralportCave/scripts.pory"
	lock
# 93 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 94 "data/maps/CoralportCave/scripts.pory"
	applymovement 4, CoralportCave_Eventscript_DuskullTrigger1_Movement_0
# 95 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 96 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DuskullBattle
	return


CoralportCave_Eventscript_DuskullTrigger2::
# 101 "data/maps/CoralportCave/scripts.pory"
	goto_if_unset FLAG_TEMP_3, CoralportCave_Eventscript_DuskullTrigger2_1
	return

CoralportCave_Eventscript_DuskullTrigger2_1:
# 102 "data/maps/CoralportCave/scripts.pory"
	lock
# 103 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 104 "data/maps/CoralportCave/scripts.pory"
	applymovement 4, CoralportCave_Eventscript_DuskullTrigger2_Movement_0
# 105 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 106 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DuskullBattle
	return


CoralportCave_Eventscript_DuskullBattle::
# 111 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 112 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_NO_RUNNING
# 113 "data/maps/CoralportCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 10
# 114 "data/maps/CoralportCave/scripts.pory"
	dowildbattle
# 115 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 116 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 117 "data/maps/CoralportCave/scripts.pory"
	removeobject 4
# 118 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_3
# 119 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 120 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 121 "data/maps/CoralportCave/scripts.pory"
	release
	end


CoralportCave_Eventscript_DusclopsCutsceneTrigger1::
# 126 "data/maps/CoralportCave/scripts.pory"
	checkplayergender
# 127 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCave_Eventscript_DusclopsCutsceneTrigger1_2
CoralportCave_Eventscript_DusclopsCutsceneTrigger1_1:
# 131 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DusclopsCutscene
	return

CoralportCave_Eventscript_DusclopsCutsceneTrigger1_2:
# 128 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_DusclopsCutsceneTrigger1_Movement_0
# 129 "data/maps/CoralportCave/scripts.pory"
	waitmovement
	goto CoralportCave_Eventscript_DusclopsCutsceneTrigger1_1


CoralportCave_Eventscript_DusclopsCutscene::
# 134 "data/maps/CoralportCave/scripts.pory"
	lock
# 135 "data/maps/CoralportCave/scripts.pory"
	hidefollower
# 136 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_TEMP_4
# 137 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 138 "data/maps/CoralportCave/scripts.pory"
	addobject 5
# 139 "data/maps/CoralportCave/scripts.pory"
	addobject 6
# 140 "data/maps/CoralportCave/scripts.pory"
	addobject 7
# 141 "data/maps/CoralportCave/scripts.pory"
	addobject 10
# 142 "data/maps/CoralportCave/scripts.pory"
	addobject 11
# 143 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 144 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 145 "data/maps/CoralportCave/scripts.pory"
	addobject 9
# 146 "data/maps/CoralportCave/scripts.pory"
	removeobject 1
# 147 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 1, 15, 3
# 148 "data/maps/CoralportCave/scripts.pory"
	addobject 1
# 149 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 150 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_DusclopsCutscene_Movement_0
# 151 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 152 "data/maps/CoralportCave/scripts.pory"
	release
# 153 "data/maps/CoralportCave/scripts.pory"
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 154 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 155 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, emoteexclamation
# 156 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, emoteexclamation
# 157 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, emoteexclamation
# 158 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, emoteexclamation
# 159 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 160 "data/maps/CoralportCave/scripts.pory"
	release
# 161 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_DusclopsCutscene_Movement_1
# 162 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 163 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 164 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 165 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 166 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 167 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 168 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 169 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 170 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_DusclopsCutscene_Text_1
# 171 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 172 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 173 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_3
# 174 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 175 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 176 "data/maps/CoralportCave/scripts.pory"
	applymovement 5, walkup
# 177 "data/maps/CoralportCave/scripts.pory"
	checkplayergender
# 178 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCave_Eventscript_DusclopsCutscene_2
CoralportCave_Eventscript_DusclopsCutscene_1:
# 181 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 182 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, walkup
# 183 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 184 "data/maps/CoralportCave/scripts.pory"
	applymovement 7, walkup
# 185 "data/maps/CoralportCave/scripts.pory"
	delay 2
# 186 "data/maps/CoralportCave/scripts.pory"
	lock
# 187 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 188 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 189 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 190 "data/maps/CoralportCave/scripts.pory"
	release
# 191 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 192 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 193 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 194 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 195 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_DusclopsCutscene_Text_2
# 198 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 199 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_DusclopsCutscene_Movement_4
# 200 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 201 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_DusclopsCutscene_Movement_5
# 202 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 203 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_DusclopsCutscene_Movement_6
# 204 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_DusclopsCutscene_Movement_7
# 205 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 206 "data/maps/CoralportCave/scripts.pory"
	delay 10
# 207 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, walkup
# 208 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 209 "data/maps/CoralportCave/scripts.pory"
	applymovement 7, walkup
# 210 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 211 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 212 "data/maps/CoralportCave/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSCLOPS_HORDE, DusclopsDefeated
# 213 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_PostDusclopsBattle
	return

CoralportCave_Eventscript_DusclopsCutscene_2:
# 179 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
	goto CoralportCave_Eventscript_DusclopsCutscene_1


CoralportCave_Eventscript_PostDusclopsBattle::
# 221 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 222 "data/maps/CoralportCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 223 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CoralportCave_Eventscript_PostDusclopsBattle_1
# 227 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 228 "data/maps/CoralportCave/scripts.pory"
	special SetCB2WhiteOut
	return

CoralportCave_Eventscript_PostDusclopsBattle_1:
# 224 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_TheReasonMisaEnteredTheCave
	return


CoralportCave_Eventscript_TheReasonMisaEnteredTheCave::
# 232 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 233 "data/maps/CoralportCave/scripts.pory"
	playse SE_BOO
# 234 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_0
# 235 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 236 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 237 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 238 "data/maps/CoralportCave/scripts.pory"
	playse SE_FLEE
# 239 "data/maps/CoralportCave/scripts.pory"
	waitse
# 240 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 241 "data/maps/CoralportCave/scripts.pory"
	removeobject 5
# 242 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 243 "data/maps/CoralportCave/scripts.pory"
	removeobject 6
# 244 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 245 "data/maps/CoralportCave/scripts.pory"
	removeobject 7
# 246 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 247 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_5
# 248 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 249 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 250 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceright
# 251 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceleft
# 252 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, faceright
# 253 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 254 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 255 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 256 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 257 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 258 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 259 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 260 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 261 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_0
# 262 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 263 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_1
# 266 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 267 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_2
# 268 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 269 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceleft
# 270 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 271 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_3
# 274 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 275 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceleft
# 276 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 277 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 278 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_2
# 279 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 280 "data/maps/CoralportCave/scripts.pory"
	delay 24
# 281 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceright
# 282 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 283 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 284 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_4
# 286 "data/maps/CoralportCave/scripts.pory"
	delay 24
# 287 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceleft
# 288 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 289 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_5
# 292 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 293 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 294 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_6
# 295 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 296 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 297 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceleft
# 298 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 299 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_7
# 300 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 301 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 302 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_3
# 303 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 304 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 305 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, facedown
# 306 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, facedown
# 307 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_4
# 308 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 309 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_5
# 310 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6
# 311 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6
# 312 "data/maps/CoralportCave/scripts.pory"
	delay 16
# 313 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, facedown
# 314 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, facedown
# 315 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, facedown
# 316 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_7
# 317 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 318 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 319 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_8
# 320 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 321 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 1
# 322 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_8
# 323 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_9
# 324 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 325 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_10
# 326 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_11
# 327 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 328 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_12
# 329 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_13
# 330 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_14
# 331 "data/maps/CoralportCave/scripts.pory"
	delay 80
# 332 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 333 "data/maps/CoralportCave/scripts.pory"
	delay 50
# 334 "data/maps/CoralportCave/scripts.pory"
	fadenewbgm MUS_END
# 335 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_9
# 337 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 338 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, faceup
# 339 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 340 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 341 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 342 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, facedown
# 343 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, walkdown
# 344 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_15
# 345 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 346 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 347 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, emotepensive
# 348 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 349 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_10
# 351 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 352 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 353 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16
# 354 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 355 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_11
# 356 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 357 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16
# 358 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_FAINT
# 359 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 360 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 361 "data/maps/CoralportCave/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 362 "data/maps/CoralportCave/scripts.pory"
	delay 48
# 363 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_12
# 365 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 366 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 367 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 5
# 368 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 369 "data/maps/CoralportCave/scripts.pory"
	warpsilent MAP_CORALPORT_CAVE, 31, 6
# 370 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return


CoralportCave_Eventscript_MisaTakingInWooper::
# 374 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_MisaTakingInWooper_Movement_0
# 375 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 376 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 377 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkinplaceright
# 378 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 379 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 380 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 381 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, walkinplaceleft
# 382 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 383 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_0
# 384 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 385 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_1
# 386 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 387 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 388 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 389 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 390 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_1
# 394 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 395 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 396 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 397 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_2
# 398 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 399 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 400 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkinplaceright
# 401 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 402 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 403 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 404 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_2
# 405 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 406 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 407 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 408 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkright
# 409 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 410 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 411 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_MisaTakingInWooper_Movement_3
# 412 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 413 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 414 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 415 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, emoteexclamation
# 416 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 417 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_3
# 418 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 419 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 420 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, facedown
# 421 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceup
# 422 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 423 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 424 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_4
# 426 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 427 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 428 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceup
# 429 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 430 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_5
# 431 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 432 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceleft
# 433 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 434 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 435 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_6
# 436 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 437 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_4
# 438 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 439 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 440 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 441 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, shakehorizontal
# 442 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 443 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 444 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_7
# 445 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 446 "data/maps/CoralportCave/scripts.pory"
	playse SE_M_BUBBLE
# 447 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, emotecry
# 448 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 449 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 450 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_MisaTakingInWooper_Movement_5
# 451 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 452 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_8
# 453 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 454 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 455 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, shakehorizontal
# 456 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 457 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_9
# 458 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, faceright
# 459 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 460 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_10
# 462 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 463 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 464 "data/maps/CoralportCave/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 465 "data/maps/CoralportCave/scripts.pory"
	delay 48
# 466 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6
# 467 "data/maps/CoralportCave/scripts.pory"
	addtime 0, 6, 0
# 468 "data/maps/CoralportCave/scripts.pory"
	warp MAP_CORALPORT, 21, 8
# 469 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return


# 94 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DuskullTrigger1_Movement_0:
# 94 "data/maps/CoralportCave/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/CoralportCave/scripts.pory"
	face_down
# 94 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 94 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 94 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 104 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DuskullTrigger2_Movement_0:
# 104 "data/maps/CoralportCave/scripts.pory"
	emote_exclamation_mark
# 104 "data/maps/CoralportCave/scripts.pory"
	face_down
# 104 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 104 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 104 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 104 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 128 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutsceneTrigger1_Movement_0:
# 128 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 128 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 150 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_0:
# 150 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 150 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 161 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_1:
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 161 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
	step_end

# 164 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_2:
# 164 "data/maps/CoralportCave/scripts.pory"
	lock_facing_direction
# 164 "data/maps/CoralportCave/scripts.pory"
	walk_up
# 164 "data/maps/CoralportCave/scripts.pory"
	unlock_facing_direction
	step_end

# 173 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_3:
# 173 "data/maps/CoralportCave/scripts.pory"
	emote_sad
# 173 "data/maps/CoralportCave/scripts.pory"
	shake_horizontal
	step_end

# 199 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_4:
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 199 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 201 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_5:
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 201 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 201 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 203 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_6:
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 203 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 203 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 204 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_7:
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 204 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 234 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_0:
# 234 "data/maps/CoralportCave/scripts.pory"
	emote_sad
	step_end

# 254 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1:
# 254 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 254 "data/maps/CoralportCave/scripts.pory"
	face_up
	step_end

# 278 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_2:
# 278 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_right
# 278 "data/maps/CoralportCave/scripts.pory"
	emote_sad
	step_end

# 302 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_3:
# 302 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_right
	step_end

# 307 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_4:
# 307 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 307 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 307 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 307 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 307 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 307 "data/maps/CoralportCave/scripts.pory"
	face_up
	step_end

# 309 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_5:
# 309 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 309 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 310 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6:
# 310 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 316 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_7:
# 316 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 316 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 316 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 322 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_8:
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 322 "data/maps/CoralportCave/scripts.pory"
	walk_left
	step_end

# 323 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_9:
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 323 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 325 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_10:
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 325 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 325 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 326 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_11:
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 326 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 326 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 328 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_12:
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 328 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 328 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 329 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_13:
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 329 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_14:
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_15:
# 344 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 344 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 344 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 344 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 344 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 353 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16:
# 353 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_down
	step_end

# 374 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_0:
# 374 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 374 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 374 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 374 "data/maps/CoralportCave/scripts.pory"
	walk_right
	step_end

# 385 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_1:
# 385 "data/maps/CoralportCave/scripts.pory"
	emote_question_mark
	step_end

# 404 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_2:
# 404 "data/maps/CoralportCave/scripts.pory"
	emote_heart
# 404 "data/maps/CoralportCave/scripts.pory"
	jump_in_place_right
	step_end

# 411 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_3:
# 411 "data/maps/CoralportCave/scripts.pory"
	emote_happy
	step_end

# 437 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_4:
# 437 "data/maps/CoralportCave/scripts.pory"
	emote_happy
# 437 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_down
	step_end

# 450 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_5:
# 450 "data/maps/CoralportCave/scripts.pory"
	walk_diag_northeast
	step_end

CoralportCave_Eventscript_LeavingConfirm_Text_0:
# 58 "data/maps/CoralportCave/scripts.pory"
	.string "{COLOR GREEN}Leaving the cave will fast forward the\n"
	.string "clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

CoralportCave_Eventscript_Fisherman_Text_0:
# 80 "data/maps/CoralportCave/scripts.pory"
	.string "Ikumi$"

CoralportCave_Eventscript_Fisherman_Text_1:
# 81 "data/maps/CoralportCave/scripts.pory"
	.string "My daughter should be in this cave. It's\n"
	.string "not too long but there are wild Pokémon.\p"
	.string "I'm not good at battling so I'll be\n"
	.string "tailing behind you.$"

CoralportCave_Eventscript_DusclopsCutscene_Text_0:
# 169 "data/maps/CoralportCave/scripts.pory"
	.string "Misa$"

CoralportCave_Eventscript_DusclopsCutscene_Text_1:
# 170 "data/maps/CoralportCave/scripts.pory"
	.string "Oh no... What should we do, Wooper?$"

CoralportCave_Eventscript_DusclopsCutscene_Text_2:
# 195 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Sanada-kun, Aragaki-kun. Back me up.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Gotcha!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}No need to ask!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_0:
# 261 "data/maps/CoralportCave/scripts.pory"
	.string "Pa!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_1:
# 263 "data/maps/CoralportCave/scripts.pory"
	.string "Misa! Are you okay?!\p"
	.string "Why did you sneak out without telling\n"
	.string "me?!{PAUSE_UNTIL_PRESS} You made me so worried!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_2:
# 267 "data/maps/CoralportCave/scripts.pory"
	.string "Oh... I'm sorry...$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_3:
# 271 "data/maps/CoralportCave/scripts.pory"
	.string "And that Wooper...\n"
	.string "Isn't it the one you said you\l"
	.string "befriended?{PAUSE_UNTIL_PRESS} Didn't it visit us a few\l"
	.string "days ago?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_4:
# 284 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper came to our house early this\n"
	.string "morning.\p"
	.string "It was so weak and looked like it was\n"
	.string "asking for help so I followed it here.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_5:
# 289 "data/maps/CoralportCave/scripts.pory"
	.string "Misa...{PAUSE_UNTIL_PRESS}\n"
	.string "It's good that you want to help a\l"
	.string "Pokémon in need.\p"
	.string "However, next time, make sure to tell me\n"
	.string "before you run off alone, okay?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_6:
# 294 "data/maps/CoralportCave/scripts.pory"
	.string "Yes, Pa... I'm sorry...$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_7:
# 299 "data/maps/CoralportCave/scripts.pory"
	.string "By the way, why did you bring me here,\n"
	.string "Wooper?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_8:
# 319 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}It looks like it wants us to follow it.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_9:
# 335 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Is that... its parent?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}It's... not moving.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_10:
# 349 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}......{PAUSE 60}It's too late...\p"
	.string "Its life energy has already been all\n"
	.string "drained.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_11:
# 355 "data/maps/CoralportCave/scripts.pory"
	.string "No way....$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_12:
# 363 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper sat by its parent for a long\n"
	.string "while before Shinjiro gently pat its\l"
	.string "head and offered to help burying the\l"
	.string "Clodsire.$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_0:
# 383 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper, do you want to come home with\n"
	.string "me?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_1:
# 390 "data/maps/CoralportCave/scripts.pory"
	.string "Just like you, I... {PAUSE 40}no longer have a\n"
	.string "mother...\p"
	.string "I know how it feels...\n"
	.string "{PAUSE_UNTIL_PRESS}But I still have Pa. And he's always\l"
	.string "been by my side.\p"
	.string "So... {PAUSE 40}I want to be there for you too,\n"
	.string "Wooper.$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_2:
# 397 "data/maps/CoralportCave/scripts.pory"
	.string "Would you be our family, Wooper?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_3:
# 417 "data/maps/CoralportCave/scripts.pory"
	.string "Oh!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_4:
# 424 "data/maps/CoralportCave/scripts.pory"
	.string "I forgot to ask for your permission...\p"
	.string "How do you say, Pa? Can we take Wooper\n"
	.string "in?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_5:
# 430 "data/maps/CoralportCave/scripts.pory"
	.string "Totally, totally!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_6:
# 435 "data/maps/CoralportCave/scripts.pory"
	.string "Welcome to the family, Wooper!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_7:
# 444 "data/maps/CoralportCave/scripts.pory"
	.string "-sob- (My daughter grew up so fast......)$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_8:
# 452 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}........$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_9:
# 457 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CRY}-sniffle-$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_10:
# 460 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Hphm, crybaby.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_CRY}Shut up. -sniffle-$"

DusclopsDefeated::
# 216 "data/maps/CoralportCave/scripts.pory"
	.string "...!$"
