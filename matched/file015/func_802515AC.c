#include "context.h"

struct func_802515AC_Struct {
    u8 pad[0x92];
    u16 unk92;
};

struct func_802515AC_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_802515AC_Node {
    u8 pad[0x2C];
    struct func_802515AC_Vec *unk2C;
};

struct func_802515AC_Root {
    u8 pad[0x24];
    struct func_802515AC_Node *unk24;
};

extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_8025A1FC;

void func_802515AC(struct func_802515AC_Struct *arg0) {
    s32 temp_v0;
    s32 sp28;
    struct func_802515AC_Vec *temp_v1;

    if (!((s32) arg0->unk92 % 2)) {
        sp28 = func_8012C6B4(0x8C);
        temp_v0 = func_8012C6B4(0x8C);
        temp_v1 = ((struct func_802515AC_Root *) D_8025A2F4)->unk24->unk2C;
        func_80380F94((f32) (((f64) (sp28 - 0x46) / 10.0) + (f64) temp_v1->unk4), temp_v1->unk8, (f32) (((f64) (temp_v0 - 0x46) / 10.0) + (f64) temp_v1->unkC), 0.0f, D_8025A1FC, 0.0f, 3);
    }
}
