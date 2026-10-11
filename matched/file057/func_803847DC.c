#include "context.h"

extern void func_8038481C();

void func_803847DC(void *arg0, s32 arg1) {
    func_803828F0_Obj *obj = arg0;

    obj->unkB0 = obj->unkB0 - 1;
    if (obj->unkB0 < 0) {
        func_800058DC(arg0, func_8038481C);
    }
}
