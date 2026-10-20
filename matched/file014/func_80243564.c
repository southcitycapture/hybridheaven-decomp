#include "context.h"

extern s32 func_80133A24(s32);
extern void func_80010550(s32, void *, s32);
extern void func_800058DC(void *, void *);
extern void func_802435AC();

void func_80243564(struct func_80244F98_Obj *arg0, s32 arg1) {
    struct func_80244F98_Child *child;

    child = arg0->unk5C;
    func_80010550(arg1, child, arg1);
    if (func_80133A24(0x48) != 0) {
        func_800058DC(arg0, func_802435AC);
    }
}
