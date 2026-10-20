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

typedef struct func_8012ACDC_StructArg {
    u8 pad0[0x24];
    func_8012AE54_StructObj *unk24;
    u8 pad1[0x18];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
} func_8012ACDC_StructArg;

s32 func_8012ACDC(func_8012ACDC_StructArg *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 *px;
    f32 *py;
    f32 d;
    f32 t;
    f32 t2;

    if (arg0->unk24->unk2C != NULL) {
        px = &arg0->unk24->unk2C->x;
        py = &arg0->unk24->unk2C->y;
    } else {
        px = &arg0->unk24->unk30->x;
        py = &arg0->unk24->unk30->y;
    }
    d = func_8002FC20((arg1 - *px) * (arg1 - *px) + (arg2 - *py) * (arg2 - *py), arg2);
    if (d * arg3 == 0.0f) {
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return 0;
    }
    arg0->unk40 = ((arg1 - *px) / d) * arg3;
    arg0->unk48 = ((arg2 - *py) / d) * arg3;
    t2 = *px;
    if ((((f64)arg1 - ((f64)arg0->unk40 + (f64)t2)) * (f64)(arg1 - t2)) < 0.0
        || (t = *py, (((f64)arg2 - ((f64)arg0->unk48 + (f64)t)) * (f64)(arg2 - t)) < 0.0)) {
        *px = arg1;
        *py = arg2;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return 0;
    }
    return 1;
}
