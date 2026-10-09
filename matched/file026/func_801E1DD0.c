#include "context.h"
extern void D_8038BA70(void);
extern u8 D_8038DD90[];
void func_801C2420(s32 arg0, void *arg1);


s32 func_801E1DD0(s32 arg0, s32 arg1) {
    func_801C2420(0xA1, D_8038DD90);
    D_8038BA70();
    return 1;
}
