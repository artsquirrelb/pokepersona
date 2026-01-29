# 1 "data/scripts/debug.pory"

# 2 "data/scripts/debug.pory"
Debug_MessageEnd:
# 3 "data/scripts/debug.pory"
	waitmessage
# 4 "data/scripts/debug.pory"
	waitbuttonpress
# 5 "data/scripts/debug.pory"
	releaseall
# 6 "data/scripts/debug.pory"
	end
# 7 "data/scripts/debug.pory"

# 8 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 9 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 10 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 11 "data/scripts/debug.pory"

# 12 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 13 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 14 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 15 "data/scripts/debug.pory"

# 16 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 17 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 18 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 19 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 20 "data/scripts/debug.pory"

# 21 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 22 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 23 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 24 "data/scripts/debug.pory"

# 25 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 26 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 27 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 28 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 29 "data/scripts/debug.pory"

# 30 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage::
# 31 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text
# 32 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 33 "data/scripts/debug.pory"

# 34 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage_Text:
# 35 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 36 "data/scripts/debug.pory"
	.string "Please define a usable var in:\l"
# 37 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 38 "data/scripts/debug.pory"

# 39 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 40 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 41 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 42 "data/scripts/debug.pory"

# 43 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 44 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 45 "data/scripts/debug.pory"

# 46 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs::
# 47 "data/scripts/debug.pory"
	lockall
# 48 "data/scripts/debug.pory"
	getpartysize
# 49 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 50 "data/scripts/debug.pory"
	special ChoosePartyMon
# 51 "data/scripts/debug.pory"
	waitstate
# 52 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 53 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 54 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 55 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 56 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 57 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 58 "data/scripts/debug.pory"
	releaseall
# 59 "data/scripts/debug.pory"
	end
# 60 "data/scripts/debug.pory"

# 61 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 62 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 63 "data/scripts/debug.pory"

# 64 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 65 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 66 "data/scripts/debug.pory"

# 67 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 68 "data/scripts/debug.pory"
	lockall
# 69 "data/scripts/debug.pory"
	getpartysize
# 70 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 71 "data/scripts/debug.pory"
	special ChoosePartyMon
# 72 "data/scripts/debug.pory"
	waitstate
# 73 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 74 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 75 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 76 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 77 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 78 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 79 "data/scripts/debug.pory"
	releaseall
# 80 "data/scripts/debug.pory"
	end
# 81 "data/scripts/debug.pory"

# 82 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 83 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 84 "data/scripts/debug.pory"

# 85 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 86 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 87 "data/scripts/debug.pory"

# 88 "data/scripts/debug.pory"

# 89 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 90 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 91 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 92 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 93 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 94 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 95 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 96 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 97 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 98 "data/scripts/debug.pory"
	release
# 99 "data/scripts/debug.pory"
	end
# 100 "data/scripts/debug.pory"

# 101 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 102 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 103 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 104 "data/scripts/debug.pory"

# 105 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 106 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 107 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 108 "data/scripts/debug.pory"

# 109 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 110 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 111 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 112 "data/scripts/debug.pory"

# 113 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 114 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 115 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 116 "data/scripts/debug.pory"

# 117 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 118 "data/scripts/debug.pory"
	callnative CheckROMSize
# 119 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 120 "data/scripts/debug.pory"
	release
# 121 "data/scripts/debug.pory"
	end
# 122 "data/scripts/debug.pory"

# 123 "data/scripts/debug.pory"
Debug_ROMSize::
# 124 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 125 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 126 "data/scripts/debug.pory"

# 127 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 128 "data/scripts/debug.pory"
	lockall
# 129 "data/scripts/debug.pory"
	getpartysize
# 130 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 131 "data/scripts/debug.pory"
	special ChoosePartyMon
# 132 "data/scripts/debug.pory"
	waitstate
# 133 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 134 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 135 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 136 "data/scripts/debug.pory"
	special EggHatch
# 137 "data/scripts/debug.pory"
	waitstate
# 138 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 139 "data/scripts/debug.pory"
	releaseall
# 140 "data/scripts/debug.pory"
	end
# 141 "data/scripts/debug.pory"

# 142 "data/scripts/debug.pory"
Debug_NoPokemon::
# 143 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 144 "data/scripts/debug.pory"
	releaseall
# 145 "data/scripts/debug.pory"
	end
# 146 "data/scripts/debug.pory"

