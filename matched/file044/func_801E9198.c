#include "common.h"

extern u8 D_801DAB14[];
typedef struct func_801E9198_StructF { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E9198_StructF;
typedef struct func_801E9198_StructA { u8 pad[0x2C]; func_801E9198_StructF *unk2C; } func_801E9198_StructA;
typedef struct func_801E9198_StructB { u8 pad[0x24]; func_801E9198_StructA *unk24; } func_801E9198_StructB;
typedef struct func_801E9198_StructC { u8 pad[8]; func_801E9198_StructB *unk8; } func_801E9198_StructC;
typedef struct func_801E9198_StructR { u8 pad[8]; func_801E9198_StructC *unk8; } func_801E9198_StructR;
#define ROOT (*(func_801E9198_StructR **)D_801DAB14)
#define CH ROOT->unk8->unk8->unk24->unk2C
extern f32 D_801ECFF8;
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
s32 func_801E9198(s32 arg0, s32 arg1) {
    f32 t;

    t = (f32)(u32)func_801C1134(4, 1) / 25.0f;
    CH->unk4 = 3.40000916f * t + (-134.300003f);
    CH->unk8 = ((-18.7000008f) - D_801ECFF8) * t + D_801ECFF8;
    CH->unkC = (-1.80000114f) * t + 31.2000008f;
    if (func_801C1088(4, 1, 0x19) != 0) {
        func_801C10D8(4, 1);
        return 0x30;
    }
    return 0x2F;
}
