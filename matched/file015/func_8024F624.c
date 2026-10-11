#include "context.h"

struct func_8024F624_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
};

extern s32 func_801505AC(s32);
extern void *func_801C3B7C(s32);
extern void func_8024F6C4(void);
extern func_8024EF6C_Vec D_80254AE8;

void func_8024F624(struct func_8024F624_Struct *arg0, void **arg1, void **arg2) {
    s32 f;

    f = arg0->unk5C;
    if (func_80010550(arg1, f, arg2) != 0 && func_800178E8() != 0) {
        func_801C3B7C(func_801505AC(8));
        func_8013A1B4(arg1, D_80254AE8, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024F6C4);
    }
}
