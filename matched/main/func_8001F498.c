#include "context.h"

typedef struct func_8001F498_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F498_Struct *unk8;
    struct func_8001F498_Struct *unkC;
} func_8001F498_Struct;

extern func_8001F498_Struct D_80091BC0;

void func_8001F498(func_8001F498_Struct *arg0) {
    func_8001F498_Struct *var_v1;
    func_8001F498_Struct *temp_v0;

    if (((s32) D_80091BC0.unkC & 0xFF000000) == 0x80000000) {
        if (((s32) D_80091BC0.unkC->unk8 & 0xFF000000) != 0x80000000) {
            D_80091BC0.unkC->unk8 = arg0;
            D_80091BC0.unkC->unkC = NULL;
            D_80091BC0.unkC->unk4 = 0x10;
            D_80091BC0.unkC->unk0 = D_80091BC0.unk0 + D_80091BC0.unk4 - 0x10;
            return;
        }
        var_v1 = D_80091BC0.unkC;
        if (D_80091BC0.unkC != NULL) {
loop_4:
            temp_v0 = var_v1->unk8;
            if (var_v1 != temp_v0->unkC) {
                var_v1->unk8 = arg0;
                arg0->unkC = var_v1;
                return;
            }
            if (arg0 == temp_v0) {
                arg0->unkC = var_v1;
                return;
            }
            var_v1 = temp_v0;
            if (temp_v0 != NULL) {
                goto loop_4;
            }
        }
    }
}
