#include "common.h"
#define EX_776 extern
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;
typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;
extern struct func_801CA274_StructE *D_801BBCD8;
extern s32 D_801DA718;
extern void func_80005700(s32 arg0);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern void func_8012CF8C(void *, u8 *, s32, s32);
typedef struct func_801CBC50_Inner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CBC50_Inner;
typedef struct func_801CBC50_Outer {
    u8 pad[0x30];
    func_801CBC50_Inner *unk30;
} func_801CBC50_Outer;


typedef struct func_801CBFE8_StructArg {
    u8 pad[0x90];
    u16 unk90;
    u8 pad92[0x16];
    u16 unkA8;
    u16 unkAA;
} func_801CBFE8_StructArg;

extern s32 D_801DAA60[];

void func_801CBFE8(func_801CBFE8_StructArg *arg0, func_801CBC50_Outer **arg1) {
    s16 yaw;
    f32 dx;
    f32 dz;
    f32 dist;
    u32 index;
    func_801CA274_StructD *temp;

    index = (u32)(((f32)(u32)arg0->unkA8 / (f32)(u32)arg0->unkAA) * 20.0f) % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DAA60[index]);
    dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    yaw = func_8001EF38(dx, dz) + 0x1000;
    (*arg1)->unk30->unk12 = yaw & 0x1FFF;
    dist = func_8002FC20(dx * dx + dz * dz);
    temp = D_801BBCD8->unk2C;
    (*arg1)->unk30->unk10 = func_8001EF38(temp->unk40 - temp->unk34, dist) & 0x1FFF;
    arg0->unkA8++;
    if (arg0->unkA8 >= (s32)arg0->unkAA) {
        if (arg0->unk90 != 0) {
            func_80005700((s32)arg0);
        } else {
            arg0->unkA8 = 0;
        }
    }
    if (D_801DA718 != 0) {
        func_80005700((s32)arg0);
    }
}
