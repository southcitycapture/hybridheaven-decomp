#include "common.h"
typedef struct func_8001F498_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F498_Struct *unk8;
    struct func_8001F498_Struct *unkC;
} func_8001F498_Struct;
extern func_8001F498_Struct D_80091BC0;
void func_8001F498(func_8001F498_Struct *arg0);
s32 func_8001F5D0(s32 arg0);


void func_8001F630(func_8001F498_Struct *head) {
    func_8001F498_Struct *var_s0;
    func_8001F498_Struct *temp_v0;
    s32 temp_a1;

    head = D_80091BC0.unk8;
    var_s0 = head;
    if (var_s0 != NULL) {
        do {
            temp_v0 = var_s0->unkC;
            if ((temp_v0 != NULL) && (var_s0 != temp_v0->unk8)) {
                func_8001F498(var_s0);
            }
            temp_v0 = var_s0->unk8;
            if (temp_v0 != NULL) {
                head = D_80091BC0.unk8;
                temp_a1 = var_s0->unk0;
                if ((var_s0 != head) && (var_s0 != D_80091BC0.unkC)) {
                    func_8001F5D0(temp_a1);
                }
            }
            var_s0 = var_s0->unkC;
        } while (var_s0 != NULL);
    }
}
