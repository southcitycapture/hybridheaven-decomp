#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

typedef struct func_801E4C04_StructC {
    u8 pad0[0xC];
    f32 unkC;
} func_801E4C04_StructC;

typedef struct func_801E4C04_StructB {
    u8 pad0[0x30];
    func_801E4C04_StructC *unk30;
} func_801E4C04_StructB;

typedef struct func_801E4C04_StructA {
    u8 pad0[0xC];
    func_801E4C04_StructB *unkC;
} func_801E4C04_StructA;

s32 func_801E4C04(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_f;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_f = var_ft1 / 10.0f;
    ((func_801E4C04_StructA *) D_8038D8D0)->unkC->unk30->unkC = (f32) ((-3.0f * temp_f) + 65.0f);
    if (func_801C1088(3, 2, 0xA) != 0) {
        func_801C10D8(3, 2);
        return 0xB;
    }
    return 0xA;
}
