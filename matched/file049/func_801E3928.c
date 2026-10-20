#include "context.h"
extern func_801E3A38_StructA *D_8038D8D0;
extern void func_801C1000(s32, s32);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern s32 func_801C1134(s32 a0, s32 a1);

typedef struct func_801E3928_StructC { u8 pad[4]; f32 unk4; } func_801E3928_StructC;
typedef struct func_801E3928_StructB { u8 pad[0x30]; func_801E3928_StructC *unk30; } func_801E3928_StructB;
typedef struct func_801E3928_StructA { u8 pad[0xC]; func_801E3928_StructB *unkC; } func_801E3928_StructA;

s32 func_801E3928(s32 arg0, s32 arg1) {
    u32 v = func_801C1134(3, 1);
    f32 q = (f32)v / 17.0f;
    ((func_801E3928_StructA *)D_8038D8D0)->unkC->unk30->unk4 = 19.0f * q + -19.0f;
    if (func_801C1088(3, 1, 0x11) != 0) {
        func_801C10D8(3, 1);
        func_801C1000(3, 1);
        return 3;
    }
    return 2;
}
