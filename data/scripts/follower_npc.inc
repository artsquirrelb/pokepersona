Eventscript_MitsuruFollower::
# 2 "data/scripts/follower_npc.pory"
	lock
# 3 "data/scripts/follower_npc.pory"
	faceplayer
# 4 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_0, MSGBOX_YESNO
# 6 "data/scripts/follower_npc.pory"
	closemessage
# 7 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_MitsuruFollower_2
# 16 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_2
# 17 "data/scripts/follower_npc.pory"
	closemessage
# 18 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 19 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_MAY_NORMAL, FOLLOWER_NPC_FLAG_ALL, Eventscript_MitsuruFollower, 0
# 20 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 21 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_MitsuruFollower_1:
# 23 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_MitsuruFollower_2:
# 8 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_1
# 9 "data/scripts/follower_npc.pory"
	closemessage
# 10 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 11 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_MAY_NORMAL, FOLLOWER_NPC_FLAG_ALL, Eventscript_MitsuruFollower, PARTNER_MITSURU_C1
# 12 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 13 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_MitsuruFollower_1


Eventscript_AkihikoFollower::
# 28 "data/scripts/follower_npc.pory"
	lock
# 29 "data/scripts/follower_npc.pory"
	faceplayer
# 30 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_0, MSGBOX_YESNO
# 32 "data/scripts/follower_npc.pory"
	closemessage
# 33 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_AkihikoFollower_2
# 42 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_2
# 43 "data/scripts/follower_npc.pory"
	closemessage
# 44 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 45 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_BRENDAN_NORMAL, FOLLOWER_NPC_FLAG_ALL, Eventscript_AkihikoFollower, 0
# 46 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 47 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_AkihikoFollower_1:
# 49 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_AkihikoFollower_2:
# 34 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_1
# 35 "data/scripts/follower_npc.pory"
	closemessage
# 36 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 37 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_BRENDAN_NORMAL, FOLLOWER_NPC_FLAG_ALL, Eventscript_AkihikoFollower, PARTNER_AKIHIKO_C1
# 38 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 39 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_AkihikoFollower_1


Eventscript_ShinjiroFollower::
# 54 "data/scripts/follower_npc.pory"
	lock
# 55 "data/scripts/follower_npc.pory"
	faceplayer
# 56 "data/scripts/follower_npc.pory"
	checkplayergender
# 57 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollower_2
# 80 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_3, MSGBOX_YESNO
# 82 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_ShinjiroFollower_8
# 92 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_5
# 93 "data/scripts/follower_npc.pory"
	closemessage
# 94 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 95 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_SHINJIRO, FOLLOWER_NPC_FLAG_ALL, Eventscript_ShinjiroFollower, 0
# 96 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 97 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_ShinjiroFollower_1:
# 100 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_ShinjiroFollower_2:
# 58 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_0, MSGBOX_YESNO
# 60 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_ShinjiroFollower_5
# 70 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_2
# 71 "data/scripts/follower_npc.pory"
	closemessage
# 72 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 73 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_SHINJIRO, FOLLOWER_NPC_FLAG_ALL, Eventscript_ShinjiroFollower, 0
# 74 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 75 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_5:
# 61 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_1
# 62 "data/scripts/follower_npc.pory"
	closemessage
# 63 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 64 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_SHINJIRO, FOLLOWER_NPC_FLAG_ALL, Eventscript_ShinjiroFollower, PARTNER_SHINJIRO_C1
# 65 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 66 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_8:
# 83 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_4
# 84 "data/scripts/follower_npc.pory"
	closemessage
# 85 "data/scripts/follower_npc.pory"
	destroyfollowernpc
# 86 "data/scripts/follower_npc.pory"
	createfollowernpc OBJ_EVENT_GFX_SHINJIRO, FOLLOWER_NPC_FLAG_ALL, Eventscript_ShinjiroFollower, PARTNER_SHINJIRO_C1
# 87 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 88 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1


Eventscript_MitsuruFollower_Text_0:
# 4 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Is something wrong, Sanada-kun?\p"
	.string "Do you want me to join you in battle?$"

Eventscript_MitsuruFollower_Text_1:
# 8 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}I understand. I'll back you up.$"

Eventscript_MitsuruFollower_Text_2:
# 16 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You want to train on your own? Your\n"
	.string "determination is truly admirable.$"

Eventscript_AkihikoFollower_Text_0:
# 30 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Need something, Kirijo?\p"
	.string "Want me to join your training?$"

Eventscript_AkihikoFollower_Text_1:
# 34 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. I won't lose to you!$"

Eventscript_AkihikoFollower_Text_2:
# 42 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure then. I'll just train on my own.$"

Eventscript_ShinjiroFollower_Text_0:
# 58 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's up, Aki? Want me to battle along\n"
	.string "side you?$"

Eventscript_ShinjiroFollower_Text_1:
# 61 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Can't do anything without me, huh?$"

Eventscript_ShinjiroFollower_Text_2:
# 70 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Alright then.$"

Eventscript_ShinjiroFollower_Text_3:
# 80 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's wrong, Princess? Want me to back\n"
	.string "you up?$"

Eventscript_ShinjiroFollower_Text_4:
# 83 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}So you do need help sometimes, huh?$"

Eventscript_ShinjiroFollower_Text_5:
# 92 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Sure, I know you can hold your ground.$"
