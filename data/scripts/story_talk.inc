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
	goto_if_unset FLAG_PARTTIME_GET, EventScript_OverworldHelpButton_7
# 25 "data/scripts/story_talk.pory"
	dynmultipush StoryHints, 0
# 26 "data/scripts/story_talk.pory"
	dynmultipush TrainersTips, 1
# 27 "data/scripts/story_talk.pory"
	dynmultipush Work, 2
# 28 "data/scripts/story_talk.pory"
	dynmultistack 0, 4, FALSE, 3, FALSE, 0, NULL
# 29 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_OverworldHelpButton_14
# 32 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldHelpButton_15
# 36 "data/scripts/story_talk.pory"
	goto EventScript_OverworldWorkParttime
EventScript_OverworldHelpButton_1:
# 40 "data/scripts/story_talk.pory"
	closemessage
# 41 "data/scripts/story_talk.pory"
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

EventScript_OverworldHelpButton_7:
# 14 "data/scripts/story_talk.pory"
	dynmultipush StoryHints, 0
# 15 "data/scripts/story_talk.pory"
	dynmultipush TrainersTips, 1
# 16 "data/scripts/story_talk.pory"
	dynmultistack 0, 4, FALSE, 2, FALSE, 0, NULL
# 17 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_OverworldHelpButton_10
# 20 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldHelpButton_11
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_10:
# 18 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_11:
# 21 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_14:
# 30 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk
	goto EventScript_OverworldHelpButton_1

EventScript_OverworldHelpButton_15:
# 33 "data/scripts/story_talk.pory"
	goto EventScript_OverworldTrainerTips
	goto EventScript_OverworldHelpButton_1


EventScript_OverworldStoryTalk::
# 58 "data/scripts/story_talk.pory"
	checkplayergender
# 59 "data/scripts/story_talk.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_OverworldStoryTalk_8
EventScript_OverworldStoryTalk_6:
# 62 "data/scripts/story_talk.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_OverworldStoryTalk_5
EventScript_OverworldStoryTalk_4:
# 66 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_1:
# 68 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_2:
# 60 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_AkihikosPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_3:
# 63 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_MitsurusPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_5:
# 62 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_3
	goto EventScript_OverworldStoryTalk_4

EventScript_OverworldStoryTalk_8:
# 59 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_2
	goto EventScript_OverworldStoryTalk_6


EventScript_OverworldStoryTalk_AkihikosPrologue::
# 77 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_2
# 80 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 80 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 83 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_4
# 93 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_5
# 96 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_6
# 99 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_7
# 102 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_8
# 111 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_9
# 126 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_10
# 129 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_11
# 132 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_12
# 135 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_13
# 153 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_14
# 156 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_15
# 159 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_16
# 162 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_17
# 171 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_18
# 174 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_19
# 179 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_AkihikosPrologue_1:
# 181 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_AkihikosPrologue_2:
# 78 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustSetClock
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_3:
# 81 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ClockIsSet
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_4:
# 84 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE
# 85 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_42
EventScript_OverworldStoryTalk_AkihikosPrologue_41:
# 88 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 89 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_56
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_5:
# 94 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_6:
# 97 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_7:
# 100 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_HaveTalkedToShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_8:
# 103 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F
# 104 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_44
# 108 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_9:
# 112 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 113 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_47
# 117 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_POKEMON_CENTER
# 118 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_58
# 122 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_10:
# 127 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_11:
# 130 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_TalkToTheTownPeople
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_12:
# 133 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_GoBackToTheOrphanage
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_13:
# 136 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_RIVERBANK
# 137 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_50
# 142 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 143 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_61
# 149 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_14:
# 154 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_15:
# 157 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_16:
# 160 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_17:
# 163 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_MEADOW
# 164 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_53
# 168 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_18:
# 172 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstBattleMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_19:
# 175 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPrologue
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_42:
# 86 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_41

EventScript_OverworldStoryTalk_AkihikosPrologue_44:
# 105 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_47:
# 114 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_50:
# 139 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_53:
# 165 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_56:
# 90 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_LookingAroundInTheWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_58:
# 119 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_61:
# 145 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1


EventScript_OverworldStoryTalk_MustSetClock::
# 189 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustSetClock_Text_0
	return


EventScript_OverworldStoryTalk_ClockIsSet::
# 193 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ClockIsSet_Text_0
	return


EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods::
# 197 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0
	return


EventScript_OverworldStoryTalk_LookingAroundInTheWoods::
# 207 "data/scripts/story_talk.pory"
	applymovement 2, faceup
# 208 "data/scripts/story_talk.pory"
	applymovement 3, faceup
# 209 "data/scripts/story_talk.pory"
	waitmovement 0
# 210 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0
	return


EventScript_OverworldStoryTalk_PrePickPawmi::
# 218 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickPawmi_Text_0
	return


EventScript_OverworldStoryTalk_PostPickPawmi::
# 222 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_0
# 223 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickPawmi_1
	return

EventScript_OverworldStoryTalk_PostPickPawmi_1:
# 224 "data/scripts/story_talk.pory"
	lock
