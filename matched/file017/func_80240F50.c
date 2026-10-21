#include "context.h"

extern f64 D_8025C2D0;
extern f64 D_8025C2D8;

struct func_80240F50_Struct {
    u8 pad[0x90];
    f32 x;
    f32 y;
    f32 z;
    s16 angle;
};

struct func_80240F50_StructLocal {
    f32 x;
    f32 z;
    f32 y;
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
    u8 pad[4];
};

void func_80240F50(struct func_80240F50_Struct *arg0, void *arg1) {
    struct func_80240F50_StructLocal data;

    if (func_801C2FF8() != 0) {
        data.x = (f32)(((f64)func_8001EAD0(arg0->angle) * D_8025C2D0) + (f64)arg0->x);
        data.z = (f32)(((f64)func_8001EB64(arg0->angle) * D_8025C2D8) + (f64)arg0->z);
        data.a = 0x1100;
        data.b = 0x0168003E;
        data.d = 0;
        data.e = 0x5A;
        data.y = 0.0f;
        data.c = 1.5f;
        func_801C2F0C(2, &data);
        func_800058DC(arg0, func_8024102C);
    }
}
