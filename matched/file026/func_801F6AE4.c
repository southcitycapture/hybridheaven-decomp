#include "context.h"

extern f64 D_801FD358;
extern f64 D_801FD360;

typedef struct func_801F6AE4_Struct3 { u8 pad[0x48]; u8 r, g, b, a; } func_801F6AE4_Struct3;
typedef struct func_801F6AE4_Struct2 { u8 pad[0x30]; func_801F6AE4_Struct3 *unk30; } func_801F6AE4_Struct2;
typedef struct func_801F6AE4_Struct1 { u8 pad[0x10]; func_801F6AE4_Struct2 *unk10; } func_801F6AE4_Struct1;

#define P ((func_801F6AE4_Struct1 *)D_8038D8D0)

s32 func_801F6AE4(s32 arg0, s32 arg1) {
    f32 f;
    u8 c;
    u64 t;
    f32 z;

    if (func_801C0B8C(0x049F1095)) {
        return 3;
    }
    if (func_801C0B8C(0x04976F75)) {
        t = func_801C0B2C();
        f = (f32)(func_80034C24(t) / D_801FD358 - D_801FD360) / 0.5f;
        z = 1.0f - 1.0f;
        c = (u32)(f * 153.0f);
        P->unk10->unk30->r = c;
        P->unk10->unk30->g = c;
        P->unk10->unk30->b = c;
        P->unk10->unk30->a = (u32)(f * z + 255.0f);
    }
    return 2;
}
