#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_NONE                                      0xFFFF
#define STORY_QUESTS                                    0
#define QUEST_PLAY_WITH_PKM_FOR_SOOTHE_BELL             1
#define QUEST_FIND_FISHERMANS_DAUGHTER                  2 //for old rod
#define QUEST_AMEAME_PARTTIME                           3 //for candy jar
#define QUEST_BUY_SMILE_CANDY                           4 //unlocked after finishing QUEST_FIND_FISHERMANS_DAUGHTER // for good rod
#define QUEST_FIND_MINING_KIT                           5 //can only start after finishing Mitsuru's Prologue
#define QUEST_GHOST_BOY                                 6
#define QUEST_FIND_STARTERS                             7
#define QUEST_9          8
#define QUEST_10         9
#define QUEST_11        10
#define QUEST_12        11
#define QUEST_13        12
#define QUEST_14        13
#define QUEST_15        14
#define QUEST_16        15
#define QUEST_17        16
#define QUEST_18        17
#define QUEST_19        18
#define QUEST_20        19
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)

//subquest id
#define MITSURUS_PROLOGUE           0
#define AKIHIKOS_PROLOGUE           1
#define CHAPTER_1                   2
#define CHAPTER_2                   3
#define CHAPTER_3                   4
#define CHAPTER_4                   5
#define CHAPTER_5                   6
#define CHAPTER_6                   7
#define CHAPTER_7                   8
#define CHAPTER_8                   9
#define SUB_QUEST_GHOST_BOY_1       10
#define SUB_QUEST_GHOST_BOY_2       11
#define SUB_QUEST_GHOST_BOY_3       12
#define SUB_QUEST_GHOST_BOY_4       13
#define SUB_QUEST_GHOST_BOY_5       14
#define SUB_QUEST_GHOST_BOY_6       15
#define SUB_QUEST_GHOST_BOY_7       16
#define SUB_QUEST_FIND_STARTER_1    17
#define SUB_QUEST_FIND_STARTER_2        18
#define SUB_QUEST_FIND_STARTER_3        19
#define SUB_QUEST_FIND_STARTER_4        20
#define SUB_QUEST_FIND_STARTER_5        21
#define SUB_QUEST_FIND_STARTER_6        22
#define SUB_QUEST_FIND_STARTER_7        23
#define SUB_QUEST_FIND_STARTER_8        24
#define SUB_QUEST_FIND_STARTER_9        25
#define SUB_QUEST_FIND_STARTER_10        26
#define SUB_QUEST_FIND_STARTER_11        27
#define SUB_QUEST_FIND_STARTER_12        28
#define SUB_QUEST_FIND_STARTER_13        29
#define SUB_QUEST_FIND_STARTER_14        30
#define SUB_QUEST_FIND_STARTER_15        31
#define SUB_QUEST_FIND_STARTER_16        32
#define SUB_QUEST_FIND_STARTER_17        33
#define SUB_QUEST_FIND_STARTER_18        34
#define SUB_QUEST_FIND_STARTER_19        35
#define SUB_QUEST_FIND_STARTER_20        36
#define SUB_QUEST_FIND_STARTER_21        37
#define SUB_QUEST_FIND_STARTER_22        38
#define SUB_QUEST_FIND_STARTER_23        39
#define SUB_QUEST_FIND_STARTER_24        40

#define STORY_QUESTS_SUB_COUNT 10
#define QUEST_GHOST_BOY_SUB_COUNT 7
#define QUEST_FIND_STARTERS_SUB_COUNT 24
#define SUB_QUEST_COUNT (STORY_QUESTS_SUB_COUNT + QUEST_GHOST_BOY_SUB_COUNT + QUEST_FIND_STARTERS_SUB_COUNT)

//complexe quest

//////////////////////////////////////////
////////////BEGIN QUEST NUMS//////////////
enum StoryQuests_Enum{
    STORY_QUESTS_STATE_0, //PROLOGUES
    STORY_QUESTS_STATE_1,
    STORY_QUESTS_STATE_2,
    STORY_QUESTS_STATE_3,
    STORY_QUESTS_STATE_4,
    STORY_QUESTS_STATE_5,
    STORY_QUESTS_STATE_6,
    STORY_QUESTS_STATE_7,
    STORY_QUESTS_STATE_8,
    STORY_QUESTS_TOTAL_STATES,
};

enum Quest3_Enum{
    QUEST_3_STATE_1,
    QUEST_3_STATE_2,
    QUEST_3_STATE_3,
    QUEST_3_TOTAL_STATES,
};

/////////////END QUEST NUMS/////////////
////////////////////////////////////////

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
