#include "context.h"
extern struct func_801E4D04_StructOuter *D_8038D8D0;

s32 func_801E49F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        *(*(u8 **)((u8 *)D_8038D8D0 + 8) + 0x22) = 1;
        return 3;
    }
    return 2;
}
