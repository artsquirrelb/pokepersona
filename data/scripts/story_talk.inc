EventScript_OverworldHelpButton::
# 4 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_PARTTIME_GET, EventScript_OverworldHelpButton_4
EventScript_OverworldHelpButton_3:
# 9 "data/scripts/story_talk.pory"
	playse SE_WIN_OPEN
# 10 "data/scripts/story_talk.pory"
	waitse
# 11 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldHelpButton_Text_0
# 12 "data/scripts/story_talk.pory"
	dynmultipush StoryHints, 0
# 13 "data/scripts/story_talk.pory"
	dynmultipush TrainersTips, 1
# 14 "data/scripts/story_talk.pory"
	goto_if_set FLAG_PARTTIME_GET, EventScript_OverworldHelpButton_8
EventScript_OverworldHelpButton_7:
# 18 "data/scripts/story_talk.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 19 "data/scripts/story_talk.pory"
	switch VAR_RESULT
# 20 "data/scripts/story_talk.pory"
	case 0, EventScript_OverworldHelpButton_11
# 21 "data/scripts/story_talk.pory"
	case 1, EventScript_OverworldHelpButton_12
# 22 "data/scripts/story_talk.pory"
	case 2, EventScript_OverworldHelpButton_13
EventScript_OverworldHelpButton_1:
# 25 "data/scripts/story_talk.pory"
	closemessage
# 26 "data/scripts/story_talk.pory"
	release
	end

EventScript_OverworldHelpButton_2:
# 6 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_4:
# 4 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_HELP_WINDOW_GET, EventScript_OverworldHelpButton_2
	goto EventScript_OverworldHelpButton_3

EventScript_OverworldHelpButton_8:
# 16 "data/scripts/story_talk.pory"
	dynmultipush Work, 2
	goto EventScript_OverworldHelpButton_7

EventScript_OverworldHelpButton_11:
# 20 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_12:
# 21 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_13:
# 22 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTryStartWorkParttime
	goto EventScript_OverworldHelpButton_1


EventScript_OverworldStoryTalk::
# 35 "data/scripts/story_talk.pory"
	checkplayergender
# 36 "data/scripts/story_talk.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_OverworldStoryTalk_8
EventScript_OverworldStoryTalk_6:
# 39 "data/scripts/story_talk.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_OverworldStoryTalk_5
EventScript_OverworldStoryTalk_4:
# 43 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_1:
# 45 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_2:
# 37 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_AkihikosPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_3:
# 40 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_MitsurusPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_5:
# 39 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_3
	goto EventScript_OverworldStoryTalk_4

EventScript_OverworldStoryTalk_8:
# 36 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_2
	goto EventScript_OverworldStoryTalk_6


EventScript_OverworldStoryTalk_AkihikosPrologue::
# 54 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_2
# 57 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 57 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 60 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_4
# 70 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_5
# 73 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_6
# 76 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_7
# 79 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_8
# 88 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_9
# 103 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_10
# 106 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_11
# 109 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_12
# 112 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_13
# 130 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_14
# 133 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_15
# 136 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_16
# 139 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_17
# 148 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_18
# 151 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_19
# 156 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_AkihikosPrologue_1:
# 158 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_AkihikosPrologue_2:
# 55 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustSetClock
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_3:
# 58 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ClockIsSet
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_4:
# 61 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE
# 62 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_42
EventScript_OverworldStoryTalk_AkihikosPrologue_41:
# 65 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 66 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_56
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_5:
# 71 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_6:
# 74 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_7:
# 77 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_HaveTalkedToShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_8:
# 80 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F
# 81 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_44
# 85 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_9:
# 89 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 90 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_47
# 94 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_POKEMON_CENTER
# 95 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_58
# 99 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_10:
# 104 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_11:
# 107 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_TalkToTheTownPeople
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_12:
# 110 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_GoBackToTheOrphanage
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_13:
# 113 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_RIVERBANK
# 114 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_50
# 119 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 120 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_61
# 126 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_14:
# 131 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_15:
# 134 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_16:
# 137 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_17:
# 140 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_MEADOW
# 141 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_53
# 145 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_18:
# 149 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstBattleMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_19:
# 152 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPrologue
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_42:
# 63 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_41

