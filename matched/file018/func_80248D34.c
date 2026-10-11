#include "context.h"

extern void func_80020744(s32);
extern u8 D_8025C7E8;

typedef struct func_80248D34_Struct {
    u8 pad[0x98];
    u16 unk98;
} func_80248D34_Struct;

void func_80248D34(func_80248D34_Struct *arg0) {
    if (D_8025C7E8 != 0) {
        if (arg0->unk98 == 0) goto case0a;
        if (arg0->unk98 == 1) goto case1a;
        if (arg0->unk98 == 2) goto case2a;
        if (arg0->unk98 != 3) return;
        goto case3a;
case0a:
        func_80020744(0x5C8);
        return;
case1a:
        func_80020744(0x5C9);
        return;
case2a:
        func_80020744(0x5CA);
        return;
case3a:
        func_80020744(0x5CB);
        return;
    } else {
        if (arg0->unk98 == 0) goto case0b;
        if (arg0->unk98 == 1) goto case1b;
        if (arg0->unk98 == 2) goto case2b;
        if (arg0->unk98 != 3) return;
        goto case3b;
case0b:
        func_80020744(0x6CA);
        return;
case1b:
        func_80020744(0x6CB);
        return;
case2b:
        func_80020744(0x6CC);
        return;
case3b:
        func_80020744(0x6CD);
        return;
    }
}