# 147 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 148 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 149 "data/scripts/debug.pory"
	releaseall
# 150 "data/scripts/debug.pory"
	end
# 151 "data/scripts/debug.pory"

# 152 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 153 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 154 "data/scripts/debug.pory"

# 155 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 156 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 157 "data/scripts/debug.pory"

# 158 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 159 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 160 "data/scripts/debug.pory"
	releaseall
# 161 "data/scripts/debug.pory"
	end
# 162 "data/scripts/debug.pory"

# 163 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 164 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 165 "data/scripts/debug.pory"
	releaseall
# 166 "data/scripts/debug.pory"
	end
# 167 "data/scripts/debug.pory"

# 168 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 169 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 170 "data/scripts/debug.pory"
	releaseall
# 171 "data/scripts/debug.pory"
	end
# 172 "data/scripts/debug.pory"

# 173 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 174 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 175 "data/scripts/debug.pory"

# 176 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 177 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 178 "data/scripts/debug.pory"

# 179 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 180 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 181 "data/scripts/debug.pory"

# 182 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 183 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 184 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 185 "data/scripts/debug.pory"
	release
# 186 "data/scripts/debug.pory"
	end
# 187 "data/scripts/debug.pory"

# 188 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 189 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 190 "data/scripts/debug.pory"

# 191 "data/scripts/debug.pory"
Debug_Follower_NPC_Not_Enabled::
# 192 "data/scripts/debug.pory"
	msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 193 "data/scripts/debug.pory"
	release
# 194 "data/scripts/debug.pory"
	end
# 195 "data/scripts/debug.pory"

# 196 "data/scripts/debug.pory"
Debug_Enable_To_Use_Follower_NPCs:
# 197 "data/scripts/debug.pory"
	.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 198 "data/scripts/debug.pory"

# 199 "data/scripts/debug.pory"
Debug_Follower_NPC_Event_Script::
# 200 "data/scripts/debug.pory"
	lock
# 201 "data/scripts/debug.pory"
	facefollowernpc
# 202 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 203 "data/scripts/debug.pory"
	releaseall
# 204 "data/scripts/debug.pory"
	end
# 205 "data/scripts/debug.pory"

# 206 "data/scripts/debug.pory"
Debug_Follower_NPC_Test_Message:
# 207 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"
# 208 "data/scripts/debug.pory"

# 209 "data/scripts/debug.pory"
Debug_EventScript_Steven_Multi::
# 210 "data/scripts/debug.pory"
	release
# 211 "data/scripts/debug.pory"
	end
# 212 "data/scripts/debug.pory"

# 213 "data/scripts/debug.pory"
Debug_EventScript_WallyTutorial::
# 214 "data/scripts/debug.pory"
	special SavePlayerParty
# 215 "data/scripts/debug.pory"
	special LoadWallyZigzagoon
# 216 "data/scripts/debug.pory"
	special StartWallyTutorialBattle
# 217 "data/scripts/debug.pory"
	waitstate
# 218 "data/scripts/debug.pory"
	special LoadPlayerParty
# 219 "data/scripts/debug.pory"
	release
# 220 "data/scripts/debug.pory"
	end
# 221 "data/scripts/debug.pory"

# 222 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 223 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 224 "data/scripts/debug.pory"
	release
# 225 "data/scripts/debug.pory"
	end
# 226 "data/scripts/debug.pory"

# 227 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 228 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 229 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 230 "data/scripts/debug.pory"

# 231 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 232 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 233 "data/scripts/debug.pory"
	release
# 234 "data/scripts/debug.pory"
	end
# 235 "data/scripts/debug.pory"

# 236 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 237 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 238 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 239 "data/scripts/debug.pory"

# 240 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 241 "data/scripts/debug.pory"
	lockall
# 242 "data/scripts/debug.pory"
	getpartysize
# 243 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 244 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 245 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 246 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 247 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 248 "data/scripts/debug.pory"
	switch VAR_RESULT
# 249 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 250 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 251 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 252 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 253 "data/scripts/debug.pory"
	releaseall
# 254 "data/scripts/debug.pory"
	end
# 255 "data/scripts/debug.pory"

# 256 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 257 "data/scripts/debug.pory"
	special ChoosePartyMon
# 258 "data/scripts/debug.pory"
	waitstate
# 259 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 260 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 261 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 262 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 263 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 264 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 265 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 266 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 267 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 268 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 269 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 270 "data/scripts/debug.pory"
	switch VAR_RESULT
