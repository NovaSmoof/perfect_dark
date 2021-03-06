#ifndef _IN_GAME_SMOKE_H
#define _IN_GAME_SMOKE_H
#include <ultra64.h>
#include "types.h"

u32 func0f12d3f0(void);
struct smoke *smokeCreate(struct coord *pos, s16 *rooms, s16 type);
bool func0f12e454(struct coord *pos, s16 *rooms, s16 type, u32 arg4);
bool smokeCreateAtPropIfNecessary(struct prop *prop, struct coord *pos, s16 *rooms, s16 type, u32 arg4);
void smokeCreateAtProp(struct prop *prop, s16 type);
void func0f12e74c(struct prop *prop, struct coord *pos, s16 *rooms, s16 type, u32 arg4);
void smokeClearForProp(struct prop *prop);
struct smoke *smokeCreateSimple(struct coord *pos, s16 *rooms, s16 type);
u32 func0f12e848(struct prop *prop);
u32 smokeUpdateZ(struct prop *prop);
u32 func0f12f230(void);
u32 func0f12f5f8(void);

#endif
