#include "context.h"
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern f64 D_801E8CF0;
extern f32 D_801E8CF8;
extern f32 D_801E8CFC;
extern f32 D_801E8D00;
extern f32 D_801E8D04;
extern f32 D_801E8D08;
typedef struct func_801E526C_StructB { u8 pad[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad2[0x3B]; u8 unk4B; } func_801E526C_StructB;
typedef struct func_801E526C_StructA { u8 pad[0x30]; func_801E526C_StructB *unk30; } func_801E526C_StructA;
typedef struct func_801E526C_Struct { u8 pad[0x18]; func_801E526C_StructA *unk18; } func_801E526C_Struct;
#define G (*(func_801E526C_Struct **)&D_8038D8D0)

s32 func_801E526C(s32 arg0, s32 arg1) {
    f32 t;
    f32 z;
    if (func_801C0DE4(3, 6, 4.5f) != 0) {
        func_801C0EB0(3, 6);
        return 3;
    }
    t = (f32)(func_80034C24(func_801C0F18(3, 6)) / D_801E8CF0) / 4.5f;
    z = 1.0 - 1.0;
    G->unk18->unk30->unk4 = t * z + D_801E8CF8;
    G->unk18->unk30->unk8 = t * D_801E8CFC + D_801E8D00;
    G->unk18->unk30->unkC = t * D_801E8D04 + D_801E8D08;
    G->unk18->unk30->unk4B = (u32)(t * -255.0f + 255.0f);
    return 2;
}
