#include "context.h"

typedef struct func_801E72D0_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_801E72D0_Inner;

typedef struct func_801E72D0_Outer {
    u8 pad0[0x30];
    func_801E72D0_Inner *unk30;
} func_801E72D0_Outer;

typedef struct func_801E72D0_Top {
    u8 pad0[0x30];
    func_801E72D0_Outer *unk30;
} func_801E72D0_Top;

s32 func_801E72D0(s32 arg0, s32 arg1) {
    func_801E72D0_Inner *temp_v1;

    temp_v1 = ((func_801E72D0_Top *) D_8038D8D0)->unk30->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 7;
}
