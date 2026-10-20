#include "context.h"

struct func_8024B024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
};

extern void func_80005700(void *);

void func_8024B024(struct func_8024B024_Struct *arg0, s32 arg1) {
    s32 value;

    value = arg0->unk5C;
    func_80010550(arg1, value);
    if (arg0->unk3C++ == 0x3C) {
        func_80133980(0x73);
        func_80005700(arg0);
    }
}
