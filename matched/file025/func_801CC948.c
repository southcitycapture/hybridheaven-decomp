#include "context.h"

extern void func_8012D844(void *, s32, s32);
extern void func_8012D894(void *, s32, s32);

void func_801CC948(s32 arg0, s32 arg1) {
    void (*var_v1)(void *, s32, s32);
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_a2;
    func_801CC654_Struct *temp_a3;
    func_801CC654_Struct *temp_v0;

    temp_t1 = 0x44;
    temp_a2 = arg0 - 1;
    temp_a3 = (func_801CC654_Struct *)*(s32 *)((u8 *)D_801E07A0 + arg0 * temp_t1 - 0x44);
    if (temp_a3->unk24 != 0) {
        var_v1 = NULL;
        temp_v0 = (func_801CC654_Struct *)((u8 *)D_801E07A0 + temp_a2 * temp_t1);
        temp_a0 = temp_v0->unk24;
        temp_v0->unk2C = arg1;
        if (temp_a0 == 1) {
            var_v1 = func_8012D844;
        } else if (temp_a0 == 2) {
            var_v1 = func_8012D894;
        }
        if (arg1 != 0) {
            var_v1(temp_a3, temp_v0->unk14, temp_v0->unk18);
            return;
        }
        var_v1(temp_a3, temp_v0->unk4, temp_v0->unk8);
    }
}
