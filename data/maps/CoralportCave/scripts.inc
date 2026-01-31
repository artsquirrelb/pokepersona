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
	goto_if_unset FLAG_HELP_EXIT_DUNGEON, CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_7
CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_6:
# 52 "data/maps/CoralportCave/scripts.pory"
	goto_if_unset FLAG_HELP_DUNGEON_ENCOUNTER, CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_10
CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_9:
# 56 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 57 "data/maps/CoralportCave/scripts.pory"
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

CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_7:
# 49 "data/maps/CoralportCave/scripts.pory"
	call EventScript_ShowHelpExitDungeon
# 50 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HELP_EXIT_DUNGEON
	goto CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_6

CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_10:
# 53 "data/maps/CoralportCave/scripts.pory"
	call EventScript_ShowHelpDungeonEncounter
# 54 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HELP_DUNGEON_ENCOUNTER
	goto CoralportCave_MapScripts_OnFrameTemp0_PlayerWalkleft_9


CoralportCave_MapScripts_OnFrame5::
# 61 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_MisaTakingInWooper
	return


CoralportCave_Eventscript_LeavingConfirm::
# 65 "data/maps/CoralportCave/scripts.pory"
	lock
# 66 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_LeavingConfirm_Text_0, MSGBOX_YESNO
# 68 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CoralportCave_Eventscript_LeavingConfirm_1
# 78 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 79 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 80 "data/maps/CoralportCave/scripts.pory"
	release
	end

CoralportCave_Eventscript_LeavingConfirm_1:
# 69 "data/maps/CoralportCave/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_FISHERMANS_DAUGHTER
# 70 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CoralportCave_Eventscript_LeavingConfirm_5
CoralportCave_Eventscript_LeavingConfirm_4:
# 73 "data/maps/CoralportCave/scripts.pory"
	addtime 0, 4, 0
# 74 "data/maps/CoralportCave/scripts.pory"
	warp MAP_CORALPORT, 41, 24
# 75 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return

CoralportCave_Eventscript_LeavingConfirm_5:
# 71 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 4
	goto CoralportCave_Eventscript_LeavingConfirm_4


CoralportCave_Eventscript_Fisherman::
# 86 "data/maps/CoralportCave/scripts.pory"
	lock
# 87 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 88 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 89 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_Fisherman_Text_1
# 91 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 92 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_HIDE_QUEST_ICON
# 93 "data/maps/CoralportCave/scripts.pory"
	refreshquesticon
# 94 "data/maps/CoralportCave/scripts.pory"
	release
	end


CoralportCave_Eventscript_DuskullTrigger1::
# 99 "data/maps/CoralportCave/scripts.pory"
	goto_if_unset FLAG_TEMP_3, CoralportCave_Eventscript_DuskullTrigger1_1
	return

CoralportCave_Eventscript_DuskullTrigger1_1:
# 100 "data/maps/CoralportCave/scripts.pory"
	lock
# 101 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 102 "data/maps/CoralportCave/scripts.pory"
	applymovement 4, CoralportCave_Eventscript_DuskullTrigger1_Movement_0
# 103 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 104 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DuskullBattle
	return


CoralportCave_Eventscript_DuskullTrigger2::
# 109 "data/maps/CoralportCave/scripts.pory"
	goto_if_unset FLAG_TEMP_3, CoralportCave_Eventscript_DuskullTrigger2_1
	return

CoralportCave_Eventscript_DuskullTrigger2_1:
# 110 "data/maps/CoralportCave/scripts.pory"
	lock
# 111 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 112 "data/maps/CoralportCave/scripts.pory"
	applymovement 4, CoralportCave_Eventscript_DuskullTrigger2_Movement_0
# 113 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 114 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DuskullBattle
	return


CoralportCave_Eventscript_DuskullBattle::
# 119 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 120 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_NO_RUNNING
# 121 "data/maps/CoralportCave/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 10
# 122 "data/maps/CoralportCave/scripts.pory"
	dowildbattle
# 123 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 124 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 125 "data/maps/CoralportCave/scripts.pory"
	removeobject 4
# 126 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_3
# 127 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 128 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 129 "data/maps/CoralportCave/scripts.pory"
	release
	end


CoralportCave_Eventscript_DusclopsCutsceneTrigger1::
# 134 "data/maps/CoralportCave/scripts.pory"
	checkplayergender
