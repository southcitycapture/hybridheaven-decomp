#include "context.h"



extern s32 func_80133A24(s32);
extern void func_800058DC(s32, void *);
extern void func_8024C5A8(s32 arg0, s32 arg1);

void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024C5A8);
    }
}
