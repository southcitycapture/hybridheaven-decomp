#include "context.h"

extern s32 func_801C3B3C(void);
extern void func_801F5210(void *);
extern void func_801F83B8(void);

struct func_801F832C_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
};

void func_801F832C(void *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F4170(arg0, (f32) (u32) ((struct func_801F832C_Struct *) arg0)->unkAE) != 0) {
            func_801F5230(arg0);
            func_801F5210(arg0);
            func_800058DC(arg0, (s32) func_801F83B8);
        }
    }
}