# 135 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCave_Eventscript_DusclopsCutsceneTrigger1_2
CoralportCave_Eventscript_DusclopsCutsceneTrigger1_1:
# 139 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_DusclopsCutscene
	return

CoralportCave_Eventscript_DusclopsCutsceneTrigger1_2:
# 136 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_DusclopsCutsceneTrigger1_Movement_0
# 137 "data/maps/CoralportCave/scripts.pory"
	waitmovement
	goto CoralportCave_Eventscript_DusclopsCutsceneTrigger1_1


CoralportCave_Eventscript_DusclopsCutscene::
# 142 "data/maps/CoralportCave/scripts.pory"
	lock
# 143 "data/maps/CoralportCave/scripts.pory"
	hidefollower
# 144 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_TEMP_4
# 145 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_HIDE_QUEST_ICON
# 146 "data/maps/CoralportCave/scripts.pory"
	addobject 5
# 147 "data/maps/CoralportCave/scripts.pory"
	addobject 6
# 148 "data/maps/CoralportCave/scripts.pory"
	addobject 7
# 149 "data/maps/CoralportCave/scripts.pory"
	addobject 10
# 150 "data/maps/CoralportCave/scripts.pory"
	addobject 11
# 151 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, invisible
# 152 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 153 "data/maps/CoralportCave/scripts.pory"
	addobject 9
# 154 "data/maps/CoralportCave/scripts.pory"
	removeobject 1
# 155 "data/maps/CoralportCave/scripts.pory"
	setobjectxyperm 1, 15, 3
# 156 "data/maps/CoralportCave/scripts.pory"
	addobject 1
# 157 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 158 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_DusclopsCutscene_Movement_0
# 159 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 160 "data/maps/CoralportCave/scripts.pory"
	release
# 161 "data/maps/CoralportCave/scripts.pory"
	fadenewbgm MUS_P3R_FEARFUL_EXPERIENCE
# 162 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 163 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, emoteexclamation
# 164 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, emoteexclamation
# 165 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, emoteexclamation
# 166 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, emoteexclamation
# 167 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 168 "data/maps/CoralportCave/scripts.pory"
	release
# 169 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_DusclopsCutscene_Movement_1
# 170 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 171 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 172 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 173 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 174 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
# 175 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 176 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 177 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 178 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_DusclopsCutscene_Text_1
# 179 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 180 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 181 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_3
# 182 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 183 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 184 "data/maps/CoralportCave/scripts.pory"
	applymovement 5, walkup
# 185 "data/maps/CoralportCave/scripts.pory"
	checkplayergender
# 186 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq CoralportCave_Eventscript_DusclopsCutscene_2
CoralportCave_Eventscript_DusclopsCutscene_1:
# 189 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 190 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, walkup
# 191 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 192 "data/maps/CoralportCave/scripts.pory"
	applymovement 7, walkup
# 193 "data/maps/CoralportCave/scripts.pory"
	delay 2
# 194 "data/maps/CoralportCave/scripts.pory"
	lock
# 195 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 5, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 196 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 6, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 197 "data/maps/CoralportCave/scripts.pory"
	setobjectnewmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 198 "data/maps/CoralportCave/scripts.pory"
	release
# 199 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 200 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 201 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_DusclopsCutscene_Movement_2
# 202 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 203 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_DusclopsCutscene_Text_2
# 206 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 207 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_DusclopsCutscene_Movement_4
# 208 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 209 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_DusclopsCutscene_Movement_5
# 210 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 211 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_DusclopsCutscene_Movement_6
# 212 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_DusclopsCutscene_Movement_7
# 213 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 214 "data/maps/CoralportCave/scripts.pory"
	delay 10
# 215 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, walkup
# 216 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 217 "data/maps/CoralportCave/scripts.pory"
	applymovement 7, walkup
# 218 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 219 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 220 "data/maps/CoralportCave/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSCLOPS_HORDE, DusclopsDefeated
# 221 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_PostDusclopsBattle
	return

CoralportCave_Eventscript_DusclopsCutscene_2:
# 187 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, walkup
	goto CoralportCave_Eventscript_DusclopsCutscene_1


