#include "context.h"

extern s32 func_800267F0();

void func_80000984(u8 *arg0, s32 *arg1) {
    s32 *var_v1;
    s32 *var_a2;
    s32 temp_a0;

    var_v1 = *(s32 **)(arg0 + 0x888);
    var_a2 = NULL;
    temp_a0 = func_800267F0(1);
    if (var_v1 != NULL) {
loop_1:
        if (var_v1 == arg1) {
            if (var_a2 != NULL) {
                *var_a2 = *arg1;
            } else {
                *(s32 **)(arg0 + 0x888) = (s32 *) *arg1;
            }
        } else {
            var_a2 = var_v1;
            var_v1 = (s32 *) *var_v1;
            if (var_v1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_800267F0(temp_a0, arg1, var_a2);
}
