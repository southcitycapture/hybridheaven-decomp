#include "context.h"

typedef struct func_80238E60_Struct94 {
    u8 pad[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_80238E60_Struct94;

typedef struct func_80238E60_Struct98 {
    u8 pad[0x38];
    s32 unk38;
} func_80238E60_Struct98;

typedef struct func_80238E60_Struct {
    u8 pad[0x94];
    func_80238E60_Struct94 *unk94;
    func_80238E60_Struct98 *unk98;
    u8 pad2[0xA2 - 0x9C];
    s8 unkA2;
    u8 pad3;
    s8 unkA4;
    s8 unkA5;
    u8 pad4[0xAC - 0xA6];
    s16 unkAC;
} func_80238E60_Struct;

extern void func_80239A5C();

void func_80238E60(func_80238E60_Struct *arg0, s32 arg1) {
    func_80238E60_Struct98 *sp24;
    s32 pad;
    func_80238E60_Struct94 *var_a3;
    s16 temp_a1;
    s16 temp_v0;
    s8 prev;

    sp24 = arg0->unk98;
    var_a3 = arg0->unk94;
    prev = arg0->unkA5;
    temp_a1 = var_a3->unk8;
    if ((temp_a1 >= 0x29) && (arg0->unkA4 == 3) && (D_802407E0[2] == 0)) {
        arg0->unkA2 = 1;
        arg0->unkA5 = 2;
    } else {
        temp_v0 = var_a3->unk6;
        if ((temp_v0 < -0x28) && (D_802407E0[0] == 0)) {
            arg0->unkA2 = 1;
            arg0->unkA5 = 0;
        } else if (((temp_v0 >= 0x29) || ((temp_a1 < -0x28) && ((arg0->unkA5 == 1) || (arg0->unkA2 == 0)))) && (D_802407E0[1] == 0)) {
            arg0->unkA2 = 1;
            arg0->unkA5 = 1;
        }
    }
    if (arg0->unkA2 != 0) {
        if (arg0->unkA5 ^ prev) {
            func_80020744(0x300);
        }
        func_80235C1C((func_80235C1C_Struct *)arg0);
    }
    if ((var_a3->unk4 & 0x8000) && (arg0->unkA2 != 0)) {
        func_80020744(0x104);
        arg0->unkAC = 0;
        if ((arg0->unkA5 == 0) && (func_80236348((struct func_80236348_StructArg *)arg0) != 0)) {
            func_800058DC(arg0, func_802393F8);
            return;
        }
        if ((arg0->unkA5 == 2) && (((u32) sp24->unk38 >> 0x1F) == 0)) {
            func_800058DC(arg0, func_80239048);
            return;
        }
        func_800058DC(arg0, func_80239A5C);
    }
}
