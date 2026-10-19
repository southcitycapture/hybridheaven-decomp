#include "context.h"

extern void func_801E5CFC(void);

typedef struct func_801E6064_StructS {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E6064_StructS;
typedef struct func_801E6064_StructR {
    u8 pad0[0x30];
    func_801E6064_StructS *unk30;
} func_801E6064_StructR;
typedef struct func_801E6064_StructP {
    u8 pad0[0x24];
    func_801E6064_StructR *unk24;
} func_801E6064_StructP;

s32 func_801E6064(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 6, 0x40) != 0) {
        func_801C10D8(3, 6);
        func_801C1000(3, 6);
        D_801EA5F8 = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC;
        return 5;
    }
    {
        f32 scale = 64.0f;
        f32 q = func_801C1134(3, 6) / scale;
        ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC = (43.5f - D_801EA5F8) * q + D_801EA5F8;
    }
    func_801E5C00();
    func_801E5CFC();
    return 4;
}
