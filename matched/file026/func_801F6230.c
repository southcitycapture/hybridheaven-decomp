#include "context.h"

extern struct func_801F6914_Struct1 *D_8038D8D0;
extern f32 D_801FD30C;

struct func_801F6230_Struct1 {
    u8 pad0[0x4];
    void *unk4;
};

struct func_801F6230_Struct2 {
    u8 pad0[0x30];
    f32 *unk30;
};

s32 func_801F6230(s32 arg0, s32 arg1) {
    f32 *temp_v0;

    temp_v0 = ((struct func_801F6230_Struct2 *) ((struct func_801F6230_Struct1 *) D_8038D8D0)->unk4)->unk30;
    temp_v0[2] = temp_v0[2] + D_801FD30C;
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        ((struct func_801F6230_Struct2 *) ((struct func_801F6230_Struct1 *) D_8038D8D0)->unk4)->unk30[2] = 80.0f;
        return 4;
    }
    return 3;
}
