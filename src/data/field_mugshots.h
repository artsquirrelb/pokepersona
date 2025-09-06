/*static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");
*/
static const u32 sFieldMugshotGfx_AkihikoNormal[] = INCBIN_U32("graphics/field_mugshots/Akihiko/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_AkihikoHappy[] = INCBIN_U32("graphics/field_mugshots/Akihiko/happy.4bpp.lz");
static const u16 sFieldMugshotPal_AkihikoNormal[] = INCBIN_U16("graphics/field_mugshots/Akihiko/normal.gbapal");
static const u16 sFieldMugshotPal_AkihikoHappy[] = INCBIN_U16("graphics/field_mugshots/Akihiko/happy.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_AKIHIKO] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_AkihikoNormal,
            .pal = sFieldMugshotPal_AkihikoNormal,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_AkihikoHappy,
            .pal = sFieldMugshotPal_AkihikoHappy,
        },
    },
};