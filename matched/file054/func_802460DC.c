#include "common.h"

extern s32 func_80130078(void);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_80020718(s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_80246160(void);
extern u16 D_80089474[];

void func_802460DC(void *arg0, s32 arg1) {
    if (func_80130078() == 0) {
        if (D_80089474[2] & 0x1000) {
            func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
            func_80020718(0xA);
            *(s16 *)((u8 *)arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_80246160);
        }
    }
}