CoralportCave_Eventscript_PostDusclopsBattle::
# 229 "data/maps/CoralportCave/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 230 "data/maps/CoralportCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 231 "data/maps/CoralportCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CoralportCave_Eventscript_PostDusclopsBattle_1
# 235 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 3
# 236 "data/maps/CoralportCave/scripts.pory"
	special SetCB2WhiteOut
	return

CoralportCave_Eventscript_PostDusclopsBattle_1:
# 232 "data/maps/CoralportCave/scripts.pory"
	goto CoralportCave_Eventscript_TheReasonMisaEnteredTheCave
	return


CoralportCave_Eventscript_TheReasonMisaEnteredTheCave::
# 240 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 241 "data/maps/CoralportCave/scripts.pory"
	playse SE_BOO
# 242 "data/maps/CoralportCave/scripts.pory"
	applymovement 6, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_0
# 243 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 244 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 245 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 246 "data/maps/CoralportCave/scripts.pory"
	playse SE_FLEE
# 247 "data/maps/CoralportCave/scripts.pory"
	waitse
# 248 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 249 "data/maps/CoralportCave/scripts.pory"
	removeobject 5
# 250 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 251 "data/maps/CoralportCave/scripts.pory"
	removeobject 6
# 252 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 253 "data/maps/CoralportCave/scripts.pory"
	removeobject 7
# 254 "data/maps/CoralportCave/scripts.pory"
	delay 1
# 255 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_TEMP_5
# 256 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 257 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 258 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceright
# 259 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceleft
# 260 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, faceright
# 261 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 262 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 263 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 264 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 265 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 266 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1
# 267 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 268 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 269 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_0
# 270 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 271 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_1
# 274 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 275 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_2
# 276 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 277 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceleft
# 278 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 279 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_3
# 282 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 283 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceleft
# 284 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 285 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 286 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_2
# 287 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 288 "data/maps/CoralportCave/scripts.pory"
	delay 24
# 289 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceright
# 290 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 291 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 292 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_4
# 294 "data/maps/CoralportCave/scripts.pory"
	delay 24
# 295 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceleft
# 296 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 297 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_5
# 300 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 301 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 302 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_6
# 303 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 304 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 305 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, faceleft
# 306 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 307 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_7
# 308 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 309 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 310 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_3
# 311 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 312 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 313 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, facedown
# 314 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, facedown
# 315 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_4
# 316 "data/maps/CoralportCave/scripts.pory"
	delay 8
# 317 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_5
# 318 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6
# 319 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6
# 320 "data/maps/CoralportCave/scripts.pory"
	delay 16
# 321 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, facedown
# 322 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, facedown
# 323 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, facedown
# 324 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_7
# 325 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 326 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 327 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_8
# 328 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 329 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 1
# 330 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_8
# 331 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_9
# 332 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 333 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_10
# 334 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_11
# 335 "data/maps/CoralportCave/scripts.pory"
	delay 4
# 336 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_12
# 337 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_13
# 338 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_14
# 339 "data/maps/CoralportCave/scripts.pory"
	delay 80
# 340 "data/maps/CoralportCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 341 "data/maps/CoralportCave/scripts.pory"
	delay 50
# 342 "data/maps/CoralportCave/scripts.pory"
	fadenewbgm MUS_END
# 343 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_9
# 345 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 346 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, faceup
# 347 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 348 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 349 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 350 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, facedown
# 351 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, walkdown
# 352 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_15
# 353 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 354 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 355 "data/maps/CoralportCave/scripts.pory"
	applymovement 10, emotepensive
# 356 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 357 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_10
# 359 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 360 "data/maps/CoralportCave/scripts.pory"
	delay 20
# 361 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16
# 362 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 363 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_11
# 364 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 365 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16
# 366 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_FAINT
# 367 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 368 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 369 "data/maps/CoralportCave/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 370 "data/maps/CoralportCave/scripts.pory"
	delay 48
# 371 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_12
# 373 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 374 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 375 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 5
# 376 "data/maps/CoralportCave/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 377 "data/maps/CoralportCave/scripts.pory"
	warpsilent MAP_CORALPORT_CAVE, 31, 6
# 378 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return


