#ifndef _IN_LIB_LIB_09660_H
#define _IN_LIB_LIB_09660_H
#include <ultra64.h>
#include "types.h"

u32 func00009660(void);
u32 func0000993c(void);
u32 func00009a08(void);
void func00009a80(void);
void func00009a88(void);
void func00009a90(void);
void func00009a98(void);
void func00009aa0(u32 arg0);
Gfx *debugRenderSomething(Gfx *gdl);
void func00009ab0(void);
void func00009b50(void *fb);
void func00009bf8(void);
void func00009c3c(s32 stagenum);
void func00009ec4(s32 arg0);
u32 func00009ed4(void);
void func0000a044(void);
u32 func0000aa50(void);
void func0000aab0(u32 arg0);
u32 viGetUnk28(void);
u32 vi2GetUnk28(void);
u32 func0000ab4c(void);
u32 func0000ab6c(void);
u32 func0000ab78(void);
u32 func0000aca4(void);
u32 func0000ad5c(void);
u32 func0000af00(void);
u32 func0000b0e8(void);
u32 func0000b1a8(void);
u32 func0000b1d0(void);
u32 func0000b280(void);
u32 func0000b2c4(void);
u32 func0000b330(void);
void viSetBuf(s16 x, s16 y);
s16 viGetBufX(void);
s16 viGetBufY(void);
void viSetXY(s16 x, s16 y);
s16 viGetX(void);
s16 viGetY(void);
void viSetViewSize(s16 x, s16 y);
s16 viGetViewX(void);
s16 viGetViewY(void);
void viSetViewPosition(s16 left, s16 top);
s16 viGetViewLeft(void);
s16 viGetViewTop(void);
void viSetUseZBuf(bool use);
void viSetFovY(f32 fovy);
void viSetAspect(f32 aspect);
f32 viGetAspect(void);
void viSetFovAspectAndSize(f32 fovy, f32 aspect, s16 width, s16 height);
f32 viGetFovY(void);
void viSetZRange(f32 arg0, f32 arg1);
void viGetZRange(struct zrange *zrange);
u32 func0000bf04(void);

#endif
