#include "context.h"

struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};

struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};

struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};

struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};

struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};

extern struct func_801F38B8_Base D_801BBBF0;

void func_801F38B8(f32 arg0) {
    struct func_801F38B8_Lo *temp_v0;

    temp_v0 = D_801BBBF0.unkDC->unk64;
    if (temp_v0 != NULL) {
        temp_v0->unk24->unk30->unk8 = D_801BBBF0.unkE0->unk2C->unk8;
    }
}
