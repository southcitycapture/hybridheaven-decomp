#include "context.h"

struct func_802465F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_802465F8_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void *func_8012C4D0(s32, struct func_802465F8_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern struct func_802465F8_Struct D_802467E8;

void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_802465F8_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467E8, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}
