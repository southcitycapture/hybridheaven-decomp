#include "context.h"

struct func_801DAEE8_StructP {
    u8 pad0[0x90];
    u8 unk90;
};
struct func_801DAEE8_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0xE0 - 0x34];
    struct func_801DAE70_StructB *unkE0;
    u8 padE4[0x198 - 0xE4];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1A4[0x230 - 0x1A4];
    u8 unk230;
    u8 pad231;
    u16 unk232;
    u8 pad234[0x35A - 0x234];
    u8 unk35A;
    u8 pad35B[0x374 - 0x35B];
    f32 unk374;
    f32 unk378;
    f32 unk37C;
    u8 pad380[0x38C - 0x380];
    struct func_801DAEE8_StructP *unk38C;
};
struct func_801DAEE8_StructH {
    u8 pad0[0x1CA];
    s16 unk1CA;
    s16 unk1CC;
    u16 unk1CE;
};
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern struct func_801DB190_G D_800892B0;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108634(f32, f32, f32);

#define G ((struct func_801DAEE8_StructG *)D_801BBBF0)
#define H ((struct func_801DAEE8_StructH *)&D_800892B0)

void func_801DAEE8(s32 arg0, s32 arg1) {
    f32 sp3C;
    f32 sp38;
    f32 fv1;
    f32 fa1;

    if (func_80108634(G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
    }
    fa1 = G->unkE0->unk2C->unk8;
    fv1 = G->unkE0->unk2C->unkC;
    sp3C = G->unkE0->unk2C->unk4;
    G->unkE0->unk2C->unk8 = fa1 - 2.0f;
    if (func_8010843C(sp3C, fa1, fv1, G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
    }
    sp3C = G->unkE0->unk2C->unk4;
    sp38 = G->unkE0->unk2C->unk8;
    fv1 = G->unkE0->unk2C->unkC;
    G->unk230 = 0;
    if (H->unk1CE & 0xF00) {
        G->unk230 = 1;
        arg0 = (s16)(func_8001EF38((f32)H->unk1CC, (f32)-H->unk1CA) - 0x800);
        arg1 = G->unk232;
        arg1 = (arg0 + arg1) & 0x1FFF;
        G->unkE0->unk2C->unk12 = (u16)(0x800 - arg1) & 0x1FFF;
        G->unkE0->unk2C->unk4 += func_8001EB64(arg1) * (f32)2.0;
        G->unkE0->unk2C->unkC += func_8001EAD0(arg1) * (f32)2.0;
    }
    if (func_8010843C(sp3C, sp38, fv1, G->unkE0->unk2C->unk4, G->unkE0->unk2C->unk8, G->unkE0->unk2C->unkC) != 0) {
        G->unkE0->unk2C->unk4 = G->unk374;
        G->unkE0->unk2C->unk8 = G->unk378;
        G->unkE0->unk2C->unkC = G->unk37C;
        if (G->unk35A == 6 || G->unk35A == 7) {
            G->unk38C->unk90 = G->unk35A;
            G->unkE0->unk2C->unk4 = G->unk198;
            G->unkE0->unk2C->unk8 = G->unk19C;
            G->unkE0->unk2C->unkC = G->unk1A0;
            G->unkE0->unk2C->unk12 = G->unk32;
        }
    }
}