CoralportCave_Eventscript_MisaTakingInWooper::
# 382 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_MisaTakingInWooper_Movement_0
# 383 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 384 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 385 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkinplaceright
# 386 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 387 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 388 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 389 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, walkinplaceleft
# 390 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 391 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_0
# 392 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 393 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_1
# 394 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_WEAK
# 395 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 396 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 397 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 398 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_1
# 402 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 403 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 404 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 405 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_2
# 406 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 407 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 408 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkinplaceright
# 409 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 410 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 411 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 412 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_2
# 413 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 414 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 415 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 416 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, walkright
# 417 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 418 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 419 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, CoralportCave_Eventscript_MisaTakingInWooper_Movement_3
# 420 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 421 "data/maps/CoralportCave/scripts.pory"
	delay 40
# 422 "data/maps/CoralportCave/scripts.pory"
	playse SE_PIN
# 423 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, emoteexclamation
# 424 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 425 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_3
# 426 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 427 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 428 "data/maps/CoralportCave/scripts.pory"
	applymovement 2, facedown
# 429 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceup
# 430 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 431 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_DusclopsCutscene_Text_0
# 432 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_4
# 434 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 435 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 436 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, walkinplaceup
# 437 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 438 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_5
# 439 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 440 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, faceleft
# 441 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 442 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 443 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_6
# 444 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 445 "data/maps/CoralportCave/scripts.pory"
	applymovement 3, CoralportCave_Eventscript_MisaTakingInWooper_Movement_4
# 446 "data/maps/CoralportCave/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 447 "data/maps/CoralportCave/scripts.pory"
	waitmoncry
# 448 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 449 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, shakehorizontal
# 450 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 451 "data/maps/CoralportCave/scripts.pory"
	setspeaker CoralportCave_Eventscript_Fisherman_Text_0
# 452 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_7
# 453 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 454 "data/maps/CoralportCave/scripts.pory"
	playse SE_M_BUBBLE
# 455 "data/maps/CoralportCave/scripts.pory"
	applymovement 1, emotecry
# 456 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 457 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 458 "data/maps/CoralportCave/scripts.pory"
	applymovement LOCALID_PLAYER, CoralportCave_Eventscript_MisaTakingInWooper_Movement_5
# 459 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 460 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_8
# 461 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 462 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 463 "data/maps/CoralportCave/scripts.pory"
	applymovement 11, shakehorizontal
# 464 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 465 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_9
# 466 "data/maps/CoralportCave/scripts.pory"
	applymovement 9, faceright
# 467 "data/maps/CoralportCave/scripts.pory"
	waitmovement
# 468 "data/maps/CoralportCave/scripts.pory"
	msgbox CoralportCave_Eventscript_MisaTakingInWooper_Text_10
# 470 "data/maps/CoralportCave/scripts.pory"
	closemessage
# 471 "data/maps/CoralportCave/scripts.pory"
	delay 30
# 472 "data/maps/CoralportCave/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 473 "data/maps/CoralportCave/scripts.pory"
	delay 48
# 474 "data/maps/CoralportCave/scripts.pory"
	setvar VAR_QUEST_FIND_FISHERMANS_DAUGHTER_STATE, 6
# 475 "data/maps/CoralportCave/scripts.pory"
	addtime 0, 6, 0
# 476 "data/maps/CoralportCave/scripts.pory"
	warp MAP_CORALPORT, 21, 8
# 477 "data/maps/CoralportCave/scripts.pory"
	waitstate
	return


# 102 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DuskullTrigger1_Movement_0:
# 102 "data/maps/CoralportCave/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/CoralportCave/scripts.pory"
	face_down
# 102 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 102 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 102 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 112 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DuskullTrigger2_Movement_0:
# 112 "data/maps/CoralportCave/scripts.pory"
	emote_exclamation_mark
# 112 "data/maps/CoralportCave/scripts.pory"
	face_down
# 112 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 112 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 112 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 112 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 136 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutsceneTrigger1_Movement_0:
# 136 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 136 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 158 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_0:
# 158 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 158 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 169 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_1:
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
# 169 "data/maps/CoralportCave/scripts.pory"
	walk_diag_southwest
	step_end

# 172 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_2:
# 172 "data/maps/CoralportCave/scripts.pory"
	lock_facing_direction
# 172 "data/maps/CoralportCave/scripts.pory"
	walk_up
# 172 "data/maps/CoralportCave/scripts.pory"
	unlock_facing_direction
	step_end

# 181 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_3:
# 181 "data/maps/CoralportCave/scripts.pory"
	emote_sad
