#include "context.h"

typedef struct func_801E724C_Struct {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x30 - 0x14];
    struct func_801E724C_Struct *unk30;
} func_801E724C_Struct;

s32 func_801E724C(s32 arg0, s32 arg1) {
    func_801E724C_Struct *temp_v1;

    temp_v1 = ((func_801E724C_Struct *)((func_801E724C_Struct *)((func_801E724C_Struct *)D_8038D8D0)->unk30)->unk30);
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 5;
}
