#include "context.h"

extern u8 D_8017B768[];
extern u32 D_801816B0[];

struct func_80147828_Inner {
    u8 pad0[0x34];
    u32 unk34;
};

struct func_80147828_Node {
    u8 pad0[0x10];
    struct func_80147828_Node *unk10;
    u8 pad1[0x18];
    struct func_80147828_Inner *unk2C;
};

struct func_80147828_Owner {
    u8 pad0[0x24];
    struct func_80147828_Node *unk24;
};

s32 func_80147828(struct func_80147828_Owner *arg0, u8 arg1, u8 arg2, u8 arg3) {
    struct func_80147828_Node *var_v1;
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v1 = arg0->unk24;
        if (var_v1 != NULL) {
            do {
                if (var_v0 == arg2) {
                    var_v1->unk2C->unk34 = D_801816B0[arg1] | 0x40000000;
                }
                if (var_v0 == arg3) {
                    var_v1->unk2C->unk34 = (u32) D_8017B768 | 0x40000000;
                }
                var_v1 = var_v1->unk10;
                var_v0++;
            } while (var_v1 != NULL);
        }
        return 1;
    }
    return 0;
}
