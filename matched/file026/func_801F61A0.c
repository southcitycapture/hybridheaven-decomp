#include "context.h"

extern struct func_801F6914_Struct1 *D_8038D8D0;

extern f32 D_801FD308;

struct func_801F61A0_StructC {
    u8 pad0[8];
    f32 unk8;
};

struct func_801F61A0_StructB {
    u8 pad0[0x30];
    struct func_801F61A0_StructC *unk30;
};

struct func_801F61A0_StructA {
    u8 pad0[4];
    struct func_801F61A0_StructB *unk4;
};

s32 func_801F61A0(s32 arg0, s32 arg1) {
    struct func_801F61A0_StructC *c;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        c = ((struct func_801F61A0_StructA *)D_8038D8D0)->unk4->unk30;
        c->unk8 = c->unk8 + D_801FD308;
        if (func_801C0B8C(0x01BC07DF) != 0) {
            ((struct func_801F61A0_StructA *)D_8038D8D0)->unk4->unk30->unk8 = 0.0f;
            return 3;
        }
    }
    return 2;
}
