#include "context.h"

typedef struct func_801E6548_Obj22 {
    u8 pad0[0x22];
    u8 unk22;
} func_801E6548_Obj22;

typedef struct func_801E6548_Obj {
    u8 pad0[0x28];
    func_801E6548_Obj22 *unk28;
} func_801E6548_Obj;

s32 func_801E6548(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x01EB553C) != 0) {
        func_801C1000(3, 7);
        ((func_801E6548_Obj *)D_8038D8D0)->unk28->unk22 = 1;
        func_8038D28C(0x20A);
        return 2;
    }
    return 1;
}
