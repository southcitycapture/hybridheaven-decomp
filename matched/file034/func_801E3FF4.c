#include "context.h"

typedef struct func_801E3FF4_Struct_R {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_801E3FF4_Struct_R;

typedef struct func_801E3FF4_Struct_Q {
    u8 pad0[0x30];
    func_801E3FF4_Struct_R *unk30;
} func_801E3FF4_Struct_Q;

typedef struct func_801E3FF4_Struct_P {
    u8 pad0[0x10];
    func_801E3FF4_Struct_Q *unk10;
} func_801E3FF4_Struct_P;

extern f64 D_801E95C8;
extern f32 D_801E95D0;
extern f32 D_801E95D4;
extern f64 D_801E95D8;
extern f64 D_801E95E0;
extern f32 D_801E95E8;
extern f32 D_801E95EC;

s32 func_801E3FF4(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    f64 temp_one;
    u64 temp_ret;

    temp_one = 1.0;
    temp_ret = func_801C0F18(3, 4);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / D_801E95C8) / temp_one);
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = (f32) ((D_801E95D0 * temp_fv1) + D_801E95D4);
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = (f32) (((f64) temp_fv1 * D_801E95D8) + D_801E95E0);
    if (func_801C0B8C(0xCDFE60) != 0) {
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = D_801E95E8;
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = D_801E95EC;
        func_801C0EB0(3, 4);
        return 0xA;
    }
    return 9;
}
