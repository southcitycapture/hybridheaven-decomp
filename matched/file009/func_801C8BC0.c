#include "common.h"
extern u8 D_801BBBF0[];


struct func_801C8BC0_StructObj {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801C8BC0_Node {
    u8 pad[0x30];
    struct func_801C8BC0_StructObj *unk30;
};

void func_801C8BC0(s32 arg0, struct func_801C8BC0_Node **arg1)
{
    s32 temp_v1;
    s8 var_v0;
    struct func_801C8BC0_Node **temp_a0;
    u8 *temp_a2;
    u8 *base;

    base = D_801BBBF0;
    for (var_v0 = 0; var_v0 < 0x10; var_v0++) {
        temp_v1 = var_v0 * 4;
        temp_a0 = (struct func_801C8BC0_Node **) ((u8 *) arg1 + temp_v1);
        temp_a2 = base + temp_v1;
        (*temp_a0)->unk30->unk4 = *(f32 *) (temp_a2 + 0xE00);
        (*temp_a0)->unk30->unk8 = *(f32 *) (temp_a2 + 0xE40);
        (*temp_a0)->unk30->unkC = *(f32 *) (temp_a2 + 0xE80);
    }
}
