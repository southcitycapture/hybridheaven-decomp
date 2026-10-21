#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif
#include "context.h"

extern u8 D_801904E8[];
extern f64 D_801906D0;
extern f64 D_801906D8;
extern f64 D_801906E0;
extern void func_80005700(s32);
extern void func_8011AAF4(u8 *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_8014FF14_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0x2AC - 0x200];
    u8 unk2AC;
    u8 pad2AD[0x334 - 0x2AD];
    f32 unk334;
    f32 unk338;
    f32 unk33C;
    f32 unk340;
    f32 unk344;
    f32 unk348;
} func_8014FF14_Struct;

#define S ((func_8014FF14_Struct *)D_801BBBF0)

void func_8014FF14(s32 arg0, s32 arg1) {
    f32 x;
    f32 a;
    f32 b;
    f32 c;
    f32 r;
    f32 r2;
    f32 r3;

    x = S->unk1E8;
    a = S->unk1EC;
    b = S->unk1F0;
    S->unk1E8 = x + (S->unk334 - x) * D_801906D0;
    S->unk1EC = a + (S->unk338 - a) * D_801906D8;
    S->unk1F0 = b + (S->unk33C - b) * D_801906E0;
    S->unk1F4 = S->unk1F4 + (S->unk340 - S->unk1F4) * 0.5;
    S->unk1F8 = S->unk1F8 + (S->unk344 - S->unk1F8) * 0.5;
    c = S->unk1FC;
    S->unk1FC = c + (S->unk348 - c) * 0.5;
    func_8011AAF4(D_801904E8, 0x88B, arg0, 0, 1, 0.0f, S->unk1E8, S->unk1EC, S->unk1F0, 0.0f, S->unk1F4, S->unk1F8, S->unk1FC, 0.0f, 35.0f, -1, -1);
    x = S->unk1E8;
    if (x < S->unk334) {
        r = -(x - S->unk334);
    } else {
        r = x - S->unk334;
    }
    if ((s32)r == 0) {
        a = S->unk1EC;
        if (a < S->unk338) {
            r2 = -(a - S->unk338);
        } else {
            r2 = a - S->unk338;
        }
        if ((s32)r2 == 0) {
            b = S->unk1F0;
            if (b < S->unk33C) {
                r3 = -(b - S->unk33C);
            } else {
                r3 = b - S->unk33C;
            }
            if ((s32)r3 == 0) {
                S->unk2AC = 1;
                D_801BF180 = 0;
                func_80005700(arg0);
            }
        }
    }
}
