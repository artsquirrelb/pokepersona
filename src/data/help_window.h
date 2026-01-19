// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_POKEDEX] =
    {
        .header = COMPOUND_STRING(" Pokédex"),
        .desc = COMPOUND_STRING("To access the Pokédex, press {START_BUTTON}\n"
                                "while you're in the overworld."
                            ),
    },
    [HELP_SHINY_CHANCE] =
    {
        .header = COMPOUND_STRING(" Shiny Chance"),
        .desc = COMPOUND_STRING("The shiny chance is roughly {COLOR 7}1/100{COLOR 2}.\n"
                                "No Pokémon are shiny locked, including the\n"
                                "story starters."
                            ),
    },
    [HELP_STORY_STARTER] =
    {
        .header = COMPOUND_STRING(" Story Starters"),
        .desc = COMPOUND_STRING("Each {COLOR 7}protagonist{COLOR 2} has their own unique starter\n"
                                "Pokémon. They've been buffed and come with\n"
                                "pre-determined Nature and Perfect IVs.\n"
                                "They also have a unique {COLOR 7}type weakness.{COLOR 2}\n"
                                "You can check it in their respective\n"
                                "protagonist's {COLOR 8}Trainer's Card{COLOR 2}.\n"
                                "You also {COLOR RED}cannot{COLOR 2} release nor trade them!"
                            ),
    },
    [HELP_SPEED_UP] =
    {
        .header = COMPOUND_STRING(" Game Speed-up"),
        .desc = COMPOUND_STRING("You can speed up the game by go to Options\n"
                                "Menu and change the speed of the Overworld\n"
                                "and/or Battle animations.\n"
                                "Holding the {R_BUTTON} in the Overworld\n"
                                "can temporarily return it to the default\n"
                                "speed. In some other cases, overworld\n"
                                "speed-up will be disabled."
                            ),
    },
    [HELP_COMPANION_MENU] =
    {
        .header = COMPOUND_STRING(" Companion Menu"),
        .desc = COMPOUND_STRING("To access the Companion Menu, press\n"
                                "{START_BUTTON}->{SELECT_BUTTON} while you're in\n"
                                "the overworld.\n"
                                "You will unlock more {COLOR 7}companions{COLOR 2} on your\n"
                                "journey through the Kitoha region.\n"
                                "You can set them as {COLOR 7}NPC follower{COLOR 2} or {COLOR 7}battle\n"
                                "partner{COLOR 2} as well as switch between the two\n"
                                "{COLOR 7}protagonists{COLOR 2}!\n"
                                )
    },
    [HELP_QUEST_MENU] =
    {
        .header = COMPOUND_STRING(" Quest Menu"),
        .desc = COMPOUND_STRING("{COLOR 7}Quest System{COLOR 2} is now unlocked!\n"
                                "There are multiple side quests you can do\n"
                                "as you travel through the Kitoha region.\n"
                                "Check around for quest givers with a {COLOR 8}light\n"
                                "blue{COLOR 2} exclamation mark.\n"
                                "Some side quests may have different outcome\n"
                                "and rewards {COLOR RED}depending on your action{COLOR 2}.\n"
                            ),
    },
    [HELP_MAKE_CHOICES] =
    {
        .header = COMPOUND_STRING(" The choices you made"),
        .desc = COMPOUND_STRING("From this point onward, some of the choices\n"
                                "you made will ultimately {COLOR RED}affect the story's\n"
                                "ending{COLOR 2}."
                            ),
    },
    [HELP_DEADLINE] =
    {
        .header = COMPOUND_STRING(" Advancing Time"),
        .desc = COMPOUND_STRING("Time will only move forward after you do\n"
                                "certain actions, such as progressing the\n"
                                "story quests, using the Camp Gears,\n"
                                "defeating a trainer, spending time with\n"
                                "your companions, working at a part-time\n"
                                "job, etc. Failing to meet the deadline\n"
                                "will result to a {COLOR RED}Game Over{COLOR 2}."
                                ),
    },
    [HELP_DUNGEON_ENCOUNTER] =
    {
        .header = COMPOUND_STRING(" Dungeon Encounter"),
        .desc = COMPOUND_STRING("In a dungeon, you will only encounter\n"
                                "wild Pokémon in dark sand tiles (that\n"
                                "leave footprints) or by interacting\n"
                                "with roaming overworld Pokémon."
                                ),
    },
    [HELP_EXIT_DUNGEON] =
    {
        .header = COMPOUND_STRING(" Exiting Dungeons"),
        .desc = COMPOUND_STRING("Some dungeons will advance time forward\n"
                                "when you exit them, either by going\n"
                                "through the entrance or by using\n"
                                "Escape Rope.\n"
                                "You can check the amount of time lost\n"
                                "by reading the Signpost in front of\n"
                                "each dungeon."
                                ),
    },
    [HELP_PROTAGONISTS] =
    {
        .header = COMPOUND_STRING(" Protagonists"),
        .desc = COMPOUND_STRING("It is required to complete both\n"
                                "{COLOR 7}Akihiko{COLOR 2}'s and {COLOR 7}Mitsuru{COLOR 2}'s prologue before\n"
                                "leaving {COLOR 8}Coralport{COLOR 2}.\n\n"
                                "Check the {COLOR 7}Quest Menu{COLOR 2} to see how\n"
                                "to start their quest."
                                ),
    },
    [HELP_PART_TIME] = 
    {
        .header = COMPOUND_STRING(" Part-time Job"),
        .desc = COMPOUND_STRING("Working at a part-time job is a good way\n"
                                "to advance the clock and get more money\n"
                                "and other rewards.\n"
                                "You can find the shortcut to start your\n"
                                "shift by pressing {L_BUTTON}-> Work Part-time\n"
                                "while in the overworld."
                                ),
    },
    [HELP_DEXNAV] = 
    {
        .header = COMPOUND_STRING(" DexNav"),
        .desc = COMPOUND_STRING("A device that tells the information of the\n"
                                "wild Pokémon in your current location and\n"
                                "allow you to search for a specific Pokémon.\n\n"
                                "You can access {COLOR 7}DexNav {COLOR 2}by pressing {START_BUTTON}\n"
                                "in the overworld."
                                ),
    },
    [HELP_BOX_LINK] = 
    {
        .header = COMPOUND_STRING(" Box Link"),
        .desc = COMPOUND_STRING("A device that grants access to the {COLOR 7}Pokémon\n"
                                "Storage System{COLOR 2} whenever you like.\n\n"
                                "In some specific cases, the access will be\n"
                                "blocked."
                                ),
    },
    [HELP_GIMMIGHOUL_COINS] =
    {
        .header = COMPOUND_STRING(" Evolving Gimmighoul"),
        .desc = COMPOUND_STRING("To evolve Gimmighoul into Gholdengo, you\n"
                                "need to gather 999 {COLOR RED}Gimmighoul Coins{COLOR DARK_GRAY}.\n\n"
                                "You can find Gimmighoul Coins scattered\n"
                                "all around Paldea."
                            ),
    },
    [HELP_MEGA_EVOLUTION] =
    {
        .header = COMPOUND_STRING(" Mega Evolution"),
        .desc = COMPOUND_STRING("In battle, press {START_BUTTON} to Mega Evolve!\n\n"
                                "The Pokémon must hold their Mega Stone to be \n"
                                "to be able to Mega Evolve.\n"
                                "You can only Mega Evolve once per battle."
                            ),
    },
    
    // Add more entries
};
