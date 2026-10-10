#include "context.h"

extern struct func_801E48F0_Struct1 *D_8038D8D0;

s32 func_801E48A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x022E78BE) != 0) {
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x22) = 0;
        return 2;
    }
    return 1;
}
