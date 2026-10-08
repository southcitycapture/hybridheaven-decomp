#include "context.h"

typedef struct func_8024EF6C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_8024EF6C_Inner;

typedef struct func_8024EF6C_Outer {
    u8 pad[0x2C];
    func_8024EF6C_Inner *unk2C;
} func_8024EF6C_Outer;

typedef struct func_8024EF6C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8024EF6C_Vec;

extern void func_8013A1B4(void **, func_8024EF6C_Vec, s32);
extern func_8024EF6C_Vec D_80254AB8;
extern void func_8024F024(void);

void func_8024EF6C(void *arg0, func_8024EF6C_Outer **arg1) {
    (*arg1)->unk2C->unk4 = 27.0f;
    (*arg1)->unk2C->unk8 = -130.0f;
    (*arg1)->unk2C->unkC = 406.0f;
    (*arg1)->unk2C->unk12 = 0x800;
    func_8013A1B4((void **)arg1, D_80254AB8, 0xFFFFFF);
    func_800058DC(arg0, (void *)func_8024F024);
}
