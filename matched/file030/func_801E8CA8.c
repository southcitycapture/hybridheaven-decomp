#include "common.h"

extern void func_801C0D04(s32 arg0, s32 arg1);
extern u8 D_801BBD54;

s32 func_801E8CA8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    func_801C0D04(6, 0);
    return 1;
}
