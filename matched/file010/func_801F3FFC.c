#include "context.h"

struct func_801F3FFC_Node {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x20];
    struct func_801F3FFC_Node *unk2C;
};

struct func_801F3FFC_Arg {
    u8 pad0[0x24];
    struct func_801F3FFC_Node *unk24;
};

extern struct func_801F3FFC_Node *D_801BBCD0;
extern u16 D_801BCAE0;
s32 func_8012A564(void *a0, f32 a1);
void func_801F3B5C(s32 a0);

s32 func_801F3FFC(struct func_801F3FFC_Arg *arg0, f32 arg1) {
    f32 var_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;

    var_fa1 = 15.0f;
    if (D_801BCAE0 & 0x200) {
        var_fa1 = 25.0f;
    }
    if (func_8012A564(arg0, arg1) != 0) {
        temp_fv0 = D_801BBCD0->unk2C->unk8;
        temp_fv1 = arg0->unk24->unk2C->unk8;
        if (temp_fv0 < temp_fv1) {
            var_fa0 = -(temp_fv0 - temp_fv1);
        } else {
            var_fa0 = temp_fv0 - temp_fv1;
        }
        if (var_fa0 < var_fa1) {
            func_801F3B5C(1);
            return 1;
        }
    }
    return 0;
}
