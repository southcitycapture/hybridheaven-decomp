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
struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};
struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};
struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};
extern struct func_801EC5B4_Struct0 *D_801DAB14;
struct func_801F838C_S3 { u8 pad[4]; f32 u4; f32 u8_; f32 uC; u8 pad2[2]; s16 u12; };
struct func_801F838C_S2 { u8 pad[0x2C]; struct func_801F838C_S3 *u2C; };
struct func_801F838C_S1 { u8 pad[0x24]; struct func_801F838C_S2 *u24; };
struct func_801F838C_S0 { u8 pad[8]; struct func_801F838C_S1 *u8_; };
#define P (*(struct func_801F838C_S0 **)&D_801DAB14)
#define Q P->u8_->u24->u2C
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);
void func_8038BE98(f32);


struct func_801F13A0_Struct { u8 pad[0x30]; f32 f[6]; };
#define Q ((struct func_801F13A0_Struct *)D_801BBBF0.unkE8->unk2C)
extern f64 D_801FCC00;
extern f64 D_801FCC08;
extern f64 D_801FCC10;
extern f64 D_801FCC18;
extern f64 D_801FCC20;
extern f64 D_801FCC28;
extern f64 D_801FCC30;
extern f64 D_801FCC38;
extern f64 D_801FCC40;
extern f64 D_801FCC48;
extern f64 D_801FCC50;
extern f64 D_801FCC58;
extern f64 D_801FCC60;
extern f64 D_801FCC68;
extern f64 D_801FCC70;
extern f64 D_801FCC78;
extern f64 D_801FCC80;
extern f64 D_801FCC88;
extern f64 D_801FCC90;
extern f64 D_801FCC98;
extern f64 D_801FCCA0;
extern f64 D_801FCCA8;
extern f64 D_801FCCB0;
extern f64 D_801FCCB8;
extern f64 D_801FCCC0;
extern f64 D_801FCCC8;
extern f64 D_801FCCD0;
extern f64 D_801FCCD8;
extern f64 D_801FCCE0;
extern f64 D_801FCCE8;
extern f64 D_801FCCF0;
extern f64 D_801FCCF8;
extern f64 D_801FCD00;
extern f32 D_801FCD08;

s32 func_801F13A0(s32 arg0, s32 arg1) {
    f64 t;
    f64 t3;
    u64 r;

    if (func_801C0B8C(0xF5AA9F) != 0) {
        return 4;
    }
    if (func_801C0B8C(0xE9759F) != 0) {
        r = func_801C0B2C();
        t = (f64)(f32)((func_80034C24(r) / D_801FCC00) - D_801FCC08) / D_801FCC10;
        Q->f[0] = (f32)((t * -5.0) + D_801FCC18);
        Q->f[1] = (f32)((t * D_801FCC20) + D_801FCC28);
        Q->f[2] = (f32)((t * D_801FCC30) + D_801FCC38);
        Q->f[3] = (f32)((t * D_801FCC40) + D_801FCC48);
        Q->f[4] = (f32)((t * 0.5) + 11.0);
        Q->f[5] = (f32)((t * D_801FCC50) + D_801FCC58);
        return 3;
    }
    if (func_801C0B8C(0xD7261F) != 0) {
        r = func_801C0B2C();
        t = (f64)(f32)((func_80034C24(r) / D_801FCC60) - D_801FCC68) / D_801FCC70;
        Q->f[0] = (f32)((t * 7.0) + 16.0);
        Q->f[1] = (f32)((t * D_801FCC78) + 4.5);
        Q->f[2] = (f32)((t * D_801FCC80) + D_801FCC88);
        Q->f[3] = (f32)((t * D_801FCC90) + -0.5);
        Q->f[4] = (f32)((t * -2.0) + 13.0);
        Q->f[5] = (f32)((t * D_801FCC98) + 2.5);
        return 3;
    }
    r = func_801C0B2C();
    t3 = (f64)(f32)((func_80034C24(r) / D_801FCCA0) - D_801FCCA8) / (2.0 - 1.0);
    Q->f[0] = (f32)((t3 * D_801FCCB0) + D_801FCCB8);
    Q->f[1] = (f32)((t3 * -16.0) + D_801FCCC0);
    Q->f[2] = (f32)((t3 * D_801FCCC8) + D_801FCCD0);
    Q->f[3] = (f32)((t3 * D_801FCCD8) + D_801FCCE0);
    Q->f[4] = (f32)((t3 * D_801FCCE8) + D_801FCCF0);
    Q->f[5] = (f32)((t3 * D_801FCCF8) + D_801FCD00);
    func_8038BE98(D_801FCD08);
    return 3;
}
