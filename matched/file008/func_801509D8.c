#include "context.h"

struct func_801509D8_Struct {
    u8 pad0[0x24];
    struct func_801509D8_StructC *unk24;
    u8 pad1[0x92 - 0x28];
    u8 unk92;
};

struct func_801509D8_StructA {
    u8 pad0[0x2C];
    struct func_801509D8_StructB *unk2C;
};

struct func_801509D8_StructB {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_801509D8_StructC {
    u8 pad0[0x30];
    struct func_801509D8_StructB *unk30;
};

struct func_801509D8_StructLocal {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    u8 pad1[0x14];
};

extern void *D_801BBCD0;
extern s16 func_801FD284(s16, s16, s32, void *);
extern void func_80150AB4(void);

void func_801509D8(struct func_801509D8_Struct *arg0, s32 arg1) {
    struct func_801509D8_StructLocal sp20;
    s16 var_a1;

    if (arg0->unk92 == 1) {
        var_a1 = (s16) (arg0->unk24->unk30->unk12 + 0x1000) & 0x1FFF;
    } else {
        var_a1 = arg0->unk24->unk30->unk12;
    }
    ((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12 = func_801FD284(((struct func_801509D8_StructA *) D_801BBCD0)->unk2C->unk12, var_a1, 0x3DCCCCCD, arg0);
    if (func_801C3044() == 0) {
        sp20.a = 0x1000;
        sp20.b = 0x0168002D;
        sp20.c = 3.0f;
        func_801C2F0C(4, (struct func_80150970_Struct *) &sp20);
        func_800058DC((s32) arg0, func_80150AB4);
    }
}