# 271 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 272 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 273 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 274 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 275 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 276 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 277 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 278 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 279 "data/scripts/debug.pory"
	releaseall
# 280 "data/scripts/debug.pory"
	end
# 281 "data/scripts/debug.pory"

# 282 "data/scripts/debug.pory"
Debug_EventScript_KoPokemon::
# 283 "data/scripts/debug.pory"
	special ChoosePartyMon
# 284 "data/scripts/debug.pory"
	waitstate
# 285 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 286 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 287 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 288 "data/scripts/debug.pory"
	setko VAR_0x8004
# 289 "data/scripts/debug.pory"
	releaseall
# 290 "data/scripts/debug.pory"
	end
# 291 "data/scripts/debug.pory"

# 292 "data/scripts/debug.pory"
Debug_EventScript_SetHiddenNature::
# 293 "data/scripts/debug.pory"
	special ChoosePartyMon
# 294 "data/scripts/debug.pory"
	waitstate
# 295 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 296 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 297 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 298 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 299 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 300 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 301 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 302 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 303 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 304 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 305 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 306 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 307 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 308 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 309 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 310 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 311 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 312 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 313 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 314 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 315 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 316 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 317 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 318 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 319 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 320 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 321 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 322 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 323 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 324 "data/scripts/debug.pory"
	switch VAR_RESULT
# 325 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 326 "data/scripts/debug.pory"
	special SetHiddenNature
# 327 "data/scripts/debug.pory"
	releaseall
# 328 "data/scripts/debug.pory"
	end
# 329 "data/scripts/debug.pory"

# 330 "data/scripts/debug.pory"
Debug_EventScript_SetAbility::
# 331 "data/scripts/debug.pory"
	special ChoosePartyMon
# 332 "data/scripts/debug.pory"
	waitstate
# 333 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 334 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 335 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 336 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 337 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 338 "data/scripts/debug.pory"
	switch VAR_RESULT
# 339 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 340 "data/scripts/debug.pory"
	special SetAbility
# 341 "data/scripts/debug.pory"
Debug_EventScript_SetAbilityClose:
# 342 "data/scripts/debug.pory"
	releaseall
# 343 "data/scripts/debug.pory"
	end
# 344 "data/scripts/debug.pory"

# 345 "data/scripts/debug.pory"
Debug_EventScript_SetFriendship::
# 346 "data/scripts/debug.pory"
	special ChoosePartyMon
# 347 "data/scripts/debug.pory"
	waitstate
# 348 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 349 "data/scripts/debug.pory"
	releaseall
# 350 "data/scripts/debug.pory"
	end
# 351 "data/scripts/debug.pory"

# 352 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 353 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 354 "data/scripts/debug.pory"
	releaseall
# 355 "data/scripts/debug.pory"
	end
# 356 "data/scripts/debug.pory"

# 357 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 358 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 359 "data/scripts/debug.pory"
	releaseall
# 360 "data/scripts/debug.pory"
	end
# 361 "data/scripts/debug.pory"

# 362 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 363 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 364 "data/scripts/debug.pory"
	releaseall
# 365 "data/scripts/debug.pory"
	end
# 366 "data/scripts/debug.pory"

# 367 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 368 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 369 "data/scripts/debug.pory"
	releaseall
# 370 "data/scripts/debug.pory"
	end
# 371 "data/scripts/debug.pory"

# 372 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 373 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 374 "data/scripts/debug.pory"
	releaseall
# 375 "data/scripts/debug.pory"
	end
# 376 "data/scripts/debug.pory"

# 377 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 378 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 379 "data/scripts/debug.pory"
	releaseall
# 380 "data/scripts/debug.pory"
	end
# 381 "data/scripts/debug.pory"

# 382 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 383 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 384 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 385 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 386 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 387 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 388 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 389 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 390 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 391 "data/scripts/debug.pory"
	switch VAR_RESULT
# 392 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 393 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 394 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 395 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 396 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 397 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 398 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 399 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 400 "data/scripts/debug.pory"
	releaseall
# 401 "data/scripts/debug.pory"
	end
# 402 "data/scripts/debug.pory"

# 403 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 404 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 405 "data/scripts/debug.pory"
	releaseall
# 406 "data/scripts/debug.pory"
	end
# 407 "data/scripts/debug.pory"

# 408 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 409 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 410 "data/scripts/debug.pory"
	releaseall
