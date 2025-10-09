EventScript_OverworldStoryTalk::
# 4 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_2
# 7 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_3
# 7 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_3
# 10 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq EventScript_OverworldStoryTalk_4
# 20 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq EventScript_OverworldStoryTalk_5
# 23 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq EventScript_OverworldStoryTalk_6
# 26 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_eq EventScript_OverworldStoryTalk_7
# 29 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq EventScript_OverworldStoryTalk_8
# 38 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq EventScript_OverworldStoryTalk_9
# 53 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_eq EventScript_OverworldStoryTalk_10
# 56 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq EventScript_OverworldStoryTalk_11
# 59 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq EventScript_OverworldStoryTalk_12
# 62 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_eq EventScript_OverworldStoryTalk_13
# 82 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_1:
# 84 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_2:
# 5 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustSetClock
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_3:
# 8 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ClockIsSet
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_4:
# 11 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE
# 12 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_30
EventScript_OverworldStoryTalk_29:
# 15 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 16 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_41
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_5:
# 21 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickPawmi
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_6:
# 24 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickPawmi
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_7:
# 27 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_HaveTalkedToShinjiro
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_8:
# 30 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F
# 31 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_32
# 35 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkKobayashi
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_9:
# 39 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 40 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_35
# 44 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_POKEMON_CENTER
# 45 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_43
# 49 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_10:
# 54 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkMartLady
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_11:
# 57 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_TalkToTheTownPeople
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_12:
# 60 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_GoBackToTheOrphanage
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_13:
# 63 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_RIVERBANK
# 64 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_38
# 69 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 70 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_46
# 76 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_30:
# 13 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods
	goto EventScript_OverworldStoryTalk_29

EventScript_OverworldStoryTalk_32:
# 32 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_35:
# 41 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_38:
# 66 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_41:
# 17 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_LookingAroundInTheWoods
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_43:
# 46 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkMartLady
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_46:
# 72 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods
	goto EventScript_OverworldStoryTalk_1


EventScript_OverworldStoryTalk_MustSetClock::
# 92 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustSetClock_Text_0
	return


EventScript_OverworldStoryTalk_ClockIsSet::
# 96 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ClockIsSet_Text_0
	return


EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods::
# 100 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0
	return


EventScript_OverworldStoryTalk_LookingAroundInTheWoods::
# 110 "data/scripts/story_talk.pory"
	applymovement 2, faceup
# 111 "data/scripts/story_talk.pory"
	applymovement 3, faceup
# 112 "data/scripts/story_talk.pory"
	waitmovement 0
# 113 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0
	return


EventScript_OverworldStoryTalk_PrePickPawmi::
# 121 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickPawmi_Text_0
	return


EventScript_OverworldStoryTalk_PostPickPawmi::
# 125 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_0
# 126 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickPawmi_1
	return

EventScript_OverworldStoryTalk_PostPickPawmi_1:
# 127 "data/scripts/story_talk.pory"
	lock
# 128 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_1
# 129 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 130 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 131 "data/scripts/story_talk.pory"
	waitmovement 0
# 132 "data/scripts/story_talk.pory"
	release
	return


# 136 "data/scripts/story_talk.pory"
PawmiHappy:
# 137 "data/scripts/story_talk.pory"
	emote_heart
# 138 "data/scripts/story_talk.pory"
	face_player
# 139 "data/scripts/story_talk.pory"
	lock_facing_direction
# 140 "data/scripts/story_talk.pory"
	jump_in_place_down
# 141 "data/scripts/story_talk.pory"
	unlock_facing_direction
	step_end

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro::
# 145 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0
# 146 "data/scripts/story_talk.pory"
	closemessage
# 147 "data/scripts/story_talk.pory"
	applymovement 2, facedown
# 148 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1
	return


EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom::
# 152 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0
	return


EventScript_OverworldStoryTalk_PreTalkKobayashi::
# 156 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi::
# 160 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods::
# 166 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0
# 168 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1
	return

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1:
# 169 "data/scripts/story_talk.pory"
	lock
# 170 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1
# 171 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 172 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 173 "data/scripts/story_talk.pory"
	waitmovement 0
# 174 "data/scripts/story_talk.pory"
	release
	return


EventScript_OverworldStoryTalk_PreTalkMartLady::
# 179 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkMartLady::
# 184 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_TalkToTheTownPeople::
# 189 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0
	return


EventScript_OverworldStoryTalk_GoBackToTheOrphanage::
# 193 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa::
# 197 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank::
# 202 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods::
# 209 "data/scripts/story_talk.pory"
	lock
# 210 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0
# 214 "data/scripts/story_talk.pory"
	release
	return


EventScript_OverworldStoryTalk_Text_0:
# 82 "data/scripts/story_talk.pory"
	.string "No script yet.$"

EventScript_OverworldStoryTalk_MustSetClock_Text_0:
# 92 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's fix the clock and join Miki\n"
	.string "outside.)$"

EventScript_OverworldStoryTalk_ClockIsSet_Text_0:
# 96 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Miki's waiting for me outside. Better\n"
	.string "hurry).$"

EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0:
# 100 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}What are you going to do in the woods?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}You'll know soon! I'm sure you'll love it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Gonna be funny if you fall into the pond\n"
	.string "again, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I was just surprised!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, by a Caterpie.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Ugh...\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Hehe.$"

EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0:
# 113 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Just looking around.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Making sure there's no Caterpie?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Screw you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Ehehe.$"

EventScript_OverworldStoryTalk_PrePickPawmi_Text_0:
# 121 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Come to think of it, this Pawmi's fur\n"
	.string "color is kinda... weird.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_0:
# 125 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(I slept so well.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_1:
# 128 "data/scripts/story_talk.pory"
	.string "... You make a good hug pillow, huh?$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0:
# 145 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I wonder what Ms.Kobayashi needs us\n"
	.string "for...$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1:
# 148 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No idea, she hurried to somewhere\n"
	.string "before I could ask.$"

EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0:
# 152 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Did you forget something? Hurry up, Ms.\n"
	.string "Kobayashi is waiting.$"

EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0:
# 156 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi said she'd be at the main\n"
	.string "hall.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0:
# 160 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The package is in the Pokémon Center in\n"
	.string "Sunshine Town.\p"
	.string "Let's get this over with. The show's on\n"
	.string "air soon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Oh right, your favorite cooking show.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0:
# 166 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Never knew you would get your first\n"
	.string "Pokémon here, huh?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Yeah.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1:
# 170 "data/scripts/story_talk.pory"
	.string "I'm glad I met you, Pawmi.$"

EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0:
# 179 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing? Just ask the Mart\n"
	.string "Lady for the package.$"

EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0:
# 184 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}Let's hurry up outside. I have a bad\n"
	.string "feeling.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Damn it, you too?$"

EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0:
# 189 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_MAD}(Someone must've known what happened.\n"
	.string "Let's ask around.)$"

EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0:
# 193 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Let's hurry back to the orphanage!!$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0:
# 197 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}You know where to go?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}No. But there's no point in returning to\n"
	.string "the orphanage right now. Let's start\l"
	.string "with Route 2.$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0:
# 202 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Hey Shinji...\p"
	.string "Why did you think Ms. Kobayashi do that\n"
	.string "to us?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Pushing us into the river...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0:
# 210 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Miki gifted me a flower crown here.\p"
	.string "I left it in our room so it was probably\n"
	.string "burned to ashes.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"
