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
s32 func_801E3FF4(s32 arg0, s32 arg1) {
    f32 temp_fv1;
    f64 temp_one;
    u64 temp_ret;

    temp_one = 1.0;
    temp_ret = func_801C0F18(3, 4);
    temp_fv1 = (f32) ((func_80034C24(temp_ret) / (1e+06)) / temp_one);
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = (f32) (((10.300003f) * temp_fv1) + (-73.9f));
    ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = (f32) (((f64) temp_fv1 * (10.400006103515636)) + (283.20001220703125));
    if (func_801C0B8C(0xCDFE60) != 0) {
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unk4 = (-63.6f);
        ((func_801E3FF4_Struct_P *) D_8038D8D0)->unk10->unk30->unkC = (293.6f);
        func_801C0EB0(3, 4);
        return 0xA;
    }
    return 9;
}
