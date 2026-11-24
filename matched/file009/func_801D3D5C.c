#include "context.h"

typedef struct func_801D3D5C_Entry {
    u8 pad0[0x30];
    func_801D3B78_StructB *unk30;
} func_801D3D5C_Entry;

typedef struct func_801D3D5C_Object {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D3D5C_Object;

extern f32 func_8002FC20(f32);
extern void func_801CD878(void *arg0, void **arg1);

void func_801D3D5C(func_801D3D5C_Object *arg0, func_801D3D5C_Entry **arg1) {
    f64 var_fs2;
    f64 var_fs3;
    f64 var_fs4;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 var_fv1;
    u8 var_s2;
    s32 temp_v0;
    s32 temp_v1;
    func_801D3B78_StructB *temp_s0;

    func_801CD878(arg0, (void **)arg1);
    var_s2 = 0;
    if ((s32) arg0->unk94 > 0) {
        var_fs2 = 0.1;
        var_fs3 = 0.0;
        var_fs4 = 50.0;
        do {
            temp_s0 = arg1[var_s2]->unk30;
            temp_s0->unk10 = (s16) (temp_s0->unk10 + ((var_s2 - ((s32) arg0->unk94 / 3)) * 16));
            temp_s0->unk10 = (s16) (temp_s0->unk10 & 0x1FFF);
            temp_s0->unk12 = (s16) (temp_s0->unk12 + ((var_s2 - ((s32) arg0->unk94 / 2)) * 16));
            temp_s0->unk12 = (s16) (temp_s0->unk12 & 0x1FFF);
            temp_s0->unk14 = (s16) (temp_s0->unk14 + ((var_s2 - ((s32) arg0->unk94 / 4)) * 16));
            temp_s0->unk14 = (s16) (temp_s0->unk14 & 0x1FFF);
            temp_fs0 = temp_s0->unk4 - arg0->unk6C;
            temp_fs1 = temp_s0->unkC - arg0->unk74;
            temp_fv0 = func_8002FC20((temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1));
            var_fv1 = temp_fv0;
            if ((f64) var_fv1 <= var_fs3) {
                var_fv1 = 0.01f;
            }
            if ((f64) var_fv1 > var_fs4) {
                func_801D3B78((func_801D3B78_StructA *) arg0, temp_s0);
            } else {
                temp_fs0 = temp_fs0 / var_fv1;
                temp_fs1 = temp_fs1 / var_fv1;
                temp_s0->unk4 = (f32) ((f64) temp_s0->unk4 + (temp_fs0 * var_fs2));
                temp_s0->unkC = (f32) ((f64) temp_s0->unkC + (temp_fs1 * var_fs2));
            }
            var_s2++;
        } while (var_s2 < (s32) arg0->unk94);
    }
    temp_v0 = arg0->unk92;
    temp_v1 = (s32) arg0->unk90 < (s32) temp_v0;
    arg0->unk92 = (u16) (temp_v0 + 1);
    if (temp_v1 || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
        func_800058DC(arg0, (s32) func_801CE898);
    }
}
