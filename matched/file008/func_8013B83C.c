#include "common.h"

struct func_8013B83C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8013B83C_Obj {
    u8 pad[0x2C];
    struct func_8013B83C_Target *unk2C;
};

struct func_8013B83C_Inner {
    s16 pad[3];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
};

struct func_8013B83C_Mid {
    u8 pad[0x38];
    struct func_8013B83C_Inner *unk38;
};

struct func_8013B83C_Outer {
    u8 pad[0xC];
    struct func_8013B83C_Mid *unkC;
};

extern struct func_8013B83C_Obj *D_8008DA88[];

void func_8013B83C(struct func_8013B83C_Outer *arg0, s32 arg1) {
    struct func_8013B83C_Inner *temp_v0;

    temp_v0 = arg0->unkC->unk38;
    D_8008DA88[arg1]->unk2C->unk4 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    D_8008DA88[arg1]->unk2C->unk8 = (f32) ((f64) (f32) temp_v0->unk8 / 10.0);
    D_8008DA88[arg1]->unk2C->unkC = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    D_8008DA88[arg1]->unk2C->unk12 = temp_v0->unkC;
}
