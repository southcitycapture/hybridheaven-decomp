#include "context.h"

/* context.h declarations used by this function (same types, struct body stays in context.h) */
struct func_80241AF0_StructBBBF0;
extern struct func_80241AF0_StructBBBF0 D_801BBBF0;
void func_80241AF0(u8 *arg0, s32 arg1);

extern f32 D_80249AD4;

struct func_80241A38_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
};

struct func_80241A38_Outer {
    u8 pad[0x2C];
    struct func_80241A38_Inner *unk2C;
};

struct func_80241A38_Globals {
    u8 pad[0xE0];
    struct func_80241A38_Outer *unkE0;
};

struct func_80241A38_Bbbf0 {
    u8 pad0[0x192];
    s16 unk192;
    s16 unk194;
    u8 pad1[0xF00 - 0x196];
    s16 unkF00;
    u8 pad2[0xF08 - 0xF02];
    f32 unkF08;
    s16 unkF0C;
    u8 pad3[0xF10 - 0xF0E];
    s32 unkF10;
};

struct func_80241A38_Obj {
    u8 pad[0x94];
    s16 unk94;
};

void func_80241A38(struct func_80241A38_Obj *arg0, s32 arg1) {
    struct func_80241A38_Inner *temp_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = ((struct func_80241A38_Globals *)&D_801BBBF0)->unkE0->unk2C;
    temp_fv0 = D_80249AD4 - temp_v0->unk4;
    temp_fv1 = 332.0f - temp_v0->unkC;
    if (!(((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) > 400.0f)) {
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unk194 = 1;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unk192 = 4;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF08 = 3.0f;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF10 = 0x03480017;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF0C = 0;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF00 = 0x1000;
        arg0->unk94 = 0x64;
        func_800058DC(arg0, (void *)func_80241AF0);
    }
}
