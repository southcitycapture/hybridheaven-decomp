#include "context.h"

typedef struct func_801E4CB0_Flags {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801E4CB0_Flags;

typedef struct func_801E4CB0_Mid {
    u8 pad0[0x30];
    func_801E4CB0_Flags *unk30;
} func_801E4CB0_Mid;

typedef struct func_801E4CB0_Top {
    u8 pad0[0xC];
    func_801E4CB0_Mid *unkC;
} func_801E4CB0_Top;

s32 func_801E4CB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02191BFC) != 0) {
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk48 = 0xFF;
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk49 = 0xFF;
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk4A = 0xFF;
        return 0xC;
    }
    return 0xB;
}
