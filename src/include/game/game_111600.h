#ifndef IN_GAME_GAME_111600_H
#define IN_GAME_GAME_111600_H
#include <ultra64.h>
#include "types.h"

void currentPlayerClearInventory(void);
void currentPlayerSortInvItem(struct invitem *item);
void currentPlayerInsertInvItem(struct invitem *item);
void currentPlayerRemoveInvItem(struct invitem *item);
struct invitem *currentPlayerGetUnusedInvItem(void);
void currentPlayerSetAllGuns(bool enable);
struct invitem *currentPlayerGetWeaponInvItem(s32 weaponnum);
bool currentPlayerHasWeapon(s32 weaponnum);
struct invitem *func0f111a4c(s32 weapon1, s32 weapon2);
bool func0f111ab0(s32 weapon1, s32 weapon2);
bool func0f111ad4(s32 weaponnum);
s32 func0f111b88(s32 arg0);
s32 currentStageForbidsSlayer(void);
bool currentPlayerCanHaveAllGunsWeapon(s32 weaponnum);
bool currentPlayerCanHaveWeapon(s32 weaponnum);
bool func0f111cf8(s32 weapon1, s32 weapon2);
bool currentPlayerGiveWeapon(s32 weaponnum);
bool currentPlayerGiveWeaponWithArgument(s32 weapon1, s32 weapon2);
void currentPlayerRemoveWeapon(s32 weaponnum);
bool currentPlayerGiveProp(struct prop *prop);
void currentPlayerRemoveProp(struct prop *prop);
u32 func0f1120f0(struct prop *prop);
u32 func0f1122ec(void);
u32 func0f11253c(void);
bool currentPlayerHasKeyFlags(u32 wantkeyflags);
bool currentPlayerHasBriefcase(void);
bool currentPlayerHasDataUplink(void);
bool currentPlayerHasProp(struct prop *prop);
s32 currentPlayerGetNumInvItems(void);
struct invitem *currentPlayerGetInvItemByIndex(s32 index);
struct textoverride *objGetTextOverride(struct defaultobj *obj);
struct textoverride *weaponGetTextOverride(s32 weaponnum);
s32 currentPlayerGetWeaponNumByInvIndex(s32 index);
u16 currentPlayerGetInvNameIdByIndex(s32 index);
char *currentPlayerGetInvNameByIndex(s32 index);
char *currentPlayerGetInvShortNameByIndex(s32 index);
void textoverrideInsert(struct textoverride *override);
u32 currentPlayerGetEquipCurItem(void);
void currentPlayerSetEquipCurItem(u32 item);
void currentPlayerCalculateEquipCurItem(void);
char *objGetActivatedText(struct defaultobj *obj);
char *weaponGetActivatedText(s32 weaponnum);
void currentPlayerIncrementGunHeldTime(s32 param_1, s32 param_2);
void currentPlayerGetWeaponOfChoice(s32 *weapon1, s32 *weapon2);

#endif
