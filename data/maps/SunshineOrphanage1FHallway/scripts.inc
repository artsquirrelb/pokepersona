SunshineOrphanage1FHallway_MapScripts::
	.byte 0


Restroom1F::
# 5 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 6 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox Restroom1F_Text_0
# 10 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


TrashcanFull::
# 14 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 15 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox TrashcanFull_Text_0
# 16 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


BOY_1_1F::
# 20 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 21 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	faceplayer
# 22 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	setspeaker BOY_1_1F_Text_0
# 23 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox BOY_1_1F_Text_1
# 27 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


BOY_2_1F::
# 31 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 32 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	faceplayer
# 33 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	setspeaker BOY_2_1F_Text_0
# 34 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox BOY_2_1F_Text_1
# 38 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


GIRL_1F::
# 42 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 43 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	faceplayer
# 44 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	setspeaker GIRL_1F_Text_0
# 45 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox GIRL_1F_Text_1
# 49 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


Restroom1F_Text_0:
# 7 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_NORMAL} It's the restroom. I'm good for now.$"

TrashcanFull_Text_0:
# 15 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "It's full of trash.$"

BOY_1_1F_Text_0:
# 22 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "Kenta$"

BOY_1_1F_Text_1:
# 24 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "I'm playing a game called Persona 3. I'm\n"
	.string "hooked.\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SMILE} Oh, Miki loves that game as well. She\n"
	.string "talks about it all the time.$"

BOY_2_1F_Text_0:
# 33 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "Jun$"

BOY_2_1F_Text_1:
# 35 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "You and Miki are so lucky. I wish I could\n"
	.string "also get adopted along with my big sis...\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SAD} ...\p"
	.string "Sorry, I don't really know what to say...$"

GIRL_1F_Text_0:
# 44 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "Ran$"

GIRL_1F_Text_1:
# 45 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "My future adoptive parents looked very\n"
	.string "wealthy.\p"
	.string "Why couldn't they adopt my brother\n"
	.string "too?\p"
	.string "Is this because he's sick all the\n"
	.string "time...?\p"
	.string "{SPEAKER NAME_A}{CREATE_MUGSHOT MUGSHOT_A EMOTE_SAD} I wish I had the answer to that...$"
