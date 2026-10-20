#include "context.h"

typedef struct func_8011B7A0_C { u8 pad0[4]; f32 unk4; } func_8011B7A0_C;
typedef struct func_8011B7A0_B { u8 pad0[0x2C]; func_8011B7A0_C *unk2C; } func_8011B7A0_B;
typedef struct func_8011B7A0_F {
    u8 pad0[1]; u8 unk1; u8 unk2; u8 pad3; f32 unk4, unk8, unkC, unk10, unk14, unk18, unk1C, unk20, unk24, unk28;
} func_8011B7A0_F;
typedef struct func_8011B7A0_O {
    u8 pad0[0x14]; func_8011B7A0_F *unk14; u8 unk18; u8 unk19;
} func_8011B7A0_O;
typedef struct func_8011B7A0_G {
    u8 pad0[0xE0]; func_8011B7A0_B *unkE0;
    u8 pad1[0x234 - 0xE4]; u8 unk234;
    u8 pad2[0x254 - 0x235]; u8 unk254, unk255, unk256;
    u8 pad3[0x2AC - 0x257]; u8 unk2AC;
} func_8011B7A0_G;
typedef struct func_8011B7A0_N { u8 pad0[0x19]; u8 unk19; } func_8011B7A0_N;
typedef struct func_8011B7A0_M { u8 pad0[0xC]; func_8011B7A0_N *unkC; } func_8011B7A0_M;
typedef struct func_8011B7A0_L { u8 pad0[4]; func_8011B7A0_N *unk4; } func_8011B7A0_L;
typedef struct func_8011B7A0_K { struct func_8011B7A0_K *unk0; func_8011B7A0_N *unk4; u8 pad8[4]; func_8011B7A0_N *unkC; u8 pad10[0xC]; func_8011B7A0_M *unk1C; } func_8011B7A0_K;
typedef struct func_8011B7A0_P {
    u8 pad0[8]; func_8011B7A0_K **unk8; func_8011B7A0_K *unkC; func_8011B7A0_K **unk10;
} func_8011B7A0_P;

extern s32 func_8011AAF4(void *, s32, s32, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80189EDC[];
extern func_8011B7A0_O *D_801BBBC4;
extern func_8011B7A0_P D_80164DAC;
extern u8 func_8011B520[];
#define G ((func_8011B7A0_G *)&D_801BBBF0)

void func_8011B7A0(s32 arg0, s32 arg1) {
    func_8011B7A0_F *f;

    if ((G->unk254 == 4) && (G->unk255 == 8) && (G->unk256 == 1)) {
        D_801BBBC4->unk14->unk8 = G->unkE0->unk2C->unk4;
        D_801BBBC4->unk14->unk18 = G->unkE0->unk2C->unk4;
    }
    f = D_801BBBC4->unk14;
    if (!(func_8011AAF4(D_80189EDC, 0x113, arg0, f->unk1, f->unk2, f->unk4, f->unk8, f->unkC, f->unk10, f->unk14, f->unk18, f->unk1C, f->unk20, f->unk24, f->unk28, -1, -1) & 0xFF)) {
        if ((G->unk254 == 3) && (G->unk255 == 1) && (G->unk256 == 1)) {
            (*D_80164DAC.unk8)->unk4->unk19 = 0;
        }
        if ((G->unk254 == 4) && (G->unk255 == 1) && (G->unk256 == 3)) {
            D_80164DAC.unkC->unk0->unkC->unk19 = 0;
        }
        if ((G->unk254 == 4) && (G->unk255 == 8) && (G->unk256 == 3)) {
            D_80164DAC.unkC->unk1C->unkC->unk19 = 0;
        }
        if ((G->unk254 == 5) && (G->unk255 == 1) && (G->unk256 == 1)) {
            (*D_80164DAC.unk10)->unk4->unk19 = 0;
        }
        if (D_801BBBC4->unk18 == 2) {
            D_801BBBC4->unk19 = 1;
            if (D_801BBBC4->unk14->unk1 == 2) {
                G->unk254 = 0;
                G->unk255 = 0;
                G->unk256 = 0;
            }
        }
        G->unk234 = 0x1E;
        G->unk2AC = 2;
        func_800058DC(arg0, (s32)func_8011B520);
    }
}
