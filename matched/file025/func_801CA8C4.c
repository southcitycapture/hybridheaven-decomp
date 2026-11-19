#include "common.h"
#define EX_777 extern
#define EX_778 extern
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
typedef struct func_801CA628_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CA628_Inner;
typedef struct func_801CA628_Outer {
    u8 pad[0x30];
    func_801CA628_Inner *unk30;
} func_801CA628_Outer;


extern s32 D_801DA960[];

void func_801CA8C4(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1) {
    f32 dy;
    f32 dx;
    f32 dz;
    f32 length;
    u32 count;
    func_801CA274_StructD *cam;

    count = arg0->unkB0++ % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DA960[count]);
    cam = D_801BBCD8->unk2C;
    dx = cam->unk3C - cam->unk30;
    dz = cam->unk44 - cam->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(dx, dz) + 0x1000) & 0x1FFF;
    length = func_8002FC20(dx * dx + dz * dz);
    dy = D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34;
    (*arg1)->unk30->unk10 = func_8001EF38(dy, length) & 0x1FFF;
    if ((s32)arg0->unkB2 < (s32)arg0->unkB0) {
        func_80005700((s32)arg0);
    }
}
