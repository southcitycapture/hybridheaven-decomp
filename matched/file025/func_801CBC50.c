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
typedef struct func_801C7D0C_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C7D0C_Struct;
typedef struct func_801CBC50_Inner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CBC50_Inner;
typedef struct func_801CBC50_Outer {
    u8 pad[0x30];
    func_801CBC50_Inner *unk30;
} func_801CBC50_Outer;


extern s32 D_801DAA20[];

typedef struct func_801CBC50_StructDelta {
    f32 z;
    f32 x;
    f32 y;
    f32 horizontalDistance;
} func_801CBC50_StructDelta;

void func_801CBC50(func_801C7D0C_Struct *arg0, func_801CBC50_Outer **arg1)
{
    func_801CBC50_StructDelta delta;
    func_801CA274_StructD *camera;
    f32 r;

    r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
    func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x472, D_801DAA20[((u32) (12.0f * r)) % 12U]);
    camera = D_801BBCD8->unk2C;
    delta.x = camera->unk3C - camera->unk30;
    delta.z = camera->unk44 - camera->unk38;
    (*arg1)->unk30->unk12 = ((s16) func_8001EF38(delta.x, delta.z) + 0x1000) & 0x1FFF;
    delta.horizontalDistance = func_8002FC20((delta.x * delta.x) + (delta.z * delta.z));
    delta.y = D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34;
    (*arg1)->unk30->unk10 = func_8001EF38(delta.y, delta.horizontalDistance) & 0x1FFF;
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= arg0->unkB2) {
        func_80005700((s32) arg0);
    }
}
