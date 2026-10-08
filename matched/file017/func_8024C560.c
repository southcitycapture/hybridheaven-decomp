#include "context.h"

struct func_8024C560_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024C560_Struct {
    s32 pad0;
    struct func_8024C560_StructInner *unk4;
};

extern s32 func_80133A24(s32);
extern void func_800058DC(s32, void *);
extern void func_8024C5A8(void);

void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024C5A8);
    }
}
