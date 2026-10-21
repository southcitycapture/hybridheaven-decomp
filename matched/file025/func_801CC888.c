#include "context.h"

extern void func_8012D844(void *, s32, s32);
extern void func_8012D894(void *, s32, s32);

typedef struct func_801CC888_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801CC888_Struct;

void func_801CC888(s32 arg0, s32 arg1) {
    void (*var_v1)(void *, s32, s32);
    s32 temp_a0;
    s32 k = 0x44;
    s32 i = arg0 - 1;
    func_801CC888_Struct *temp_a3;
    func_801CC654_Struct *temp_v0;

    temp_a3 = (func_801CC888_Struct *)((func_801CC654_Struct *)((u8 *)D_801E07A0 + arg0 * k))[-1].unk0;
    if ((temp_a3->unk24 != 0) && (temp_v0 = (func_801CC654_Struct *)((u8 *)D_801E07A0 + i * k),temp_v0->unk30 = arg1, arg1 == 0)) {
        temp_a0 = temp_v0->unk24;
        var_v1 = NULL;
        if (temp_a0 == 1) {
            var_v1 = func_8012D844;
        } else if (temp_a0 == 2) {
            var_v1 = func_8012D894;
        }
        if (temp_v0->unk2C != 0) {
            var_v1(temp_a3, temp_v0->unk14, temp_v0->unk18);
            return;
        }
        var_v1(temp_a3, temp_v0->unk4, temp_v0->unk8);
    }
}