EventScript_OverworldStoryTalk_AkihikosPrologue_44:
# 82 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_47:
# 91 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_50:
# 116 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_53:
# 142 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_56:
# 67 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_LookingAroundInTheWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_58:
# 96 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_61:
# 122 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1


EventScript_OverworldStoryTalk_MustSetClock::
# 166 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustSetClock_Text_0
	return


EventScript_OverworldStoryTalk_ClockIsSet::
# 170 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ClockIsSet_Text_0
	return


EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods::
# 174 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0
	return


EventScript_OverworldStoryTalk_LookingAroundInTheWoods::
# 184 "data/scripts/story_talk.pory"
	applymovement 2, faceup
# 185 "data/scripts/story_talk.pory"
	applymovement 3, faceup
# 186 "data/scripts/story_talk.pory"
	waitmovement 0
# 187 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0
	return


EventScript_OverworldStoryTalk_PrePickPawmi::
# 195 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickPawmi_Text_0
	return


EventScript_OverworldStoryTalk_PostPickPawmi::
# 199 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_0
# 200 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickPawmi_1
	return

EventScript_OverworldStoryTalk_PostPickPawmi_1:
# 201 "data/scripts/story_talk.pory"
	lock
# 202 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_1
# 203 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 204 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 205 "data/scripts/story_talk.pory"
	waitmovement 0
# 206 "data/scripts/story_talk.pory"
	release
	return


# 210 "data/scripts/story_talk.pory"
PawmiHappy:
# 211 "data/scripts/story_talk.pory"
	emote_heart
# 212 "data/scripts/story_talk.pory"
	face_player
# 213 "data/scripts/story_talk.pory"
	lock_facing_direction
# 214 "data/scripts/story_talk.pory"
	jump_in_place_down
# 215 "data/scripts/story_talk.pory"
	unlock_facing_direction
	step_end

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro::
# 219 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0
# 220 "data/scripts/story_talk.pory"
	closemessage
# 221 "data/scripts/story_talk.pory"
	applymovement 2, facedown
# 222 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1
	return


EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom::
# 226 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0
	return


EventScript_OverworldStoryTalk_PreTalkKobayashi::
# 230 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi::
# 234 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods::
# 240 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0
# 242 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1
	return

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1:
# 243 "data/scripts/story_talk.pory"
	lock
# 244 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1
# 245 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 246 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 247 "data/scripts/story_talk.pory"
	waitmovement 0
# 248 "data/scripts/story_talk.pory"
	release
	return


EventScript_OverworldStoryTalk_PreTalkMartLady::
# 253 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkMartLady::
# 258 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_TalkToTheTownPeople::
# 263 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0
	return


EventScript_OverworldStoryTalk_GoBackToTheOrphanage::
# 267 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa::
# 271 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank::
# 276 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods::
# 283 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru::
# 291 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro::
# 295 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House::
# 300 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft::
# 306 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow::
# 311 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstBattleMitsuru::
# 316 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostPrologue::
# 326 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPrologue_Text_0
	return


EventScript_OverworldStoryTalk_MitsurusPrologue::
# 337 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 1
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_2
# 340 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_3
# 343 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_4
# 346 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_5
# 349 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_6
# 354 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_NoScript
EventScript_OverworldStoryTalk_MitsurusPrologue_1:
# 356 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_MitsurusPrologue_2:
# 338 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_3:
# 341 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_4:
# 344 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostInteleonJoining
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_5:
# 347 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickUpFennekin
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_6:
# 350 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostGoodByeKikuno
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1


EventScript_OverworldStoryTalk_NoScript::
# 361 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
# 362 "data/scripts/story_talk.pory"
	closemessage
	return


EventScript_OverworldStoryTalk_MustPickUpVulpix::
# 365 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0
	return


EventScript_OverworldStoryTalk_PostPickUpVulpix::
# 370 "data/scripts/story_talk.pory"
	lock
# 371 "data/scripts/story_talk.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FacePlayer
# 372 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FacePlayer
# 373 "data/scripts/story_talk.pory"
	waitmovement 0
