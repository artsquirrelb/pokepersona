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
# 14 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_2
# 15 "data/scripts/follower_npc.pory"
	closemessage
# 16 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 17 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_MitsuruFollower_1:
# 19 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_MitsuruFollower_2:
# 8 "data/scripts/follower_npc.pory"
	msgbox Eventscript_MitsuruFollower_Text_1
# 9 "data/scripts/follower_npc.pory"
	closemessage
# 10 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_MITSURU_C1
# 11 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_MitsuruFollower_1


Eventscript_AkihikoFollower::
# 24 "data/scripts/follower_npc.pory"
	lock
# 25 "data/scripts/follower_npc.pory"
	faceplayer
# 26 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_0, MSGBOX_YESNO
# 28 "data/scripts/follower_npc.pory"
	closemessage
# 29 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_AkihikoFollower_2
# 37 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_2
# 38 "data/scripts/follower_npc.pory"
	closemessage
# 39 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 40 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_AkihikoFollower_1:
# 42 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_AkihikoFollower_2:
# 30 "data/scripts/follower_npc.pory"
	msgbox Eventscript_AkihikoFollower_Text_1
# 31 "data/scripts/follower_npc.pory"
	closemessage
# 32 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_AKIHIKO_C1
# 33 "data/scripts/follower_npc.pory"
	updatefollowingmon
# 34 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_AkihikoFollower_1


Eventscript_ShinjiroFollower::
# 47 "data/scripts/follower_npc.pory"
	lock
# 48 "data/scripts/follower_npc.pory"
	faceplayer
# 49 "data/scripts/follower_npc.pory"
	checkplayergender
# 50 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Eventscript_ShinjiroFollower_2
# 69 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_3, MSGBOX_YESNO
# 71 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_ShinjiroFollower_8
# 79 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_5
# 80 "data/scripts/follower_npc.pory"
	closemessage
# 81 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 82 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
Eventscript_ShinjiroFollower_1:
# 85 "data/scripts/follower_npc.pory"
	release
	end

Eventscript_ShinjiroFollower_2:
# 51 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_0, MSGBOX_YESNO
# 53 "data/scripts/follower_npc.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Eventscript_ShinjiroFollower_5
# 61 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_2
# 62 "data/scripts/follower_npc.pory"
	closemessage
# 63 "data/scripts/follower_npc.pory"
	changefollowerbattler 0
# 64 "data/scripts/follower_npc.pory"
	clearflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_5:
# 54 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_1
# 55 "data/scripts/follower_npc.pory"
	closemessage
# 56 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 57 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1

Eventscript_ShinjiroFollower_8:
# 72 "data/scripts/follower_npc.pory"
	msgbox Eventscript_ShinjiroFollower_Text_4
# 73 "data/scripts/follower_npc.pory"
	closemessage
# 74 "data/scripts/follower_npc.pory"
	changefollowerbattler PARTNER_SHINJIRO_C1
# 75 "data/scripts/follower_npc.pory"
	setflag FLAG_PARTNER_WILD_BATTLES
	goto Eventscript_ShinjiroFollower_1


Eventscript_MitsuruFollower_Text_0:
# 4 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_NORMAL}Is something wrong, Sanada-kun?\p"
	.string "Do you want me to join you in battle?$"

Eventscript_MitsuruFollower_Text_1:
# 8 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}Very well. I'll back you up.$"

Eventscript_MitsuruFollower_Text_2:
# 14 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_MITSURU}{CREATE_MUGSHOT MUGSHOT_MITSURU EMOTE_SMILE}You want to train on your own? Your\n"
	.string "determination is truly admirable.$"

Eventscript_AkihikoFollower_Text_0:
# 26 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL}Need something, Kirijo?\p"
	.string "Want me to join your training?$"

Eventscript_AkihikoFollower_Text_1:
# 30 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Alright. I won't lose to you!$"

Eventscript_AkihikoFollower_Text_2:
# 37 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE}Sure then. I'll just train on my own.$"

Eventscript_ShinjiroFollower_Text_0:
# 51 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's up, Aki? Want me to battle along\n"
	.string "side you?$"

Eventscript_ShinjiroFollower_Text_1:
# 54 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Can't do anything without me, huh?$"

Eventscript_ShinjiroFollower_Text_2:
# 61 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Alright then.$"

Eventscript_ShinjiroFollower_Text_3:
# 69 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_NORMAL}What's wrong, Princess? Want me to back\n"
	.string "you up?$"

Eventscript_ShinjiroFollower_Text_4:
# 72 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}So you do need help sometimes, huh?$"

Eventscript_ShinjiroFollower_Text_5:
# 79 "data/scripts/follower_npc.pory"
	.string "{SPEAKER NAME_SHINJIRO}{CREATE_MUGSHOT MUGSHOT_SHINJIRO EMOTE_SMILE}Sure, I know you can hold your ground.$"
