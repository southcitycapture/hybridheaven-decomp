#include "context.h"

typedef struct func_80242414_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80242414_Inner;

typedef struct func_80242414_Outer {
    u8 pad0[0x38];
    func_80242414_Inner *unk38;
} func_80242414_Outer;

extern s32 func_80133A24(s32);
extern void func_8024247C(void);
extern void func_800058DC(void *, void *);

void func_80242414(func_80242414_Outer *arg0, void *arg1) {
    if ((arg0->unk38->unk10 >> 0x18) != 0) {
        if (func_80133A24(0x1EF) == 0) {
            return;
        }
        goto block_4;
    }
    if (func_80133A24(0x1F0) != 0) {
block_4:
        func_800058DC(arg0, func_8024247C);
    }
}
