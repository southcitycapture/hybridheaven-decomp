#include "context.h"

extern void func_800058DC(void *, void (*)(void), s32);
extern void func_801FE700(void);

struct func_801FE5F0_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};

struct func_801FE5F0_Sub {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
};

struct func_801FE5F0_Obj {
    u8 pad0[0x30];
    struct func_801FE5F0_Sub *unk30;
};

void func_801FE5F0(struct func_801FE5F0_Struct *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 temp_v1;
    s16 temp_v0_3;

    var_a2 = 2;
    var_a3 = 2;
    do {
        temp_v1 = var_a3 * 4;
        temp_v0 = ((u8 *) arg0)[0xB1];
        var_a2 = (var_a2 + 1) & 0xFF;
        var_a3 = var_a2;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkA = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk9 = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk8 = temp_v0;
        temp_v0 = ((u8 *) arg0)[0xB1];
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkE = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkD = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkC = temp_v0;
    } while (var_a2 < 0xA);
    temp_v0_3 = arg0->unkB0;
    if (temp_v0_3 == 0) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_801FE700, var_a2);
        return;
    }
    arg0->unkB0 = temp_v0_3 - 4;
}
