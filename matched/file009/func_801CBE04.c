#include "context.h"

struct func_801CBE04_Inner {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE04_Outer {
    u8 pad[0x5C];
    struct func_801CBE04_Inner *unk5C;
};

struct func_801CBE04_Sub {
    u8 pad[0x34];
    void *unk34;
};

struct func_801CBE04_Node {
    u8 pad[0x2C];
    struct func_801CBE04_Sub *unk2C;
};

extern void func_80116E80(s32);
extern void func_801CBDBC(void *, void **, s32);
extern void func_801479A8(void *);
extern void func_801CBD70(void);
extern u8 D_8017B768[];
extern u8 D_801E0CB8[];

void func_801CBE04(struct func_801CBE04_Outer *arg0, void **arg1) {
    struct func_801CBE04_Inner *sp1C;

    sp1C = arg0->unk5C;
    func_80116E80(0x40);
    func_801CBDBC(arg0, arg1, 0x40);
    func_801479A8(arg0);
    func_801CBD70();
    ((struct func_801CBE04_Node *)*arg1)->unk2C->unk34 = D_801E0CB8;
    ((struct func_801CBE04_Node *)arg1[sp1C->unkC - 1])->unk2C->unk34 = D_8017B768;
}
