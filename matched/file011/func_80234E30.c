#include "context.h"

struct func_80234E30_Struct {
    u8 pad[0xA3];
    s8 unkA3;
};

struct func_80234E30_Node {
    u8 pad[0x10];
    struct func_80234E30_Node *unk10;
};

extern u8 D_802407E8[];

void func_80234E30(struct func_80234E30_Struct *arg0, struct func_80234E30_Node *arg1) {
    s32 var_s0;
    s8 var_v0;

    var_v0 = arg0->unkA3;
    var_s0 = 0;
    if (var_v0 > 0) {
        do {
            if (D_802407E8[var_s0 * 0xC + 8] == 0) {
                func_80145310((s32)arg1, 2, 0xE);
                var_v0 = arg0->unkA3;
            }
            var_s0 = (var_s0 + 1) & 0xFF;
            arg1 = arg1->unk10;
        } while (var_s0 < var_v0);
    }
}