# 374 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0
# 375 "data/scripts/story_talk.pory"
	closemessage
# 376 "data/scripts/story_talk.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 377 "data/scripts/story_talk.pory"
	waitmoncry
# 378 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickUpVulpix_2
EventScript_OverworldStoryTalk_PostPickUpVulpix_1:
# 382 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1
# 384 "data/scripts/story_talk.pory"
	closemessage
# 385 "data/scripts/story_talk.pory"
	release
	return

EventScript_OverworldStoryTalk_PostPickUpVulpix_2:
# 379 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0
# 380 "data/scripts/story_talk.pory"
	waitmovement 0
	goto EventScript_OverworldStoryTalk_PostPickUpVulpix_1


EventScript_OverworldStoryTalk_PostInteleonJoining::
# 390 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0
# 391 "data/scripts/story_talk.pory"
	closemessage
# 392 "data/scripts/story_talk.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 393 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1
	return


EventScript_OverworldStoryTalk_PrePickUpFennekin::
# 397 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0
	return


EventScript_OverworldStoryTalk_PostGoodByeKikuno::
# 401 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0
	return


EventScript_OverworldTrainerTips::
# 410 "data/scripts/story_talk.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, EventScript_OverworldTrainerTips_2
EventScript_OverworldTrainerTips_1:
# 413 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_ge EventScript_OverworldTrainerTips_5
EventScript_OverworldTrainerTips_4:
# 417 "data/scripts/story_talk.pory"
	goto_if_set FLAG_COMPANION_MENU_GET, EventScript_OverworldTrainerTips_8
EventScript_OverworldTrainerTips_7:
# 420 "data/scripts/story_talk.pory"
	goto_if_set FLAG_SYS_QUEST_MENU_GET, EventScript_OverworldTrainerTips_11
EventScript_OverworldTrainerTips_10:
# 423 "data/scripts/story_talk.pory"
	dynmultipush gText_Next, 5
# 424 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldTrainerTips_Text_0
# 425 "data/scripts/story_talk.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 426 "data/scripts/story_talk.pory"
	switch VAR_RESULT
# 427 "data/scripts/story_talk.pory"
	case 0, EventScript_OverworldTrainerTips_15
# 428 "data/scripts/story_talk.pory"
	case 1, EventScript_OverworldTrainerTips_16
# 429 "data/scripts/story_talk.pory"
	case 2, EventScript_OverworldTrainerTips_17
# 430 "data/scripts/story_talk.pory"
	case 3, EventScript_OverworldTrainerTips_18
# 431 "data/scripts/story_talk.pory"
	case 4, EventScript_OverworldTrainerTips_19
# 432 "data/scripts/story_talk.pory"
	case 5, EventScript_OverworldTrainerTips_20
EventScript_OverworldTrainerTips_13:
# 434 "data/scripts/story_talk.pory"
	release
	end

EventScript_OverworldTrainerTips_2:
# 411 "data/scripts/story_talk.pory"
	dynmultipush HelpPokedex, 0
	goto EventScript_OverworldTrainerTips_1

EventScript_OverworldTrainerTips_5:
# 414 "data/scripts/story_talk.pory"
	dynmultipush HelpShinyChance, 1
# 415 "data/scripts/story_talk.pory"
	dynmultipush HelpStarter, 2
	goto EventScript_OverworldTrainerTips_4

EventScript_OverworldTrainerTips_8:
# 418 "data/scripts/story_talk.pory"
	dynmultipush HelpCompanion, 3
	goto EventScript_OverworldTrainerTips_7

EventScript_OverworldTrainerTips_11:
# 421 "data/scripts/story_talk.pory"
	dynmultipush HelpQuest, 4
	goto EventScript_OverworldTrainerTips_10

EventScript_OverworldTrainerTips_15:
# 427 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpPokedex
	goto EventScript_OverworldTrainerTips_13

EventScript_OverworldTrainerTips_16:
# 428 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpShinyChance
	goto EventScript_OverworldTrainerTips_13

EventScript_OverworldTrainerTips_17:
# 429 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpStarter
	goto EventScript_OverworldTrainerTips_13

