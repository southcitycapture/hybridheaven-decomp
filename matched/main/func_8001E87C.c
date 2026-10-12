#include "context.h"

extern s16 D_80089354;
void func_80006214(s32);
extern void func_80005700();
extern void func_801170DC(s32 arg0);

struct func_8001E87C_Sub {
    u8 pad[0xB];
    s8 unkB;
    u8 pad2[4];
    s16 unk10;
};

struct func_8001E87C_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_8001E87C_Sub *unk30;
};

void func_8001E87C(s32 arg0, struct func_8001E87C_Struct **arg1) {
    s32 var_v0;

    *(u16 *) ((u8 *) &D_801BBBF0 + 0x158) = (u16) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) - 1);
    D_80089354 = 0;
    if (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) != 0) {
        func_80006214(arg0);
        (*arg1)->unk30->unk10 = 0x1002;
        (*arg1)->unk30->unkB = (s8) ((s32) (*(u16 *) ((u8 *) &D_801BBBF0 + 0x158) * 0xFF) / (s32) *(u16 *) ((u8 *) &D_801BBBF0 + 0x154));
        return;
    }
    (*arg1)->unk22 = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x164) = 0;
    *(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) = (u8) (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15D) & 0xF);
    func_80005700();
    *(s32 *) ((u8 *) &D_801BBBF0 + 0x160) = 0;
    if (*(u8 *) ((u8 *) &D_801BBBF0 + 0x15E) != 0) {
        var_v0 = 0x80;
    } else {
        var_v0 = 4;
    }
    func_801170DC(var_v0 & 0xFFFF);
}
