#include "context.h"

typedef struct { u8 pad[0x4B]; u8 unk4B; } func_801E29A8_S3;
typedef struct { u8 pad[0x30]; func_801E29A8_S3 *unk30; } func_801E29A8_S2;
typedef struct { u8 pad[0x18]; func_801E29A8_S2 *unk18; } func_801E29A8_S1;

s32 func_801E29A8(s32 arg0, s32 arg1) {
    f32 t;
    f32 a;
    f32 b;
    f32 d;
    f32 c;

    t = (f32)D_801E3A74 / 30.0f;
    if (D_801E3A78 != 0) {
        a = 255.0f * t;
        b = 215.0f * t + 40.0f;
        d = -40.0f * t + 40.0f;
        c = d;
    } else {
        a = -255.0f * t + 255.0f;
        b = -100.0f * t + 140.0f;
        d = 40.0f * t;
        c = d;
    }
    ((func_801E29A8_S1 *)*(u32 *)&D_8038D8D0)->unk18->unk30->unk4B = (u32)a;
    func_801CCE50((u8)(u32)b, (u8)(u32)d, (u8)(u32)c);
    D_801E3A74++;
    if (D_801E3A74 >= 30) {
        if (D_801E3A78 != 0) {
            D_801E3A78 = 0;
        } else {
            D_801E3A78 = 1;
        }
        D_801E3A74 = 0;
    }
    return 3;
}
