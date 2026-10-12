#include "context.h"

extern u16 D_80089474[];
void func_803821B0(void *, s32, s32, s32, s32, s32, s32, s8 *);
extern struct func_80385208_Globals D_801BBBF0;
extern u8 D_8038CA64[];
extern u8 D_8038CA6C[];
extern void func_80382744();

typedef struct func_803825CC_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_803825CC_Struct;

void func_803825CC(func_803825CC_Struct *arg0, s32 arg1) {
    s8 sp3F;
    u8 var_v0;
    u8 var_v1;
    s16 v;

    sp3F = 0;
    v = arg0->unkB0;
    arg0->unkB0 = v - 1;
    if ((v < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_803821B0(arg0, 0x2E, 0x74, 0x50, 0x50, 0xFF, 1, &sp3F);
        func_803821B0(arg0, 0x6E, 0x74, 0xC0, 0xC0, 0, 4, &sp3F);
        func_803821B0(arg0, 0xAA, 0x74, 0xC0, 0, 0, 5, &sp3F);
        var_v0 = ((u8 *) &D_801BBBF0)[0x748];
        var_v1 = ((u8 *) &D_801BBBF0)[0xAE4];
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        if (var_v1 >= 0x100) {
            var_v1 = 0xFF;
        }
        func_8001B204(3, 0x8C, 0x76, D_8038CA64, 4, var_v0);
        func_8001B204(4, 0xD0, 0x76, D_8038CA6C, 4, var_v1);
        arg0->unkB0 = 0x14;
        func_800058DC(arg0, func_80382744);
    }
}
