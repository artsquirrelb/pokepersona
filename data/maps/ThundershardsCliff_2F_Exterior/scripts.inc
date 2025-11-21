ThundershardsCliff_2F_Exterior_MapScripts::
# 5 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 15
	goto_if_gt ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_TEMP_1
	return

ThundershardsCliff_2F_Exterior_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	map_script_2 VAR_MITSURUS_INTRO_STATE, 15, ThundershardsCliff_2F_Exterior_OnWarp15
	.2byte 0


ThundershardsCliff_2F_Exterior_OnWarp15::
# 13 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, invisible
	return


ThundershardsCave_2F_Eventscript_Warning::
# 17 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 18 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_Warning_Text_0, MSGBOX_YESNO
# 19 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThundershardsCave_2F_Eventscript_Warning_2
ThundershardsCave_2F_Eventscript_Warning_1:
# 24 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	end

ThundershardsCave_2F_Eventscript_Warning_2:
# 20 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 21 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, walkleft
# 22 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
	goto ThundershardsCave_2F_Eventscript_Warning_1


ThundershardsCave_2F_Eventscript_DailyChansey_Heal::
# 30 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 31 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	faceplayer
# 32 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0, MSGBOX_YESNO
# 33 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 34 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1:
# 60 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	end

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_2:
# 35 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dotimebasedevents
# 36 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse MUS_HEAL
# 37 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 38 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special HealPlayerParty
# 39 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 40 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 41 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
# 42 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 43 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5
# 47 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 10, walkinplaceleft
ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4:
# 49 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 50 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 51 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 10
# 53 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_FLEE
# 54 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitse
# 55 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setflag FLAG_DAILY_CHANSEY_HEAL_THUNDERSHARD_CAVE_2F_EXTERIOR
# 56 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 57 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1
# 58 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_1

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_5:
# 44 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 10, walkinplacedown
	goto ThundershardsCave_2F_Eventscript_DailyChansey_Heal_4


ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance::
# 64 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0
# 66 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 67 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	goto ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave
	return


ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave::
# 71 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock
# 72 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 73 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0
# 75 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 76 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 77 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, emoteexclamation
# 78 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 4
# 79 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 80 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, emoteexclamation
# 81 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 83 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, walkinplaceleft
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
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Text_0
# 104 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_0
# 108 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 109 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_2
# 112 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setspeaker ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1
# 113 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_3
# 117 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 118 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Movement_0
# 119 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	dofieldeffectnpcflyout 24, 25, 1
# 120 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement 9, invisible
# 121 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 122 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement LOCALID_PLAYER
# 123 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	removeobject 9
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
	goto ThundershardsCliff_2F_Exterior_Eventscript_LabExploding
	return


ThundershardsCliff_2F_Exterior_Eventscript_LabExploding::
# 134 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	special StopMapMusic
# 135 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 136 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	playse SE_PIN
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0
# 138 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	waitmovement
# 139 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	msgbox ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Text_0
# 140 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	closemessage
# 141 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 142 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 143 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	delay 20
# 144 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	call SunshineOrphanage_Burning_Eventscript_ExplosionShakeCamera
# 145 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 16
# 146 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	warpsilent MAP_THUNDERSHARDS_CAVE_2F, 2
# 147 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	release
	return


# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_MitsuruApproaching_CaveEntrance_Movement_0:
# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	walk_down
# 65 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
	step_end

# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_ScientistExitsCave_Movement_0:
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	set_visible
# 74 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	walk_in_place_left
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

# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
ThundershardsCliff_2F_Exterior_Eventscript_LabExploding_Movement_0:
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	emote_exclamation_mark
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	face_right
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	lock_facing_direction
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	jump_left
# 137 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	unlock_facing_direction
	step_end

ThundershardsCave_2F_Eventscript_Warning_Text_0:
# 18 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Important scene ahead. Do you want to\n"
	.string "proceed?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_0:
# 32 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Ask Chansey to heal your party?$"

ThundershardsCave_2F_Eventscript_DailyChansey_Heal_Text_1:
# 57 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
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
# 104 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "That was pretty informative.\p"
	.string "Looks like your synergy level has\n"
	.string "increased again, Young Lady.\p"
	.string "As expected of our premium prototype.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_MAD}Norbert, you...!$"

ThundershardsCliff_2F_Exterior_Eventscript_ScientistRetreat_Text_1:
# 108 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "Norbert$"

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
# 139 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}What the-$"

KGScientist_Defeated::
# 97 "data/maps/ThundershardsCliff_2F_Exterior/scripts.pory"
	.string "You really live up to your name, Young\n"
	.string "Lady.$"
