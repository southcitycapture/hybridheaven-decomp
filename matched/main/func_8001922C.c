#include "context.h"

extern s32 func_80018BD8(void);
extern void func_800058DC(s32, void (*)(void));
extern void func_800189C8(void);
extern void func_80017BB8(void);
extern u16 D_800892B0[];
extern void *D_80044124[];
extern u16 D_8008EBC0;
extern u16 D_8008EBCC;
extern s16 D_8008EBEC;
extern s16 D_8008EBFC;

void func_8001922C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    D_8008EBFC = D_800892B0[0x1E8 / 2] | D_800892B0[0x1C8 / 2];
    if (func_80018BD8() == 0) {
        func_800058DC(arg0, func_80017BB8);
        return;
    }
    temp_v0 = ((u16 *)D_80044124[D_8008EBC0])[2];
    if (temp_v0 & 0xF000) {
        if (temp_v0 & 0xB000) {
            D_8008EBEC = 0;
        } else {
            D_8008EBEC = 1;
        }
        if (D_8008EBCC == 0) {
            func_800189C8();
            func_800058DC(arg0, func_80017BB8);
        }
    }
}
