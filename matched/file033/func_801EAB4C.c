#include "common.h"

struct func_801EAB4C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern void D_8038BA70(void);
extern struct func_801EAB4C_Struct *func_801BF6B0(s32);
extern void func_801C2420(s32, void *);
extern u8 D_8038DD90[];

s32 func_801EAB4C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC <= 0) {
        return 0;
    }
    func_801C2420(0x261, D_8038DD90);
    D_8038BA70();
    return 1;
}
