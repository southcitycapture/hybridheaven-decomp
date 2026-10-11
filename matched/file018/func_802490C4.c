#include "context.h"

extern void func_80020744(s32);
extern u8 D_8025C7E8;

typedef struct func_802490C4_Struct {
    u8 pad[0x98];
    u16 unk98;
} func_802490C4_Struct;

void func_802490C4(func_802490C4_Struct *arg0) {
    if (D_8025C7E8 != 0) {
        if (arg0->unk98 == 0) goto case0a;
        if (arg0->unk98 == 1) goto case1a;
        if (arg0->unk98 == 2) goto case2a;
        if (arg0->unk98 != 3) return;
        goto case3a;
case0a:
        func_80020744(0x5CC);
        return;
case1a:
        func_80020744(0x5CD);
        return;
case2a:
        func_80020744(0x5CE);
        return;
case3a:
        func_80020744(0x5CF);
        return;
    } else {
        if (arg0->unk98 == 0) goto case0b;
        if (arg0->unk98 == 1) goto case1b;
        if (arg0->unk98 == 2) goto case2b;
        if (arg0->unk98 != 3) return;
        goto case3b;
case0b:
        func_80020744(0x577);
        return;
case1b:
        func_80020744(0x578);
        return;
case2b:
        func_80020744(0x579);
        return;
case3b:
        func_80020744(0x57A);
        return;
    }
}
