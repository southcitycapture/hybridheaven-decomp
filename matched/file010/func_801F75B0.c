#include "context.h"

struct func_801F75B0_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u8 padA[0x1C];
    u8 unkAE;
};

extern s32 func_801C3B3C(void);
extern void func_801F7638(void);

void func_801F75B0(struct func_801F75B0_Struct *arg0, s32 arg1)
{
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            arg0->unk90 = 0;
            func_800058DC(arg0, (s32) func_801F7638);
        }
    }
}
