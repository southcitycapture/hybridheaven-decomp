#include "context.h"

typedef struct func_801E72A4_Ptr {
    u8 pad0[0x30];
    void *unk30;
} func_801E72A4_Ptr;

typedef struct func_801E72A4_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_801E72A4_Leaf;

s32 func_801E72A4(s32 arg0, s32 arg1) {
    func_801E72A4_Leaf *temp_v1;

    temp_v1 = ((func_801E72A4_Ptr *)((func_801E72A4_Ptr *)D_8038D8D0)->unk30)->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x22;
    return 7;
}
