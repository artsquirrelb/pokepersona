#ifndef GUARD_ITEM_BALL_H
#define GUARD_ITEM_BALL_H

void GetItemBallIdAndAmountFromTemplate(void);
bool8 IsChestItemOpened(u32);
void SetChestItemFlag(void);
void ClearChestItemFlag(void);

#define POKECHEST_TP 2
#define GREATCHEST_TP 3
#define ULTRACHEST_TP 5

#endif //GUARD_ITEM_BALL_H
