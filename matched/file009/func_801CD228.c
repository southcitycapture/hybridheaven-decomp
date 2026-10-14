#include "context.h"

struct func_801CD228_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801CD228_Mid {
    u8 pad[0x2C];
    struct func_801CD228_Node *unk2C;
};

struct func_801CD228_Obj {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
};

extern u8 D_801E0D10[];

void func_801CD228(void *arg0, struct func_801CD228_Mid **arg1) {
    u8 pad[8];
    struct func_801CD228_Node *sp1C;
    struct func_801CD228_Obj *temp_v0;

    sp1C = (*arg1)->unk2C;
    temp_v0 = func_80005670(arg0, D_801E0D10);
    if (temp_v0 != NULL) {
        temp_v0->unk6C = sp1C->unk4;
        temp_v0->unk70 = sp1C->unk8;
        temp_v0->unk74 = sp1C->unkC;
        temp_v0->unk78 = 1;
        temp_v0->unk7A = 0;
        temp_v0->unk7B = 0;
    }
}