# 225 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_1
# 226 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 227 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 228 "data/scripts/story_talk.pory"
	waitmovement 0
# 229 "data/scripts/story_talk.pory"
	release
	return


# 233 "data/scripts/story_talk.pory"
PawmiHappy:
# 234 "data/scripts/story_talk.pory"
	emote_heart
# 235 "data/scripts/story_talk.pory"
	face_player
# 236 "data/scripts/story_talk.pory"
	lock_facing_direction
# 237 "data/scripts/story_talk.pory"
	jump_in_place_down
# 238 "data/scripts/story_talk.pory"
	unlock_facing_direction
	step_end

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro::
# 242 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0
# 243 "data/scripts/story_talk.pory"
	closemessage
# 244 "data/scripts/story_talk.pory"
	applymovement 2, facedown
# 245 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1
	return


EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom::
# 249 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0
	return


EventScript_OverworldStoryTalk_PreTalkKobayashi::
# 253 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi::
# 257 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods::
# 263 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0
# 265 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1
	return

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1:
# 266 "data/scripts/story_talk.pory"
	lock
# 267 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1
# 268 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 269 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 270 "data/scripts/story_talk.pory"
	waitmovement 0
# 271 "data/scripts/story_talk.pory"
	release
	return


EventScript_OverworldStoryTalk_PreTalkMartLady::
# 276 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkMartLady::
# 281 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_TalkToTheTownPeople::
# 286 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0
	return


EventScript_OverworldStoryTalk_GoBackToTheOrphanage::
# 290 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa::
# 294 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank::
# 299 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods::
# 306 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru::
# 314 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro::
# 318 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House::
# 323 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft::
# 329 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow::
# 334 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstBattleMitsuru::
# 339 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostPrologue::
# 349 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPrologue_Text_0
	return


EventScript_OverworldStoryTalk_MitsurusPrologue::
# 360 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 1
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_2
# 363 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_3
# 366 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_4
# 369 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_5
# 372 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_6
# 377 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_NoScript
EventScript_OverworldStoryTalk_MitsurusPrologue_1:
# 379 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_MitsurusPrologue_2:
# 361 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_3:
# 364 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_4:
# 367 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostInteleonJoining
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_5:
# 370 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickUpFennekin
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_6:
# 373 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostGoodByeKikuno
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1


EventScript_OverworldStoryTalk_NoScript::
# 384 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
# 385 "data/scripts/story_talk.pory"
	closemessage
	return


EventScript_OverworldStoryTalk_MustPickUpVulpix::
# 388 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0
	return


EventScript_OverworldStoryTalk_PostPickUpVulpix::
# 393 "data/scripts/story_talk.pory"
	lock
# 394 "data/scripts/story_talk.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FacePlayer
# 395 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FacePlayer
# 396 "data/scripts/story_talk.pory"
	waitmovement 0
# 397 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0
# 398 "data/scripts/story_talk.pory"
	closemessage
# 399 "data/scripts/story_talk.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 400 "data/scripts/story_talk.pory"
	waitmoncry
# 401 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickUpVulpix_2
EventScript_OverworldStoryTalk_PostPickUpVulpix_1:
# 405 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1
# 407 "data/scripts/story_talk.pory"
	closemessage
# 408 "data/scripts/story_talk.pory"
	release
	return

EventScript_OverworldStoryTalk_PostPickUpVulpix_2:
# 402 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0
# 403 "data/scripts/story_talk.pory"
	waitmovement 0
	goto EventScript_OverworldStoryTalk_PostPickUpVulpix_1


EventScript_OverworldStoryTalk_PostInteleonJoining::
# 413 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0
# 414 "data/scripts/story_talk.pory"
	closemessage
# 415 "data/scripts/story_talk.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 416 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1
	return


EventScript_OverworldStoryTalk_PrePickUpFennekin::
# 420 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0
	return


EventScript_OverworldStoryTalk_PostGoodByeKikuno::
# 424 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0
	return


EventScript_OverworldTrainerTips::
# 433 "data/scripts/story_talk.pory"
	closemessage
# 434 "data/scripts/story_talk.pory"
	showhelpwindow HELP_START_MENU
# 435 "data/scripts/story_talk.pory"
	waitbuttonpress
# 436 "data/scripts/story_talk.pory"
	hidehelpwindow
# 437 "data/scripts/story_talk.pory"
	release
	end


EventScript_OverworldWorkParttime::
	return


# 402 "data/scripts/story_talk.pory"
EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0:
# 402 "data/scripts/story_talk.pory"
	emote_music
# 402 "data/scripts/story_talk.pory"
	face_up
# 402 "data/scripts/story_talk.pory"
	delay_16
# 402 "data/scripts/story_talk.pory"
	face_right
# 402 "data/scripts/story_talk.pory"
	delay_16
# 402 "data/scripts/story_talk.pory"
	face_down
# 402 "data/scripts/story_talk.pory"
	delay_16
# 402 "data/scripts/story_talk.pory"
	face_left
# 402 "data/scripts/story_talk.pory"
	delay_16
# 402 "data/scripts/story_talk.pory"
	face_player
	step_end

