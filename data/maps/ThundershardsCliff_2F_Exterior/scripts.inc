ThundershardsCliff_2F_Exterior_MapScripts::
# 4 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 15
	goto_if_ge ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


ThundershardsCave_2F_Eventscript_Warning::
# 13 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 14 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Warning_Text_0, MSGBOX_YESNO
# 15 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThundershardsCave_2F_Eventscript_Warning_2
ThundershardsCave_2F_Eventscript_Warning_1:
# 20 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	end

ThundershardsCave_2F_Eventscript_Warning_2:
# 16 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 17 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 18 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Warning_1


ThundershardsCave_2F_Eventscript_DailyChansey_Heal::
# 26 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 27 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 28 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	faceplayer
# 29 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0, MSGBOX_YESNO
# 30 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 31 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1:
# 57 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 58 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_HIDE_TALK_BUTTON
	end

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2:
# 32 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dotimebasedevents
# 33 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse MUS_HEAL
# 34 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 35 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 37 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 38 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 39 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 40 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5
# 44 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, walkinplaceleft
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4:
# 46 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 47 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 48 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 9
# 50 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_FLEE
# 51 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 52 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DAILY_CHANSEY_HEAL_THUNDERSHARD_CAVE_2F_EXTERIOR
# 53 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1
# 55 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5:
# 41 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, walkinplacedown
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4


ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance::
# 62 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0
# 64 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave::
# 69 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 70 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_HIDE_TALK_BUTTON
# 71 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 72 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	clearflag FLAG_TEMP_1
# 73 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	addobject 8
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_EXIT
# 75 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 76 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 4
# 79 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 80 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, emoteexclamation
# 81 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 83 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, walkinplaceleft
# 84 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 85 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0
# 86 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 87 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1
# 92 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 93 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_KG_STAFF_SCIENTIST_THUNDERSHARDS_CAVE_2F_EXTERIOR, KGScientist_Defeated
# 94 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat::
# 102 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 103 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 104 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 108 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 109 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2
# 112 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 113 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3
# 117 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0
# 119 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffectnpcflyout 24, 25, 1
# 120 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 8, invisible
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 122 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement LOCALID_PLAYER
# 123 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 8
# 124 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
# 125 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4
# 126 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 127 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 8
# 128 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5
# 129 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 130 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 16
# 131 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_LabExploding
# 132 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


ThundershardsCliff_2F_Exterior_Eventscript_LabExploding::
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special StopMapMusic
# 138 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 139 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 140 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 141 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 142 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 143 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 144 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 25
# 145 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 25
# 146 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 147 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 148 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0
# 150 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 151 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playbgm MUS_RUN_RUN_RUN, FALSE
# 152 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0
# 154 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_1
# 157 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 158 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 159 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 160 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 161 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 162 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 163 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 18
# 164 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 23
# 165 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 166 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 167 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 168 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_INTRO_BLAST
# 169 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8004, 2
# 170 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8005, 4
# 171 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8006, 6
# 172 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_0x8007, 4
# 173 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special ShakeCamera
# 174 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 0, 8
# 175 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setfieldeffectargument 1, 28
# 176 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffect FLDEFF_EXPLOSION
# 177 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_EXPLOSION
# 178 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_2
# 179 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 180 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 181 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	warp MAP_THUNDERSHARDS_CAVE_2F, 2
# 182 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0:
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	walk_down
# 63 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0:
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0:
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_right
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_left
	step_end

# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0:
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock_facing_direction
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_left
# 149 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_1:
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 155 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_left
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
# 156 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	player_run_down
	step_end

# 178 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_2:
# 178 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_right
# 178 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	set_invisible
	step_end

ThundershardsCave_2F_Eventscript_Warning_Text_0:
# 14 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Important scene ahead. Do you want to\n"
	.string "proceed?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0:
# 29 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Ask Chansey to heal your party?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1:
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Chansey ran off somewhere. It may be\n"
	.string "back tomorrow.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0:
# 85 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Scientist$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_1:
# 87 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Tch. I told those two to not let anyone\n"
	.string "through.\p"
	.string "And here you are, Young Lady.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}They were no match for me.\p"
	.string "And you're not going anywhere either.\p"
	.string "Let's go, {STR_VAR_1}.$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0:
# 103 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Scientist Norbert$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1:
# 104 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "That was pretty informative.\p"
	.string "Looks like your synergy level has\n"
	.string "increased again, Young Lady.\p"
	.string "As expected of our premium prototype.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}Norbert, you...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2:
# 109 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}As the prize for winning, I'll spare you\n"
	.string "a bit of information.\p"
	.string "You aren't the only premium prototype\n"
	.string "anymore.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3:
# 113 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{DESTROY_MUGSHOT}Well then, as much as I enjoyed our\n"
	.string "little chat, there's somewhere else I\l"
	.string "need to be.\p"
	.string "I hope we don't meet again, for your own\n"
	.string "good, little miss.\p"
	.string "Oh, and be careful of the fire.\n"
	.string "Hehehehehe.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}What- WAIT-!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_4:
# 125 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}Damn it!!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_5:
# 128 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}Wait... He said “fire”?$"

ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0:
# 153 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}What the-$"

KGScientist_Defeated::
# 97 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "You really live up to your name, Young\n"
	.string "Lady.$"
