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
void D_8038BD88(f32, f32, f32);
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);


extern f32 D_801FC0D8;
extern f32 D_801FC0DC;
extern f64 D_801FC0E0;
extern f64 D_801FC0E8;
extern f64 D_801FC0F0;
extern f64 D_801FC0F8;
extern f64 D_801FC100;
extern f64 D_801FC108;
extern f64 D_801FC110;
extern f64 D_801FC118;
extern f64 D_801FC120;
extern f64 D_801FC128;
extern f64 D_801FC130;
extern f64 D_801FC138;
extern f32 D_801FC140;
extern f32 D_801FC144;
extern f32 D_801FC148;

struct func_801E7324_StructLeaf {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
#define LEAF ((struct func_801E7324_StructLeaf *)D_801BBBF0.unkE8->unk2C)

s32 func_801E7324(s32 arg0, s32 arg1) {
    f64 t;
    f32 s;
    f64 e;
    f64 d;
    struct func_801E7324_StructLeaf *p;

    if (func_801C0B8C(0x01C83CE0) != 0) {
        func_8038BD50(D_801FC0D8, 29.0f, -11.5f);
        D_8038BD88(74.0f, D_801FC0DC, -11.5f);
        return 5;
    }
    if (func_801C0B8C(0x01A9B860) != 0) {
        d = func_80034C24(func_801C0B2C());
        e = D_801FC0E0;
        t = (f64)(f32)(d / D_801FC0E8 - D_801FC0F0) / 2;
        LEAF->unk30 = t * D_801FC0F8 + D_801FC100;
        LEAF->unk34 = t * -7.0 + D_801FC108;
        LEAF->unk38 = t * D_801FC110 + D_801FC118;
        LEAF->unk3C = t * D_801FC120 + D_801FC128;
        LEAF->unk40 = t * D_801FC130 + D_801FC138;
        LEAF->unk44 = t * e + e;
        return 4;
    }
    if (func_801C0B8C(0x016CAF60) != 0) {
        LEAF->unk30 += D_801FC140;
        LEAF->unk34 += D_801FC144;
        LEAF->unk38 += D_801FC148;
    }
    return 4;
}
