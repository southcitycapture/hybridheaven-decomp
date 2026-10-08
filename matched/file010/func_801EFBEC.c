#include "common.h"

typedef struct func_801EFBEC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    s32 unk5C;
} func_801EFBEC_Struct;

s32 func_800058DC(void *arg0, void *arg1);
s32 func_80011198(void *arg0, s32 arg1, void *arg2, void *arg3);
extern u8 D_801BBE1A[];
extern s16 D_80216C10;
extern void func_801EFC50(void);

void func_801EFBEC(func_801EFBEC_Struct *arg0, void *arg1) {
    s32 temp;

    temp = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    D_80216C10 = 0;
    func_80011198(arg1, temp, arg0, arg1);
    D_801BBE1A[6] = 1;
    func_800058DC(arg0, func_801EFC50);
}
