#include "common.h"
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;
extern struct func_801CA274_StructE *D_801BBCD8;
extern void func_80005700(s32 arg0);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *, u8 *, s32, s32);


typedef struct func_801CAC78_StructObj {
    u8 pad[0xB0];
    u16 unkB0;
    u16 unkB2;
} func_801CAC78_StructObj;

typedef struct func_801CAC78_StructSub {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CAC78_StructSub;

typedef struct func_801CAC78_StructHold {
    u8 pad[0x30];
    func_801CAC78_StructSub *unk30;
} func_801CAC78_StructHold;

typedef struct func_801CAC78_StructDelta {
    f32 z;
    f32 x;
    f32 y;
    f32 horizontal;
} func_801CAC78_StructDelta;

extern s32 D_801DA9C0[];

void func_801CAC78(func_801CAC78_StructObj *arg0, func_801CAC78_StructHold **arg1)
{
    func_801CAC78_StructDelta delta;
    f32 r;
    s16 yaw;
    u32 phase;

    r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
    phase = (u32) (8.0f * r);
    func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x471, D_801DA9C0[phase & 7]);
    delta.x = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    delta.z = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    yaw = func_8001EF38(delta.x, delta.z);
    (*arg1)->unk30->unk12 = (yaw + 0x1000) & 0x1FFF;
    delta.horizontal = func_8002FC20((delta.x * delta.x) + (delta.z * delta.z));
    delta.y = D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34;
    (*arg1)->unk30->unk10 = func_8001EF38(delta.y, delta.horizontal) & 0x1FFF;
    arg0->unkB0++;
    if (arg0->unkB0 >= arg0->unkB2) {
        func_80005700((s32) arg0);
    }
}
