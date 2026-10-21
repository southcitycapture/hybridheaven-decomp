#include "context.h"

extern void D_801C1000(s32, s32);

s32 func_801E51E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240)) {
        D_801C1000(3, 4);
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0x14) + 0x22) = 1;
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0x58) + 0x22) = 1;
        func_8038D28C(0x209);
        return 2;
    }
    return 1;
}
