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


struct func_801CA510_Node {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
};

struct func_801CA510_Inner {
    u8 pad0[0x30];
    struct func_801CA510_Node *unk30;
};

struct func_801CA510_Outer {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};

struct func_801CA510_Vec {
    f32 w;
    f32 z;
    f32 x;
    f32 y;
};

extern s32 D_801DA900[];

void func_801CA510(struct func_801CA510_Outer *arg0, struct func_801CA510_Inner **arg1) {
    struct func_801CA510_Vec d;
    u32 idx;

    idx = arg0->unkB0++ % 20U;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, D_801DA900[idx]);
    d.x = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
    d.z = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(d.x, d.z) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(d.x * d.x + d.z * d.z)) & 0x1FFF;
    if ((s32)arg0->unkB2 < (s32)arg0->unkB0) {
        func_80005700((s32)arg0);
    }
}
