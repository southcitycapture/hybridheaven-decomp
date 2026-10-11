#include "common.h"

extern void func_8038CD3C(void *);
extern u8 D_801E9974[];

s32 func_801E978C(s32 arg0, s32 arg1) {
    func_8038CD3C(D_801E9974);
    return 0x10;
}
