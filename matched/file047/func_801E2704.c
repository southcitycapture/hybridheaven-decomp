#include "context.h"
extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];

s32 func_801E2704(s32 arg0, s32 arg1) {
    func_801C2420(0x468, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x465, D_8038DDA8);
    D_8038BA70();
    return 1;
}
