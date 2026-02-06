#ifndef GUARD_TARC_SPEEDUP
#define GUARD_TARC_SPEEDUP

#include "global.h"
#include "gba/types.h"

#define OPTIONS_BATTLE_SPEED_1X 0
#define OPTIONS_BATTLE_SPEED_2X 1
#define OPTIONS_BATTLE_SPEED_3X 2
#define OPTIONS_BATTLE_SPEED_4X 3

void StartSpeedup(void);
void StopSpeedup(void);
//void CheckSpeedupControls(void);
bool32 SpeedupShouldSkip(void);
bool32 SpeedupIsPaused(void);

#endif