#include "context.h"

typedef struct func_8000433C_Struct {
    u32 unk0;
    s32 unk4;
} func_8000433C_Struct;

s32 func_80004484(s32, s32);
s32 func_800045E8(s32, s32);
void func_80004ADC(u16, s32);
s32 func_80016F90();
s32 func_80017014(s32);

extern s8 D_8008946D;

void func_8000433C(void) {
    s32 *var_s6;
    s32 var_s7;
    func_8000433C_Struct *temp_v0;
    func_8000433C_Struct *var_s1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_a1;
    s32 var_v0;

    var_s6 = D_800894F4;
    for (var_s7 = 0; var_s7 < 8; var_s7 = (var_s7 + 1) & 0xFF) {
        temp_v0 = (func_8000433C_Struct *) *var_s6;
        if (temp_v0 != NULL) {
            var_s1 = temp_v0;
loop_2:
            if (func_80017014(func_80016F90()) == 0) {
                temp_s0 = var_s1->unk0 & 0x0FFFFFFF;
                temp_s2 = temp_s0 & 0xFFFF;
                if (func_80017064((u16) temp_s2) != -1) {
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                } else {
                    temp_a1 = var_s1->unk4;
                    if (temp_a1 == 0) {
                        goto zero_case;
                    }
                    if (temp_a1 != -1) {
                        goto other_case;
                    }
                    var_v0 = func_80004484(temp_s0, temp_a1);
                    goto join;
zero_case:
                    var_v0 = func_800045E8(temp_s0, temp_a1);
                    goto join;
other_case:
                    var_v0 = func_80004664(temp_s0, temp_a1);
join:
                    func_80004ADC(temp_s2, var_v0);
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                }
            }
            *var_s6 = 0;
        }
        var_s6++;
    }
    D_8008946D = 0;
}
