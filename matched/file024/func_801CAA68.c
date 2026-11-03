#include "common.h"
extern u8 D_801CE3DC[];
extern s8 D_801CFDE0;
extern s8 D_801CFDE1;
extern s8 D_801CFDE2;
extern s16 D_801CFDE4;
extern void func_800058DC();
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8001B204(u8, s16, s16, void *, ...);
void func_801CACF0(s32 arg0, s32 arg1);

extern u8 D_801CF674[];
extern u8 D_801CF684[];
extern u8 D_800892B0[];

void func_801CAA68(s32 arg0, s32 arg1) {
    u8 *p;
    s32 i;
    s32 m;
    s32 d;
    s32 k;
    s32 t;
    func_8001B204(0, 0x7D0, 0x50, D_801CF674, 4);
    func_8001A804(0, D_801CF684, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
    d = *(u8 *)&D_801CFDE2;
    k = d;
    t = -(*(u8 *)&D_801CFDE2 * 0xD);
    if (D_801CFDE4 == t) {
        if ((*(u16 *)(D_800892B0 + 0x1D0) & 0x800) && *(u8 *)&D_801CFDE0 > 0) {
            *(u8 *)&D_801CFDE0 -= 1;
            if (*(u8 *)&D_801CFDE1 > 0) {
                *(u8 *)&D_801CFDE1 -= 1;
            } else {
                *(u8 *)&D_801CFDE2 -= 1;
            }
        }
        if ((*(u16 *)(D_800892B0 + 0x1D0) & 0x400) && *(u8 *)&D_801CFDE0 < 0xA) {
            *(u8 *)&D_801CFDE0 += 1;
            if (*(u8 *)&D_801CFDE1 < 4) {
                *(u8 *)&D_801CFDE1 += 1;
            } else {
                *(u8 *)&D_801CFDE2 += 1;
            }
        }
        if (*(u16 *)(D_800892B0 + 0x1C8) & 0xB000) {
            func_800058DC(arg0, func_801CACF0);
            return;
        }
    } else {
        m = -k * 0xD;
        if (D_801CFDE4 < m) {
            D_801CFDE4 += 2;
            if (m < D_801CFDE4) {
                D_801CFDE4 = t;
            }
        }
        if (m < D_801CFDE4) {
            D_801CFDE4 -= 2;
            if (D_801CFDE4 < m) {
                D_801CFDE4 = t;
            }
        }
    }
    p = D_801CE3DC;
    for (i = 0; i != 0xB; i++) {
        if (i == *(u8 *)&D_801CFDE0) {
            (*(void (**)(u8 *, s16, s32))p)(p, D_801CFDE4, 2);
        } else {
            (*(void (**)(u8 *, s16, s32))p)(p, D_801CFDE4, 6);
        }
        p += 0x30;
    }
}
