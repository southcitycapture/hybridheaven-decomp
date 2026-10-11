#include "context.h"

struct func_801E7070_Ptr {
    u8 pad0[0x30];
    struct func_801E58E4_Q *unk30;
};

s32 func_801E7070(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02191BFC) != 0) {
        func_801C1000(3, 9);
        ((struct func_801E7070_Ptr *)D_8038D8D0)->unk30->unk22 = 1;
        return 2;
    }
    return 1;
}