EventScript_OverworldTrainerTips_18:
# 430 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpCompanion
	goto EventScript_OverworldTrainerTips_13

EventScript_OverworldTrainerTips_19:
# 431 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpQuest
	goto EventScript_OverworldTrainerTips_13

EventScript_OverworldTrainerTips_20:
# 432 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips2
	goto EventScript_OverworldTrainerTips_13


EventScript_OverworldTrainerTips2::
# 439 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 100
	goto_if_ge EventScript_OverworldTrainerTips2_2
# 439 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 100
	goto_if_ge EventScript_OverworldTrainerTips2_2
EventScript_OverworldTrainerTips2_1:
# 442 "data/scripts/story_talk.pory"
	goto_if_set FLAG_HELP_MAKE_CHOICE, EventScript_OverworldTrainerTips2_7
EventScript_OverworldTrainerTips2_6:
# 445 "data/scripts/story_talk.pory"
	goto_if_set FLAG_PARTTIME_GET, EventScript_OverworldTrainerTips2_10
EventScript_OverworldTrainerTips2_9:
# 448 "data/scripts/story_talk.pory"
	goto_if_set FLAG_HELP_EXIT_DUNGEON, EventScript_OverworldTrainerTips2_13
EventScript_OverworldTrainerTips2_12:
# 451 "data/scripts/story_talk.pory"
	goto_if_set FLAG_HELP_DUNGEON_ENCOUNTER, EventScript_OverworldTrainerTips2_16
EventScript_OverworldTrainerTips2_15:
# 454 "data/scripts/story_talk.pory"
	dynmultipush NextBackB, 5
# 455 "data/scripts/story_talk.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 456 "data/scripts/story_talk.pory"
	switch VAR_RESULT
# 457 "data/scripts/story_talk.pory"
	case 0, EventScript_OverworldTrainerTips2_20
# 458 "data/scripts/story_talk.pory"
	case 1, EventScript_OverworldTrainerTips2_21
# 459 "data/scripts/story_talk.pory"
	case 2, EventScript_OverworldTrainerTips2_22
# 460 "data/scripts/story_talk.pory"
	case 3, EventScript_OverworldTrainerTips2_23
# 461 "data/scripts/story_talk.pory"
	case 4, EventScript_OverworldTrainerTips2_24
# 462 "data/scripts/story_talk.pory"
	case 5, EventScript_OverworldTrainerTips2_25
# 463 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips
EventScript_OverworldTrainerTips2_18:
# 465 "data/scripts/story_talk.pory"
	release
	end

EventScript_OverworldTrainerTips2_2:
# 440 "data/scripts/story_talk.pory"
	dynmultipush HelpDeadline, 0
	goto EventScript_OverworldTrainerTips2_1

EventScript_OverworldTrainerTips2_7:
# 443 "data/scripts/story_talk.pory"
	dynmultipush HelpChoice, 1
	goto EventScript_OverworldTrainerTips2_6

EventScript_OverworldTrainerTips2_10:
# 446 "data/scripts/story_talk.pory"
	dynmultipush HelpParttime, 2
	goto EventScript_OverworldTrainerTips2_9

EventScript_OverworldTrainerTips2_13:
# 449 "data/scripts/story_talk.pory"
	dynmultipush HelpExitDungeon, 3
	goto EventScript_OverworldTrainerTips2_12

EventScript_OverworldTrainerTips2_16:
# 452 "data/scripts/story_talk.pory"
	dynmultipush HelpDungeonEncounter, 4
	goto EventScript_OverworldTrainerTips2_15

EventScript_OverworldTrainerTips2_20:
# 457 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpDeadline
	goto EventScript_OverworldTrainerTips2_18

EventScript_OverworldTrainerTips2_21:
# 458 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpChoice
	goto EventScript_OverworldTrainerTips2_18

EventScript_OverworldTrainerTips2_22:
# 459 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpPartTime
	goto EventScript_OverworldTrainerTips2_18

EventScript_OverworldTrainerTips2_23:
# 460 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpExitDungeon
	goto EventScript_OverworldTrainerTips2_18

