#include "context.h"
void func_801C0EB0(s32, s32);
void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern f64 D_801E6AF0;
extern f32 D_801E6AF8;
extern f32 D_801E6AFC;
struct func_801E394C_StructC { u8 pad[4]; f32 unk4; f32 unk8; s32 unkC; };
struct func_801E394C_StructB { u8 pad[0x2C]; struct func_801E394C_StructC *unk2C; };
struct func_801E394C_StructA { u8 pad[0x24]; struct func_801E394C_StructB *unk24; };
struct func_801E394C_Struct { u8 pad[8]; struct func_801E394C_StructA *unk8; };

s32 func_801E394C(s32 arg0, s32 arg1) {
    u64 t;
    f32 k;
    struct func_801E394C_StructC *p;
    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 15.0f);
        return 7;
    }
    t = func_801C0F18(4, 0);
    k = 1.0f;
    ((struct func_801E394C_Struct *)D_801DAB14)->unk8->unk24->unk2C->unk4 = (f32)(func_80034C24(t) / D_801E6AF0) * k * 13.0f + D_801E6AF8;
    if (func_801CE2D0(0x01680003, 0x14) != 0 || func_801CE2D0(0x01680003, 0x28) != 0) {
        p = ((struct func_801E394C_Struct *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x676, D_801E6AFC, 1.0f);
    }
    return 6;
}
