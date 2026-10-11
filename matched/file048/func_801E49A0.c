#include "context.h"

extern f32 D_801EA534;
extern f32 D_801EA538;

typedef struct func_801E49A0_Leaf {
    f32 unk0;
    f32 unk4;
} func_801E49A0_Leaf;

typedef struct func_801E49A0_Sub {
    u8 pad0[0x30];
    func_801E49A0_Leaf *unk30;
} func_801E49A0_Sub;

typedef struct func_801E49A0_Obj {
    u8 pad0[0xC];
    func_801E49A0_Sub *unkC;
} func_801E49A0_Obj;

s32 func_801E49A0(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 quot;
    u32 temp_v0;

    if (func_801C1088(3, 2, 3) != 0) {
        func_801C10D8(3, 2);
        return 7;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 3.0f;
    ((func_801E49A0_Obj *) D_8038D8D0)->unkC->unk30->unk4 = (D_801EA534 * quot) + D_801EA538;
    return 6;
}
