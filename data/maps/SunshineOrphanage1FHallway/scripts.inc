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
	msgbox BOY_1_1F_Text_0
# 26 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


BOY_2_1F::
# 30 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 31 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	faceplayer
# 32 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox BOY_2_1F_Text_0
# 36 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


GIRL_1F::
# 40 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	lock
# 41 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	faceplayer
# 42 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	msgbox GIRL_1F_Text_0
# 45 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	release
	return


Restroom1F_Text_0:
# 7 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

TrashcanFull_Text_0:
# 15 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "It's full of trash.$"

BOY_1_1F_Text_0:
# 23 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "I'm playing a game called Persona 3. I'm\n"
	.string "hooked.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Oh, Miki loves that game as well. She\n"
	.string "talks about it all the time.$"

BOY_2_1F_Text_0:
# 33 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "You and Miki are so lucky. I wish I could\n"
	.string "also get adopted along with my big sis...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD} ...\p"
	.string "Sorry, I don't really know what to say...$"

GIRL_1F_Text_0:
# 42 "data/maps/SunshineOrphanage1FHallway/scripts.pory"
	.string "My future adoptive parents looked very\n"
	.string "wealthy.\p"
	.string "Why couldn't they adopt my brother\n"
	.string "too?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SAD} I wish I had the answer to that...$"
