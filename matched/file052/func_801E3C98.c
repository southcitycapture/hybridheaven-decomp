#include "context.h"

struct func_801E3C98_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3C98(s32 arg0, s32 arg1) {
    struct func_801E3C98_Struct *p;

    p = (struct func_801E3C98_Struct *) func_801BF6B0(1);
    if (p->unkC < 2) {
        return 1;
    }
    func_801E338C();
    func_801E3570();
    func_801E3754();
    return 2;
}
