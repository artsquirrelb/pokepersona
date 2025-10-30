#ifndef GUARD_CONSTANTS_OUTFITS_H
#define GUARD_CONSTANTS_OUTFITS_H

//! macro modes

// ScrCmd_getoutfitstatus
#define OUTFIT_CHECK_FLAG 0
#define OUTFIT_CHECK_USED 1
// ScrCmd_toggleoutfit
#define OUTFIT_TOGGLE_UNLOCK 0
#define OUTFIT_TOGGLE_LOCK 1
// BufferOutfitStrings
#define OUTFIT_BUFFER_NAME  0
#define OUTFIT_BUFFER_DESC  1

//! outfits
#define OUTFIT_NONE 0
#define OUTFIT_AKIHIKO 1
#define OUTFIT_MITSURU 2
#define OUTFIT_COUNT 3

// inclusive
#define OUTFIT_BEGIN OUTFIT_AKIHIKO
#define OUTFIT_END   OUTFIT_MITSURU

#define DEFAULT_OUTFIT OUTFIT_AKIHIKO

#endif //! GUARD_CONSTANTS_OUTFITS_H