# 411 "data/scripts/debug.pory"
	end
# 412 "data/scripts/debug.pory"

# 413 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 414 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 415 "data/scripts/debug.pory"
	releaseall
# 416 "data/scripts/debug.pory"
	end
# 417 "data/scripts/debug.pory"

# 418 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 419 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 420 "data/scripts/debug.pory"
	releaseall
# 421 "data/scripts/debug.pory"
	end
# 422 "data/scripts/debug.pory"

# 423 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 424 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 425 "data/scripts/debug.pory"
	releaseall
# 426 "data/scripts/debug.pory"
	end
# 427 "data/scripts/debug.pory"

# 428 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 429 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 430 "data/scripts/debug.pory"
	releaseall
# 431 "data/scripts/debug.pory"
	end
# 432 "data/scripts/debug.pory"

# 433 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 434 "data/scripts/debug.pory"
	.string "Single$"
# 435 "data/scripts/debug.pory"

# 436 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 437 "data/scripts/debug.pory"
	.string "Party-wide$"
# 438 "data/scripts/debug.pory"

# 439 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 440 "data/scripts/debug.pory"
	.string "Close$"
# 441 "data/scripts/debug.pory"

# 442 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 443 "data/scripts/debug.pory"
	.string "Poison$"
# 444 "data/scripts/debug.pory"

# 445 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 446 "data/scripts/debug.pory"
	.string "Paralysis$"
# 447 "data/scripts/debug.pory"

# 448 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 449 "data/scripts/debug.pory"
	.string "Sleep$"
# 450 "data/scripts/debug.pory"

# 451 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 452 "data/scripts/debug.pory"
	.string "Burn$"
# 453 "data/scripts/debug.pory"

# 454 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 455 "data/scripts/debug.pory"
	.string "Freeze$"
# 456 "data/scripts/debug.pory"

# 457 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 458 "data/scripts/debug.pory"
	.string "Frostbite$"
# 459 "data/scripts/debug.pory"

# 460 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_KO:
# 461 "data/scripts/debug.pory"
	.string "KO$"
# 462 "data/scripts/debug.pory"

# 463 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hardy:
# 464 "data/scripts/debug.pory"
	.string "Hardy$"
# 465 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lonely:
# 466 "data/scripts/debug.pory"
	.string "Lonely$"
# 467 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Brave:
# 468 "data/scripts/debug.pory"
	.string "Brave$"
# 469 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Adamant:
# 470 "data/scripts/debug.pory"
	.string "Adamant$"
# 471 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naughty:
# 472 "data/scripts/debug.pory"
	.string "Naughty$"
# 473 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bold:
# 474 "data/scripts/debug.pory"
	.string "Bold$"
# 475 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Docile:
# 476 "data/scripts/debug.pory"
	.string "Docile$"
# 477 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Relaxed:
# 478 "data/scripts/debug.pory"
	.string "Relaxed$"
# 479 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Impish:
# 480 "data/scripts/debug.pory"
	.string "Impish$"
# 481 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lax:
# 482 "data/scripts/debug.pory"
	.string "Lax$"
# 483 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Timid:
# 484 "data/scripts/debug.pory"
	.string "Timid$"
# 485 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hasty:
# 486 "data/scripts/debug.pory"
	.string "Hasty$"
# 487 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Serious:
# 488 "data/scripts/debug.pory"
	.string "Serious$"
# 489 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Jolly:
# 490 "data/scripts/debug.pory"
	.string "Jolly$"
# 491 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naive:
# 492 "data/scripts/debug.pory"
	.string "Naive$"
# 493 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Modest:
# 494 "data/scripts/debug.pory"
	.string "Modest$"
# 495 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Mild:
# 496 "data/scripts/debug.pory"
	.string "Mild$"
# 497 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quiet:
# 498 "data/scripts/debug.pory"
	.string "Quiet$"
# 499 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bashful:
# 500 "data/scripts/debug.pory"
	.string "Bashful$"
# 501 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Rash:
# 502 "data/scripts/debug.pory"
	.string "Rash$"
# 503 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Calm:
# 504 "data/scripts/debug.pory"
	.string "Calm$"
# 505 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Gentle:
# 506 "data/scripts/debug.pory"
	.string "Gentle$"
# 507 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Sassy:
# 508 "data/scripts/debug.pory"
	.string "Sassy$"
# 509 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Careful:
# 510 "data/scripts/debug.pory"
	.string "Careful$"
