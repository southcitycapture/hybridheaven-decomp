#include "context.h"

s32 func_8001F540(s32 arg0) {
    func_8001F498_Struct *n;
    func_8001F498_Struct *next;

    n = D_80091BC0.unk8;
    if (n != NULL) {
        do {
            next = n->unkC;
            if (next != NULL && n != next->unk8) {
                func_8001F498(n);
                return arg0;
            }
            if (arg0 == n->unk0) {
                goto found;
            }
            n = next;
        } while (n != NULL);
    }
    return arg0;
found:
    n->unk8->unkC = next;
    n->unkC->unk8 = n->unk8;
    func_8001F160(arg0, n->unk4);
    return 0;
}
