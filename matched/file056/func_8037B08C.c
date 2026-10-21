#include "context.h"
extern func_8037AA80_Struct D_80388A5C;

void func_8037B08C(func_8037AA80_StructA *arg0, s32 arg1) {
    func_8037AB08_P *p;
    p = (func_8037AB08_P *)arg0->unk5C;
    func_80011140(arg1, (s32)p, D_80388A5C, 10);
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0 && p->unk1C == 0x1900075) {
        func_800058DC(arg0, func_8037AA80);
    }
}
