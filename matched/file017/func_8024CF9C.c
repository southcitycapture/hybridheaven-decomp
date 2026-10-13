#include "context.h"

struct func_8024CF9C_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

extern s32 D_801BBC2C;
extern struct func_8024CF18_Struct D_80258DA4;

void func_8024CF9C(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8024CF9C_Obj *temp_v0;

    temp_v0 = (struct func_8024CF9C_Obj *) func_8012C4D0(D_801BBC2C, D_80258DA4, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
    }
}
