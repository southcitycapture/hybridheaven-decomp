#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80133980(s32);

typedef struct func_8024ED2C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024ED2C_Struct;

extern void func_8024ED80(s32 arg0, s32 arg1);

void func_8024ED2C(func_8024ED2C_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 cond;

    temp_v0 = arg0->unk3C;
    cond = arg0->unk3C > 0x13;
    arg0->unk3C = temp_v0 + 1;
    if (cond != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, &func_8024ED80);
    }
}
