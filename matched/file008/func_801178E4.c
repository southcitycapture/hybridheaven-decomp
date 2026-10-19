#include "context.h"

typedef struct func_801178E4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801178E4_StructB;
typedef struct func_801178E4_StructA {
    u8 pad0[0x2C];
    func_801178E4_StructB *unk2C;
} func_801178E4_StructA;
typedef struct func_801178E4_Struct {
    u8 pad0[0xE0];
    func_801178E4_StructA *unkE0;
    u8 pad1[0x320 - 0xE4];
    f32 unk320;
    u8 pad2[0x374 - 0x324];
    f32 unk374;
    f32 unk378;
    f32 unk37C;
} func_801178E4_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern f64 D_80189B20;
extern f64 D_80189B28;

void func_801178E4(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
#define G ((func_801178E4_Struct *) &D_801BBBF0)
    *arg0 = (f32) ((f64) G->unkE0->unk2C->unk4 - ((f64) func_8001EAD0(G->unkE0->unk2C->unk12) * D_80189B20));
    *arg1 = (f32) ((f64) G->unkE0->unk2C->unk8 + 25.0 + (f64) G->unk320);
    *arg2 = (f32) ((f64) G->unkE0->unk2C->unkC - ((f64) func_8001EB64(G->unkE0->unk2C->unk12) * D_80189B28));
    *arg3 = G->unkE0->unk2C->unk4;
    *arg4 = (f32) ((f64) G->unkE0->unk2C->unk8 + 15.0);
    *arg5 = G->unkE0->unk2C->unkC;
    if (func_801084C4(*arg3, *arg4, *arg5, *arg0, *arg1, *arg2) != 0) {
        *arg0 = G->unk374;
        *arg1 = G->unk378;
        *arg2 = G->unk37C;
    }
}
