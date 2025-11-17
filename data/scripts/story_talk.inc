EventScript_OverworldStoryTalk::
# 4 "data/scripts/story_talk.pory"
	checkplayergender
# 5 "data/scripts/story_talk.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_OverworldStoryTalk_8
EventScript_OverworldStoryTalk_6:
# 8 "data/scripts/story_talk.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_OverworldStoryTalk_5
EventScript_OverworldStoryTalk_4:
# 12 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_1:
# 14 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_2:
# 6 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_AkihikosPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_3:
# 9 "data/scripts/story_talk.pory"
	goto EventScript_OverworldStoryTalk_MitsurusPrologue
	goto EventScript_OverworldStoryTalk_1

EventScript_OverworldStoryTalk_5:
# 8 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_3
	goto EventScript_OverworldStoryTalk_4

EventScript_OverworldStoryTalk_8:
# 5 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 50
	goto_if_eq EventScript_OverworldStoryTalk_2
	goto EventScript_OverworldStoryTalk_6


EventScript_OverworldStoryTalk_AkihikosPrologue::
# 23 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_2
# 26 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 26 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_3
# 29 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 5
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_4
# 39 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 8
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_5
# 42 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_6
# 45 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 10
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_7
# 48 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 11
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_8
# 57 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 12
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_9
# 72 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 15
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_10
# 75 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 17
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_11
# 78 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 18
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_12
# 81 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 24
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_13
# 99 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 29
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_14
# 102 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 30
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_15
# 105 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 33
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_16
# 108 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 34
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_17
# 117 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 38
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_18
# 120 "data/scripts/story_talk.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 44
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_19
# 125 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_AkihikosPrologue_1:
# 127 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_AkihikosPrologue_2:
# 24 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustSetClock
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_3:
# 27 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ClockIsSet
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_4:
# 30 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE
# 31 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_42
EventScript_OverworldStoryTalk_AkihikosPrologue_41:
# 34 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 35 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_56
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_5:
# 40 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_6:
# 43 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickPawmi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_7:
# 46 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_HaveTalkedToShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_8:
# 49 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_ORPHANAGE_AKIHIKOS_ROOM2F
# 50 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_44
# 54 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_9:
# 58 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 59 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_47
# 63 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_POKEMON_CENTER
# 64 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_58
# 68 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_10:
# 73 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_11:
# 76 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_TalkToTheTownPeople
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_12:
# 79 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_GoBackToTheOrphanage
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_13:
# 82 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_TOWN_RIVERBANK
# 83 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_50
# 88 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_WOODS
# 89 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_61
# 95 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_14:
# 100 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_15:
# 103 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_16:
# 106 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_17:
# 109 "data/scripts/story_talk.pory"
	iscurrentmap MAP_SUNSHINE_MEADOW
# 110 "data/scripts/story_talk.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_OverworldStoryTalk_AkihikosPrologue_53
# 114 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_18:
# 118 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostFirstBattleMitsuru
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_19:
# 121 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPrologue
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_42:
# 32 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_41

EventScript_OverworldStoryTalk_AkihikosPrologue_44:
# 51 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_47:
# 60 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_50:
# 85 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_53:
# 111 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_56:
# 36 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_LookingAroundInTheWoods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_58:
# 65 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PreTalkMartLady
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1

EventScript_OverworldStoryTalk_AkihikosPrologue_61:
# 91 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods
	goto EventScript_OverworldStoryTalk_AkihikosPrologue_1


EventScript_OverworldStoryTalk_MustSetClock::
# 135 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustSetClock_Text_0
	return


EventScript_OverworldStoryTalk_ClockIsSet::
# 139 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ClockIsSet_Text_0
	return


EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods::
# 143 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0
	return


EventScript_OverworldStoryTalk_LookingAroundInTheWoods::
# 153 "data/scripts/story_talk.pory"
	applymovement 2, faceup
# 154 "data/scripts/story_talk.pory"
	applymovement 3, faceup
# 155 "data/scripts/story_talk.pory"
	waitmovement 0
# 156 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0
	return


EventScript_OverworldStoryTalk_PrePickPawmi::
# 164 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickPawmi_Text_0
	return


EventScript_OverworldStoryTalk_PostPickPawmi::
# 168 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_0
# 169 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickPawmi_1
	return

