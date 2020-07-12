#ifndef IN_GAME_GAME_157DB0_H
#define IN_GAME_GAME_157DB0_H
#include <ultra64.h>
#include "types.h"

u32 func0f157db0(void);
void func0f157e94(s32 room, s32 arg1, struct screenbox *arg2);
u32 func0f158108(void);
u32 func0f158140(void);
u32 func0f158184(void);
u32 func0f158400(void);
u32 func0f158884(void);
u32 func0f158d9c(void);
u32 func0f1598b4(void);
u32 func0f159f1c(void);
u32 func0f15a0fc(void);
u32 func0f15a2c4(void);
u32 func0f15a6f4(void);
Gfx *func0f15b114(Gfx *gdl);
u32 func0f15b1c4(void);
s32 stageGetIndex2(s32 stagenum);
f32 func0f15b274(s32 portal);
u8 func0f15b4c0(s32 portal);
u32 func0f15b51c(u32 arg);
u32 xorBabebabe(u32 value);
void func0f15b534(s32 stagenum);
void func0f15b908(s32 stagenum);
void func0f15c850(void);
void func0f15c880(f32 arg0);
f32 func0f15c888(void);
f32 currentPlayerGetScaleBg2Gfx(void);
void currentPlayerSetScaleBg2Gfx(f32 arg0);
void func0f15c920(void);
u32 func0f15ca00(void);
u32 func0f15cae0(void);
Gfx *func0f15cb74(Gfx *gdl);
u32 func0f15cbb4(void);
Gfx *func0f15cc18(Gfx *gdl, s32 viewleft, s32 viewtop, s32 arg3, s32 arg4);
void func0f15cd28(void);
bool func0f15cd90(u32 room, struct screenbox *arg1);
bool func0f15d08c(struct coord *a, struct coord *b);
bool func0f15d10c(s32 portal, struct screenbox *arg1);
u32 func0f15d4a8(void);
bool boxGetIntersection(struct screenbox *a, struct screenbox *b);
void boxExpand(struct screenbox *a, struct screenbox *b);
void boxCopy(struct screenbox *dst, struct screenbox *src);
bool roomIsVisibleByAnyPlayer(s32 room);
bool roomIsVisibleByAnyAibot(s32 room);
bool roomIsVisibleByPlayer(s32 room, u32 playernum);
bool roomIsVisibleByAibot(s32 room, u32 aibotindex);
u32 func0f15d870(void);
u32 func0f15d9a8(void);
u32 func0f15da00(void);
u32 func0f15dab4(void);
u32 func0f15dbb4(void);
u32 func0f15dc58(void);
void func0f15e474(s32 room);
void func0f15e538(void);
void func0f15e5b8(u32 size, u32 arg1);
u32 func0f15e728(void);
u32 func0f15e85c(void);
u32 func0f15eb28(void);
u32 func0f15ebd4(void);
u32 func0f15ecd8(void);
u32 func0f15ef9c(void);
u32 func0f15f20c(void);
u32 func0f15f2b0(void);
u32 func0f15f560(void);
u32 func0f15ffdc(void);
u32 func0f160a38(void);
u32 func0f1612e4(void);
u32 func0f161520(void);
s32 func0f161ab4(s32 room);
u32 func0f161adc(void);
u32 func0f161c08(void);
u32 func0f161d30(void);
u32 func0f162128(void);
void func0f162194(struct coord *arg0, s16 *rooms, s16 *arg2, s32 arg3, s16 *arg4);
bool portalPushValue(bool value);
bool portalPopValue(void);
bool portalGetNthValueFromEnd(s32 offset);
struct portalcmd *portalCommandsExecute(struct portalcmd *cmd, bool s2);
struct portalcmd *portalCommandsExecuteForCurrentPlayer(struct portalcmd *cmd);
u32 func0f162d9c(void);
void func0f1632d4(s16 arg0, s16 arg1, s32 arg2, struct screenbox *box);
u32 func0f163528(void);
u32 func0f163904(void);
u32 func0f16397c(void);
void func0f163e34(void);
u32 func0f164150(void);
u32 func0f164534(void);
u32 func0f1645a8(void);
u32 func0f1646b8(void);
u32 func0f164748(void);
u32 func0f1648cc(void);
void portalSwapProps(u32 portal);
u32 func0f164ab8(void);
u32 func0f164c64(void);
void portalSetEnabled(s32 portal, bool enable);
u32 func0f164e8c(void);
u32 func0f164f9c(void);
u32 func0f165004(void);
void func0f1650d0(struct coord *lower, struct coord *upper, s16 *rooms, s32 arg3, s32 arg4);

#endif
