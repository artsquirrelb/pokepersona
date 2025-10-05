EventScript_OverworldStoryTalk::
# 3 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
# 4 "data/scripts/story_talk.pory"
	closemessage
# 5 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN
# 6 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_2
EventScript_OverworldStoryTalk_1:
# 7 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 8 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_5
EventScript_OverworldStoryTalk_4:
# 9 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_8
EventScript_OverworldStoryTalk_7:
# 12 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_11
# 12 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_11
EventScript_OverworldStoryTalk_10:
# 15 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq EventScript_OverworldStoryTalk_16
EventScript_OverworldStoryTalk_15:
# 18 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq EventScript_OverworldStoryTalk_19
EventScript_OverworldStoryTalk_18:
# 21 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq EventScript_OverworldStoryTalk_22
EventScript_OverworldStoryTalk_21:
# 24 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_eq EventScript_OverworldStoryTalk_25
EventScript_OverworldStoryTalk_24:
# 27 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_2:
# 6 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_1
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_5:
# 8 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_2
	goto EventScript_OverworldStoryTalk_4

EventScript_OverworldStoryTalk_8:
# 10 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustSetClock
	goto EventScript_OverworldStoryTalk_7

EventScript_OverworldStoryTalk_11:
# 13 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ClockIsSet
	goto EventScript_OverworldStoryTalk_10

EventScript_OverworldStoryTalk_16:
# 16 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods
	goto EventScript_OverworldStoryTalk_15

EventScript_OverworldStoryTalk_19:
# 19 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickPawmi
	goto EventScript_OverworldStoryTalk_18

EventScript_OverworldStoryTalk_22:
# 22 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickPawmi
	goto EventScript_OverworldStoryTalk_21

EventScript_OverworldStoryTalk_25:
# 25 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_HaveTalkedToShinjiro
	goto EventScript_OverworldStoryTalk_24


EventScript_OverworldStoryTalk_MustSetClock::
# 35 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustSetClock_Text_0
	return


EventScript_OverworldStoryTalk_ClockIsSet::
# 39 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ClockIsSet_Text_0
	return


EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods::
# 43 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0
	return


EventScript_OverworldStoryTalk_PrePickPawmi::
# 53 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickPawmi_Text_0
	return


EventScript_OverworldStoryTalk_PostPickPawmi::
# 57 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_0
# 58 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickPawmi_1
	return

EventScript_OverworldStoryTalk_PostPickPawmi_1:
# 59 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_1
# 60 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 61 "data/scripts/story_talk.pory"
	waitmovement 0
	return


# 65 "data/scripts/story_talk.pory"
PawmiHappy:
# 66 "data/scripts/story_talk.pory"
	emote_music
# 67 "data/scripts/story_talk.pory"
	face_player
# 68 "data/scripts/story_talk.pory"
	lock_facing_direction
# 69 "data/scripts/story_talk.pory"
	jump_in_place_down
# 70 "data/scripts/story_talk.pory"
	unlock_facing_direction
	step_end

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro::
# 74 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0
# 75 "data/scripts/story_talk.pory"
	closemessage
# 76 "data/scripts/story_talk.pory"
	applymovement 2, facedown
# 77 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1
	return


EventScript_OverworldStoryTalk_Text_0:
# 3 "data/scripts/story_talk.pory"
	.string "L Button Test$"

EventScript_OverworldStoryTalk_Text_1:
# 6 "data/scripts/story_talk.pory"
	.string "In Sunshine Town.$"

EventScript_OverworldStoryTalk_Text_2:
# 8 "data/scripts/story_talk.pory"
	.string "In Sunshine Woods.$"

EventScript_OverworldStoryTalk_MustSetClock_Text_0:
# 35 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's fix the clock and join Miki\n"
	.string "outside.)$"

EventScript_OverworldStoryTalk_ClockIsSet_Text_0:
# 39 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Miki's waiting for me outside. Better\n"
	.string "hurry).$"

EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0:
# 43 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}What are you going to do in the woods?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}You'll know soon! I'm sure you'll love it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Gonna be funny if you fall into the pond\n"
	.string "again, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I was just surprised!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, by a Caterpie.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Ugh...\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Hehe.$"

EventScript_OverworldStoryTalk_PrePickPawmi_Text_0:
# 53 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Come to think of it, this Pawmi's fur\n"
	.string "color is kinda... weird.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_0:
# 57 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(I slept so well.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_1:
# 59 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}... You make a good hug pillow, huh?$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0:
# 74 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I wonder what Ms.Kobayashi needs us\n"
	.string "for...$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1:
# 77 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No idea, she hurried to somewhere\n"
	.string "before I could ask.$"
