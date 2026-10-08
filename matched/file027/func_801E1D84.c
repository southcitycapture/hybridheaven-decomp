#include "common.h"

struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C(void);
extern void func_8038BED4(void);

s32 func_801E1D84(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 4;
    }
    func_8038BED4();
    return 5;
}
