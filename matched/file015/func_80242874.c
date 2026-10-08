#include "context.h"

typedef struct func_80242874_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242874_Struct;

extern void func_800179B0(void *);
extern u8 D_80252134[];
extern void func_802428C0(void);

void func_80242874(func_80242874_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800179B0(D_80252134);
        func_800058DC(arg0, func_802428C0);
    }
}
