#include "context.h"

typedef struct func_8014CDA0_Struct {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0xA0 - 0x93];
    u16 unkA0;
    u16 unkA2;
    u8 unkA4;
    u8 unkA5;
} func_8014CDA0_Struct;

extern void func_80126820(u16);
extern void func_8014CE54();
extern void func_800058DC();
extern u8 D_801BBBF0[];

void func_8014CDA0(func_8014CDA0_Struct *arg0, s32 arg1) {
    if ((D_801BBBF0[0x182] == 0) && (D_801BBBF0[0x187] == 0)) {
        if (arg0->unkA5 != 0) {
            if (arg0->unk92 == 1) {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA0;
            } else {
                *(u16 *)(D_801BBBF0 + 6) = arg0->unkA2;
            }
        } else if (arg0->unk92 == 1) {
            func_80126820(arg0->unkA0);
        } else {
            func_80126820(arg0->unkA2);
        }
        func_800058DC(arg0, func_8014CE54);
    }
}
