#include "context.h"

s32 func_801E4060(s32 arg0, s32 arg1) {
    struct func_801E4060_StructD {
        u8 pad0[0x4];
        f32 unk4;
        f32 unk8;
        f32 unkC;
        u8 pad10[0x2];
        s16 unk12;
    };
    struct func_801E4060_StructN {
        u8 pad0[0x8];
        struct func_801E4060_StructN *unk8;
        u8 pad0C[0x18];
        struct func_801E4060_StructN *unk24;
        u8 pad28[0x4];
        struct func_801E4060_StructD *unk2C;
    };
    extern f32 D_801E8CAC, D_801E8CB0, D_801E8CB4, D_801E8CB8, D_801E8CBC;
    extern f32 D_801E8CC0, D_801E8CC4, D_801E8CC8;
#define P ((struct func_801E4060_StructN *)D_801DAB14)
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E8CAC);
    func_8038BD50(D_801E8CB0, D_801E8CB4, -3.9f);
    D_8038BD88(D_801E8CB8, D_801E8CBC, -35.9f);
    func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
    P->unk8->unk8->unk8->unk24->unk2C->unk4 = -217.0f;
    P->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    P->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8CC0;
    P->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC8;
    func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E8CC4;
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8CC8;
    P->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(3, 0x0320001A, 0, 0x100, 10.0f);
    return 5;
#undef P
}