EventScript_OverworldStoryTalk_PostPickPawmi_1:
# 170 "data/scripts/story_talk.pory"
	lock
# 171 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickPawmi_Text_1
# 172 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 173 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 174 "data/scripts/story_talk.pory"
	waitmovement 0
# 175 "data/scripts/story_talk.pory"
	release
	return


# 179 "data/scripts/story_talk.pory"
PawmiHappy:
# 180 "data/scripts/story_talk.pory"
	emote_heart
# 181 "data/scripts/story_talk.pory"
	face_player
# 182 "data/scripts/story_talk.pory"
	lock_facing_direction
# 183 "data/scripts/story_talk.pory"
	jump_in_place_down
# 184 "data/scripts/story_talk.pory"
	unlock_facing_direction
	step_end

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro::
# 188 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0
# 189 "data/scripts/story_talk.pory"
	closemessage
# 190 "data/scripts/story_talk.pory"
	applymovement 2, facedown
# 191 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1
	return


EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom::
# 195 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0
	return


EventScript_OverworldStoryTalk_PreTalkKobayashi::
# 199 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi::
# 203 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods::
# 209 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0
# 211 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1
	return

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_1:
# 212 "data/scripts/story_talk.pory"
	lock
# 213 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1
# 214 "data/scripts/story_talk.pory"
	playmoncry SPECIES_PAWMI, CRY_MODE_NORMAL
# 215 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PawmiHappy
# 216 "data/scripts/story_talk.pory"
	waitmovement 0
# 217 "data/scripts/story_talk.pory"
	release
	return


EventScript_OverworldStoryTalk_PreTalkMartLady::
# 222 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_PostTalkMartLady::
# 227 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0
	return


EventScript_OverworldStoryTalk_TalkToTheTownPeople::
# 232 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0
	return


EventScript_OverworldStoryTalk_GoBackToTheOrphanage::
# 236 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa::
# 240 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank::
# 245 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0
	return


EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods::
# 252 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru::
# 260 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro::
# 264 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House::
# 269 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft::
# 275 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0
	return


EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow::
# 280 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0
	return


EventScript_OverworldStoryTalk_PostFirstBattleMitsuru::
# 285 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0
	return


EventScript_OverworldStoryTalk_PostPrologue::
# 295 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPrologue_Text_0
	return


EventScript_OverworldStoryTalk_MitsurusPrologue::
# 306 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 1
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_2
# 309 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 2
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_3
# 312 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 3
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_4
# 315 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 4
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_5
# 318 "data/scripts/story_talk.pory"
	compare VAR_MITSURUS_INTRO_STATE, 6
	goto_if_eq EventScript_OverworldStoryTalk_MitsurusPrologue_6
# 323 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_Text_0
EventScript_OverworldStoryTalk_MitsurusPrologue_1:
# 325 "data/scripts/story_talk.pory"
	closemessage
	end

EventScript_OverworldStoryTalk_MitsurusPrologue_2:
# 307 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_MustPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_3:
# 310 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostPickUpVulpix
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_4:
# 313 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostInteleonJoining
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_5:
# 316 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PrePickUpFennekin
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1

EventScript_OverworldStoryTalk_MitsurusPrologue_6:
# 319 "data/scripts/story_talk.pory"
	call EventScript_OverworldStoryTalk_PostGoodByeKikuno
	goto EventScript_OverworldStoryTalk_MitsurusPrologue_1


EventScript_OverworldStoryTalk_MustPickUpVulpix::
# 330 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0
	return


EventScript_OverworldStoryTalk_PostPickUpVulpix::
# 335 "data/scripts/story_talk.pory"
	lock
# 336 "data/scripts/story_talk.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FacePlayer
# 337 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FacePlayer
# 338 "data/scripts/story_talk.pory"
	waitmovement 0
# 339 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0
# 340 "data/scripts/story_talk.pory"
	closemessage
# 341 "data/scripts/story_talk.pory"
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
# 342 "data/scripts/story_talk.pory"
	waitmoncry
# 343 "data/scripts/story_talk.pory"
	goto_if_unset FLAG_FOLLOWERS_DISABLED, EventScript_OverworldStoryTalk_PostPickUpVulpix_2
EventScript_OverworldStoryTalk_PostPickUpVulpix_1:
# 347 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1
# 349 "data/scripts/story_talk.pory"
	closemessage
