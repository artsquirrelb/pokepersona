ThundershardsCave_1F_MapScripts::
# 2 "data/maps/ThundershardsCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThundershardsCave_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


ThundershardsCave_1F_EventScript_NeckBeardInvites1::
# 11 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 12 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 13 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 32 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 39 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 46 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 53 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 63 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 67 "data/maps/ThundershardsCave_1F/scripts.pory"
	fwdtime 8, 05
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 73 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 93 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 100 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 106 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 111 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 114 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 125 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 126 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 127 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 128 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 129 "data/maps/ThundershardsCave_1F/scripts.pory"
	fwdtime 8, 05
# 130 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


Common_EventScript_MiningRock::
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 151 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 153 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 154 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end

Common_EventScript_MiningRock_2:
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_0, MSGBOX_YESNO
# 138 "data/maps/ThundershardsCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MiningRock_5
	goto Common_EventScript_MiningRock_1

Common_EventScript_MiningRock_5:
# 139 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 140 "data/maps/ThundershardsCave_1F/scripts.pory"
	dotimebasedevents
# 141 "data/maps/ThundershardsCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/ThundershardsCave_1F/scripts.pory"
	special StartMining
# 143 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitstate
# 144 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 145 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 146 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 147 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 50 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 151 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
