#include "context.h"

typedef struct func_801F7250_Struct1 {
    u8 pad0[0x1C];
    func_801F6914_Struct2 *unk1C;
} func_801F7250_Struct1;

s32 func_801F7250(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk4 = -16.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk8 = 0.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unkC = -28.0f;
        ((func_801F7250_Struct1 *)D_8038D8D0)->unk1C->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}
