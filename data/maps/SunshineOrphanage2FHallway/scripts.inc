SunshineOrphanage2FHallway_MapScripts::
	.byte 0


Girls_Hallway2F::
# 4 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 5 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Girls_Hallway2F_Text_0
# 7 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	end


Restroom2F::
# 12 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 13 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox Restroom2F_Text_0
# 15 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	end


BOY_1_2F::
# 20 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 21 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 22 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_1_2F_Text_0
# 23 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_1_2F_Text_1
# 27 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	end


BOY_2_2F::
# 32 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 33 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	faceplayer
# 34 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_2_2F_Text_0
# 35 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 9
	goto_if_lt BOY_2_2F_2
# 46 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_3
BOY_2_2F_1:
# 49 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	end

BOY_2_2F_2:
# 36 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_1
# 40 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	closemessage
# 41 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	setspeaker BOY_2_2F_Text_0
# 42 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox BOY_2_2F_Text_2
	goto BOY_2_2F_1


TrashcanEmpty::
# 54 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	lock
# 55 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	msgbox TrashcanEmpty_Text_0
# 56 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	release
	end


Girls_Hallway2F_Text_0:
# 5 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

Restroom2F_Text_0:
# 13 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} It's the restroom. I'm good for now.$"

BOY_1_2F_Text_0:
# 22 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Kuro$"

BOY_1_2F_Text_1:
# 23 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "I wish the orphanage let us have\n"
	.string "Pokémon.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_NORMAL} I do too but I guess it'll be harder for\n"
	.string "the staff.\p"
	.string "They're already busy enough.$"

BOY_2_2F_Text_0:
# 34 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Kou$"

BOY_2_2F_Text_1:
# 37 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Few days ago I saw a Pawmi with a\n"
	.string "different color in the woods.\p"
	.string "It's neither orange yellow nor pink.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_SURPRISED} What color was it then?$"

BOY_2_2F_Text_2:
# 42 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Hehe, it's a secret.\p"
	.string "{SPEAKER NAME_A}{CREATE MUGSHOT_A EMOTE_DOUBT} ...$"

BOY_2_2F_Text_3:
# 46 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "Wait, that Pawmi...\p"
	.string "I think it's the one I saw a few days\n"
	.string "ago.$"

TrashcanEmpty_Text_0:
# 55 "data/maps/SunshineOrphanage2FHallway/scripts.pory"
	.string "It's empty.$"
