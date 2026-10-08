#include "context.h"

extern u8 D_801BBE1A[];

struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};

struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};

void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1) {
    struct func_802237B0_Struct *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk5C;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 2) {
        D_801BBE1A[6] = arg1;
        return;
    }
    D_801BBE1A[7] = arg1;
}
