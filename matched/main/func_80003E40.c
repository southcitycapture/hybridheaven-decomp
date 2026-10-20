#include "context.h"
extern void func_80003EB8(void);
extern u32 D_8005D034;
extern s32 D_8005D03C;
extern u8 D_8008B518[];
extern s32 D_8005D040;

u8 *func_80003E40(u8 *arg0) {
    D_8005D034 += 1;
    D_8005D040 -= 1;
    D_8005D03C -= 1;
    if (D_8005D040 != 0) {
        arg0 = arg0 + 1;
    } else {
        arg0 = D_8008B518;
        func_80003EB8();
    }
    return arg0;
}