EventScript_OverworldTrainerTips2_24:
# 461 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpDungeonEncounter
	goto EventScript_OverworldTrainerTips2_18

EventScript_OverworldTrainerTips2_25:
# 462 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips3
	goto EventScript_OverworldTrainerTips2_18


EventScript_OverworldTrainerTips3::
# 470 "data/scripts/story_talk.pory"
	goto_if_set FLAG_HELP_SPEEDUP, EventScript_OverworldTrainerTips3_2
EventScript_OverworldTrainerTips3_1:
# 473 "data/scripts/story_talk.pory"
	dynmultipush QuitBack, 5
# 474 "data/scripts/story_talk.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 475 "data/scripts/story_talk.pory"
	switch VAR_RESULT
# 476 "data/scripts/story_talk.pory"
	case 0, EventScript_OverworldTrainerTips3_6
# 477 "data/scripts/story_talk.pory"
	case 5, EventScript_OverworldTrainerTips3_7
# 480 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips2
EventScript_OverworldTrainerTips3_4:
# 482 "data/scripts/story_talk.pory"
	release
	end

EventScript_OverworldTrainerTips3_2:
# 471 "data/scripts/story_talk.pory"
	dynmultipush HelpSpeedUp, 0
	goto EventScript_OverworldTrainerTips3_1

EventScript_OverworldTrainerTips3_6:
# 476 "data/scripts/story_talk.pory"
	call EventScript_ShowHelpSpeedUp
	goto EventScript_OverworldTrainerTips3_4

EventScript_OverworldTrainerTips3_7:
# 478 "data/scripts/story_talk.pory"
	release
	end


EventScript_ShowHelpPokedex::
# 489 "data/scripts/story_talk.pory"
	closemessage
# 490 "data/scripts/story_talk.pory"
	showhelpwindow HELP_POKEDEX
# 491 "data/scripts/story_talk.pory"
	waitbuttonpress
# 492 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpShinyChance::
# 496 "data/scripts/story_talk.pory"
	closemessage
# 497 "data/scripts/story_talk.pory"
	showhelpwindow HELP_SHINY_CHANCE
# 498 "data/scripts/story_talk.pory"
	waitbuttonpress
# 499 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpStarter::
# 503 "data/scripts/story_talk.pory"
	closemessage
# 504 "data/scripts/story_talk.pory"
	showhelpwindow HELP_STORY_STARTER
# 505 "data/scripts/story_talk.pory"
	waitbuttonpress
# 506 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpQuest::
# 510 "data/scripts/story_talk.pory"
	closemessage
# 511 "data/scripts/story_talk.pory"
	showhelpwindow HELP_QUEST_MENU
# 512 "data/scripts/story_talk.pory"
	waitbuttonpress
# 513 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpCompanion::
# 517 "data/scripts/story_talk.pory"
	closemessage
# 518 "data/scripts/story_talk.pory"
	showhelpwindow HELP_COMPANION_MENU
# 519 "data/scripts/story_talk.pory"
	waitbuttonpress
# 520 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpChoice::
# 524 "data/scripts/story_talk.pory"
	closemessage
# 525 "data/scripts/story_talk.pory"
	showhelpwindow HELP_MAKE_CHOICES
# 526 "data/scripts/story_talk.pory"
	waitbuttonpress
# 527 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpDeadline::
# 531 "data/scripts/story_talk.pory"
	closemessage
# 532 "data/scripts/story_talk.pory"
	showhelpwindow HELP_DEADLINE
# 533 "data/scripts/story_talk.pory"
	waitbuttonpress
# 534 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpPartTime::
# 538 "data/scripts/story_talk.pory"
	closemessage
# 539 "data/scripts/story_talk.pory"
	showhelpwindow HELP_PART_TIME
# 540 "data/scripts/story_talk.pory"
	waitbuttonpress
# 541 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpExitDungeon::
# 545 "data/scripts/story_talk.pory"
	closemessage
# 546 "data/scripts/story_talk.pory"
	showhelpwindow HELP_EXIT_DUNGEON
# 547 "data/scripts/story_talk.pory"
	waitbuttonpress
# 548 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpDungeonEncounter::
# 552 "data/scripts/story_talk.pory"
	closemessage
