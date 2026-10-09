#include "context.h"

extern void func_801170DC(s32);

struct func_801CBE90_Sub {
    u8 pad[0x34];
    s32 unk34;
};

struct func_801CBE90_Node {
    u8 pad[0x2C];
    struct func_801CBE90_Sub *unk2C;
};

struct func_801CBE90_Mid {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE90_Top {
    u8 pad[0x24];
    struct func_801CBE90_Node *unk24;
    u8 pad2[0x34];
    struct func_801CBE90_Mid *unk5C;
};

void func_801CBE90(struct func_801CBE90_Top *arg0, struct func_801CBE90_Node **arg1) {
    struct func_801CBE90_Mid *sp1C;

    sp1C = arg0->unk5C;
    func_801CBDBC(arg0, arg1, 0x1000);
    func_801170DC(0x40);
    arg0->unk24->unk2C->unk34 = 0;
    arg1[sp1C->unkC - 1]->unk2C->unk34 = 0;
}
