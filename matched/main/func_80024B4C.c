#include "context.h"

extern void func_80028EE0(s32, s32, s32, s32 *);
extern void func_80030770(s32, void *, u8);
extern s32 D_800479CC;
extern s32 D_800479D0;
extern s32 D_800498F0;
extern u8 D_800CBAB4;
extern u8 D_800CBBE0[];
extern s32 D_800CBE08;

void func_80024B4C(void) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_a2;
    s32 sp20;

    if (((u8 *)D_800CBDA4)[0x10] != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, 0);
    }
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1 * 0x28;
    if (sp20 == 0) {
        sp20 = D_800479CC;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 3, &sp20);
    temp_v1_2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1_2 << 7;
    if (sp20 == 0) {
        sp20 = D_800479D0;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 4, &sp20);
    temp_a2 = ((u8 *)D_800CBDA4)[0x10];
    if (temp_a2 != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, temp_a2);
    }
}
