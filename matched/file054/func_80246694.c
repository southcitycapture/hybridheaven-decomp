#include "context.h"

struct func_80246694_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern s32 D_801BBC2C;
extern struct func_802465F8_Struct D_802467FC;

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_80246694_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467FC, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}
