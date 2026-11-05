#include "common.h"
struct func_801E7ECC_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_801E7ECC_Struct2 {
    u8 pad[0x2C];
    struct func_801E7ECC_Struct3 *unk2C;
};
struct func_801E7ECC_Struct1 {
    u8 pad[0xE8];
    struct func_801E7ECC_Struct2 *unkE8;
};
extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);
struct func_801E1C38_Struct {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
void func_8038BE98(f32);


#define FUNC_801F35A8_DEST ((struct func_801E1C38_Struct *) D_801BBBF0.unkE8->unk2C)

s32 func_801F35A8(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C0B8C(0x05F048B5) != 0) {
        return 0x17;
    }
    if (func_801C0B8C(0x0594BB35) != 0) {
        t = (func_80034C24(func_801C0B2C()) / 1000000.0) - 93.6333331823348942;
        FUNC_801F35A8_DEST->unk30 = ((t / 6.0) * -46.3) + 30.8;
        FUNC_801F35A8_DEST->unk34 = ((t / 6.0) * -18.8) + 26.8;
        FUNC_801F35A8_DEST->unk38 = ((t / 6.0) * 53.3) + 23.5;
        FUNC_801F35A8_DEST->unk3C = ((t / 6.0) * -0.700000000000001066) + -14.1;
        FUNC_801F35A8_DEST->unk40 = ((t / 6.0) * 8.9) + 6.0f;
        FUNC_801F35A8_DEST->unk44 = ((t / 6.0) * -1.80000000000000071) + 15.5;
        func_8038BE98(33.3f);
    } else {
        t = (func_80034C24(func_801C0B2C()) / 1000000.0) - 87.6333331823348942;
        FUNC_801F35A8_DEST->unk30 = ((t / 6.0) * 8.1) + -3.0;
        FUNC_801F35A8_DEST->unk34 = ((t / 6.0) * -6.5) + 13.1;
        FUNC_801F35A8_DEST->unk38 = ((t / 6.0) * 20.6) + -10.4;
        FUNC_801F35A8_DEST->unk3C = ((t / 6.0) * 1.5) + -13.6;
        FUNC_801F35A8_DEST->unk40 = ((t / 6.0) * 3.40000000000000036) + 3.5;
        FUNC_801F35A8_DEST->unk44 = ((t / 6.0) * 0.900000000000000355) + 15.9;
        func_8038BE98((f32) (((t / 6.0) * 0.699999999999999289) + 18.3));
    }
    return 0x16;
}
