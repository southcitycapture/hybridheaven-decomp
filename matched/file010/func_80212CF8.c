#include "context.h"

typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80212CF8_Struct0;
typedef struct {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80212CF8_StructX;
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x48 - 0x10];
    u8 c[8];
} func_80212CF8_StructI;
typedef struct {
    u8 pad0[0x30];
    func_80212CF8_StructI *unk30;
} func_80212CF8_StructO;
extern u8 D_80217CE0[];
extern f32 D_8021ADBC;

void func_80212CF8(func_80212CF8_Struct0 *arg0, func_80212CF8_StructO **arg1) {
    register f32 k;
    struct {
        s32 a[3];
    } sp;

    *(struct func_802070F4_Local *)&sp = D_80164F40;
    sp.a[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 0);
    func_8012D918(arg0, 0x4B7, 0, 0, 0);
    k = D_8021ADBC;
    ((s32 *)(*arg1)->unk30)[9] |= 0x60300;
    ((s32 *)(*arg1)->unk30)[12] = (s32)D_80217CE0 | 0x40000000;
    ((f32 *)(*arg1)->unk30)[6] = k;
    ((f32 *)(*arg1)->unk30)[7] = k;
    ((f32 *)(*arg1)->unk30)[8] = k;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->c[0] = 0xFF;
    (*arg1)->unk30->c[1] = 0xFF;
    (*arg1)->unk30->c[2] = 0xFF;
    (*arg1)->unk30->c[3] = 0xDC;
    (*arg1)->unk30->c[4] = 0x66;
    (*arg1)->unk30->c[5] = 0xCD;
    (*arg1)->unk30->c[6] = 0x4C;
    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x223);
}
