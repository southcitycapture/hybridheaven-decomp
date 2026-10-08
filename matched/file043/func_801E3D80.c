#include "common.h"

extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E3D80(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F77F) != 0) {
        func_8038D28C(0x24C);
        func_801C0D04(3, 1);
        return 3;
    }
    return 2;
}