EventScript_OverworldHelpButton_Text_0:
# 11 "data/scripts/story_talk.pory"
	.string "What would you like to get help with?$"

EventScript_OverworldStoryTalk_Text_0:
# 66 "data/scripts/story_talk.pory"
	.string "No script yet.$"

EventScript_OverworldStoryTalk_MustSetClock_Text_0:
# 189 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's fix the clock and join Miki\n"
	.string "outside.)$"

EventScript_OverworldStoryTalk_ClockIsSet_Text_0:
# 193 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Miki's waiting for me outside. Better\n"
	.string "hurry).$"

EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0:
# 197 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}What are you going to do in the woods?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}You'll know soon! I'm sure you'll love it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Gonna be funny if you fall into the pond\n"
	.string "again, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I was just surprised!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, by a Caterpie.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Ugh...\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Hehe.$"

EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0:
# 210 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Just looking around.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Making sure there's no Caterpie?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Screw you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Ehehe.$"

EventScript_OverworldStoryTalk_PrePickPawmi_Text_0:
# 218 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Come to think of it, this Pawmi's fur\n"
	.string "color is kinda... weird.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_0:
# 222 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(I slept so well.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_1:
# 225 "data/scripts/story_talk.pory"
	.string "... You make a good hug pillow, huh?$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0:
# 242 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I wonder what Ms. Kobayashi needs us\n"
	.string "for...$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1:
# 245 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No idea, she hurried off somewhere\n"
	.string "before I could ask.$"

EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0:
# 249 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Did you forget something? Hurry up, Ms.\n"
	.string "Kobayashi is waiting.$"

EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0:
# 253 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi said she'd be at the main\n"
	.string "hall.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0:
# 257 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The package is in the Pokémon Center in\n"
	.string "Sunshine Town.\p"
	.string "Let's get this over with. The show's on\n"
	.string "air soon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Oh right, your favorite cooking show.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0:
# 263 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Never knew you would get your first\n"
	.string "Pokémon here, huh?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Yeah.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1:
# 267 "data/scripts/story_talk.pory"
	.string "I'm glad I met you, Pawmi.$"

EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0:
# 276 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing? Just ask the Mart\n"
	.string "Lady for the package.$"

EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0:
# 281 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Let's hurry up outside. I have a bad\n"
	.string "feeling.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Damn it, you too?$"

EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0:
# 286 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Someone must've known what happened.\n"
	.string "Let's ask around.)$"

EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0:
# 290 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Let's hurry back to the orphanage!!$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0:
# 294 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}You know where to go?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}No. But there's no point in returning to\n"
	.string "the orphanage right now. Let's start\l"
	.string "with Route 2.$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0:
# 299 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Hey Shinji...\p"
	.string "Why do you think Ms. Kobayashi would do\n"
	.string "that to us?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Pushing us into the river...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0:
# 306 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Miki gifted me a flower crown here.\p"
	.string "I left it in our room so it was probably\n"
	.string "burned to ash.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"

EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0:
# 314 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I wonder what Shinji wanted to say.)$"

EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0:
# 318 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}You think she'll agree?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}We have a good chance. She must've also\n"
	.string "wanted our help.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0:
# 323 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Kirijo's waiting for us in Sunshine\n"
	.string "Meadow.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go meet up with her after we've\n"
	.string "sorted out our party.\p"
	.string "We'll be having 3-vs-3 battles.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0:
# 329 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji went ahead to prepare his team.\p"
	.string "I should do the same and go to Sunshine\n"
	.string "Meadow to have my first battle with\l"
	.string "Kirijo.)$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0:
# 334 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There she is. Her Inteleon is gonna be\n"
	.string "hard to take down.\p"
	.string "There's also that weird-colored Vulpix.)$"

EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0:
# 339 "data/scripts/story_talk.pory"
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
# 349 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}First, let's go through Route 2 to\n"
	.string "Coralport.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright! There are a few trainers on\n"
	.string "that route. Time to train!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Someone sure is fired up.$"

EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0:
# 388 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL} (I should return Vulpix to its Pokéball\n"
	.string "and hurry to Thundershards Cliff.)$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0:
# 397 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}How do you feel getting back on the\n"
	.string "field, Vulpix?$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1:
# 405 "data/scripts/story_talk.pory"
	.string "(Vulpix's dancing excitedly.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Haha, honestly, me too.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0:
# 413 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, I'll be counting on you to\n"
	.string "watch my back, Inteleon.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1:
# 416 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks determinated, nodding\n"
	.string "at you.)$"

EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0:
# 420 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}A fire type would be great for my\n"
	.string "journey.$"

EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0:
# 424 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Now I should make my way to\n"
	.string "Thundershards Scree.\p"
	.string "According to the map, it should be on\n"
	.string "the north of Sunshine Meadow.)$"

StoryHints::
# 45 "data/scripts/story_talk.pory"
	.string "Story Hints$"

TrainersTips::
# 49 "data/scripts/story_talk.pory"
	.string "Trainer's Tips$"

Work::
# 53 "data/scripts/story_talk.pory"
	.string "Work Part-time$"
