#include "context.h"

typedef struct func_8001F290_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F290_Struct *unk8;
    struct func_8001F290_Struct *unkC;
} func_8001F290_Struct;

extern func_8001F290_Struct *D_80091BC8;

s32 func_8001F290(arg0)
    s32 arg0;
{
    s32 temp_a0;
    s32 temp_v1;
    u8 *temp_a2;
    func_8001F290_Struct *temp_a3;
    func_8001F290_Struct *var_a1;
    func_8001F290_Struct *var_v0;

    if (arg0 <= 0) {
        return 0;
    }
    temp_v1 = (arg0 + 0x17) & ~7;
    var_a1 = D_80091BC8;
    var_v0 = var_a1->unkC;
    if (var_v0 != NULL) {
loop_4:
        temp_a0 = ((s32)var_a1 + D_80047940 + 0x10) & ~D_80047940;
        if ((var_v0->unk0 - temp_a0) < temp_v1) {
            var_a1 = var_v0;
            var_v0 = var_v0->unkC;
            if (var_v0 != NULL) {
                goto loop_4;
            }
        } else {
            goto found;
        }
    }
    return 0;
found:
        temp_a2 = (u8 *)(temp_a0 + temp_v1);
        *(func_8001F290_Struct **)(temp_a2 - 8) = var_a1;
        temp_a3 = (func_8001F290_Struct *)(temp_a2 - 0x10);
        *(func_8001F290_Struct **)(temp_a2 - 4) = var_a1->unkC;
        var_a1->unkC->unk8 = temp_a3;
        var_a1->unkC = temp_a3;
        *(s32 *)(temp_a2 - 0x10) = temp_a0;
        *(s32 *)(temp_a2 - 0xC) = temp_v1;
        return temp_a0;
}
