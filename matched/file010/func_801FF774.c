#include "context.h"

struct func_801FF774_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u8 pad1[2];
    s16 unkA2;
};
extern s32 func_80126E88();

void func_801FF774(struct func_801FF774_Struct *arg0, s32 arg1) {
    if (arg0->unkA2++ >= 4 && func_80126E88(D_8021774C[arg0->unk9F], arg0) != 0) {
        func_80005700(arg0);
    }
}