# 350 "data/scripts/story_talk.pory"
	release
	return

EventScript_OverworldStoryTalk_PostPickUpVulpix_2:
# 344 "data/scripts/story_talk.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0
# 345 "data/scripts/story_talk.pory"
	waitmovement 0
	goto EventScript_OverworldStoryTalk_PostPickUpVulpix_1


EventScript_OverworldStoryTalk_PostInteleonJoining::
# 355 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0
# 356 "data/scripts/story_talk.pory"
	closemessage
# 357 "data/scripts/story_talk.pory"
	playmoncry SPECIES_INTELEON, CRY_MODE_NORMAL
# 358 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1
	return


EventScript_OverworldStoryTalk_PrePickUpFennekin::
# 362 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0
	return


EventScript_OverworldStoryTalk_PostGoodByeKikuno::
# 366 "data/scripts/story_talk.pory"
	msgbox EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0
	return


# 344 "data/scripts/story_talk.pory"
EventScript_OverworldStoryTalk_PostPickUpVulpix_Movement_0:
# 344 "data/scripts/story_talk.pory"
	emote_music
# 344 "data/scripts/story_talk.pory"
	face_up
# 344 "data/scripts/story_talk.pory"
	delay_16
# 344 "data/scripts/story_talk.pory"
	face_right
# 344 "data/scripts/story_talk.pory"
	delay_16
# 344 "data/scripts/story_talk.pory"
	face_down
# 344 "data/scripts/story_talk.pory"
	delay_16
# 344 "data/scripts/story_talk.pory"
	face_left
# 344 "data/scripts/story_talk.pory"
	delay_16
# 344 "data/scripts/story_talk.pory"
	face_player
	step_end

EventScript_OverworldStoryTalk_Text_0:
# 12 "data/scripts/story_talk.pory"
	.string "No script yet.$"

EventScript_OverworldStoryTalk_MustSetClock_Text_0:
# 135 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Let's fix the clock and join Miki\n"
	.string "outside.)$"

EventScript_OverworldStoryTalk_ClockIsSet_Text_0:
# 139 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Miki's waiting for me outside. Better\n"
	.string "hurry).$"

EventScript_OverworldStoryTalk_ShinjiroAndMikiJoinedGoingToWoods_Text_0:
# 143 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}What are you going to do in the woods?\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}You'll know soon! I'm sure you'll love it!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Gonna be funny if you fall into the pond\n"
	.string "again, Aki.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}I was just surprised!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Yeah, by a Caterpie.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Ugh...\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Hehe.$"

EventScript_OverworldStoryTalk_LookingAroundInTheWoods_Text_0:
# 156 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Just looking around.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Making sure there's no Caterpie?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT}Screw you.\p"
	.string "{SPEAKER NAME_MIKI}{DESTROY_MUGSHOT}Ehehe.$"

EventScript_OverworldStoryTalk_PrePickPawmi_Text_0:
# 164 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Come to think of it, this Pawmi's fur\n"
	.string "color is kinda... weird.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_0:
# 168 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}(I slept so well.)$"

EventScript_OverworldStoryTalk_PostPickPawmi_Text_1:
# 171 "data/scripts/story_talk.pory"
	.string "... You make a good hug pillow, huh?$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_0:
# 188 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}I wonder what Ms. Kobayashi needs us\n"
	.string "for...$"

EventScript_OverworldStoryTalk_HaveTalkedToShinjiro_Text_1:
# 191 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}No idea, she hurried off somewhere\n"
	.string "before I could ask.$"

EventScript_OverworldStoryTalk_ShinjiroJoinedAkihikosRoom_Text_0:
# 195 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Did you forget something? Hurry up, Ms.\n"
	.string "Kobayashi is waiting.$"

EventScript_OverworldStoryTalk_PreTalkKobayashi_Text_0:
# 199 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Ms. Kobayashi said she'd be at the main\n"
	.string "hall.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_Text_0:
# 203 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}The package is in the Pokémon Center in\n"
	.string "Sunshine Town.\p"
	.string "Let's get this over with. The show's on\n"
	.string "air soon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Oh right, your favorite cooking show.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_0:
# 209 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Never knew you would get your first\n"
	.string "Pokémon here, huh?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Yeah.$"

EventScript_OverworldStoryTalk_PostTalkKobayashi_InWoods_Text_1:
# 213 "data/scripts/story_talk.pory"
	.string "I'm glad I met you, Pawmi.$"

