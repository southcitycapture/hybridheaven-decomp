#include "context.h"

extern f32 D_801EDDEC;
extern f32 D_801EDDF0;

struct func_801E8270_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E8270_D {
    u8 pad0[0x2C];
    struct func_801E8270_Leaf *unk2C;
};
struct func_801E8270_C {
    u8 pad0[0x24];
    struct func_801E8270_D *unk24;
};
struct func_801E8270_B {
    u8 pad0[8];
    struct func_801E8270_C *unk8;
};
struct func_801E8270_A {
    u8 pad0[8];
    struct func_801E8270_B *unk8;
};

s32 func_801E8270(s32 arg0, s32 arg1) {
    struct func_801E8270_A **pp;

    if (func_801C0B8C(0x629260) != 0) {
        pp = (struct func_801E8270_A **) D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = D_801EDDEC;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801EDDF0;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80052, 0, 0x100, 7.0f);
        return 8;
    }
    return 7;
}
