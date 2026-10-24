#include "context.h"

typedef struct func_80129040_StructC {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2A];
    u8 unk4A;
    u8 unk4B;
} func_80129040_StructC;
typedef struct func_80129040_StructB {
    u8 pad0[0x30];
    func_80129040_StructC *unk30;
} func_80129040_StructB;
typedef struct func_80129040_StructA {
    u8 pad0[0x24];
    func_80129040_StructB *unk24;
    u8 pad28[0x6A];
    s16 unk92;
    f32 unk94;
    u8 pad98[4];
    f32 unk9C;
} func_80129040_StructA;

extern f64 D_8018CD48;
extern f64 D_8018CD50;
extern f64 D_8018CD58;
extern f64 D_8018CD60;
extern f64 D_8018CD68;
extern f64 D_8018CD70;
extern f64 D_8018CD78;
extern f64 D_8018CD80;
extern f64 D_8018CD88;
extern f64 D_8018CD90;
extern f64 D_8018CD98;
extern f64 D_8018CDA0;
extern f64 D_8018CDA8;
extern f64 D_8018CDB0;

void func_80129040(func_80129040_StructA *arg0, func_80129040_StructB **arg1) {
    f64 k;
    f64 c;
    f64 d;
    f64 e;
    f64 c2, d2, k3, c3, d3, c4, d4;
    f32 r;
    if (arg0->unk94 < 1.0f) {
        arg0->unk94 = arg0->unk94 + D_8018CD48;
    }
    if (arg0->unk24->unk30->unk4A != 0) {
        arg0->unk24->unk30->unk4A -= 5;
    }
    k = D_8018CD50;
    arg0->unk92 += 0xA;
    r = func_8001EAD0((s16)(arg0->unk92 / k));
    k = D_8018CD58;
    c = D_8018CD60;
    d = D_8018CD68;
    (*arg1)->unk30->unk18 = arg0->unk94 * (c + d * r);
    if (arg0->unk9C != 0.0f) {
        (*arg1)->unk30->unk4B -= 0x10;
        r = func_8001EAD0((s16)(arg0->unk92 / k));
        c2 = D_8018CD70;
        d = D_8018CD78;
        (*arg1)->unk30->unk18 = arg0->unk94 * (c2 + D_8018CD80 * r);
        (*arg1)->unk30->unk1C = arg0->unk94 * d + c2;
        if ((*arg1)->unk30->unk4B < 0x80) {
            func_80005700(arg0);
        }
    } else {
        (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - D_8018CD88;
        r = func_8001EAD0((s16)(arg0->unk92 / k));
        k3 = D_8018CD90;
        c3 = D_8018CD98;
        d3 = D_8018CDA0;
        (*arg1)->unk30->unk18 = arg0->unk94 * (c3 + d3 * r);
        r = func_8001EB64((s16)(arg0->unk92 / k3));
        c3 = D_8018CDA8;
        d3 = D_8018CDB0;
        (*arg1)->unk30->unk1C = arg0->unk94 * (c3 + d3 * r);
        if ((*arg1)->unk30->unk4B < 0x20) {
            func_80005700(arg0);
        }
    }
}
