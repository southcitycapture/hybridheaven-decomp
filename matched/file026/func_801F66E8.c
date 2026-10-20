#include "context.h"

extern f64 D_801FD338;
extern f64 D_801FD340;
extern f64 D_801FD348;
extern f64 D_801FD350;

struct func_801F66E8_S3 { u8 pad[0x48]; u8 b48; u8 b49; u8 b4A; u8 b4B; };
struct func_801F66E8_S2 { u8 pad[0x30]; struct func_801F66E8_S3 *u30; };
struct func_801F66E8_S1 { u8 pad[0xC]; struct func_801F66E8_S2 *uC; };

s32 func_801F66E8(s32 arg0, s32 arg1) {
    f64 d;
    f64 z;
    u64 t;

    if (func_801C0B8C(0x01607A5F) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x0132B39F) != 0) {
        t = func_801C0B2C();
        d = (f64)(f32)(func_80034C24(t) / D_801FD338 - D_801FD340) / 3.0;
        z = 1.0 - 1.0;
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b48 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b49 = (u32)(f32)(d * z);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4A = (u32)(f32)(d * D_801FD348 + D_801FD350);
        ((struct func_801F66E8_S1 *)*(void **)&D_8038D8D0)->uC->u30->b4B = 0xFF;
    }
    return 2;
}
