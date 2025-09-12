SunshineOrphanageMainHall_MapScripts::
	.byte 0


Boy_1_MainHall::
# 5 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 6 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_1_MainHall_Text_0
# 9 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_1_MainHall::
# 13 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 14 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 15 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_1_MainHall_Text_0
# 17 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_2_MainHall::
# 21 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 22 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 23 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_2_MainHall_Text_0
# 25 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girl_2_MainHall::
# 29 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 30 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 31 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girl_2_MainHall_Text_0
# 34 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichMan_MainHall::
# 38 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 39 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 40 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichMan_MainHall_Text_0
# 42 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RichLady_MainHall::
# 46 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 47 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 48 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RichLady_MainHall_Text_0
# 50 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Teacher_MainHall::
# 54 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 55 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 56 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Teacher_MainHall_Text_0
# 58 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_3_MainHall::
# 62 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 63 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 64 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 3
	goto_if_eq Boy_3_MainHall_2
# 69 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	compare VAR_AKIHIKOS_INTRO_STATE, 4
	goto_if_eq Boy_3_MainHall_3
# 72 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_2
Boy_3_MainHall_1:
# 76 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Boy_3_MainHall_2:
# 65 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_0
	goto Boy_3_MainHall_1

Boy_3_MainHall_3:
# 69 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Boy_3_MainHall_Text_1
	goto Boy_3_MainHall_1


DiningRoom::
# 80 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox DiningRoom_Text_0
# 83 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


BackyardDoor::
# 87 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox BackyardDoor_Text_0
# 90 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Girls_HallwayMainHall::
# 94 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 95 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Girls_HallwayMainHall_Text_0
# 98 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


RestroomMainHall::
# 102 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 103 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox RestroomMainHall_Text_0
# 107 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


PokeballShelf::
# 111 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 112 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox PokeballShelf_Text_0
# 116 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Porygon_PC::
# 120 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 121 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 122 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 123 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 124 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Porygon_PC_1
# 127 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Porygon_PC_Text_0
# 130 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

Porygon_PC_1:
# 125 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	call EventScript_AccessPokemonStorage
	return


MartLady::
# 135 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 136 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 137 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_0
# 138 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MartLady_2
# 139 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_Basic
MartLady_1:
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox MartLady_Text_1
# 141 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	end

MartLady_2:
# 138 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart Orphanage_Mart_ExpandedItems
	goto MartLady_1


# 145 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 146 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 147 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Basic:
# 148 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 149 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 150 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 151 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 152 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend
# 153 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 154 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_ExpandedItems::
# 155 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 156 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 157 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
# 158 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	end
# 159 "data/maps/SunshineOrphanageMainHall/scripts.pory"

# 160 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.align 2
# 161 "data/maps/SunshineOrphanageMainHall/scripts.pory"
Orphanage_Mart_Expanded:
# 162 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POKE_BALL
# 163 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_POTION
# 164 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 165 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 166 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.2byte ITEM_AWAKENING
# 167 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	pokemartlistend

Blissey_Heal::
# 170 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 171 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 172 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 173 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	waitmoncry
# 174 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Blissey_Heal_1
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	msgbox Blissey_Heal_Text_0
# 179 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return

Blissey_Heal_1:
# 175 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	special HealPlayerParty
# 176 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Minccino_NPC::
# 183 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	lock
# 184 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	faceplayer
# 185 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 186 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	release
	return


Boy_1_MainHall_Text_0:
# 7 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I really like the omelet rice the chef\n"
	.string "cooks for us.$"

Girl_1_MainHall_Text_0:
# 16 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "When I graduate and get a job I'll\n"
	.string "contribute back to our orphanage.$"

Boy_2_MainHall_Text_0:
# 24 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "They don't allow us children to have\n"
	.string "Pokemon of our own but we can still play\l"
	.string "with the staff's Pokemons.$"

Girl_2_MainHall_Text_0:
# 32 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{PLAYER}! I'm also getting adopted\n"
	.string "next week!\p"
	.string "My future adoptive parents are talking\n"
	.string "with my teacher right now.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} That's great! Congrats!$"

RichMan_MainHall_Text_0:
# 41 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We decided to adopt a daughter because\n"
	.string "my wife wanted one.\p"
	.string "If she's happy then I'm happy.$"

RichLady_MainHall_Text_0:
# 49 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "We will raise Momo with love and care.$"

Teacher_MainHall_Text_0:
# 57 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh {PLAYER}, I'm sorry. I'm a little\n"
	.string "busy right now.\p"
	.string "Can you go play outside?$"

Boy_3_MainHall_Text_0:
# 66 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Oh hey, {PLAYER}! Miki is waiting for\n"
	.string "you outside.\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} I know, thanks!$"

Boy_3_MainHall_Text_1:
# 69 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Stay safe in the woods.\p {CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} We will!$"

Boy_3_MainHall_Text_2:
# 73 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "I heard you found a rare Pokemon in the\n"
	.string "woods?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SURPRISED} Pawmi is rare?$"

DiningRoom_Text_0:
# 81 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_HAPPY} It's the dining room. The pancakes here\n"
	.string "are the best.$"

BackyardDoor_Text_0:
# 88 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_SMILE} Outside is the backyard. We grow crops\n"
	.string "there.$"

Girls_HallwayMainHall_Text_0:
# 96 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the way to the girls' hallway. I\n"
	.string "have no business there right now.$"

RestroomMainHall_Text_0:
# 104 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} It's the restroom. I'm good for now.$"

PokeballShelf_Text_0:
# 113 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Those belong to the staff. I shouldn't\n"
	.string "touch them.$"

Porygon_PC_Text_0:
# 127 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Porygon can access the Pokemon\n"
	.string "Storage. If only I have a Pokemon.$"

MartLady_Text_0:
# 137 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Hi {PLAYER}, what should I get you?$"

MartLady_Text_1:
# 140 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "Play safe okay, child?$"

Blissey_Heal_Text_0:
# 177 "data/maps/SunshineOrphanageMainHall/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_AKIHIKO EMOTE_NORMAL} Blissey is very good at healing. I can\n"
	.string "ask it for help when I have an injured\l"
	.string "Pokemon.$"
