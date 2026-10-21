#include "context.h"

void func_8001F630(func_8001F498_Struct *arg0) {
    func_8001F498_Struct *var_s0;
    func_8001F498_Struct *temp_v0;
    s32 temp_a1;
    extern s32 func_8001F5D0();

    var_s0 = D_80091BC0.unk8;
    if (arg0) {}
    if (var_s0 != NULL) {
        do {
            temp_v0 = var_s0->unkC;
            if ((temp_v0 != NULL) && (var_s0 != temp_v0->unk8)) {
                func_8001F498(var_s0);
            }
            temp_v0 = var_s0->unk8;
            if (temp_v0 != NULL) {
                arg0 = D_80091BC0.unk8;
                temp_a1 = var_s0->unk0;
                if ((var_s0 != arg0) && (var_s0 != D_80091BC0.unkC)) {
                    func_8001F5D0(temp_a1 * 1, temp_a1);
                }
            }
            var_s0 = var_s0->unkC;
        } while (var_s0 != NULL);
    }
}
