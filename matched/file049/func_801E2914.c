#include "context.h"
extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];

s32 func_801E2914(s32 arg0, s32 arg1) {
    func_801C2420(0x46A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x4D9, D_8038DDA8);
    D_8038BA70();
    return 1;
}