# 511 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quirky:
# 512 "data/scripts/debug.pory"
	.string "Quirky$"
# 513 "data/scripts/debug.pory"

# 514 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 515 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 516 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 517 "data/scripts/debug.pory"
	release
# 518 "data/scripts/debug.pory"
	end
# 519 "data/scripts/debug.pory"

# 520 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 521 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 522 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 523 "data/scripts/debug.pory"

# 524 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_1::
# 525 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 526 "data/scripts/debug.pory"
	.string "Angel Adept Blind Bodice Clique\n"
# 527 "data/scripts/debug.pory"
	.string "Coast Dunce Docile Enact Eosin\l"
# 528 "data/scripts/debug.pory"
	.string "Furlong Focal Gnome Gondola Human\l"
# 529 "data/scripts/debug.pory"
	.string "Hoist Inlet Iodine Justin Jocose\l"
# 530 "data/scripts/debug.pory"
	.string "Knoll Koala Linden Loads Milliner\l"
# 531 "data/scripts/debug.pory"
	.string "Modal Number Nodule Onset Oddball\l"
# 532 "data/scripts/debug.pory"
	.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 533 "data/scripts/debug.pory"
	.string "Roman Snout Sodium Tundra Tocsin\l"
# 534 "data/scripts/debug.pory"
	.string "Uncle Udder Vulcan Vocal Whale\l"
# 535 "data/scripts/debug.pory"
	.string "Woman Xmas Xenon Yunnan Young\l"
# 536 "data/scripts/debug.pory"
	.string "Zloty Zodiac.$"
# 537 "data/scripts/debug.pory"

# 538 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_2::
# 539 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 540 "data/scripts/debug.pory"
	.string "Angel angel adept for the nuance loads\n"
# 541 "data/scripts/debug.pory"
	.string "of the arena cocoa and quaalude. Blind\l"
# 542 "data/scripts/debug.pory"
	.string "blind bodice for the submit oboe of the\l"
# 543 "data/scripts/debug.pory"
	.string "club snob and abbot. Clique clique\l"
# 544 "data/scripts/debug.pory"
	.string "coast for the pouch loco of the franc\l"
# 545 "data/scripts/debug.pory"
	.string "assoc and accede. Dunce dunce docile\l"
# 546 "data/scripts/debug.pory"
	.string "for the loudness mastodon of the\l"
# 547 "data/scripts/debug.pory"
	.string "loud statehood and huddle.$"
# 548 "data/scripts/debug.pory"

# 549 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_3::
# 550 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 551 "data/scripts/debug.pory"
	.string "Enact enact eosin for the quench coed\n"
# 552 "data/scripts/debug.pory"
	.string "of the pique canoe and bleep. Furlong\l"
# 553 "data/scripts/debug.pory"
	.string "furlong focal for the genuflect\l"
# 554 "data/scripts/debug.pory"
	.string "profound of the motif aloof and offers.\l"
# 555 "data/scripts/debug.pory"
	.string "Gnome gnome gondola for the impugn\l"
# 556 "data/scripts/debug.pory"
	.string "logos of the unplug analog and smuggle.\l"
# 557 "data/scripts/debug.pory"
	.string "Human human hoist for the buddhist\l"
# 558 "data/scripts/debug.pory"
	.string "alcohol of the riyadh caliph and\l"
# 559 "data/scripts/debug.pory"
	.string "bathhouse.$"
# 560 "data/scripts/debug.pory"

# 561 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_4::
# 562 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 563 "data/scripts/debug.pory"
	.string "Inlet inlet iodine for the quince\n"
# 564 "data/scripts/debug.pory"
	.string "champion of the ennui scampi and shiite.\l"
# 565 "data/scripts/debug.pory"
	.string "Justin justin jocose for the djibouti\l"
# 566 "data/scripts/debug.pory"
	.string "sojourn of the oranj raj and hajjis.\l"
# 567 "data/scripts/debug.pory"
	.string "Knoll knoll koala for the banknote\l"
# 568 "data/scripts/debug.pory"
	.string "lookout of the dybbuk outlook and\l"
# 569 "data/scripts/debug.pory"
	.string "trekked. Linden linden loads for the\l"
# 570 "data/scripts/debug.pory"
	.string "ulna monolog of the consul menthol and\l"
# 571 "data/scripts/debug.pory"
	.string "shallot.$"
# 572 "data/scripts/debug.pory"

