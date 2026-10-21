#include "context.h"

struct func_80241068_Struct;
void func_80241068(struct func_80241068_Struct *arg0, s32 arg1);


struct func_80240F7C_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80240F7C_StructObj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_80240F7C_StructInner *unk30;
};

struct func_80240F7C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_80240F7C(struct func_80240F7C_Struct *arg0, struct func_80240F7C_StructObj **arg1) {
    u16 temp_v0_5;
    u8 temp_a0;
    u8 temp_a0_2;
    struct func_80240F7C_StructObj *temp_v0;
    struct func_80240F7C_StructObj *temp_v0_2;
    struct func_80240F7C_StructObj *temp_v0_3;
    struct func_80240F7C_StructObj *temp_v0_4;
    struct func_80240F7C_StructInner *temp_v1;
    struct func_80240F7C_StructInner *temp_v1_2;

    temp_v0 = arg1[0];
    if (temp_v0->unk22 != 0) {
        temp_v1 = temp_v0->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 4);
        temp_v0 = arg1[0];
        temp_a0 = temp_v0->unk30->unk4B;
        if ((s32) temp_a0 < 4) {
            temp_v0->unk22 = 0;
            arg1[1]->unk22 = 0;
        } else {
            arg1[1]->unk30->unk4B = temp_a0;
        }
    }
    temp_v0 = arg1[2];
    if (temp_v0->unk22 != 0) {
        temp_v1_2 = temp_v0->unk30;
        temp_v1_2->unk4B = (u8) (temp_v1_2->unk4B - 8);
        temp_v0 = arg1[2];
        temp_a0_2 = temp_v0->unk30->unk4B;
        if ((s32) temp_a0_2 < 8) {
            temp_v0->unk22 = 0;
            arg1[3]->unk22 = 0;
        } else {
            arg1[3]->unk30->unk4B = temp_a0_2;
        }
    }
    if (arg0->unk3C++ >= 0x4B) {
        func_800058DC(arg0, &func_80241068);
    }
}
