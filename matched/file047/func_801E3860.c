#include "common.h"

extern s32 func_80005670(s32, void *);
extern s32 func_801CC530();
extern s32 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E3860(s32 arg0, s32 arg1) {
    func_80005670(((s32 *)func_801DAAF0)[9], func_801DAC30 + 0x2C);
    func_801CC530();
    return 2;
}
