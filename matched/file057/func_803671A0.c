#include "context.h"

#if __LINE__ == 3
#define func_803671A0_Vec func_80367288_Vec
#else
typedef struct func_803671A0_Vec { f32 x, y, z; } func_803671A0_Vec;
#endif

extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern f32 func_8002FC20(f32, f32);

typedef struct func_803671A0_C { u8 pad0[0x12]; s16 unk12; } func_803671A0_C;
typedef struct func_803671A0_B { u8 pad0[0x2C]; func_803671A0_C *unk2C; } func_803671A0_B;
typedef struct func_803671A0_A { u8 pad0[0x24]; func_803671A0_B *unk24; } func_803671A0_A;
typedef struct func_803671A0_Dst {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    func_803671A0_Vec unk368;
} func_803671A0_Dst;

void func_803671A0(s32 arg0, void *arg1, func_803671A0_Vec arg2, u8 arg3) {
    f32 d;
    s32 raw;

    d = func_8002FC20(arg2.x * arg2.x + arg2.z * arg2.z, arg2.x);
    if (d <= 1.0) {
        raw = ((func_803671A0_A *)arg0)->unk24->unk2C->unk12 + 0x1000;
        arg2.x = func_8001EAD0((s16)raw);
        arg2.z = func_8001EB64((s16)raw);
        arg2.y = 0.0f;
    } else {
        arg2.x /= d;
        arg2.y /= d;
        arg2.z /= d;
    }
    ((func_803671A0_Dst *)arg1)->unk368 = arg2;
    ((func_803671A0_Dst *)arg1)->unk365 = arg3;
}
