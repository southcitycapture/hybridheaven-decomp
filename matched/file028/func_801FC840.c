#include "context.h"
/* starting point: func_801FC970 (file028), whose assembly is 97% the same as this function's */

extern s32 func_801C0B8C(u64);
extern f32 D_80208DB0;

struct func_801FC840_StructLeaf {
    u8 pad[0x10];
    s16 unk10;
};
struct func_801FC840_StructMid {
    u8 pad[0x30];
    struct func_801FC840_StructLeaf *unk30;
};
struct func_801FC840_StructRoot {
    u8 pad[0xC];
    struct func_801FC840_StructMid *unk10;
};

s32 func_801FC840(s32 arg0, s32 arg1) {
    struct func_801FC840_StructLeaf *temp_v0;

    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        temp_v0 = ((struct func_801FC840_StructRoot *)D_8038D8D0)->unk10->unk30;
        temp_v0->unk10 += (s16)((2048.0f * D_80208DB0) / 90.0f);
    }
    return 2;
}
