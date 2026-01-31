ThundershardsCave_1F_MapScripts::
# 2 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ThundershardsCave_1F_MapScripts_OnResume
	.byte 0

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_MITSURUS_INTRO_STATE, 12
	goto_if_gt ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
	return


ThundershardsCave_1F_MapScripts_OnResume::
# 11 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_unset FLAG_HELP_DUNGEON_ENCOUNTER, ThundershardsCave_1F_MapScripts_OnResume_1
	return

ThundershardsCave_1F_MapScripts_OnResume_1:
# 12 "data/maps/ThundershardsCave_1F/scripts.pory"
	call EventScript_ShowHelpDungeonEncounter
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_HELP_DUNGEON_ENCOUNTER
	return


ThundershardsCave_1F_EventScript_NeckBeardInvites1::
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 39 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 46 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 49 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 70 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 71 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 72 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	fwdtime 8, 05
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 110 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 125 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 126 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 127 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 128 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 129 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 130 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 132 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 133 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 134 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	fwdtime 8, 05
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


Common_EventScript_MiningRock::
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 143 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 158 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 160 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 161 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end

Common_EventScript_MiningRock_2:
# 144 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 145 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MiningRock_5
	goto Common_EventScript_MiningRock_1

Common_EventScript_MiningRock_5:
# 146 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 147 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 148 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 150 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 151 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 152 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 153 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 154 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_M}{CREATE MUGSHOT_M EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 144 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 158 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
