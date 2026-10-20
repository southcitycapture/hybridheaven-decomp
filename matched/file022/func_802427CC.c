#include "context.h"

typedef struct func_802427CC_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x2A0 - 6];
    f32 unk2A0;
    u8 pad2[0xF20 - 0x2A4];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    u8 unkF27;
    u8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    s8 unkF2C;
    s8 unkF2D;
    u8 unkF2E;
    u8 pad3[6];
    u8 unkF35;
} func_802427CC_StructGlobal;

typedef struct func_802427CC_StructArg {
    u8 pad[0x90];
    u16 unk90;
} func_802427CC_StructArg;

void func_802427CC(func_802427CC_StructArg *arg0, s32 arg1) {
    extern u16 func_8012C6B4();
    if ((((func_802427CC_StructGlobal *)&D_801BBBF0)->unk4 == 0x5A) || (func_80133A24(0x1F4) != 0)) {
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF22 = 0xA;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF23 = 0xFF;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF24 = 0xC8;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF25 = 0xB4;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF20 = 0;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF21 = 0;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF26 = 0x1F;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF27 = 0x3C;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF28 = 0x48;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF29 = 0x96;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2A = 0x5A;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2B = 0x32;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2C = -0x1F;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2D = -0x7D;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF2E = 0x7D;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF35 = 0xC4;
        ((func_802427CC_StructGlobal *)&D_801BBBF0)->unk2A0 = 1800.0f;
        arg0->unk90 = func_8012C6B4(0x32);
        func_800058DC((s32)arg0, func_802428B8);
    }
}
