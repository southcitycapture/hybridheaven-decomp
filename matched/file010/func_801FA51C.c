#include "context.h"

extern void func_801FAAB8(void);
extern void func_801FAE08(void);

struct func_801FA51C_Struct {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA51C(struct func_801FA51C_Struct *arg0) {
    if (arg0 != NULL) {
        func_800058DC(arg0->unkAC, (void *) func_801FAAB8);
        func_800058DC(arg0->unkB0, (void *) func_801FAE08);
        return 1;
    }
    return 0;
}
