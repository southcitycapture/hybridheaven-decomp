#include "context.h"

struct func_80242390_StructBuf {
    f32 f0;
    f32 f4;
    f32 f8;
    s16 s0;
    s16 pad;
    s32 w;
    f32 f10;
    s16 s1;
    s16 s2;
    s32 pad2;
};
struct func_80242390_StructC {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
};
struct func_80242390_StructO {
    u8 pad0[0x2C];
    struct func_80242390_StructC *unk2C;
};
extern s32 func_800178E8();
void func_802424C0(s32 arg0, s32 arg1);
extern void func_800058DC(void *, void *);
extern void func_801C2F0C(s32, s16 *);
extern u8 D_8024A4A4[];

void func_80242390(s32 arg0, s32 arg1) {
    struct func_80242390_StructBuf b;

    if (func_800178E8() != 0) {
        func_8011AAF4(D_8024A4A4, 0x1FC, arg0, 0, 1, 0.0f, 14.0f, 52.0f, 278.0f, 0.0f, 35.0f, 26.0f, 206.0f, 0.0f, 35.0f, -1, -1);
        b.f0 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unk4;
        b.f4 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unkC + 30.0f;
        b.s0 = 0x1100;
        b.w = 0x0168003E;
        b.s1 = 0;
        b.s2 = 0x96;
        b.f8 = 0.0f;
        b.f10 = 1.0f;
        func_801C2F0C(2, (s16 *)&b);
        func_800058DC((void *)arg0, func_802424C0);
    }
}
