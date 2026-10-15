#include "context.h"

typedef struct func_801E37F0_Struct_C {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
} func_801E37F0_Struct_C;
typedef struct func_801E37F0_Struct_B {
    u8 pad0[0x30];
    func_801E37F0_Struct_C *unk30;
} func_801E37F0_Struct_B;
typedef struct func_801E37F0_Struct_A {
    u8 pad0[0x8];
    func_801E37F0_Struct_B *unk8;
} func_801E37F0_Struct_A;

extern f64 D_801E9530;
extern f32 D_801E9538;
extern f64 D_801E9540;

s32 func_801E37F0(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    u64 temp_ret;

    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0EB0(3, 2);
        return 3;
    }
    temp_ret = func_801C0F18(3, 2);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E9530) / 0.5);
    (*(func_801E37F0_Struct_A **)&D_8038D8D0)->unk8->unk30->unk4 = (f32) ((-10.5f * temp_fv1) + D_801E9538);
    (*(func_801E37F0_Struct_A **)&D_8038D8D0)->unk8->unk30->unkC = (f32) (((f64) temp_fv1 * -10.5) + D_801E9540);
    return 2;
}
