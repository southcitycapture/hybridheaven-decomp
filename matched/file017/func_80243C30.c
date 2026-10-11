#include "context.h"

struct func_80243C30_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

extern s32 D_801BBC2C;
extern struct func_80241790_Vals D_802585D4;

void func_80243C30(f32 arg0, f32 arg1, f32 arg2) {
    struct func_80243C30_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802585D4, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
    }
}
