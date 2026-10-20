#include "context.h"
void func_80020744(s32);

struct func_801F5960_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_801F59B8(void);

void func_801F5960(struct func_801F5960_Struct *arg0, s32 arg1) {
    if (arg0->unk3C-- == 0) {
        arg0->unk3C = 0x3C;
        func_80020744(0x1D8);
        func_800058DC(arg0, (s32)func_801F59B8);
    }
}
