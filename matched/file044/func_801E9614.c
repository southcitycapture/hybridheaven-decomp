#include "context.h"

extern f32 D_801EDE68;
extern f32 D_801EDE6C;
extern f32 D_801EDE70;
extern f32 D_801EDE74;
extern f32 D_801EDE78;

typedef struct func_801E9614_StructF { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E9614_StructF;
typedef struct func_801E9614_StructA { u8 pad[0x2C]; func_801E9614_StructF *unk2C; } func_801E9614_StructA;
typedef struct func_801E9614_StructB { u8 pad[0x24]; func_801E9614_StructA *unk24; } func_801E9614_StructB;
typedef struct func_801E9614_StructC { u8 pad[8]; func_801E9614_StructB *unk8; } func_801E9614_StructC;
typedef struct func_801E9614_StructR { u8 pad[8]; func_801E9614_StructC *unk8; } func_801E9614_StructR;

#define ROOT (*(func_801E9614_StructR **)D_801DAB14)
#define CH ROOT->unk8->unk8->unk24->unk2C

s32 func_801E9614(s32 arg0, s32 arg1) {
    f32 t;

    t = (f32)(u32)func_801C1134(4, 1) / 25.0f;
    CH->unk4 = D_801EDE68 * t + D_801EDE6C;
    CH->unk8 = (D_801EDE70 - D_801ECFF8) * t + D_801ECFF8;
    CH->unkC = D_801EDE74 * t + D_801EDE78;
    if (func_801C1088(4, 1, 0x19) != 0) {
        func_801C10D8(4, 1);
        return 0x36;
    }
    return 0x35;
}
