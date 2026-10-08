#include "context.h"

typedef struct func_80258514_Struct_B {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80258514_Struct_B;

typedef struct func_80258514_Struct_A {
    u8 pad[0x2C];
    func_80258514_Struct_B *unk2C;
} func_80258514_Struct_A;

typedef struct func_80258514_Struct_Global {
    u8 pad[0xE0];
    func_80258514_Struct_A *unkE0;
} func_80258514_Struct_Global;

typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;

typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;

extern u8 func_80258580[];

void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1) {
    func_80258514_Struct_Global *g = (func_80258514_Struct_Global *) D_801BBBF0;

    g->unkE0->unk2C->unk4 = -76.0f;
    g->unkE0->unk2C->unkC = 0.0f;
    g->unkE0->unk2C->unk12 = 0x800;
    (*arg1)->unk22 = 0;
    arg0->unk74 = 0;
    func_800058DC(arg0, func_80258580);
}
