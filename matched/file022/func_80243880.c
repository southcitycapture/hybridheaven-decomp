#include "common.h"
f32 func_80242A20(f32 arg0);
f32 func_80242A68(f32 arg0, u16 arg1, f32 arg2, u16 arg3);
s32 func_80242AB8(u16 arg0);
s32 func_80242B3C(u16 arg0);
void func_802432FC(s32 arg0, u16 arg1);


typedef struct {
    u8 pad[0x22];
    u8 unk22;
} func_80243880_Obj;
typedef struct {
    u8 pad[0x24];
    func_80243880_Obj *unk24;
} func_80243880_Mid;
typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0xDC - 4];
    func_80243880_Mid *unkDC;
    u8 padE0[0xF5 - 0xE0];
    u8 unkF5;
    u8 padF6[0xF20 - 0xF6];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
} func_80243880_Struct;
typedef struct {
    u8 pad[0x30];
    f32 *unk30;
} func_80243880_Inner;

extern func_80243880_Struct D_801BBBF0;
extern s16 D_801BCAE0;
extern u16 D_802528A0[];
extern f32 D_802528B0[];
extern u8 D_802528C0;
extern u8 D_802528C1;
extern u8 D_802528C2;
extern void func_80020718();
extern void func_801FBB30();
extern void func_801C3B2C();
extern void func_801C3B10();
extern s32 func_801518D4();
extern s32 func_80130264();
extern s32 func_80130290();
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50();
extern u8 D_802525DC[];
extern f32 D_802526A8;
extern f32 D_802526AC;
extern f32 D_802526B0;
extern f32 D_802526B4;
extern f32 D_802526B8;
extern void D_80242C38(u16);

void func_80243880(s32 arg0, func_80243880_Inner **arg1) {
    f32 fv1;
    f32 sp70;
    u8 i;
    u16 v;
    u16 speed;

    if (D_801BBBF0.unkDC != NULL) {
        if (D_801BBBF0.unkDC->unk24 != NULL && D_801BBBF0.unkF5 != 0) {
            D_801BBBF0.unkDC->unk24->unk22 = 0;
            func_801FBB30();
            D_801BCAE0 = 0x10;
            func_801C3B2C(0);
            func_801C3B10(0);
            if (D_802528A0[4] == 0x5A) {
                func_80020718(0x270);
            } else if (D_802528A0[4] == 0x12C) {
                D_802528A0[3] = 1;
            } else if (D_802528A0[4] == 0x140) {
                D_802528A0[0] = 1;
            } else if (D_802528A0[4] == 0x168) {
                D_802528A0[2] = 1;
                D_802528A0[1] = 1;
            }
            for (i = 0; i < 4; i++) {
                                if (D_802528A0[i] >= 0xA1) {
                    D_802528B0[i] = func_80242A20(D_802528B0[i]);
                    arg1[i]->unk30[2] += D_802528B0[i];
                    D_802528A0[i]++;
                } else if (D_802528A0[i] >= 0x15) {
                    arg1[i]->unk30[2] = func_80242A68(arg1[i]->unk30[2], D_802528A0[i] - 0x14, 1.0f, 0x800);
                    D_802528A0[i]++;
                } else if (D_802528A0[i] > 0) {
                    D_802528A0[i]++;
                } else {
                }
            }
            if ((D_802528A0[4] >= 0x96 && D_802528A0[4] < 0x12C) || D_802528A0[4] >= 0x12C) {
                if (func_80242AB8(D_802528A0[4]) != 0) {
                    D_801BBBF0.unkF20 += (0xFF - D_801BBBF0.unkF20) * 0.25;
                    D_801BBBF0.unkF21 += (0x64 - D_801BBBF0.unkF21) * 0.25;
                    D_801BBBF0.unkF22 += (0x64 - D_801BBBF0.unkF22) * 0.25;
                } else {
                    D_801BBBF0.unkF20 += (D_802528C0 - D_801BBBF0.unkF20) * 0.25;
                    D_801BBBF0.unkF21 += (D_802528C1 - D_801BBBF0.unkF21) * 0.25;
                    D_801BBBF0.unkF22 += (D_802528C2 - D_801BBBF0.unkF22) * 0.25;
                }
            }
            D_80242C38(D_802528A0[4]);
            func_802432FC(arg0, D_802528A0[4]);
            if (D_802528A0[4] == 0x5A) {
                func_801518D4(0, 0, 0x3C);
            }
            if (D_802528A0[4] == 0x96) {
                func_801518D4(0, 3, 0x5A);
            }
            if (D_802528A0[4] == 0xF0) {
                func_801518D4(0, 1, 0x3C);
            }
            if (D_802528A0[4] >= 0x12C) {
                if (func_80242B3C(D_802528A0[4]) != 0) {
                    func_801518D4(0, 7, 0xA);
                } else {
                    func_801518D4(0, 0, 0xA);
                }
            }
            if (func_80130264() != 0) {
                if (func_80130290() != 0) {
                    speed = 0x900;
                } else {
                    speed = 0x700;
                }
            } else {
                speed = 0x800;
            }
            if (D_802528A0[4] >= 0x12D) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 3.0f, speed);
                fv1 = func_80242A68(D_802526A8, D_802528A0[4], 3.0f, speed);
            } else if (D_802528A0[4] >= 0x97) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 2.0f, speed);
                fv1 = func_80242A68(D_802526AC, D_802528A0[4], 2.0f, speed);
            } else if (D_802528A0[4] >= 0x5B) {
                sp70 = func_80242A68(-652.0f, D_802528A0[4], 1.0f, speed);
                fv1 = func_80242A68(D_802526B0, D_802528A0[4], 1.0f, speed);
            } else {
                sp70 = -652.0f;
                fv1 = D_802526B4;
            }
            func_8011AAF4(D_802525DC, 0x1F1, arg0, 0, 1, 10.0f, D_802526B8, sp70, 114.0f, 10.0f, 195.0f, fv1, -100.0f, 0.0f, 35.0f, -1, -1);
            if (D_802528A0[4]++ == 0x258) {
                D_801BBBF0.unk2 = 2;
                func_8012FE50(0xF, 0x5B, 2, 2, 2);
            }
        }
    }
}