# 181 "data/maps/CoralportCave/scripts.pory"
	shake_horizontal
	step_end

# 207 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_4:
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 207 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 209 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_5:
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 209 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 209 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 211 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_6:
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 211 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 211 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 212 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_DusclopsCutscene_Movement_7:
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 212 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 242 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_0:
# 242 "data/maps/CoralportCave/scripts.pory"
	emote_sad
	step_end

# 262 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_1:
# 262 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 262 "data/maps/CoralportCave/scripts.pory"
	face_up
	step_end

# 286 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_2:
# 286 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_right
# 286 "data/maps/CoralportCave/scripts.pory"
	emote_sad
	step_end

# 310 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_3:
# 310 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_right
	step_end

# 315 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_4:
# 315 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 315 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 315 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 315 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 315 "data/maps/CoralportCave/scripts.pory"
	delay_16
# 315 "data/maps/CoralportCave/scripts.pory"
	face_up
	step_end

# 317 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_5:
# 317 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 317 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 318 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_6:
# 318 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 324 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_7:
# 324 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 324 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 324 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_8:
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
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 330 "data/maps/CoralportCave/scripts.pory"
	walk_left
	step_end

# 331 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_9:
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 331 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 333 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_10:
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 333 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 333 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 334 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_11:
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 334 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 334 "data/maps/CoralportCave/scripts.pory"
	face_left
	step_end

# 336 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_12:
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_fast_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 336 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 336 "data/maps/CoralportCave/scripts.pory"
	face_down
	step_end

# 337 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_13:
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_slow_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 337 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 338 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_14:
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_fast_left
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 338 "data/maps/CoralportCave/scripts.pory"
	walk_down
	step_end

# 352 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_15:
# 352 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 352 "data/maps/CoralportCave/scripts.pory"
	walk_left
# 352 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 352 "data/maps/CoralportCave/scripts.pory"
	walk_down
# 352 "data/maps/CoralportCave/scripts.pory"
	face_right
	step_end

# 361 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Movement_16:
# 361 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_slow_down
	step_end

# 382 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_0:
# 382 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 382 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 382 "data/maps/CoralportCave/scripts.pory"
	walk_right
# 382 "data/maps/CoralportCave/scripts.pory"
	walk_right
	step_end

# 393 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_1:
# 393 "data/maps/CoralportCave/scripts.pory"
	emote_question_mark
	step_end

# 412 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_2:
# 412 "data/maps/CoralportCave/scripts.pory"
	emote_heart
# 412 "data/maps/CoralportCave/scripts.pory"
	jump_in_place_right
	step_end

# 419 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_3:
# 419 "data/maps/CoralportCave/scripts.pory"
	emote_happy
	step_end

# 445 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_4:
# 445 "data/maps/CoralportCave/scripts.pory"
	emote_happy
# 445 "data/maps/CoralportCave/scripts.pory"
	walk_in_place_down
	step_end

# 458 "data/maps/CoralportCave/scripts.pory"
CoralportCave_Eventscript_MisaTakingInWooper_Movement_5:
# 458 "data/maps/CoralportCave/scripts.pory"
	walk_diag_northeast
	step_end

CoralportCave_Eventscript_LeavingConfirm_Text_0:
# 66 "data/maps/CoralportCave/scripts.pory"
	.string "{COLOR GREEN}Leaving the cave will fast forward the\n"
	.string "clock by {COLOR RED}4 hours{COLOR GREEN}.\p"
	.string "Do you want to proceed?$"

CoralportCave_Eventscript_Fisherman_Text_0:
# 88 "data/maps/CoralportCave/scripts.pory"
	.string "Ikumi$"

CoralportCave_Eventscript_Fisherman_Text_1:
# 89 "data/maps/CoralportCave/scripts.pory"
	.string "My daughter should be in this cave. It's\n"
	.string "not too long but there are wild Pokémon.\p"
	.string "I'm not good at battling so I'll be\n"
	.string "tailing behind you.$"

CoralportCave_Eventscript_DusclopsCutscene_Text_0:
# 177 "data/maps/CoralportCave/scripts.pory"
	.string "Misa$"

CoralportCave_Eventscript_DusclopsCutscene_Text_1:
# 178 "data/maps/CoralportCave/scripts.pory"
	.string "Oh no... What should we do, Wooper?$"

