#include "context.h"

extern void func_80005624(s32);
extern void func_80005670(s32, s32);
extern void func_80005700(void *);

struct func_800057DC_Struct {
    u8 pad[0xC];
    s32 unkC;
};

void func_800057DC(struct func_800057DC_Struct *arg0, s32 arg1) {
    s32 sp1C;

    sp1C = arg0->unkC;
    func_80005700(arg0);
    if (sp1C != 0) {
        func_80005670(sp1C, arg1);
    } else {
        func_80005624(arg1);
    }
}
