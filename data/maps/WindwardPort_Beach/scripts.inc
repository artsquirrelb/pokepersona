WindwardPort_Beach_MapScripts::
	.byte 0


WindwardPort_Beach_ParasolLady::
# 4 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 5 "data/maps/WindwardPort_Beach/scripts.pory"
	faceplayer
# 6 "data/maps/WindwardPort_Beach/scripts.pory"
	setspeaker WindwardPort_Beach_ParasolLady_Text_0
# 7 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_ParasolLady_Text_1
# 9 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Mareanie::
# 14 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 15 "data/maps/WindwardPort_Beach/scripts.pory"
	faceplayer
# 16 "data/maps/WindwardPort_Beach/scripts.pory"
	startoverworldencounter 255
# 17 "data/maps/WindwardPort_Beach/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 18 "data/maps/WindwardPort_Beach/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/WindwardPort_Beach/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/WindwardPort_Beach/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 21 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Sandcastle::
# 26 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 27 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_Sandcastle_Text_0
# 28 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Roughneck::
# 33 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 34 "data/maps/WindwardPort_Beach/scripts.pory"
	faceplayer
# 35 "data/maps/WindwardPort_Beach/scripts.pory"
	setspeaker WindwardPort_Beach_Roughneck_Text_0
# 36 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_RoughneckBlock
# 37 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Roughneck_Trigger::
# 47 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 48 "data/maps/WindwardPort_Beach/scripts.pory"
	applymove TOSHITADA, walkinplacedown
# 49 "data/maps/WindwardPort_Beach/scripts.pory"
	turnobject MC, DIR_NORTH
# 50 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_RoughneckBlock
# 51 "data/maps/WindwardPort_Beach/scripts.pory"
	closemessage
# 52 "data/maps/WindwardPort_Beach/scripts.pory"
	applymovement TOSHITADA, WindwardPort_Beach_Roughneck_Trigger_Movement_0
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	applymoveplayer WindwardPort_Beach_Roughneck_Trigger_Movement_1
# 54 "data/maps/WindwardPort_Beach/scripts.pory"
	delay 30
# 55 "data/maps/WindwardPort_Beach/scripts.pory"
	applymove TOSHITADA, WindwardPort_Beach_Roughneck_Trigger_Movement_2
# 56 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


WindwardPort_Beach_Sign::
# 61 "data/maps/WindwardPort_Beach/scripts.pory"
	lock
# 62 "data/maps/WindwardPort_Beach/scripts.pory"
	msgbox WindwardPort_Beach_Sign_Text_0
# 63 "data/maps/WindwardPort_Beach/scripts.pory"
	release
	end


# 52 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_0:
# 52 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_down
# 52 "data/maps/WindwardPort_Beach/scripts.pory"
	face_left
	step_end

# 53 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_1:
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	face_right
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	lock_facing_direction
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_left
# 53 "data/maps/WindwardPort_Beach/scripts.pory"
	unlock_facing_direction
	step_end

# 55 "data/maps/WindwardPort_Beach/scripts.pory"
WindwardPort_Beach_Roughneck_Trigger_Movement_2:
# 55 "data/maps/WindwardPort_Beach/scripts.pory"
	walk_up
# 55 "data/maps/WindwardPort_Beach/scripts.pory"
	face_down
	step_end

WindwardPort_Beach_ParasolLady_Text_0:
# 6 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Asayo$"

WindwardPort_Beach_ParasolLady_Text_1:
# 7 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Excuse me, I'm taking a selfie.\p"
	.string "Can you please step away from the\n"
	.string "camera?$"

WindwardPort_Beach_Sandcastle_Text_0:
# 27 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "No matter what you do, the sand castle\n"
	.string "won't budge.$"

WindwardPort_Beach_Roughneck_Text_0:
# 35 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Toshitada$"

WindwardPort_Beach_Sign_Text_0:
# 62 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Windward Port's Lighthouse {RIGHT_ARROW}$"

WindwardPort_Beach_RoughneckBlock::
# 41 "data/maps/WindwardPort_Beach/scripts.pory"
	.string "Oi kids. You have no business here.\p"
	.string "Screw off.$"
