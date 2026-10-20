#include "context.h"

struct func_801F6CDC_S3 {
    u8 pad[0x48];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
};
struct func_801F6CDC_S2 {
    u8 pad[0x30];
    struct func_801F6CDC_S3 *unk30;
};
struct func_801F6CDC_S1 {
    u8 pad[0x10];
    struct func_801F6CDC_S2 *unk10;
};
extern f64 D_801FD368;
extern f64 D_801FD370;
extern f64 D_801FD378;
extern f64 D_801FD380;
extern f64 D_801FD388;

s32 func_801F6CDC(s32 arg0, s32 arg1) {
    f64 fv;
    f64 z;
    u32 w;
    u32 v;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 4;
    }
    if (func_801C0B8C(0x04ECE275) != 0) {
    r = func_801C0B2C();
    fv = (f64)(f32)((func_80034C24(r) / D_801FD368) - D_801FD370) / 5.0;
    v = (u32)(f32)((fv * D_801FD378) + D_801FD380);
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b48 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b49 = v;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4A = v;
    z = 1.0 - 1.0;
    ((struct func_801F6CDC_S1 *)D_8038D8D0)->unk10->unk30->b4B = (u32)(f32)((fv * z) + D_801FD388);
    }
    return 3;
}
