#include "common.h"

typedef struct func_801E4990_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_801E4990_StructInner;

typedef struct func_801E4990_Struct {
    u8 pad[0xC];
    func_801E4990_StructInner *unkC;
} func_801E4990_Struct;

extern func_801E4990_Struct *D_8038D8D0;

s32 func_801E4990(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02CF3293) != 0) {
        D_8038D8D0->unkC->unk22 = 0;
        return 5;
    }
    return 4;
}
