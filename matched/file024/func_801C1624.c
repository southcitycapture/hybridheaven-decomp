#include "context.h"
extern s32 D_801CC8AC;
extern s32 D_801CC8B0;
extern u8 D_801CCA20[];
extern u8 D_801CEB50[];
extern void func_801C1A30();
extern void func_801C1764();

void func_801C1624(s32 arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    func_80005700(D_801CC8AC);
    func_80005700(D_801CC8B0);
    D_801CC8AC = 0;
    D_801CC8B0 = 0;
    func_8011AAF4(D_801CEB50, 0x22B, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
    D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
    D_801CC8B8 = func_80005670(arg0, D_801CCA20);
    func_801C125C(-3);
    func_801C1160();
    func_800058DC(arg0, func_801C1764);
}
