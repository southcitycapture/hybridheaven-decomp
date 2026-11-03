#include "common.h"
struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};
extern struct func_80241094_StructA *D_801BBCD0;
extern f32 func_8001EAD0(s16);
extern f32 func_8002FC20(f32);


struct func_80241910_StructA {
    u8 pad0[0x2C];
    struct func_80241910_StructB *unk2C;
};
struct func_80241910_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[0x20];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    u8 pad40[4];
    f32 unk44;
};
extern s16 func_8001EF38(f32, f32);
extern void func_8002096C(s32, s32, s16);
extern struct func_80241910_StructA *D_801BBCD8;

void func_80241910(f32 arg0, f32 arg1, f32 arg2) {
    s16 sp18[8];
    f32 x;
    f32 y;
    f32 z;

    sp18[0] = func_8001EF38(D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38);
    func_8002096C(0x189, 2, (s16)(s32)(func_8001EAD0((s16)((s16)(sp18[0] - func_8001EF38(arg0 - ((struct func_80241910_StructB *)D_801BBCD0->unk2C)->unk4, arg2 - ((struct func_80241910_StructB *)D_801BBCD0->unk2C)->unkC)) & 0x1FFF)) * 127.0f));
    x = arg0 - D_801BBCD8->unk2C->unk30;
    y = arg1 - D_801BBCD8->unk2C->unk34;
    z = arg2 - D_801BBCD8->unk2C->unk38;
    func_8002096C(0x189, 1, (s16)(s32)(((func_8002FC20(x * x + y * y + z * z) - 200.0f) / 250.0f) * -64.0f));
}
