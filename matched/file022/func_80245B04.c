#include "context.h"

typedef struct func_80245B04_StructInner {
    u8 pad0[0x22];
    u8 b22;
} func_80245B04_StructInner;

typedef struct func_80245B04_StructMid {
    u8 pad0[0x24];
    func_80245B04_StructInner *p24;
} func_80245B04_StructMid;

typedef struct func_80245B04_StructG {
    u8 pad0[2];
    s16 h2;
    u8 pad4[0xD8];
    func_80245B04_StructMid *pDC;
    u8 padE0[0x15];
    u8 bF5;
} func_80245B04_StructG;

extern u16 D_801BCAE0;
extern char D_8025272C[];
extern f32 D_80252870;
extern f32 D_80252874;
extern f32 D_80252878;
extern f32 D_8025287C;
extern f32 D_80252880;
extern f32 D_80252884;
extern f32 D_80252888;
extern f32 D_8025288C;
extern f32 D_80252890;
extern f32 D_80252894;
extern f32 D_80252898;
extern u8 D_801BCB10;
extern u8 D_801BCB11;
extern u8 D_801BCB12;
extern u8 D_801BCB0E[];
extern u8 D_801BCB0F[];

#define D_802528E6 (((u16 *)D_802528D0)[11])

extern void func_80020718(s32);
extern void func_8011AAF4(const char *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130264();
extern s32 func_80130290();
extern void func_801518D4(s32, s32, s32);
extern s32 func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30();
extern f32 func_80242A20(f32);
extern f32 func_80242A68(f32, u16, f32, u16);
extern s32 func_80242AB8(u16);
extern s32 func_80242B3C(u16);

void func_80245B04(s32 arg0, func_8024569C_StructNode **arg1) {
    s32 v;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 fv1;
    f32 sp6C;
    u16 sp6A;

    if (((func_80245B04_StructG *)&D_801BBBF0)->pDC != NULL) {
        if (((func_80245B04_StructG *)&D_801BBBF0)->pDC->p24 != NULL) {
            if (((func_80245B04_StructG *)&D_801BBBF0)->bF5 != 0) {
                u8 i;
                ((func_80245B04_StructG *)&D_801BBBF0)->pDC->p24->b22 = 0;
                func_801FBB30();
                D_801BCAE0 = 0x10;
                func_801C3B2C(0);
                func_801C3B10(0);
                switch ((s32)D_802528E6) {
                case 0x5A:
                    func_80020718(0x271);
                    break;
                case 0x96:
                    func_80020718(0x272);
                    break;
                case 0xBE:
                    D_802528D0[2] = 1;
                    break;
                case 0x12C:
                    D_802528D0[3] = 1;
                    break;
                case 0x136:
                    D_802528D0[9] = 1;
                    break;
                case 0x140:
                    func_80020718(0x272);
                    break;
                case 0x154:
                    D_802528D0[0] = 1;
                    D_802528D0[7] = 1;
                    break;
                case 0x1C0:
                    func_80020718(0x272);
                    break;
                case 0x212:
                    D_802528D0[1] = 1;
                    D_802528D0[8] = 1;
                    break;
                case 0x23A:
                    D_802528D0[4] = 1;
                    break;
                case 0x28A:
                    D_802528D0[10] = 1;
                    break;
                case 0x348:
                    D_802528D0[6] = 1;
                    break;
                case 0x370:
                    D_802528D0[5] = 1;
                    break;
                case 0x398:
                    func_80020718(0x273);
                    break;
                case 0x3C0:
                    func_80020718(0x273);
                    break;
                }
                if (D_802528E6 < 0x1F4) {
                    if ((D_802528E6 >= 0x12D && (D_802528E6 & 0x40)) || (D_802528E6 >= 0x97 && D_802528E6 < 0xF0)) {
                        D_801BCB0E[2] = 0xFF;
                        D_801BCB11 = 0x64;
                        D_801BCB12 = 0x64;
                    } else {
                        D_801BCB0E[2] = D_80252914;
                        D_801BCB11 = D_80252915;
                        D_801BCB12 = D_80252916;
                    }
                } else if (D_802528E6 > 0x1F4) {
                    if (func_80242AB8(D_802528E6) != 0) {
                        D_801BBBF0.color0 = (u32)D_801BBBF0.color0 + (0xFF - D_801BBBF0.color0) * 0.25;
                        D_801BBBF0.color1 = (u32)D_801BBBF0.color1 + (0x64 - D_801BBBF0.color1) * 0.25;
                        D_801BBBF0.color2 = (u32)D_801BBBF0.color2 + (0x64 - D_801BBBF0.color2) * 0.25;
                    } else {
                        D_801BBBF0.color0 = (u32)D_801BBBF0.color0 + (D_80252914 - D_801BBBF0.color0) * 0.25;
                        D_801BBBF0.color1 = (u32)D_801BBBF0.color1 + (D_80252915 - D_801BBBF0.color1) * 0.25;
                        D_801BBBF0.color2 = (u32)D_801BBBF0.color2 + (D_80252916 - D_801BBBF0.color2) * 0.25;
                    }
                }
                i = 0;
                do {
                    if ((v = ((u16 *)D_802528D0)[i]) >= 0x51) {
                        D_802528E8[i] = func_80242A20(D_802528E8[i]);
                        arg1[i]->object->y += D_802528E8[i];
                        ((u16 *)D_802528D0)[i] += 1;
                    } else if (v >= 0x15) {
                        arg1[i]->object->y = func_80242A68(arg1[i]->object->y, v - 0x14, 1.0f, 0x800);
                        ((u16 *)D_802528D0)[i] += 1;
                    } else if (v > 0) {
                        ((u16 *)D_802528D0)[i] = ((u16 *)D_802528D0)[i] + 1;
                    }
                    i++;
                } while (i < 11);
                func_802444B0(D_802528E6);
                if (D_802528E6 == 0x5A) {
                    func_801518D4(0, 0, 0x3C);
                }
                if (D_802528E6 == 0x96) {
                    func_801518D4(0, 3, 0x5A);
                }
                if (D_802528E6 == 0xFA) {
                    func_801518D4(0, 1, 0x32);
                }
                if (D_802528E6 == 0x12C) {
                    func_801518D4(0, 3, 0xC8);
                }
                if (D_802528E6 == 0x1F4) {
                    func_801518D4(0, 1, 0x1E);
                }
                if (D_802528E6 >= 0x212 && D_802528E6 < 0x33E) {
                    if (func_80242B3C(D_802528E6) != 0) {
                        func_801518D4(0, 7, 0xA);
                    } else {
                        func_801518D4(0, 0, 0xA);
                    }
                }
                if (D_802528E6 == 0x33E) {
                    func_801518D4(0, 0, 0x32);
                }
                if (D_802528E6 == 0x370) {
                    func_801518D4(0, 1, 0x14);
                }
                if (D_802528E6 == 0x384) {
                    func_801518D4(0, 2, 0x3C);
                }
                if (D_802528E6 >= 0x3C0) {
                    if (func_80242B3C(D_802528E6) != 0) {
                        func_801518D4(0, 7, 0xA);
                    } else {
                        func_801518D4(0, 0, 0xA);
                    }
                }
                if (func_80130264() != 0) {
                    if (func_80130290() != 0) {
                        sp6A = 0x900;
                    } else {
                        sp6A = 0x700;
                    }
                } else {
                    sp6A = 0x800;
                }
                if (D_802528E6 >= 0x33F) {
                    sp7C = func_80242A68(D_80252870, D_802528E6, 3.0f, sp6A);
                    fv1 = func_80242A68(D_80252874, D_802528E6, 3.0f, sp6A);
                    sp80 = -78.0f;
                    sp78 = D_80252878;
                    sp74 = -24.0f;
                    sp6C = 262.0f;
                } else if (D_802528E6 >= 0x1F5) {
                    sp7C = func_80242A68(D_8025287C, D_802528E6, 3.0f, sp6A);
                    fv1 = func_80242A68(D_80252880, D_802528E6, 3.0f, sp6A);
                    sp80 = D_80252884;
                    sp78 = 320.0f;
                    sp74 = -160.0f;
                    sp6C = -124.0f;
                } else {
                    sp80 = D_80252888;
                    sp78 = -106.0f;
                    sp74 = -141.0f;
                    sp6C = -196.0f;
                    if (D_802528E6 >= 0x12D) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, 3.0f, sp6A);
                        fv1 = func_80242A68(D_8025288C, D_802528E6, 3.0f, sp6A);
                    } else if (D_802528E6 >= 0x97) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, 2.0f, sp6A);
                        fv1 = func_80242A68(D_80252890, D_802528E6, 2.0f, sp6A);
                    } else if (D_802528E6 >= 0x5B) {
                        sp7C = func_80242A68(-736.0f, D_802528E6, (D_802528E6 - 0x5A) / 60.0, sp6A);
                        fv1 = func_80242A68(D_80252894, D_802528E6, (D_802528E6 - 0x5A) / 60.0, sp6A);
                    } else {
                        sp7C = -736.0f;
                        fv1 = D_80252898;
                    }
                }
                func_8011AAF4(D_8025272C, 0x243, arg0, 0, 1, 10.0f, sp80, sp7C, sp78, 10.0f, sp74, fv1, sp6C, 0.0f, 35.0f, -1, -1);
                if (D_802528E6++ == 0x3FC) {
                    func_80020718(0x6BF);
                    ((func_80245B04_StructG *)&D_801BBBF0)->h2 = 4;
                    func_8012FE50(0xF, 0x5D, 2, 2, 2);
                }
            }
        }
    }
}