# 573 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_5::
# 574 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 575 "data/scripts/debug.pory"
	.string "Milliner milliner modal for the alumna\n"
# 576 "data/scripts/debug.pory"
	.string "solomon of the album custom and summon.\l"
# 577 "data/scripts/debug.pory"
	.string "Number number nodule for the unmade\l"
# 578 "data/scripts/debug.pory"
	.string "economic of the shotgun bison and\l"
# 579 "data/scripts/debug.pory"
	.string "tunnel. Onset onset oddball for the\l"
# 580 "data/scripts/debug.pory"
	.string "abandon podium of the antiquo tempo\l"
# 581 "data/scripts/debug.pory"
	.string "and moonlit. Pneumo pneumo poncho for\l"
# 582 "data/scripts/debug.pory"
	.string "the dauphin opossum of the holdup\l"
# 583 "data/scripts/debug.pory"
	.string "bishop and supplies.$"
# 584 "data/scripts/debug.pory"

# 585 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_6::
# 586 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 587 "data/scripts/debug.pory"
	.string "Quanta quanta qophs for the inquest\n"
# 588 "data/scripts/debug.pory"
	.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 589 "data/scripts/debug.pory"
	.string "rhone roman for the burnt porous of the\l"
# 590 "data/scripts/debug.pory"
	.string "lemur clamor and carrot. Snout snout\l"
# 591 "data/scripts/debug.pory"
	.string "sodium for the ensnare bosom of the\l"
# 592 "data/scripts/debug.pory"
	.string "genus pathos and missing. Tundra\l"
# 593 "data/scripts/debug.pory"
	.string "tundra tocsin for the nutmeg isotope\l"
# 594 "data/scripts/debug.pory"
	.string "of the peasant ingot and ottoman.$"
# 595 "data/scripts/debug.pory"

# 596 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_7::
# 597 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 598 "data/scripts/debug.pory"
	.string "Uncle uncle udder for the dunes cloud\n"
# 599 "data/scripts/debug.pory"
	.string "of the hindu thou and continuum. Vulcan\l"
# 600 "data/scripts/debug.pory"
	.string "vulcan vocal for the alluvial ovoid of\l"
# 601 "data/scripts/debug.pory"
	.string "the yugoslav chekhov and revved. Whale\l"
# 602 "data/scripts/debug.pory"
	.string "whale woman for the meanwhile blowout\l"
# 603 "data/scripts/debug.pory"
	.string "of the forepaw meadow and glowworm.\l"
# 604 "data/scripts/debug.pory"
	.string "Xmas xmas xenon for the bauxite\l"
# 605 "data/scripts/debug.pory"
	.string "doxology of the tableaux equinox and\l"
# 606 "data/scripts/debug.pory"
	.string "exxon.$"
# 607 "data/scripts/debug.pory"

# 608 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_8::
# 609 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 610 "data/scripts/debug.pory"
	.string "Yunnan yunnan young for the dynamo\n"
# 611 "data/scripts/debug.pory"
	.string "coyote of the obloquy employ and\l"
# 612 "data/scripts/debug.pory"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 613 "data/scripts/debug.pory"
	.string "ozone of the franz laissez and buzzing.$"
# 614 "data/scripts/debug.pory"

# 615 "data/scripts/debug.pory"

# 616 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 617 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 618 "data/scripts/debug.pory"
	.string "42 × 138 = 5796.\n"
# 619 "data/scripts/debug.pory"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 620 "data/scripts/debug.pory"
	.string "lynx at a café; voilà, they're “worth”\l"
# 621 "data/scripts/debug.pory"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 622 "data/scripts/debug.pory"
	.string "Nintendo GBA can connect to a Nintendo\l"
# 623 "data/scripts/debug.pory"
	.string "GameCube console! He claimed-though I don't\l"
# 624 "data/scripts/debug.pory"
	.string "believe him-to have done so in an eyes-shut\l"
# 625 "data/scripts/debug.pory"
	.string "state…?$"
# 626 "data/scripts/debug.pory"

# 627 "data/scripts/debug.pory"
Debug_PrintFontTest::
# 628 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 629 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 630 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 631 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 632 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 633 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 634 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 635 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 636 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 637 "data/scripts/debug.pory"
	releaseall
# 638 "data/scripts/debug.pory"
	end
# 639 "data/scripts/debug.pory"

# 640 "data/scripts/debug.pory"
Debug_EventScript_FontTest::
# 641 "data/scripts/debug.pory"
	lockall
