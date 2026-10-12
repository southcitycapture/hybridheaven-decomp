#include "context.h"

struct func_802491C8_Gfx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x54 - 0x30];
    s32 unk54;
};

struct func_802491C8_Obj {
    u8 pad0[0xDC];
    struct func_802491C8_Gfx *unkDC;
    u8 pad1[0xF8 - 0xE0];
    s32 unkF8;
    u8 pad2[0x3A4 - 0xFC];
    s16 unk3A4;
    u8 pad3[0xEF0 - 0x3A6];
    s16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
    u8 pad5[0x1034 - 0xF00];
    u8 unk1034;
};

extern s32 func_801270C0(s32 arg0);
extern void func_80126968();
extern void func_80020744(s32 arg0);
extern void func_801268CC(s32 arg0);
extern void func_801C4A5C(void *arg0, s32 arg1);
extern void func_80248D60();

void func_802491C8(s32 arg0, s32 arg1) {
    ((struct func_802491C8_Obj *) &D_801BBBF0)->unk1034 = 0;
    if (func_801270C0(arg0) != 0) {
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkF8 = (s32) func_80248D60;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unk3A4 = 0;
        func_80126968();
        func_80020744(0xA);
        func_801268CC(0);
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC->unk2C = 0x3E0;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkEF0 = 0x80;
        ((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC->unk54 = ((struct func_802491C8_Obj *) &D_801BBBF0)->unkEFC;
        func_801C4A5C(((struct func_802491C8_Obj *) &D_801BBBF0)->unkDC, 0);
    }
}
