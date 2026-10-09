#include "context.h"

struct func_8002CE7C_Struct {
    u8 pad0[0x14];
    s32 unk14;
    f32 unk18;
    s32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

extern void func_80030480(void *a0, void *a1, void *a2, s32 a3);
extern s32 func_80034A10(u32 a0, u32 a1, s32 a2, s32 a3, s32 a4);
extern u8 func_8002EB40[];
extern u8 func_8002EC2C[];

void func_8002CE7C(void *arg0, s32 arg1) {
    struct func_8002CE7C_Struct *s;

    s = arg0;
    func_80030480(arg0, func_8002EC2C, func_8002EB40, 1);
    s->unk14 = func_80034A10(0, 0, arg1, 1, 0x20);
    s->unk24 = 1;
    s->unk30 = 0;
    s->unk1C = 0;
    s->unk28 = 0;
    s->unk2C = 0;
    s->unk20 = 0.0f;
    s->unk18 = 1.0f;
}
