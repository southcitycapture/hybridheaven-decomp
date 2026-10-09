#include "context.h"

struct func_800268C0_Struct {
    struct func_800268C0_Struct *unk0;
    struct func_800268C0_Struct *unk4;
};

void func_800268C0(struct func_800268C0_Struct *arg0, struct func_800268C0_Struct **arg1) {
    struct func_800268C0_Struct *temp_v0;

    arg0->unk0 = *arg1;
    arg0->unk4 = (struct func_800268C0_Struct *) arg1;
    temp_v0 = *arg1;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = arg0;
    }
    *arg1 = arg0;
}
