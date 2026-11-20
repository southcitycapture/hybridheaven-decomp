#include "common.h"
extern u16 D_8017DC40[];
extern s32 D_802170F4;
extern f32 D_8021B0E0;
extern s8 D_8021B0E4;
extern void func_80146CD4(s16, s32);
extern void func_80147148(s32, s32);

extern void *func_80005670(void *, void *);
extern s32 func_80126944(void);
extern void func_80146BE0(s16, s32);
extern s32 func_80236BA4(void);
extern u8 D_801BBBF0[];
extern u8 D_801BEC60[];
extern u8 D_802170F0;
extern u8 D_8021710C[];

void func_801FBDF4(u8 *arg0, s32 *arg1) {
    s32 sp1C;
    s16 sp1A;
    u8 *t;
    f32 *g;
    f32 r;

    sp1C = arg1[D_801BEC60[0x13]];
    if (D_8017DC40[0] < D_8017DC40[1]) {
        D_8017DC40[1] = D_8017DC40[0];
    }
    if (func_80126944() == 0) {
        g = &D_8021B0E0;
        *g += ((f32)(u32)D_8017DC40[1] - *g) / 8;
        sp1A = (s32)((*g / (f32)(u32)D_8017DC40[0]) * 8192.0f);
        r = (f32)((f64)*g + 0.5);
        if (((u32)r & 0xFFFF) != D_8017DC40[1]) {
            t = (u8 *)D_802170F4;
            if (t == NULL) {
                D_802170F4 = (s32)func_80005670(arg0, D_8021710C);
            }
            if (D_802170F4 != 0) {
                ((u8 *)D_802170F4)[0x90] = 0x32;
            }
        }
    } else if (func_80126944() == 1) {
        if (D_801BBBF0[0x1031] > 0) {
            D_8021B0E0 += ((f32)*(s16 *)(D_801BBBF0 + 0x44E) - D_8021B0E0) / 8;
            sp1A = (s32)((D_8021B0E0 / (f32)*(s16 *)(D_801BBBF0 + 0x44C)) * 8192.0f);
            *(s16 *)(D_801BBBF0 + 0x492) = (s16)(s32)((f64)D_8021B0E0 + 0.5);
        } else {
            return;
        }
    }
    func_80146CD4(sp1A, 0);
    func_80146BE0(sp1A, sp1C);
    if (func_80236BA4() == 0 || *(u8 *)&D_8021B0E4 == 0) {
        func_80147148(*(s32 *)(arg0 + 0x24), 0);
        D_802170F0 = 0;
        return;
    } else if (D_802170F0 == 0) {
        func_80147148(*(s32 *)(arg0 + 0x24), 1);
        D_802170F0 = 1;
        return;
    } else {
        return;
    }
}
