#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

typedef struct func_801E4AF4_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E4AF4_StructC;

typedef struct func_801E4AF4_StructB {
    u8 pad0[0x30];
    func_801E4AF4_StructC *unk30;
} func_801E4AF4_StructB;

typedef struct func_801E4AF4_StructA {
    u8 pad0[0xC];
    func_801E4AF4_StructB *unkC;
} func_801E4AF4_StructA;

s32 func_801E4AF4(s32 arg0, s32 arg1) {
    u32 temp_v0;
    f32 var_ft1;
    f32 temp_ft4;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_ft4 = var_ft1 / 12.0f;
    ((func_801E4AF4_StructA *) D_8038D8D0)->unkC->unk30->unk4 = (f32) ((19.0f * temp_ft4) + -19.0f);
    if (func_801C1088(3, 2, 0xC) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 9;
    }
    return 8;
}
