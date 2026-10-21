#include "context.h"

extern s32 func_8013D4A0(s32, s32);
extern void func_8013D5F4(s32);
extern s32 func_8014ADB4(f32, f32, s32, s16, s32, s32, s32);
extern void func_8014B36C(s32);
extern s32 func_80379230(void *, u8);
extern u8 D_8017DD92;
extern u16 D_801BBC1C;
extern s32 D_8022B640(u16, u8 *);

s32 func_80231D84(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u8 arg4) {
    s32 s0;
    s32 s1;
    s32 v;
    s32 t;
    s32 r;

    s0 = 0;
    if (D_801BBBF0[0x74B] < 2) {
        if ((*(u16 *)&D_801BBBF0[0x2C] != 0xA && *(u16 *)&D_801BBBF0[0x2C] != 0xB &&
             *(u16 *)&D_801BBBF0[4] != 0x21 && *(u16 *)&D_801BBBF0[4] != 0x1B &&
             *(u16 *)&D_801BBBF0[4] != 0x5F && *(u16 *)&D_801BBBF0[4] < 0xB5) || D_8017DD92 != 0) {
            if (D_801BBBF0[0x74B] == 0) {
                t = D_8022B640(0x25, D_801BBBF0) + 1;
                s1 = t & 0xFF;
                while (func_80379230(D_801BC03C, t) != 0 && s0 < 0x64) {
                    func_8013D5F4(s1 & 0xFF);
                    t = func_8022B640(0x25) + 1;
                    s1 = t & 0xFF;
                    s0 = (s0 + 1) & 0xFF;
                }
                if (s0 >= 0x64) {
                    s1 = 0xA;
                    func_8013D5F4(0xA);
                } else {
                    func_8013D5F4(s1 & 0xFF);
                }
            } else {
                v = *(s16 *)D_801BC03C;
                if (v < 0x1F4) {
                    if ((func_8022B640(v / 100) & 0xFF) < 3) s1 = 1; else s1 = 2;
                } else if (v < 0x3E8) {
                    if ((func_8022B640(v / 100 - 4) & 0xFF) < 2) s1 = 2; else s1 = 3;
                } else {
                    if ((func_8022B640(v / 100 - 9) & 0xFF) < 2) s1 = 3; else s1 = 4;
                }
                func_8013D5F4(s1 & 0xFF);
            }
            if (s1 != 0 && s1 < 0x26) {
                r = s1;
                if (func_8013D4A0(s1 & 0xFF, 1) < 0x63) {
                    if (arg4 != 0 && D_801BBC1C != 5) {
                        func_8014B36C(func_8014ADB4(arg0, arg1, arg2, arg3, 0, s1, 0) & 0xFFFF);
                        return 0;
                    }
                    D_801BC03C[r + 0x337]++;
                    s1 = s1 * 1;
                    return s1;
                }
            }
        }
    }
    return 0;
}
