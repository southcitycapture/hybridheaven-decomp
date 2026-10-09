#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

typedef struct func_801E483C_StructB {
    u8 pad0[0x30];
    f32 *unk30;
} func_801E483C_StructB;

typedef struct func_801E483C_StructA {
    u8 pad0[0xC];
    func_801E483C_StructB *unkC;
} func_801E483C_StructA;

extern f32 D_801EA528;

s32 func_801E483C(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 quot;
    u32 temp_v0;

    if (func_801C1088(3, 2, 0x11) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 5;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 17.0f;
    ((func_801E483C_StructA *) D_8038D8D0)->unkC->unk30[1] = D_801EA528 * quot;
    return 4;
}
