#include "context.h"
void func_80254BFC(func_80251820_Ctx *arg0, u16 arg1);
extern void func_801518D4(s32, s32, s32);
typedef struct func_80254B3C_S { u8 pad[0x24]; struct func_80254B3C_T *unk24; } func_80254B3C_S;
typedef struct func_80254B3C_T { u8 pad[0x30]; u8 *unk30; } func_80254B3C_T;

void func_80254B3C(func_80251820_Ctx *arg0, func_80254B3C_S *arg1) {
    s32 sp24;
    u8 *p;

    sp24 = arg0->unk90++;
    func_802577B4(arg0, arg1);
    if (sp24 >= 0xF) {
        if (sp24 == 0xF) {
            func_80020718(0x192);
        }
        p = arg1->unk24->unk30;
        if (p[0x4B] < 0x4C) {
            p[0x4B] += 2;
        }
    }
    if (sp24 >= 0x5A) {
        arg0->unk90 = 0;
        *(f32 *)(D_801BBDA0 + 0x3C) = 166.0f;
        func_801518D4(0, 5, 0xF);
        func_800058DC(arg0, func_80254BFC);
    }
}