EventScript_OverworldStoryTalk_PreTalkMartLady_Text_0:
# 222 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What are you doing? Just ask the Mart\n"
	.string "Lady for the package.$"

EventScript_OverworldStoryTalk_PostTalkMartLady_Text_0:
# 227 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}Let's hurry up outside. I have a bad\n"
	.string "feeling.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SERIOUS}Damn it, you too?$"

EventScript_OverworldStoryTalk_TalkToTheTownPeople_Text_0:
# 232 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SERIOUS}(Someone must've known what happened.\n"
	.string "Let's ask around.)$"

EventScript_OverworldStoryTalk_GoBackToTheOrphanage_Text_0:
# 236 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_MAD}Let's hurry back to the orphanage!!$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Text_0:
# 240 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}You know where to go?\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}No. But there's no point in returning to\n"
	.string "the orphanage right now. Let's start\l"
	.string "with Route 2.$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Riverbank_Text_0:
# 245 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Hey Shinji...\p"
	.string "Why do you think Ms. Kobayashi would do\n"
	.string "that to us?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}Pushing us into the river...\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}...$"

EventScript_OverworldStoryTalk_PosttalkKurosawa_Woods_Text_0:
# 252 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD}Miki gifted me a flower crown here.\p"
	.string "I left it in our room so it was probably\n"
	.string "burned to ash.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_DOUBT}...$"

EventScript_OverworldStoryTalk_PostFirstMeetingMitsuru_Text_0:
# 260 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(I wonder what Shinji wanted to say.)$"

EventScript_OverworldStoryTalk_PostFirstMeetingShinjiro_Text_0:
# 264 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}You think she'll agree?\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}We have a good chance. She must've also\n"
	.string "wanted our help.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruRoute2House_Text_0:
# 269 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Kirijo's waiting for us in Sunshine\n"
	.string "Meadow.\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}Let's go meet up with her after we've\n"
	.string "sorted out our party.\p"
	.string "We'll be having 3-vs-3 battles.$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuruShinjiroLeft_Text_0:
# 275 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(Shinji went ahead to prepare his team.\p"
	.string "I should do the same and go to Sunshine\n"
	.string "Meadow to have my first battle with\l"
	.string "Kirijo.)$"

EventScript_OverworldStoryTalk_PreFirstBattleMitsuru_Meadow_Text_0:
# 280 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}(There she is. Her Inteleon is gonna be\n"
	.string "hard to take down.\p"
	.string "There's also that weird-colored Vulpix.)$"

EventScript_OverworldStoryTalk_PostFirstBattleMitsuru_Text_0:
# 285 "data/scripts/story_talk.pory"
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
# 295 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}First, let's go through Route 2 to\n"
	.string "Coralport.\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_CONFIDENT}Alright! There are a few trainers on\n"
	.string "that route. Time to train!\p"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Someone sure is fired up.$"

EventScript_OverworldStoryTalk_MustPickUpVulpix_Text_0:
# 330 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL} (I should return Vulpix to its Pokéball\n"
	.string "and hurry to Thundershards Cliff.)$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_0:
# 339 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}How do you feel getting back on the\n"
	.string "field, Vulpix?$"

EventScript_OverworldStoryTalk_PostPickUpVulpix_Text_1:
# 347 "data/scripts/story_talk.pory"
	.string "(Vulpix's dancing excitedly.)\p"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Haha, honestly, me too.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_0:
# 355 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Well then, I'll be counting on you to\n"
	.string "watch my back, Inteleon.$"

EventScript_OverworldStoryTalk_PostInteleonJoining_Text_1:
# 358 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_INTELEON}{CREATE_MUGSHOT MUGSHOT_INTELEON EMOTE_SERIOUS}(Inteleon looks determinated, nodding\n"
	.string "at you.)$"

EventScript_OverworldStoryTalk_PrePickUpFennekin_Text_0:
# 362 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}A fire type would be great for my\n"
	.string "journey.$"

EventScript_OverworldStoryTalk_PostGoodByeKikuno_Text_0:
# 366 "data/scripts/story_talk.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SERIOUS}(Now I should make my way to\n"
	.string "Thundershards Scree.\p"
	.string "According to the map, it should be on\n"
	.string "the north of Sunshine Meadow.)$"
