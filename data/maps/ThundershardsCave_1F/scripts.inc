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
	hidetalkbutton
# 14 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 16 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 17 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 19 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 20 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 22 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 23 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 24 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 25 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4
# 28 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 29 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 33 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 34 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 35 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 36 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 38 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 40 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 41 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 42 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 43 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 45 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 46 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 47 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 54 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5
# 56 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6
# 58 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 59 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 60 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 61 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 64 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 65 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 66 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 67 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 68 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 69 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
	end


ThundershardsCave_1F_EventScript_NeckBeardInvites2::
# 74 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 75 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 76 "data/maps/ThundershardsCave_1F/scripts.pory"
	special SpawnCameraObject
# 77 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0
# 78 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 79 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 16
# 80 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1
# 81 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 82 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 83 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 4, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 84 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 4
# 85 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 4
# 86 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 30
# 87 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0
# 89 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 90 "data/maps/ThundershardsCave_1F/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0
# 92 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1
# 94 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 95 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_SHINY
# 96 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, emotemusic
# 97 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 98 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 99 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3
# 101 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 102 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, walkleft
# 103 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 104 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 105 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4
# 106 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 107 "data/maps/ThundershardsCave_1F/scripts.pory"
	giveitem ITEM_PEARL
# 108 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2
# 109 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5
# 112 "data/maps/ThundershardsCave_1F/scripts.pory"
	setspeaker ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6
# 113 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7
# 115 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement 7, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1
# 117 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay 8
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2
# 119 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement 7
# 120 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitse
# 122 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject 7
# 123 "data/maps/ThundershardsCave_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 124 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8
# 126 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 127 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement LOCALID_PLAYER, faceright
# 128 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 129 "data/maps/ThundershardsCave_1F/scripts.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 13
# 130 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
	end


Common_EventScript_MiningRock::
# 135 "data/maps/ThundershardsCave_1F/scripts.pory"
	lock
# 136 "data/maps/ThundershardsCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MINING_KIT, Common_EventScript_MiningRock_2
# 152 "data/maps/ThundershardsCave_1F/scripts.pory"
	msgbox Common_EventScript_MiningRock_Text_1
Common_EventScript_MiningRock_1:
# 154 "data/maps/ThundershardsCave_1F/scripts.pory"
	closemessage
# 155 "data/maps/ThundershardsCave_1F/scripts.pory"
	release
# 156 "data/maps/ThundershardsCave_1F/scripts.pory"
	showtalkbutton
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
	hidetalkbutton
# 145 "data/maps/ThundershardsCave_1F/scripts.pory"
	playse SE_M_ROCK_THROW
# 146 "data/maps/ThundershardsCave_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2
# 147 "data/maps/ThundershardsCave_1F/scripts.pory"
	waitmovement
# 148 "data/maps/ThundershardsCave_1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Common_EventScript_MiningRock_1


# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_0:
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
# 15 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_right
	step_end

# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_1:
# 18 "data/maps/ThundershardsCave_1F/scripts.pory"
	shake_horizontal
	step_end

# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_2:
# 21 "data/maps/ThundershardsCave_1F/scripts.pory"
	rock_smash_break
	step_end

# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_3:
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 26 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_4:
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 27 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_5:
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 55 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites1_Movement_6:
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_down
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 57 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_0:
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 88 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_1:
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_up
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_left
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	set_invisible
# 116 "data/maps/ThundershardsCave_1F/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
ThundershardsCave_1F_EventScript_NeckBeardInvites2_Movement_2:
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_up
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	delay_8
# 118 "data/maps/ThundershardsCave_1F/scripts.pory"
	face_left
	step_end

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_0:
# 30 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Big Man$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_1:
# 31 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rocks are fascinating, don't you agree,\n"
	.string "young lady?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}Huh? Oh- yes, I suppose they are.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_2:
# 37 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Rock-loving Big Man?$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_3:
# 38 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I know right? Your answer just made my\n"
	.string "day!\p"
	.string "If only my son thought the same.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_4:
# 44 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Here, your can have this. I got it from\n"
	.string "mining the rock just now.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_5:
# 48 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "I'd love to give you a tools to mine\n"
	.string "rocks on your own.\p"
	.string "Unfortunately I only have this old\n"
	.string "mining kit with me and it's my lucky\l"
	.string "charm.\p"
	.string "If you visit my house in Coralport I can\n"
	.string "give you a new one.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_6:
# 51 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Mr. Nebe$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_7:
# 52 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Just ask around for Nebe's house when\n"
	.string "you get there. Coralport is very\l"
	.string "hospitable.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}I- Thank you. Nebe-san.$"

ThundershardsCave_1F_EventScript_NeckBeardInvites1_Text_8:
# 62 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SURPRISED}.......\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}(I should go on with my mission.)$"

Common_EventScript_MiningRock_Text_0:
# 137 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "Start mining this rock?$"

Common_EventScript_MiningRock_Text_1:
# 152 "data/maps/ThundershardsCave_1F/scripts.pory"
	.string "You don't have tools to break this\n"
	.string "mining rock.$"
