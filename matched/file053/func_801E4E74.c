#include "common.h"
struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};
extern struct func_801E5188_Struct0 *D_801DAB14;
struct func_801E1EDC_S4 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801E1EDC_S3 { u8 pad0[0x2C]; struct func_801E1EDC_S4 *unk2C; };
struct func_801E1EDC_S2 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; u8 pad0c[0x18]; struct func_801E1EDC_S3 *unk24; };
struct func_801E1EDC_S1 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; };
#define G ((struct func_801E1EDC_S1 *)D_801DAB14)
s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
struct func_801E4FE0_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern s32 func_801CE2D0(s32 a0, s32 a1);
extern f32 D_801E9964;
extern f32 D_801E9968;
extern f32 D_801E996C;
extern f32 D_801E9970;

s32 func_801E4E74(s32 arg0, s32 arg1) {
    s32 t;
    f32 fraction;
    f32 x;
    f32 z;
    struct func_801E4FE0_Struct3 *p;

    t = func_801C1134(4, 0);
    fraction = (u32)t / 60.0f;
    x = 3.9f * fraction + -4.9f;
    z = -24 * fraction + -454.2f;
    G->unk8->unk24->unk2C->unk4 = x;
    G->unk8->unk24->unk2C->unkC = z;
    if (func_801C1088(4, 0, 0x3C) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x4100045, 0, 0, 5.0f);
        return 0x29;
    }
    if (func_801CE2D0(0x1B8001B, 0xC) != 0 || func_801CE2D0(0x1B8001B, 0x1E) != 0) {
        p = (struct func_801E4FE0_Struct3 *)G->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67B, D_801E9970, 1.0f);
    }
    return 0x28;
}