# 553 "data/scripts/story_talk.pory"
	showhelpwindow HELP_DUNGEON_ENCOUNTER
# 554 "data/scripts/story_talk.pory"
	waitbuttonpress
# 555 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_ShowHelpSpeedUp::
# 559 "data/scripts/story_talk.pory"
	closemessage
# 560 "data/scripts/story_talk.pory"
	showhelpwindow HELP_SPEED_UP
# 561 "data/scripts/story_talk.pory"
	waitbuttonpress
# 562 "data/scripts/story_talk.pory"
	hidehelpwindow
	return


EventScript_OverworldTryStartWorkParttime::
# 582 "data/scripts/story_talk.pory"
	specialvar VAR_RESULT, DoesExitingMapForwardTime
# 583 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_OverworldTryStartWorkParttime_1
# 589 "data/scripts/story_talk.pory"
	goto EventScript_OverworldWorkParttime
	return

EventScript_OverworldTryStartWorkParttime_1:
# 584 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldTryStartWorkParttime_Text_0
# 585 "data/scripts/story_talk.pory"
	release
	end


EventScript_OverworldWorkParttime::
# 594 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldWorkParttime_Text_0
# 595 "data/scripts/story_talk.pory"
	goto_if_set FLAG_AMEAME_PARTTIME_UNLOCKED, EventScript_OverworldWorkParttime_2
EventScript_OverworldWorkParttime_1:
# 599 "data/scripts/story_talk.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 600 "data/scripts/story_talk.pory"
	switch VAR_RESULT
# 601 "data/scripts/story_talk.pory"
	case 0, EventScript_OverworldWorkParttime_6
EventScript_OverworldWorkParttime_4:
# 603 "data/scripts/story_talk.pory"
	release
	end

EventScript_OverworldWorkParttime_2:
# 597 "data/scripts/story_talk.pory"
	dynmultipush AmeAme, 0
	goto EventScript_OverworldWorkParttime_1

EventScript_OverworldWorkParttime_6:
# 601 "data/scripts/story_talk.pory"
	goto EventScript_TryStartAmeAmeParttime
	goto EventScript_OverworldWorkParttime_4


EventScript_TryStartAmeAmeParttime::
# 610 "data/scripts/story_talk.pory"
	msgbox EventScript_TryStartAmeAmeParttime_Text_0, MSGBOX_YESNO
# 611 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_TryStartAmeAmeParttime_2
# 624 "data/scripts/story_talk.pory"
	goto EventScript_OverworldWorkParttime
EventScript_TryStartAmeAmeParttime_1:
# 626 "data/scripts/story_talk.pory"
	release
	end

EventScript_TryStartAmeAmeParttime_2:
# 612 "data/scripts/story_talk.pory"
	gettime
# 613 "data/scripts/story_talk.pory"
	compare VAR_0x8000, 7
	goto_if_lt EventScript_TryStartAmeAmeParttime_5
# 613 "data/scripts/story_talk.pory"
	compare VAR_0x8000, 15
	goto_if_gt EventScript_TryStartAmeAmeParttime_5
# 620 "data/scripts/story_talk.pory"
	goto CoralportCandyShop_Eventscript_RandomizeCutscenes
	goto EventScript_TryStartAmeAmeParttime_1

EventScript_TryStartAmeAmeParttime_5:
# 614 "data/scripts/story_talk.pory"
	msgbox EventScript_TryStartAmeAmeParttime_Text_1
# 615 "data/scripts/story_talk.pory"
	closemessage
# 616 "data/scripts/story_talk.pory"
	release
	end


# 379 "data/scripts/story_talk.pory"
EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0:
# 379 "data/scripts/story_talk.pory"
	emote_music
# 379 "data/scripts/story_talk.pory"
	face_up
# 379 "data/scripts/story_talk.pory"
	delay_16
# 379 "data/scripts/story_talk.pory"
	face_right
# 379 "data/scripts/story_talk.pory"
	delay_16
# 379 "data/scripts/story_talk.pory"
	face_down
# 379 "data/scripts/story_talk.pory"
	delay_16
# 379 "data/scripts/story_talk.pory"
	face_left
