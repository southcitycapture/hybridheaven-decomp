#include "context.h"
s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);
extern u8 func_801DAAF0[];

extern f32 D_801E9954;

struct func_801E4774_Struct3 {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_801E4774_Struct2 {
    u8 pad0[0x2C];
    struct func_801E4774_Struct3 *unk2C;
};
struct func_801E4774_Struct1 {
    u8 pad0[0x24];
    struct func_801E4774_Struct2 *unk24;
};
struct func_801E4774_Struct0 {
    u8 pad0[0x8];
    struct func_801E4774_Struct1 *unk8;
};

s32 func_801E4774(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_ft0;
    s32 temp_v0;

    temp_v0 = func_801C1134(4, 0);
    var_ft1 = (f32) (u32) temp_v0;
    temp_ft0 = var_ft1 / 30.0f;
    ((struct func_801E4774_Struct0 *) *(u8 **) (func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unkC = (D_801E9954 * temp_ft0) + -113.0f;
    if (func_801C1088(4, 0, 0x1E) != 0) {
        func_801C10D8(4, 0);
        return 0x11;
    }
    return 0x10;
}
