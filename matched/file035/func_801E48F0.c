#include "common.h"

struct func_801E48F0_Struct2 {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801E48F0_Struct1 {
    u8 pad[0xC];
    struct func_801E48F0_Struct2 *unkC;
};

extern struct func_801E48F0_Struct1 *D_8038D8D0;

s32 func_801E48F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0279BF94) != 0) {
        D_8038D8D0->unkC->unk22 = 0;
        return 3;
    }
    return 2;
}
