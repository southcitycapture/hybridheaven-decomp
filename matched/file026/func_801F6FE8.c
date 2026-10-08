#include "context.h"

struct func_801F6FE8_Struct1;
struct func_801F6FE8_Struct2;
struct func_801F6FE8_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
};
struct func_801F6FE8_Struct2 {
    u8 pad0[0x30];
    struct func_801F6FE8_Struct3 *unk30;
};
struct func_801F6FE8_Struct1 {
    u8 pad0[0x14];
    struct func_801F6FE8_Struct2 *unk14;
};

f64 func_80034C24(u64);                             /* extern */
u64 func_801C0B2C();                                /* extern */
extern f64 D_801FD390;
extern f64 D_801FD398;
extern f64 D_801FD3A0;

s32 func_801F6FE8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk4 = 5120.0f;
        return 3;
    }
    temp_ret = func_801C0B2C();
    ((struct func_801F6FE8_Struct1 *) D_8038D8D0)->unk14->unk30->unk8 = (f32) ((((f64) (f32) ((func_80034C24(temp_ret) / D_801FD390) - D_801FD398) / D_801FD3A0) * 13.0) + 5.0);
    return 2;
}
