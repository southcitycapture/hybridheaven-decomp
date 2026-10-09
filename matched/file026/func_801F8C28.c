#include "context.h"

extern f32 D_801FD3F0;

struct func_801F8C28_Tgt {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F8C28_S3 {
    u8 pad0[0x2C];
    struct func_801F8C28_Tgt *unk2C;
};

struct func_801F8C28_S2 {
    u8 pad0[0x24];
    struct func_801F8C28_S3 *unk24;
};

struct func_801F8C28_S1 {
    u8 pad0[0x8];
    void *unk8;
};

s32 func_801F8C28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01607A5F) != 0) {
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk4 = 16.5f;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unkC = D_801FD3F0;
        ((struct func_801F8C28_S2 *)((struct func_801F8C28_S1 *)D_801DAB14->unk8)->unk8)->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A8000C, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}
