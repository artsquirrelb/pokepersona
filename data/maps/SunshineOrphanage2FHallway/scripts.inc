SunshineOrphanage2FHallway_MapScripts::
	.byte 0


Girls_Hallway2F::
# 4 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 6 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Girls_Hallway2F_Text_0
# 10 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


Restroom2F::
# 14 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 15 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Restroom2F_Text_0
# 19 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


BOY_1_2F::
# 23 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 24 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 25 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_1_2F_Text_0
# 26 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_1_2F_Text_1
# 31 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


BOY_2_2F::
# 35 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 36 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 37 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_2_2F_Text_0
# 38 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_lt BOY_2_2F_2
# 49 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_3
BOY_2_2F_1:
# 52 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return

BOY_2_2F_2:
# 39 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_1
# 43 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	closemessage
# 44 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_2_2F_Text_0
# 45 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_2
	goto BOY_2_2F_1


TrashcanEmpty::
# 56 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 57 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox TrashcanEmpty_Text_0
# 58 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


Girls_Hallway2F_Text_0:
# 7 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

Restroom2F_Text_0:
# 16 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

BOY_1_2F_Text_0:
# 25 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Kuro$"

BOY_1_2F_Text_1:
# 27 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "I wish the orphanage let us have\n"
	.string "Pokemon.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I do too but I guess it'll be harder for\n"
	.string "the staff.\p"
	.string "They're already busy enough.$"

BOY_2_2F_Text_0:
# 37 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Kou$"

BOY_2_2F_Text_1:
# 40 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Few days ago I saw a Pawmi with a\n"
	.string "different color in the woods.\p"
	.string "It's neither orange yellow nor pink.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} What color was it then?$"

BOY_2_2F_Text_2:
# 45 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Hehe, it's a secret.\p"
	.string "{SPEAKER NAME_AKIHIKO}{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT} ...$"

BOY_2_2F_Text_3:
# 49 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Wait, that Pawmi...\p"
	.string "I think it's the one I saw a few days\n"
	.string "ago.$"

TrashcanEmpty_Text_0:
# 57 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "It's empty.$"
