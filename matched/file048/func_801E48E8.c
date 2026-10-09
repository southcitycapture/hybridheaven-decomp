#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

typedef struct func_801E48E8_StructC {
    f32 unk0;
    f32 unk4;
} func_801E48E8_StructC;

typedef struct func_801E48E8_StructB {
    u8 pad0[0x30];
    func_801E48E8_StructC *unk30;
} func_801E48E8_StructB;

typedef struct func_801E48E8_StructA {
    u8 pad0[0xC];
    func_801E48E8_StructB *unkC;
} func_801E48E8_StructA;

extern f32 D_801EA52C;
extern f32 D_801EA530;

s32 func_801E48E8(s32 arg0, s32 arg1) {
    f32 var_ft1;
    u32 temp_v0;
    f32 quot;

    if (func_801C1088(3, 2, 5) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 6;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 5.0f;
    ((func_801E48E8_StructA *) D_8038D8D0)->unkC->unk30->unk4 = (D_801EA52C * quot) + D_801EA530;
    return 5;
}
