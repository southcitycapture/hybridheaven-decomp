#define func_801C9328 D_801C9328
#include "context.h"
#undef func_801C9328

typedef struct func_801C9328_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9328_Struct;

extern f32 func_801476E0(f32 *, func_801C9234_Struct *);
extern f64 D_801CF3D8;

void func_801C9328(func_801C9328_Struct *arg0, s32 arg1) {
    u8 *s0;
    u8 *s1;
    u8 buf[3];
    u8 i;
    extern void func_800058DC();

    s0 = D_801CD0A0[arg0->unk90].unk0;
    s1 = D_801CD0A0[arg0->unk90].unk4;
    func_801C5C70(&D_801CFD10[arg0->unk90], (func_801C5C70_Struct *)&D_801CFD40[arg0->unk90], (f32)(u32)arg0->unk91);
    func_801C5CC8(D_801CD094, &D_801CFD10[arg0->unk90].unk0, s0);
    ((s8 *)s1)[8] = -((s8 *)s0)[8];
    ((s8 *)s1)[9] = ((s8 *)s0)[9];
    ((s8 *)s1)[10] = ((s8 *)s0)[10];
    arg0->unk9C = 140.0f / func_801476E0(D_801CD094, &D_801CFD10[arg0->unk90]);
    buf[0] = (u32)(arg0->unk9C * arg0->unk94);
    buf[1] = (u32)(arg0->unk9C * arg0->unk96);
    buf[2] = (u32)(arg0->unk9C * arg0->unk98);
    for (i = 0; i < 3; i++) {
        s0[i] = s1[i] = buf[i];
    }
    if (arg0->unk9C < D_801CF3D8) {
        func_800058DC(arg0, func_801C9678);
    }
}