# 379 "data/scripts/story_talk.pory"
	delay_16
# 379 "data/scripts/story_talk.pory"
	face_player
	step_end

EventScript_OverworldHelpButton_Text_0:
# 11 "data/scripts/story_talk.pory"
	.string "What would you like to get help with?$"

EventScript_OverworldStoryTalk_Text_0:
# 43 "data/scripts/story_talk.pory"
	.string "No script yet.$"

EventScript_OverworldStoryTalk_MustSetClock_Text_0:
# 166 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's fix the clock and join Miki\n"
	.string "outside.)$"

EventScript_OverworldStoryTalk_ClockIsSet_Text_0:
# 170 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Miki's waiting for me outside. Better\n"
	.string "hurry).$"

EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0:
# 174 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}What are you going to do in the woods?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}You'll know soon! I'm sure you'll love it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Gonna be funny if you fall into the pond\n"
	.string "again, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I was just surprised!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, by a Caterpie.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Ugh...\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Hehe.$"

EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0:
# 187 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Just looking around.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Making sure there's no Caterpie?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Screw you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Ehehe.$"

EventScript_OverworldStoryTalk_PrePickPawmi_Text_0:
# 195 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Come to think of it, this Pawmi's fur\n"
	.string "color is kinda... weird.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_0:
# 199 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(I slept so well.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_1:
# 202 "data/scripts/story_talk.pory"
	.string "... You make a good hug pillow, huh?$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0:
# 219 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I wonder what Ms. Kobayashi needs us\n"
	.string "for...$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1:
# 222 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No idea, she hurried off somewhere\n"
	.string "before I could ask.$"

EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0:
# 226 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Did you forget something? Hurry up, Ms.\n"
	.string "Kobayashi is waiting.$"

EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0:
# 230 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi said she'd be at the main\n"
	.string "hall.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0:
# 234 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The package is in the Pokémon Center in\n"
	.string "Sunshine Town.\p"
	.string "Let's get this over with. The show's on\n"
	.string "air soon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Oh right, your favorite cooking show.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0:
# 240 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Never knew you would get your first\n"
	.string "Pokémon here, huh?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Yeah.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1:
# 244 "data/scripts/story_talk.pory"
	.string "I'm glad I met you, Pawmi.$"

EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0:
# 253 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing? Just ask the Mart\n"
	.string "Lady for the package.$"

EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0:
# 258 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Let's hurry up outside. I have a bad\n"
	.string "feeling.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Damn it, you too?$"

EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0:
# 263 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Someone must've known what happened.\n"
	.string "Let's ask around.)$"

EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0:
# 267 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Let's hurry back to the orphanage!!$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0:
# 271 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}You know where to go?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}No. But there's no point in returning to\n"
	.string "the orphanage right now. Let's start\l"
	.string "with Route 2.$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0:
# 276 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Hey Shinji...\p"
	.string "Why do you think Ms. Kobayashi would do\n"
	.string "that to us?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Pushing us into the river...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0:
# 283 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Miki gifted me a flower crown here.\p"
	.string "I left it in our room so it was probably\n"
	.string "burned to ash.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"

EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0:
# 291 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I wonder what Shinji wanted to say.)$"

EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0:
# 295 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}You think she'll agree?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}We have a good chance. She must've also\n"
	.string "wanted our help.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0:
# 300 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Kirijo's waiting for us in Sunshine\n"
	.string "Meadow.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go meet up with her after we've\n"
	.string "sorted out our party.\p"
	.string "We'll be having 3-vs-3 battles.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0:
# 306 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji went ahead to prepare his team.\p"
	.string "I should do the same and go to Sunshine\n"
	.string "Meadow to have my first battle with\l"
	.string "Kirijo.)$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0:
# 311 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There she is. Her Inteleon is gonna be\n"
	.string "hard to take down.\p"
	.string "There's also that weird-colored Vulpix.)$"

EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0:
# 316 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}By the way, Shinji. The Ferroseed you\n"
	.string "used earlier...\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Looks a bit different, right?\p"
	.string "It just started following me when I was\n"
	.string "looking for my first Pokémon in Route 1.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Huh...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED}Wait, all three of us have Pokémons\n"
	.string "that look slightly different from usual.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}A special coincident, huh?\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SAD}...$"

