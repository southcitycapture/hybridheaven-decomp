#include "context.h"

typedef struct func_801CD7B0_StructIn {
    u8 pad0[0x80];
    u8 unk80, unk81, unk82, unk83;
    u8 unk84, unk85, unk86, unk87;
    u8 pad88[0xC];
    u8 unk94;
} func_801CD7B0_StructIn;

typedef struct func_801CD7B0_StructOut {
    u8 pad0[0x4C];
    u8 unk4C, unk4D, unk4E, unk4F;
} func_801CD7B0_StructOut;

typedef struct func_801CD7B0_StructEntry {
    u8 pad0[0x30];
    func_801CD7B0_StructOut *unk30;
} func_801CD7B0_StructEntry;

void func_801CD7B0(func_801CD7B0_StructIn *arg0, func_801CD7B0_StructEntry **arg1, s32 arg2) {
    s32 pad;
    s16 sp2A;
    s16 sp28;
    s16 sp26;
    s16 temp_v0;
    s32 var_v1;
    func_801CD7B0_StructEntry **var_a0;
    func_801CD7B0_StructOut *temp_v0_2;

    sp2A = func_801CD500(arg0->unk80, arg0->unk84, arg2);
    sp28 = func_801CD500(arg0->unk81, arg0->unk85, arg2);
    sp26 = func_801CD500(arg0->unk82, arg0->unk86, arg2);
    temp_v0 = func_801CD500(arg0->unk83, arg0->unk87, arg2);
    var_v1 = 0;
    var_a0 = arg1;
    if ((s32) arg0->unk94 > 0) {
        do {
            temp_v0_2 = (*var_a0)->unk30;
            var_v1 += 1;
            var_a0++;
            temp_v0_2->unk4C = sp2A;
            temp_v0_2->unk4D = sp28;
            temp_v0_2->unk4E = sp26;
            temp_v0_2->unk4F = temp_v0;
        } while (var_v1 < (s32) arg0->unk94);
    }
}
