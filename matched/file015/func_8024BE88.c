#include "common.h"

typedef struct func_8024BE88_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024BE88_Struct;

extern s32 func_80133A24(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_800058DC(void *, void *);
extern void func_8024BEF0(void);

void func_8024BE88(func_8024BE88_Struct *arg0, s32 arg1) {
    s32 flag;

    if (func_80133A24(0x7D) != 0) {
        flag = arg0->unk3C++ >= 5;
        if (flag != 0) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_800058DC(arg0, func_8024BEF0);
        }
    }
}
