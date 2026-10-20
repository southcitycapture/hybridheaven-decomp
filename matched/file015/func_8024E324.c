#include "context.h"

struct func_8024E324_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_80005700(void *);
extern void func_80151114(s32, void *);
extern s32 func_80151478(s32);
extern void func_8024E3B0(s32, s32);

void func_8024E324(struct func_8024E324_Struct *volatile arg0, s32 arg1) {
    struct func_8024E324_Struct *ptr;

    if (func_80151478(D_8025A2E4) < 0x1800) {
        func_801514B0(D_8025A2E4, 0x71);
    }
    ptr = arg0;
    if (ptr->unk90++ >= 0x3C) {
        func_80151114(D_8025A2E4, ptr);
        func_80133980(0x77);
        func_80005700(arg0);
        func_800058DC(arg0, (void *)func_8024E3B0);
    }
}