# 642 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
# 643 "data/scripts/debug.pory"
@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 644 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 645 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 646 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 647 "data/scripts/debug.pory"
@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 648 "data/scripts/debug.pory"
@	switch VAR_RESULT
# 649 "data/scripts/debug.pory"
@	case 0, Debug_EventScript_InflictStatus1_Single
# 650 "data/scripts/debug.pory"
@	case 1, Debug_EventScript_InflictStatus1_Party
# 651 "data/scripts/debug.pory"
@	case 2, Debug_EventScript_InflictStatus1_Close
# 652 "data/scripts/debug.pory"
@Debug_EventScript_InflictStatus1_Close:
# 653 "data/scripts/debug.pory"
@	releaseall
# 654 "data/scripts/debug.pory"
@	end
# 655 "data/scripts/debug.pory"

# 656 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime::
# 657 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 658 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 659 "data/scripts/debug.pory"
	waitmessage
# 660 "data/scripts/debug.pory"
	closemessage
# 661 "data/scripts/debug.pory"
	end
# 662 "data/scripts/debug.pory"

# 663 "data/scripts/debug.pory"
Debug_EventScript_PrintTimeOfDay::
# 664 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 665 "data/scripts/debug.pory"
	msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 666 "data/scripts/debug.pory"
	waitmessage
# 667 "data/scripts/debug.pory"
	closemessage
# 668 "data/scripts/debug.pory"
	end
# 669 "data/scripts/debug.pory"

# 670 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled::
# 671 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 672 "data/scripts/debug.pory"
	waitmessage
# 673 "data/scripts/debug.pory"
	closemessage
# 674 "data/scripts/debug.pory"
	return
# 675 "data/scripts/debug.pory"

# 676 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 677 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 678 "data/scripts/debug.pory"

# 679 "data/scripts/debug.pory"

# 680 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime_Text_0:
# 681 "data/scripts/debug.pory"
	.string "Time and date:\n"
# 682 "data/scripts/debug.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 683 "data/scripts/debug.pory"

# 684 "data/scripts/debug.pory"
DebugEventScript_PrintWeekday_Text_0:
# 685 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"
# 686 "data/scripts/debug.pory"

# 687 "data/scripts/debug.pory"
Debug_EventScript_GivePokerus::
# 688 "data/scripts/debug.pory"
	special ChoosePartyMon
# 689 "data/scripts/debug.pory"
	waitstate
# 690 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetPokerus
# 691 "data/scripts/debug.pory"
	releaseall
# 692 "data/scripts/debug.pory"
	end

Debug_EventScript_Script_1::
# 697 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_1_Text_0
# 698 "data/scripts/debug.pory"
	closemessage
# 699 "data/scripts/debug.pory"
	checkboxspecies SPECIES_BULBASAUR
# 700 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne Debug_EventScript_Script_1_2
# 704 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_1_Text_2
Debug_EventScript_Script_1_1:
# 706 "data/scripts/debug.pory"
	release
	end

Debug_EventScript_Script_1_2:
# 701 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Script_1_Text_1
	goto Debug_EventScript_Script_1_1


Debug_EventScript_Script_2::
# 711 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_3::
# 718 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_4::
# 723 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_5::
# 728 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_6::
# 733 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_7::
# 738 "data/scripts/debug.pory"
	release
	end


Debug_EventScript_Script_8::
# 743 "data/scripts/debug.pory"
	release
	end


Debug_CheatStart::
# 748 "data/scripts/debug.pory"
	msgbox Debug_CheatStart_Text_0
# 749 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 750 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 751 "data/scripts/debug.pory"
	setflag FLAG_SYS_B_DASH
# 752 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 753 "data/scripts/debug.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 754 "data/scripts/debug.pory"
	setflag FLAG_COMPANION_MENU_GET
# 755 "data/scripts/debug.pory"
	setflag FLAG_HELP_WINDOW_GET
# 756 "data/scripts/debug.pory"
	setflag FLAG_EXP_SHARE
# 757 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SUNSHINE_TOWN
# 758 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 759 "data/scripts/debug.pory"
	fwdtime 8, 0
# 760 "data/scripts/debug.pory"
	setvar VAR_AKIHIKOS_INTRO_STATE, 100
# 761 "data/scripts/debug.pory"
	setvar VAR_MITSURUS_INTRO_STATE, 100
