#include "common.h"
extern s32 D_801EA73C;
extern s32 D_801EA740;
struct func_801E4D04_StructInner {
    u8 pad[0x22];
    u8 flag;
};
struct func_801E4D04_StructOuter {
    u8 pad[0xC];
    struct func_801E4D04_StructInner *unkC;
};
extern struct func_801E4D04_StructOuter *D_8038D8D0;
void *func_801BF6B0(s32 arg0);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);


typedef struct func_801E43D8_StructC { u8 pad[0x4B]; u8 unk4B; } func_801E43D8_StructC;
typedef struct func_801E43D8_StructB { u8 pad[0x30]; func_801E43D8_StructC *unk30; } func_801E43D8_StructB;
typedef struct func_801E43D8_StructA { u8 pad[4]; func_801E43D8_StructB *unk4; } func_801E43D8_StructA;
typedef struct func_801E43D8_StructR { u8 pad[0xC]; s32 unkC; } func_801E43D8_StructR;

s32 func_801E43D8() {
    f32 t;
    s32 v;
    s32 a1;
    u32 opacity;
    u32 red;
    u32 blue;

    if (D_801EA73C != 0) {
        v = D_801EA740;
    } else {
        v = 0x3B - D_801EA740;
    }
    t = (f32)v / 60.0f;
    opacity = (u32)(255.0f * t);
    ((func_801E43D8_StructA *)D_8038D8D0)->unk4->unk30->unk4B = opacity;
    if (((func_801E43D8_StructR *)func_801BF6B0(0))->unkC > 0) {
        a1 = (u32)(215.0f * t + 40.0f) & 0xFF;
        red = (u32)(87.0f * t + 40.0f) & 0xFF;
        blue = a1 & 0xFF;
        func_801CCE50(red, a1, blue);
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
