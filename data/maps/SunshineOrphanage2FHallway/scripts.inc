SunshineOrphanage2FHallway_MapScripts::
	.byte 0


Girls_Hallway2F::
# 4 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 5 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Girls_Hallway2F_Text_0
# 9 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


Restroom2F::
# 13 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 14 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Restroom2F_Text_0
# 18 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


BOY_1_2F::
# 22 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 23 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 24 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_1_2F_Text_0
# 29 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


BOY_2_2F::
# 33 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 34 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 35 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_0
# 43 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	return


Girls_Hallway2F_Text_0:
# 6 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

Restroom2F_Text_0:
# 15 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

BOY_1_2F_Text_0:
# 25 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "I wish the orphanage let us have\n"
	.string "Pokemon.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} I wish so too but I guess it'll be\n"
	.string "harder for the staff.\p"
	.string "They're already busy enough.$"

BOY_2_2F_Text_0:
# 36 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Few days ago I saw a Pawmi with\n"
	.string "different color in the woods.\p"
	.string "It's neither orange yellow nor pink.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} What color was it then?\p"
	.string "{DESTROY_MUGSHOT} Hehe, it's a secret.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_DOUBT} ...$"
