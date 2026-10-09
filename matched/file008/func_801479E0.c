#include "context.h"

struct func_801479E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_801479E0_Obj {
    u8 pad[0x10];
    s32 unk10;
    u8 pad2[0x7C];
    s32 unk90;
};

void *func_8012C4D0(s32, struct func_801479E0_Struct, s32);
extern struct func_801479E0_Struct D_80181A70;
extern s32 D_801BBC2C;

s32 func_801479E0(s32 arg0) {
    struct func_801479E0_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80181A70, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk10 = 1;
        return 1;
    }
    return 0;
}
