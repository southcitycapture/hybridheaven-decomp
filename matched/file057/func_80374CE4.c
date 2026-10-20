#include "context.h"

extern u8 D_801BCC25[];
extern void func_80374D3C();

struct func_80374CE4_Struct {
    u8 pad0[0x42];
    s16 unk42;
    u8 pad44[0x18];
    u16 unk5C;
    u16 unk5E;
};

void func_80374CE4(s32 arg0, s32 arg1) {
    struct func_80374CE4_Struct *ptr;

    ptr = (struct func_80374CE4_Struct *)D_801BCC24.unkE4;
    if (ptr->unk42 == 0 && (s32)ptr->unk5E++ < (s32)ptr->unk5C) {
    } else {
        func_800058DC(arg0, func_80374D3C);
    }
}
