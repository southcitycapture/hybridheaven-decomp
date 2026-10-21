#include "context.h"
typedef struct func_801D1C44_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D1C44_StructB;
typedef struct func_801D1C44_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[8];
    func_801D1C44_StructB *unk30;
} func_801D1C44_StructA;

void func_801D1C44(func_801CDF5C_Struct *arg0, func_801D1C44_StructA **arg1) {
    s32 i;
    s32 j;
    f32 sp6C;
    f32 sp68;
    s32 temp_s2;
    s8 sp63;
    s16 temp_s0 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    s16 temp_s3;
    f32 fv;
    func_801D1C44_StructB *p;

    sp6C = func_8001EB64(temp_s0);
    sp68 = func_8001EAD0(temp_s0);
    sp63 = 0;
    if (func_801CDF5C(arg0, (s32)&sp63) != 0) {
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    temp_s3 = func_8012C6B4(0x2000);
    i = 0;
    if (arg0->unk94 > 0) {
        j = 0;
        do {
            temp_s2 = j << 13;
            arg1[i]->unk24 = arg1[i]->unk24 - 1;
            p = arg1[i]->unk30;
            fv = func_8001EB64((s16)((temp_s2 / arg0->unk94) + temp_s3));
            p->unk4 += (f64)fv * sp6C;
            p->unkC += (f64)fv * sp68;
            fv = func_8001EAD0((s16)((temp_s2 / arg0->unk94) + temp_s3));
            p->unk8 += (f64)fv;
            i = (i + 1) & 0xFF;
            j = i;
        } while (i < arg0->unk94);
    }
    func_800058DC(arg0, (s32)func_801CE7A8);
}
