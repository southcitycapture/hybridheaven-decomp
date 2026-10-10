#include "context.h"

struct func_80005A04_Struct {
    struct func_80005A04_Struct *unk0;
    struct func_80005A04_Struct *unk4;
    struct func_80005A04_Struct *unk8;
    struct func_80005A04_Struct *unkC;
    u8 pad10[4];
    u32 unk14;
};

extern struct func_80005A04_Struct *D_8008D5D4;

void func_80005A04(void *a0, void *a1) {
    struct func_80005A04_Struct *arg1;
    struct func_80005A04_Struct *temp_v1;
    struct func_80005A04_Struct *temp_v0_2;
    struct func_80005A04_Struct *temp_v0_3;
    struct func_80005A04_Struct *temp_v0_4;
    u32 temp_v0;

    arg1 = a1;
    temp_v0 = arg1->unk14;
    if (((struct func_80005A04_Struct *) a0)->unk14 < temp_v0) {
        arg1->unk0 = a0;
        arg1->unk4 = ((struct func_80005A04_Struct *) a0)->unk4;
        arg1->unkC = ((struct func_80005A04_Struct *) a0)->unkC;
        ((struct func_80005A04_Struct *) a0)->unk4 = arg1;
        temp_v0_2 = arg1->unk4;
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk0 = arg1;
        }
        if (arg1->unkC != NULL) {
            temp_v0_3 = ((struct func_80005A04_Struct *) a0)->unkC;
            if (((struct func_80005A04_Struct *) a0) == temp_v0_3->unk8) {
                temp_v0_3->unk8 = arg1;
            }
        }
    } else {
loop_6:
        temp_v1 = ((struct func_80005A04_Struct *) a0)->unk0;
        if (temp_v1 != NULL && temp_v1->unk14 >= temp_v0) {
            a0 = temp_v1;
            goto loop_6;
        }
        arg1->unk0 = temp_v1;
        arg1->unk4 = a0;
        arg1->unkC = ((struct func_80005A04_Struct *) a0)->unkC;
        ((struct func_80005A04_Struct *) a0)->unk0 = arg1;
        temp_v0_4 = arg1->unk0;
        if (temp_v0_4 != NULL) {
            temp_v0_4->unk4 = arg1;
        }
        if (((struct func_80005A04_Struct *) a0) == D_8008D5D4) {
            *(struct func_80005A04_Struct **) &D_8008D5D0 = arg1;
        }
    }
}
