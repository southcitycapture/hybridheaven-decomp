#include "context.h"

typedef struct func_801E43D8_C { u8 pad[0x4B]; u8 unk4B; } func_801E43D8_C;
typedef struct func_801E43D8_B { u8 pad[0x30]; func_801E43D8_C *unk30; } func_801E43D8_B;
typedef struct func_801E43D8_A { u8 pad[4]; func_801E43D8_B *unk4; } func_801E43D8_A;
typedef struct func_801E43D8_R { u8 pad[0xC]; s32 unkC; } func_801E43D8_R;

s32 func_801E43D8() {
    f32 t;
    s32 v;
    s32 n;
    s32 a1;
    u8 pad[8];

    if (D_801EA73C != 0) {
        v = D_801EA740;
    } else {
        v = 0x3B - D_801EA740;
    }
    t = (f32)v / 60.0f;
    ((func_801E43D8_A *)D_8038D8D0)->unk4->unk30->unk4B = (u32)(255.0f * t);
    if (((func_801E43D8_R *)func_801BF6B0(0))->unkC > 0) {
        a1 = (u32)(215.0f * t + 40.0f) & 0xFF;
        func_801CCE50((u32)(87.0f * t + 40.0f) & 0xFF, a1, a1 & 0xFF);
        func_801CCEC8(0, -0x40, -0x40, 0xF);
        func_801CCE88(0, 0x50, 0x46, 0x5A);
        func_801CCEC8(1, 0x40, 0x40, 0xF);
        func_801CCE88(1, 0x50, 0x46, 0x5A);
    }
    D_801EA740++;
    if (D_801EA740 >= 0x3C) {
        if (D_801EA73C != 0) {
            D_801EA73C = 0;
        } else {
            D_801EA73C = 1;
        }
    }
    D_801EA740 %= 60;
}
