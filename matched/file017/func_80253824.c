#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);

struct func_80253824_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80253824_Struct {
    s32 pad0;
    struct func_80253824_StructInner *unk4;
};

extern void func_8025386C();

void func_80253824(s32 arg0, struct func_80253824_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025386C);
    }
}
