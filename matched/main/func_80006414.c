#include "context.h"

struct func_80006414_Struct {
    struct func_80006414_Struct *unk0;
    struct func_80006414_Struct *unk4;
    struct func_80006414_Struct *unk8;
    struct func_80006414_Struct *unkC;
    u8 pad10[0x14];
    u32 unk24;
};

void func_80006414(struct func_80006414_Struct *arg0, struct func_80006414_Struct *arg1) {
    struct func_80006414_Struct *temp_v1;
    struct func_80006414_Struct *temp_v0;
    u32 temp_v0_key;

    temp_v0_key = arg1->unk24;
    if (arg0->unk24 < temp_v0_key) {
        arg1->unk0 = arg0;
        arg1->unk4 = arg0->unk4;
        arg1->unkC = arg0->unkC;
        arg0->unk4 = arg1;
        temp_v0 = arg1->unk4;
        if (temp_v0 != NULL) {
            temp_v0->unk0 = arg1;
        }
        if (arg1->unkC != NULL) {
            temp_v0 = arg0->unkC;
            if (arg0 == temp_v0->unk8) {
                temp_v0->unk8 = arg1;
            }
        }
    } else {
        for (;;) {
            temp_v1 = arg0->unk0;
            if (temp_v1 == NULL || temp_v1->unk24 < temp_v0_key) {
                break;
            }
            arg0 = temp_v1;
        }
        arg1->unk0 = temp_v1;
        arg1->unk4 = arg0;
        arg1->unkC = arg0->unkC;
        arg0->unk0 = arg1;
        temp_v0 = arg1->unk0;
        if (temp_v0 != NULL) {
            temp_v0->unk4 = arg1;
        }
    }
}
