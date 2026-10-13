#include "context.h"

extern f32 func_8002FC20(f32, f32);

typedef struct func_8012AE54_StructVec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
} func_8012AE54_StructVec;

typedef struct func_8012AE54_StructObj {
    u8 pad0[0x2C];
    func_8012AE54_StructVec *unk2C;
    func_8012AE54_StructVec *unk30;
} func_8012AE54_StructObj;

typedef struct func_8012AE54_StructArg {
    u8 pad0[0x24];
    func_8012AE54_StructObj *unk24;
} func_8012AE54_StructArg;

s32 func_8012AE54(func_8012AE54_StructArg *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8012AE54_StructObj *temp_v1;
    f32 *var_a0;
    f32 *var_a1;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v1 = arg0->unk24;
    if (temp_v1->unk2C != NULL) {
        var_a0 = &temp_v1->unk2C->x;
        var_a1 = &temp_v1->unk2C->y;
    } else {
        var_a0 = &temp_v1->unk30->x;
        var_a1 = &temp_v1->unk30->y;
    }
    temp_fv0 = arg2 - *var_a1;
    temp_fv1 = arg1 - *var_a0;
    temp_fv0 = func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1), arg2);
    if (arg3 < temp_fv0) {
        return 1;
    }
    return 0;
}
