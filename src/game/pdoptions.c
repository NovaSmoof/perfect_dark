#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/music.h"
#include "game/pdoptions.h"
#include "gvars/gvars.h"
#include "types.h"

s32 optionsGetControlMode(s32 mpchrnum)
{
	return g_MpPlayers[mpchrnum].base.controlmode;
}

void optionsSetControlMode(s32 mpchrnum, s32 mode)
{
	g_MpPlayers[mpchrnum].base.controlmode = mode;
}

s32 optionsGetContpadNum1(s32 mpchrnum)
{
	return g_MpPlayers[mpchrnum].base.unk45;
}

s32 optionsGetContpadNum2(s32 mpchrnum)
{
	return g_MpPlayers[mpchrnum].base.unk46;
}

s32 optionsGetForwardPitch(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_FORWARDPITCH) != 0;
}

s32 optionsGetAutoAim(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_AUTOAIM) != 0;
}

s32 optionsGetLookAhead(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_LOOKAHEAD) != 0;
}

s32 optionsGetAimControl(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_AIMCONTROL) != 0;
}

s32 optionsGetSightOnScreen(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_SIGHTONSCREEN) != 0;
}

s32 optionsGetAmmoOnScreen(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_AMMOONSCREEN) != 0;
}

s32 optionsGetShowGunFunction(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_SHOWGUNFUNCTION) != 0;
}

s32 optionsGetAlwaysShowTarget(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_ALWAYSSHOWTARGET) != 0;
}

s32 optionsGetShowZoomRange(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_SHOWZOOMRANGE) != 0;
}

s32 optionsGetPaintball(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_PAINTBALL) != 0;
}

s32 optionsGetShowMissionTime(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_SHOWMISSIONTIME) != 0;
}

u8 optionsGetInGameSubtitles(void)
{
	return g_InGameSubtitles;
}

u8 optionsGetCutsceneSubtitles(void)
{
	return g_CutsceneSubtitles;
}

s32 optionsGetHeadRoll(s32 mpchrnum)
{
	return (g_MpPlayers[mpchrnum].options & OPTION_HEADROLL) != 0;
}

void optionsSetForwardPitch(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_FORWARDPITCH;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_FORWARDPITCH;
	}
}

void optionsSetAutoAim(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_AUTOAIM;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_AUTOAIM;
	}
}

void optionsSetLookAhead(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_LOOKAHEAD;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_LOOKAHEAD;
	}
}

void optionsSetAimControl(s32 mpchrnum, s32 index)
{
	if (index) {
		g_MpPlayers[mpchrnum].options |= OPTION_AIMCONTROL;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_AIMCONTROL;
	}
}

void optionsSetSightOnScreen(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_SIGHTONSCREEN;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_SIGHTONSCREEN;
	}
}

void optionsSetAmmoOnScreen(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_AMMOONSCREEN;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_AMMOONSCREEN;
	}
}

void optionsSetShowGunFunction(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_SHOWGUNFUNCTION;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_SHOWGUNFUNCTION;
	}
}

void optionsSetAlwaysShowTarget(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_ALWAYSSHOWTARGET;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_ALWAYSSHOWTARGET;
	}
}

void optionsSetShowZoomRange(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_SHOWZOOMRANGE;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_SHOWZOOMRANGE;
	}
}

void optionsSetPaintball(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_PAINTBALL;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_PAINTBALL;
	}
}

void optionsSetShowMissionTime(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_SHOWMISSIONTIME;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_SHOWMISSIONTIME;
	}
}

void optionsSetInGameSubtitles(s32 enable)
{
	g_InGameSubtitles = enable;
}

void optionsSetCutsceneSubtitles(s32 enable)
{
	g_CutsceneSubtitles = enable;
}

void optionsSetHeadRoll(s32 mpchrnum, bool enable)
{
	if (enable) {
		g_MpPlayers[mpchrnum].options |= OPTION_HEADROLL;
	} else {
		g_MpPlayers[mpchrnum].options &= ~OPTION_HEADROLL;
	}
}

s32 optionsGetEffectiveScreenSize(void)
{
	if (IS4MB()) {
		return SCREENSIZE_FULL;
	}

	if (g_MenuData.root == MENUROOT_TRAINING) {
		g_MpPlayerNum = 0;

		if (g_Menus[g_MpPlayerNum].curframe && var8009dfc0) {
			return SCREENSIZE_FULL;
		}
	}

	if (g_Menus[g_MpPlayerNum].curframe && (
				g_Menus[g_MpPlayerNum].curframe->dialog == &menudialog_control4 ||
				g_Menus[g_MpPlayerNum].curframe->dialog == &menudialog_control3 ||
				g_Menus[g_MpPlayerNum].curframe->dialog == &g_ControlStyleSingleMenuDialog)) {
		return SCREENSIZE_FULL;
	}

	if (PLAYERCOUNT() >= 2 || g_MenuData.root == MENUROOT_MPSETUP) {
		return SCREENSIZE_FULL;
	}

	return g_ScreenSize;
}

s32 optionsGetScreenSize(void)
{
	return g_ScreenSize;
}

void optionsSetScreenSize(s32 size)
{
	g_ScreenSize = size;
}

s32 optionsGetScreenRatio(void)
{
	return g_ScreenRatio;
}

void optionsSetScreenRatio(s32 ratio)
{
	g_ScreenRatio = ratio;
}

u8 optionsGetScreenSplit(void)
{
	return g_ScreenSplit;
}

void optionsSetScreenSplit(u8 split)
{
	g_ScreenSplit = split;
}

s32 optionsGetMusicVolume(void)
{
	return musicGetVolume();
}

void optionsSetMusicVolume(u16 volume)
{
	musicSetVolume(volume);
}
