#include "context.h"
extern void D_8038BA70(void);
extern s32 func_801C2420(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];

s32 func_801E7F94(s32 arg0, s32 arg1) {
    func_801C2420(0x48A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D2, D_8038DDA8);
    D_8038BA70();
    return 1;
}