EventScript_OverworldStoryTalk_PostPrologue_Text_0:
# 326 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}First, let's go through Route 2 to\n"
	.string "Coralport.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright! There are a few trainers on\n"
	.string "that route. Time to train!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Someone sure is fired up.$"

EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0:
# 365 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL} (I should return Vulpix to its Pokéball\n"
	.string "and hurry to Thundershards Cliff.)$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0:
# 374 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}How do you feel getting back on the\n"
	.string "field, Vulpix?$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1:
# 382 "data/scripts/story_talk.pory"
	.string "(Vulpix's dancing excitedly.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Haha, honestly, me too.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0:
# 390 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, I'll be counting on you to\n"
	.string "watch my back, Inteleon.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1:
# 393 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks determinated, nodding\n"
	.string "at you.)$"

EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0:
# 397 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}A fire type would be great for my\n"
	.string "journey.$"

EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0:
# 401 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Now I should make my way to\n"
	.string "Thundershards Scree.\p"
	.string "According to the map, it should be on\n"
	.string "the north of Sunshine Meadow.)$"

EventScript_OverworldTrainerTips_Text_0:
# 424 "data/scripts/story_talk.pory"
	.string "Which Trainer's Tips would you like to\n"
	.string "check?$"

EventScript_OverworldTryStartWorkParttime_Text_0:
# 584 "data/scripts/story_talk.pory"
	.string "Can't start a part-time job in this\n"
	.string "dungeon.$"

EventScript_OverworldWorkParttime_Text_0:
# 594 "data/scripts/story_talk.pory"
	.string "Which part-time job would you like to\n"
	.string "work at?$"

EventScript_TryStartAmeAmeParttime_Text_0:
# 610 "data/scripts/story_talk.pory"
	.string "Work at AmeAme Candy Shop for {COLOR RED}6 hours{COLOR 2}\n"
	.string "and {COLOR RED}$2000{COLOR 2}?\n"
	.string "$"

EventScript_TryStartAmeAmeParttime_Text_1:
# 614 "data/scripts/story_talk.pory"
	.string "You can only work there between 7AM\n"
	.string "and 3PM.$"

StoryHints::
# 30 "data/scripts/story_talk.pory"
	.string "Story Hints$"

TrainersTips::
# 31 "data/scripts/story_talk.pory"
	.string "Trainer's Tips$"

Work::
# 32 "data/scripts/story_talk.pory"
	.string "Work Part-time$"

NextBackB::
# 486 "data/scripts/story_talk.pory"
	.string "Next/({B_BUTTON}: Back)$"

QuitBack::
# 487 "data/scripts/story_talk.pory"
	.string "Quit/({B_BUTTON}: Back)$"

HelpPokedex::
# 565 "data/scripts/story_talk.pory"
	.string "Pokédex$"

HelpShinyChance::
# 566 "data/scripts/story_talk.pory"
	.string "Shiny Chance$"

HelpStarter::
# 567 "data/scripts/story_talk.pory"
	.string "Story Starter$"

HelpCompanion::
# 568 "data/scripts/story_talk.pory"
	.string "Companions$"

HelpQuest::
# 569 "data/scripts/story_talk.pory"
	.string "Quest Menu$"

HelpChoice::
# 570 "data/scripts/story_talk.pory"
	.string "Your actions$"

HelpDeadline::
# 571 "data/scripts/story_talk.pory"
	.string "Deadline$"

HelpParttime::
# 572 "data/scripts/story_talk.pory"
	.string "Part-time Jobs$"

HelpDungeonEncounter::
# 573 "data/scripts/story_talk.pory"
	.string "Dungeon Encounter$"

HelpExitDungeon::
# 574 "data/scripts/story_talk.pory"
	.string "Exiting Dungeons$"

HelpSpeedUp::
# 575 "data/scripts/story_talk.pory"
	.string "Game Speedup$"

AmeAme::
# 607 "data/scripts/story_talk.pory"
	.string "AmeAme Candy Shop (7AM - 3PM)$"
