#include "context.h"

struct func_801E3F3C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3F3C(s32 arg0, s32 arg1) {
    if (((struct func_801E3F3C_Struct *)func_801BF6B0(1))->unkC < 2) {
        return 1;
    }
    func_801E3630();
    func_801E3814();
    func_801E39F8();
    return 2;
}
