#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801E0040/func_801E0040.s")


typedef struct {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x3B];
    u8 b;
} func_801E0198_Sub;

typedef struct {
    u8 pad0[0x30];
    func_801E0198_Sub *sub;
} func_801E0198_Outer;

typedef struct {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[0xC];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x46];
    s16 s92;
    f32 f94;
} func_801E0198_Obj;

extern u16 D_801BCAE0;
void func_8001F74C();
void func_8001F75C();
void func_80005700();

void func_801E0198(func_801E0198_Obj *arg0, func_801E0198_Outer **arg1) {
    s32 var_v1;

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
        return;
    }
    func_8001F75C();
    (*arg1)->sub->x = (*arg1)->sub->x + arg0->f40;
    (*arg1)->sub->y = (*arg1)->sub->y + arg0->f44;
    (*arg1)->sub->z = (*arg1)->sub->z + arg0->f48;
    arg0->f44 = arg0->f44 + arg0->f94;
    var_v1 = (*arg1)->sub->b;
    var_v1 += arg0->s92;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    (*arg1)->sub->b = (u8) var_v1;
    if ((arg0->flags & 0x20) || (var_v1 == 0)) {
        func_80005700(arg0, arg1);
    }
}


extern u8 D_801E20F8;
extern u8 D_801E20FC;
extern u8 D_801E2100;
extern u8 D_801E2104;
extern u8 D_801E2108;
extern u8 D_801E210C;
extern u8 D_801E2110;
extern u8 D_801E2114;

void func_801E0294(void) {
    D_801E20F8 = 0xFF;
    D_801E20FC = 0xFF;
    D_801E2100 = 0xFF;
    D_801E2104 = 0xFF;
    D_801E2108 = 0xFF;
    D_801E210C = 0xFF;
    D_801E2110 = 0xFF;
    D_801E2114 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801E0040/func_801E02DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801E0040/func_801E0648.s")