# 762 "data/scripts/debug.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
# 763 "data/scripts/debug.pory"
	setvar VAR_CURRENT_EV_CAP, 80
# 764 "data/scripts/debug.pory"
	setvar VAR_DAYS_LEFT, 15
# 765 "data/scripts/debug.pory"
	unlockcharacter CHARACTER_MITSURU
# 766 "data/scripts/debug.pory"
	unlockcharacter CHARACTER_AKIHIKO
# 767 "data/scripts/debug.pory"
	unlockcharacter CHARACTER_SHINJIRO
# 768 "data/scripts/debug.pory"
	unlockcharacter CHARACTER_INTELEON_T
# 769 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_MITSURU
# 770 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_AKIHIKO
# 771 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_SHINJIRO
# 772 "data/scripts/debug.pory"
	makecharaAvailable CHARACTER_INTELEON_T
# 773 "data/scripts/debug.pory"
	questmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS
# 774 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, STORY_QUESTS, MITSURUS_PROLOGUE
# 775 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, STORY_QUESTS, AKIHIKOS_PROLOGUE
# 776 "data/scripts/debug.pory"
	subquestmenu QUEST_MENU_SET_ACTIVE, STORY_QUESTS, CHAPTER_1
# 777 "data/scripts/debug.pory"
	additem ITEM_EXP_CANDY_XS, 40
# 778 "data/scripts/debug.pory"
	additem ITEM_EXP_SHARE
# 779 "data/scripts/debug.pory"
	checkplayergender
# 780 "data/scripts/debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Debug_CheatStart_2
# 791 "data/scripts/debug.pory"
	additem ITEM_POKE_BALL, 25
# 792 "data/scripts/debug.pory"
	addmoney 3000
# 793 "data/scripts/debug.pory"
	givemon SPECIES_VULPIX_DELTA, 15, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_MODEST, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ECHOED_VOICE, isStoryStarter = TRUE
# 794 "data/scripts/debug.pory"
	givemon SPECIES_FENNEKIN, 15, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_ALWAYS
# 795 "data/scripts/debug.pory"
	switchmaincharacter
# 796 "data/scripts/debug.pory"
	givemon SPECIES_PAWMI_DELTA, 15, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_METAL_CLAW, MOVE_ZAPPY_SHOCK, isStoryStarter = TRUE
Debug_CheatStart_1:
# 798 "data/scripts/debug.pory"
	switchmaincharacter
# 799 "data/scripts/debug.pory"
	warp MAP_ROUTE2_GATEHOUSE, 9, 8
# 800 "data/scripts/debug.pory"
	release
	end

Debug_CheatStart_2:
# 781 "data/scripts/debug.pory"
	addmoney 15000
# 782 "data/scripts/debug.pory"
	additem ITEM_POKE_BALL, 45
# 783 "data/scripts/debug.pory"
	additem ITEM_CAMP_GEARS
# 784 "data/scripts/debug.pory"
	givemon SPECIES_PAWMI_DELTA, 15, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_METAL_CLAW, MOVE_ZAPPY_SHOCK, isStoryStarter = TRUE
# 785 "data/scripts/debug.pory"
	switchmaincharacter
# 786 "data/scripts/debug.pory"
	givemon SPECIES_VULPIX_DELTA, 15, ITEM_ABILITY_CHANGER, ITEM_CHERISH_BALL, NATURE_MODEST, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ECHOED_VOICE, isStoryStarter = TRUE
# 787 "data/scripts/debug.pory"
	givemon SPECIES_FENNEKIN, 15, 0, ITEM_POKE_BALL, NATURE_MODEST, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CALM_MIND, shinyMode = SHINY_MODE_ALWAYS
	goto Debug_CheatStart_1


Debug_EventScript_Script_1_Text_0:
# 697 "data/scripts/debug.pory"
	.string "Check if Bulbasaur in PC$"

Debug_EventScript_Script_1_Text_1:
# 701 "data/scripts/debug.pory"
	.string "Bulbasaur is in PC {STR_VAR_1}, nickname: {STR_VAR_2}$"

Debug_EventScript_Script_1_Text_2:
# 704 "data/scripts/debug.pory"
	.string "No Bulbasaur in PC$"

Debug_CheatStart_Text_0:
# 748 "data/scripts/debug.pory"
	.string "Skipping Prologues.$"

outrotest::
# 715 "data/scripts/debug.pory"
	.string "...$"
