#include "common.h"
typedef struct func_8011B7A0_N { u8 pad0[0x19]; u8 unk19; } func_8011B7A0_N;
typedef struct func_8011B7A0_M { u8 pad0[0xC]; func_8011B7A0_N *unkC; } func_8011B7A0_M;
typedef struct func_8011B7A0_K { struct func_8011B7A0_K *unk0; func_8011B7A0_N *unk4; u8 pad8[4]; func_8011B7A0_N *unkC; u8 pad10[0xC]; func_8011B7A0_M *unk1C; } func_8011B7A0_K;
typedef struct func_8011B7A0_P {
    u8 pad0[8]; func_8011B7A0_K **unk8; func_8011B7A0_K *unkC; func_8011B7A0_K **unk10;
} func_8011B7A0_P;
extern func_8011B7A0_P D_80164DAC;
typedef struct func_8011B7A0_F {
    u8 pad0[1]; u8 unk1; u8 unk2; u8 pad3; f32 unk4, unk8, unkC, unk10, unk14, unk18, unk1C, unk20, unk24, unk28;
} func_8011B7A0_F;
typedef struct func_8011B7A0_O {
    u8 pad0[0x14]; func_8011B7A0_F *unk14; u8 unk18; u8 unk19;
} func_8011B7A0_O;
extern func_8011B7A0_O *D_801BBBC4;
extern void func_800058DC(s32, s32);
void func_8011B7A0(s32 arg0, s32 arg1);
s32 func_8011BAEC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);


typedef struct func_8011B520_Obj {
    f32 unk0, unk4, unk8, unkC, unk10;
    u8 *unk14;
    u8 unk18;
    u8 unk19;
} func_8011B520_Obj;
extern u16 D_801BBD7E;
extern u8 D_801BBE44;
extern u8 B_801BBE44;
extern u8 D_801BBE45;
extern u8 D_801BBE46;
extern u8 B_801BBE45[];
extern s32 func_80108280(void);

#define TBL ((func_8011B520_Obj ****)&D_80164DAC)

void func_8011B520(s32 arg0, s32 arg1) {
    s8 room;
    s8 sub;
    s8 l;
    s8 j;
    s8 k;
    func_8011B520_Obj *o;

    room = func_80108280() >> 8;
    sub = func_80108280() & 0xFF;
    j = 1;
    k = 1;
    arg1 = 0;
    for (; TBL[j - 1] != NULL; j++) {
        if (room == j) {
            for (; TBL[j - 1][k - 1] != NULL; k++) {
                if (sub == k) {
                    if (*TBL[j - 1][k - 1] != NULL) {
                        arg1 = 1;
                    }
                    break;
                }
            }
            break;
        }
    }
    if (arg1 != 0 && D_801BBD7E == 0) {
        for (l = 1; (l - 1)[TBL[room - 1][sub - 1]] != NULL; l++) {
            o = (l - 1)[TBL[room - 1][sub - 1]];
            if (func_8011BAEC(o->unk0, o->unk4, o->unk8, o->unkC, o->unk10) != 0) {
                switch (o->unk18) {
                case 2:
                    if (o->unk19 != 0) break;
                case 1:
                if (room != D_801BBE44 || sub != D_801BBE45 || *o->unk14 != B_801BBE45[1]) {
                    D_801BBBC4 = (func_8011B7A0_O *)(l - 1)[TBL[room - 1][sub - 1]];
                    B_801BBE44 = room;
                    D_801BBE45 = sub;
                    D_801BBE46 = *o->unk14;
                    func_800058DC(arg0, (s32)func_8011B7A0);
                }
                return;
                }
            } else {
            }
        }
    }
}
