#include "common.h"
extern s32 func_80005700();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);


typedef struct func_801283AC_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2A];
    u8 unk4A;
    u8 unk4B;
} func_801283AC_Struct30;
typedef struct func_801283AC_Struct24 {
    u8 pad0[0x30];
    func_801283AC_Struct30 *unk30;
} func_801283AC_Struct24;
typedef struct func_801283AC_StructArg {
    u8 pad0[0x24];
    func_801283AC_Struct24 *unk24;
    u8 pad28[0x68];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
} func_801283AC_StructArg;
void func_801283AC(func_801283AC_StructArg *arg0, func_801283AC_Struct24 **arg1) {
    func_801283AC_Struct30 *temp;
    f32 wave;

    arg0->unk90 -= (3.4444444444444446);
    (*arg1)->unk30->unk4B = arg0->unk90;
    if (arg0->unk94 < 1.0f) {
        arg0->unk94 += (0.01);
    }
    temp = arg0->unk24->unk30;
    if (temp->unk4A != 0) {
        temp->unk4A -= 5;
    }
    arg0->unk92 += 10;
    if (arg0->unk92 < 361) {
        arg0->unk92 -= 360;
    }
    wave = func_8001EAD0((s16) (s32) (arg0->unk92 / (0.0439453125)));
    (*arg1)->unk30->unk18 = arg0->unk94 * ((0.01) + (0.002) * wave);
    wave = func_8001EB64((s16) (s32) (arg0->unk92 / (0.0439453125)));
    (*arg1)->unk30->unk1C = arg0->unk94 * ((0.01) + (0.002) * wave);
    if ((f64) (u32) arg0->unk90 < (3.4444444444444446)) {
        func_80005700(arg0);
    }
}
