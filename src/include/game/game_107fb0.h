#ifndef IN_GAME_GAME_107FB0_H
#define IN_GAME_GAME_107FB0_H
#include <ultra64.h>
#include "types.h"

u32 func0f107fb0(void);
u32 func0f108078(void);
u32 func0f1080d0(void);
u32 func0f1082b0(void);
void func0f108324(s32 arg0);
u32 func0f1083b0(void);
u32 func0f1083d0(void);
u32 func0f108424(void);
u32 func0f108550(void);
u32 func0f10865c(void);
u32 func0f1086b8(void);
u32 func0f10876c(void);
u32 func0f1088a0(void);
u32 func0f10898c(void);
u32 func0f108a80(void);
u32 func0f108d8c(void);
u32 func0f108f90(void);
void func0f109038(s32 arg0);
u32 func0f1091e0(void);
void func0f1094e4(bool *saved, s32 arg1, s32 arg2);
u32 pakDeleteFile(void);
u32 func0f1097d0(void);
u32 func0f109954(void);
u32 func0f1099a8(void);
u32 func0f109a68(void);
u32 func0f109bb4(void);
u32 func0f109c8c(void);
u32 func0f109ec4(void);
u32 func0f10a19c(void);
u32 func0f10a1ec(void);
u32 func0f10a22c(void);
u32 func0f10a2ec(void);
void func0f10a51c(s32 arg0, s32 arg1);
u32 func0f10a5e8(void);
u32 func0f10a630(void);
u32 func0f10a97c(void);
u32 func0f10aad8(void);
u32 func0f10b0c4(void);
u32 func0f10b75c(void);
u32 func0f10b7cc(void);
u32 func0f10b83c(void);
u32 func0f10b924(void);
u32 func0f10c900(void);
u32 func0f10c970(void);
u32 func0f10cb2c(void);
void menucustomChooseAgent(void);
void menucustomDeleteGameNote(void);
void menucustomFileToCopy(void);
void menucustomFileToDelete(void);
s32 menudialog00108e58(u32, u32, u32 *);
s32 menudialog0010b014(u32, u32, u32 *);
s32 menudialog0010b674(u32, u32, u32 *);
s32 menudialog0010ba10(u32, u32, u32 *);
s32 menudialog0010c804(u32, u32, u32 *);
s32 menudialog0010cc08(u32, u32, u32 *);
s32 menuhandler00108014(u32, u32, u32 *);
s32 menuhandler00108254(u32, u32, u32 *);
s32 menuhandler001084b8(u32, u32, u32 *);
s32 menuhandlerPakErrorTryAgain(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler00108cd0(u32, u32, u32 *);
s32 menuhandlerAcknowledgePakFileLost(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler00108ecc(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler00108f08(u32, u32, u32 *);
s32 menuhandlerPakRenameDuplicateSave(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerPakCancelDuplicateSave(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerPakCancelSave(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0010a488(u32, u32, u32 *);
s32 menuhandlerPakConfirmDelete(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler0010b14c(u32, u32, u32 *);
s32 menuhandler0010b974(u32, u32, u32 *);
s32 menuhandler0010bc98(u32, u32, u32 *);
s32 menuhandler0010ca1c(u32, u32, u32 *);
s32 menuhandler0010cabc(u32, u32, u32 *);
s32 menuhandler4MbAdvancedSetup(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandler4MbDropOut(u32 operation, struct menu_item *item, s32 *value);
s32 menuhandlerOpenCopyFile(u32, u32, u32 *);
s32 menuhandlerOpenDeleteFile(u32, u32, u32 *);
s32 menuhandlerRenameFile(u32, u32, u32 *);
s32 menuhandlerSaveElsewhere(u32, u32, u32 *);
s32 menuhandlerSaveLocation(u32, u32, u32 *);

#endif
