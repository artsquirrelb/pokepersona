#include "constants/global.h"
#include "constants/event_objects.h"

#if MODERN == 0
static const u8 sText_OutfitName_Player[] = _("{PLAYER}");
static const u8 sText_OutfitDesc_Akihiko[] = _("Wants to get stronger to\nfind his sister Miki.");

static const u8 sText_OutfitName_Rival[] = _("{RIVAL}");
static const u8 sText_OutfitDesc_Mitsuru[] = _("Pretty fond of good boys.");
#endif

static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");

//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL     OBJ_EVENT_GFX_LINK_RS_BRENDAN
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_NORMAL     OBJ_EVENT_GFX_LINK_RS_MAY
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_ACRO_BIKE  OBJ_EVENT_GFX_MAY_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_SURFING    OBJ_EVENT_GFX_MAY_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_UNDERWATER OBJ_EVENT_GFX_MAY_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FISHING    OBJ_EVENT_GFX_MAY_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_WATERING   OBJ_EVENT_GFX_MAY_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_DECORATING OBJ_EVENT_GFX_MAY_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE

const struct Outfit gOutfits[CHARACTER_COUNT] =
{
    [CHARACTER_NONE] = {
        .isHidden = TRUE
    },

    [CHARACTER_MITSURU] = {
        .isHidden = TRUE,
        .isLocked = FLAG_LOCK_MITSURU,
        .isMC = TRUE,
        .name = COMPOUND_STRING("Mitsuru Kirijo"),
        .desc = COMPOUND_STRING(
            "Burdens herself for her family's sin.\n"
            "A clever trainer and leader."),
        .trainerPics = {TRAINER_PIC_FRONT_MAY, TRAINER_PIC_BACK_MAY},
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY_MACH_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY_UNDERWATER 
        },
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY_WATERING,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY_DECORATING,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY_FIELD_MOVE
        },
        .iconsRM = sRegionMapPlayerIcon_MayGfx,
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },

    [CHARACTER_AKIHIKO] = {
        .isHidden = TRUE,
        .isLocked = FLAG_LOCK_AKIHIKO,
        .isMC = TRUE,
        .name = COMPOUND_STRING("Akihiko Sanada"),
        .desc = COMPOUND_STRING(
            "Wants to get stronger to find his sister.\n"
            "Very loyal to those he trusts and cares."),
        .trainerPics = {TRAINER_PIC_FRONT_BRENDAN, TRAINER_PIC_BACK_BRENDAN},
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN_MACH_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN_UNDERWATER
        },
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN_WATERING,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN_DECORATING,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
        },
        .iconsRM = sRegionMapPlayerIcon_BrendanGfx,
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },

    [CHARACTER_SHINJIRO] = {
        .isHidden = TRUE,
        .isLocked = FLAG_LOCK_SHINJIRO,
        .isMC = FALSE,
        .name = COMPOUND_STRING("Shinjiro Aragaki"),
        .desc = COMPOUND_STRING(
            "Looks grumpy, but he's soft inside.\n"
            "Akihiko's childhood best friend."),
        .trainerPics = {TRAINER_PIC_FRONT_SHINJIRO, TRAINER_PIC_BACK_RUBY_SAPPHIRE_BRENDAN},  
        .avatarGfxIds = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_SHINJIRO,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_SHINJIRO,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_SHINJIRO,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_SHINJIRO
        },
        .animGfxIds = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_SHINJIRO,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_SHINJIRO,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_SHINJIRO,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_SHINJIRO,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_SHINJIRO
        },
        .iconsRM = sRegionMapPlayerIcon_BrendanGfx,
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },

    [CHARACTER_INTELEON_T] = {
        .isHidden = TRUE,
        .isLocked = FLAG_LOCK_INTELEON_T,
        .isMC = FALSE,
        .name = COMPOUND_STRING("Inteleon (Takeharu's)"),
        .desc = COMPOUND_STRING(
            "Always serious, cares a lot about\n"
            "Mitsuru and acts like a mentor."),

        .trainerPics = {TRAINER_PIC_FRONT_INTELEON_T, TRAINER_PIC_BACK_INTELEON_T},
        .avatarGfxIds = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_SPECIES(INTELEON),
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_SPECIES(INTELEON),
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_SPECIES(INTELEON),
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_SPECIES(INTELEON)
        },
        .animGfxIds = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_SPECIES(INTELEON),
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_SPECIES(INTELEON),
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_SPECIES(INTELEON),
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_SPECIES(INTELEON),
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_SPECIES(INTELEON)
        },
        .iconsRM = sRegionMapPlayerIcon_BrendanGfx,
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    }
};
