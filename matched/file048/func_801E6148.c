#include "context.h"
extern f32 D_801EA550;

s32 func_801E6148(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 6, 0x13) != 0) {
        func_801C10D8(3, 6);
        func_801C1000(3, 6);
        D_801EA5F0[1] = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unk8;
        D_801EA5F0[2] = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC;
        return 6;
    }
    ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC = D_801EA5F0[2] + ((f32)func_801C1134(3, 6) / 19.0f) * (D_801EA550 - D_801EA5F0[2]);
    func_801E5C00();
    func_801E5CFC();
    return 5;
}
