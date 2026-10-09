#include "context.h"

struct func_8024CF18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_8024CF18_Obj {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[3];
    s32 unk94;
};

extern struct func_8024CF18_Obj *func_8012C4D0(s32, struct func_8024CF18_Struct, s32);
extern s32 D_801BBC2C;
extern struct func_8024CF18_Struct D_80258DB8;

void func_8024CF18(s32 arg0, u8 arg1) {
    struct func_8024CF18_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258DB8, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg1;
        temp_v0->unk94 = arg0;
    }
}
