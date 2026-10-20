#include "context.h"

typedef struct func_801CD668_StructIn {
    u8 pad0[0x78];
    u8 unk78, unk79, unk7A, unk7B;
    u8 unk7C, unk7D, unk7E, unk7F;
    u8 pad80[0x14];
    u8 unk94;
} func_801CD668_StructIn;

typedef struct func_801CD668_StructOut {
    u8 pad0[0x48];
    u8 unk48, unk49, unk4A, unk4B;
} func_801CD668_StructOut;

typedef struct func_801CD668_StructEntry {
    u8 pad0[0x30];
    func_801CD668_StructOut *unk30;
} func_801CD668_StructEntry;

void func_801CD668(func_801CD668_StructIn *arg0, func_801CD668_StructEntry **arg1, s32 arg2) {
    volatile u8 pad[8];
    u8 sp27;
    u8 sp26;
    u8 sp25;
    s32 var_a0;
    u8 temp_v0;
    func_801CD668_StructEntry **var_a1;
    func_801CD668_StructEntry *temp_t7;
    func_801CD668_StructOut *temp_v1;

    sp27 = func_801CD500(arg0->unk78, arg0->unk7C, arg2);
    sp26 = func_801CD500(arg0->unk79, arg0->unk7D, arg2);
    sp25 = func_801CD500(arg0->unk7A, arg0->unk7E, arg2);
    temp_v0 = func_801CD500(arg0->unk7B, arg0->unk7F, arg2);
    var_a0 = 0;
    if ((s32)arg0->unk94 > 0) {
        var_a1 = arg1;
        do {
            temp_v1 = (*var_a1)->unk30;
            var_a0 += 1;
            var_a1 += 1;
            temp_v1->unk48 = sp27;
            temp_v1->unk49 = sp26;
            temp_v1->unk4A = sp25;
            temp_v1->unk4B = temp_v0;
        } while (var_a0 < (s32)arg0->unk94);
    }
}
