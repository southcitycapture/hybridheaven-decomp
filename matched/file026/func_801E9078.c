#include "context.h"

extern f64 D_801FC5E0;
extern f64 D_801FC5E8;
extern f64 D_801FC5F0;
extern f64 D_801FC5F8;
extern f64 D_801FC600;
extern f64 D_801FC608;
extern f64 D_801FC610;
extern f64 D_801FC618;
extern f64 D_801FC620;

struct func_801E9078_Struct2 {
    u8 pad[0x2C];
    struct func_801E1C38_Struct *unk2C;
};

s32 func_801E9078(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    u64 r;

    if (func_801C0B8C(0x06131FFA) != 0) {
        return 0x18;
    }
    r = func_801C0B2C();
    a = (f64)(f32)(func_80034C24(r) / D_801FC5E0 - D_801FC5E8) / 2;
    b = a * (1.0 - 1.0);
#define P ((struct func_801E9078_Struct2 *)D_801BBBF0.unkE8)->unk2C
    P->unk30 = b + D_801FC5F0;
    P->unk34 = a * D_801FC5F8 + D_801FC600;
    P->unk38 = b + D_801FC608;
    P->unk3C = b + D_801FC610;
    P->unk40 = b + D_801FC618;
    P->unk44 = b + D_801FC620;
    return 0x17;
}
