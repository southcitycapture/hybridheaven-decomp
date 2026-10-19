#include "context.h"

struct func_801EC414_S3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC414_S2 {
    u8 pad0[0x2C];
    struct func_801EC414_S3 *unk2C;
};
struct func_801EC414_S1 {
    u8 pad0[0x24];
    struct func_801EC414_S2 *unk24;
};
struct func_801EC414_S0 {
    u8 pad0[8];
    struct func_801EC414_S1 *unk8;
};
#define P414 ((struct func_801EC414_S0 *)D_801DAB14)
extern f32 D_801FC860;
extern f32 D_801FC864;

s32 func_801EC414(s32 arg0, s32 arg1) {
    if (P414->unk8->unk24 != NULL) {
    if (D_801FB4C0 != 0) {
    if (D_801FB4C0 == 1) goto c1;
    if (D_801FB4C0 == 2) goto c2;
    return 2;
    }
c0:
    P414->unk8->unk24->unk2C->unk4 = 5120.0f;
    P414->unk8->unk24->unk2C->unk8 = 0.0f;
    P414->unk8->unk24->unk2C->unkC = 0.0f;
    P414->unk8->unk24->unk2C->unk12 = 0;
    D_801FB4C0 = 1;
    goto end;
c1:
    if (func_801C0B8C(0x0169A220)) {
        func_801CC470(0, 0x0168001C, 0, 0x100, 1.0f);
        D_801FB4C0 = 2;
    }
    goto end;
c2:
    if (func_801C0B8C(0x01A9B860)) {
        P414->unk8->unk24->unk2C->unk4 = D_801FC860;
        P414->unk8->unk24->unk2C->unk8 = 25.0f;
        P414->unk8->unk24->unk2C->unkC = D_801FC864;
        P414->unk8->unk24->unk2C->unk12 = 0x1800;
        return 3;
    }
    }
end:
    return 2;
}
