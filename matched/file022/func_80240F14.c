#include "context.h"

extern f64 D_80252518;

struct func_80240F14_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80240F14_Arg0 {
    u8 pad[0x24];
    struct func_80240F14_Inner *unk24;
    u8 pad2[0x92 - 0x28];
    u16 unk92;
};

struct func_80240F14_Vec {
    u8 pad[0x18];
    f32 unk18;
    u8 pad2[0x20 - 0x1C];
    f32 unk20;
};

struct func_80240F14_Obj {
    u8 pad[0x2C];
    struct func_80240F14_Vec *unk2C;
};

void func_80240F14(struct func_80240F14_Arg0 *arg0, struct func_80240F14_Obj **arg1) {
    f64 temp_f0;
    struct func_80240F14_Vec *temp_v1;

    if (arg0->unk92 != 0) {
        temp_f0 = D_80252518;
        arg0->unk92 = arg0->unk92 - 1;
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk18 = (f32) ((f64) temp_v1->unk18 - temp_f0);
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk20 = (f32) ((f64) temp_v1->unk20 - temp_f0);
        return;
    }
    arg0->unk24->unk22 = 0;
}
