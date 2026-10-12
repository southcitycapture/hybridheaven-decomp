#include "context.h"

extern void func_801FABC8();
extern void func_801FAE34();

struct func_801FA570_Struct {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA570(struct func_801FA570_Struct *arg0) {
    if (arg0 != NULL) {
        func_800058DC(arg0->unkAC, (void *) func_801FABC8);
        func_800058DC(arg0->unkB0, (void *) func_801FAE34);
        return 1;
    }
    return 0;
}