CoralportCave_Eventscript_DusclopsCutscene_Text_2:
# 203 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SERIOUS}Sanada-kun, Aragaki-kun. Back me up.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SERIOUS}Gotcha!\p"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SERIOUS}No need to ask!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_0:
# 269 "data/maps/CoralportCave/scripts.pory"
	.string "Pa!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_1:
# 271 "data/maps/CoralportCave/scripts.pory"
	.string "Misa! Are you okay?!\p"
	.string "Why did you sneak out without telling\n"
	.string "me?!{PAUSE_UNTIL_PRESS} You made me so worried!$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_2:
# 275 "data/maps/CoralportCave/scripts.pory"
	.string "Oh... I'm sorry...$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_3:
# 279 "data/maps/CoralportCave/scripts.pory"
	.string "And that Wooper...\n"
	.string "Isn't it the one you said you\l"
	.string "befriended?{PAUSE_UNTIL_PRESS} Didn't it visit us a few\l"
	.string "days ago?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_4:
# 292 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper came to our house early this\n"
	.string "morning.\p"
	.string "It was so weak and looked like it was\n"
	.string "asking for help so I followed it here.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_5:
# 297 "data/maps/CoralportCave/scripts.pory"
	.string "Misa...{PAUSE_UNTIL_PRESS}\n"
	.string "It's good that you want to help a\l"
	.string "Pokémon in need.\p"
	.string "However, next time, make sure to tell me\n"
	.string "before you run off alone, okay?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_6:
# 302 "data/maps/CoralportCave/scripts.pory"
	.string "Yes, Pa... I'm sorry...$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_7:
# 307 "data/maps/CoralportCave/scripts.pory"
	.string "By the way, why did you bring me here,\n"
	.string "Wooper?$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_8:
# 327 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}It looks like it wants us to follow it.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_9:
# 343 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED}Is that... its parent?\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SAD}It's... not moving.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_10:
# 357 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SAD}......{PAUSE 60}It's too late...\p"
	.string "Its life energy has already been all\n"
	.string "drained.$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_11:
# 363 "data/maps/CoralportCave/scripts.pory"
	.string "No way....$"

CoralportCave_Eventscript_TheReasonMisaEnteredTheCave_Text_12:
# 371 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper sat by its parent for a long\n"
	.string "while before Shinjiro gently pat its\l"
	.string "head and offered to help burying the\l"
	.string "Clodsire.$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_0:
# 391 "data/maps/CoralportCave/scripts.pory"
	.string "Wooper, do you want to come home with\n"
	.string "me?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_1:
# 398 "data/maps/CoralportCave/scripts.pory"
	.string "Just like you, I... {PAUSE 40}no longer have a\n"
	.string "mother...\p"
	.string "I know how it feels...\n"
	.string "{PAUSE_UNTIL_PRESS}But I still have Pa. And he's always\l"
	.string "been by my side.\p"
	.string "So... {PAUSE 40}I want to be there for you too,\n"
	.string "Wooper.$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_2:
# 405 "data/maps/CoralportCave/scripts.pory"
	.string "Would you be our family, Wooper?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_3:
# 425 "data/maps/CoralportCave/scripts.pory"
	.string "Oh!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_4:
# 432 "data/maps/CoralportCave/scripts.pory"
	.string "I forgot to ask for your permission...\p"
	.string "How do you say, Pa? Can we take Wooper\n"
	.string "in?$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_5:
# 438 "data/maps/CoralportCave/scripts.pory"
	.string "Totally, totally!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_6:
# 443 "data/maps/CoralportCave/scripts.pory"
	.string "Welcome to the family, Wooper!$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_7:
# 452 "data/maps/CoralportCave/scripts.pory"
	.string "-sob- (My daughter grew up so fast......)$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_8:
# 460 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SMILE}........$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_9:
# 465 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CRY}-sniffle-$"

CoralportCave_Eventscript_MisaTakingInWooper_Text_10:
# 468 "data/maps/CoralportCave/scripts.pory"
	.string "{SPEAKER NAME_S}{CREATE MUGSHOT_S EMOTE_SMILE}Hphm, crybaby.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_CRY}Shut up. -sniffle-$"

DusclopsDefeated::
# 224 "data/maps/CoralportCave/scripts.pory"
	.string "...!$"
