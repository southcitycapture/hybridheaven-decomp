#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8023EF70;
extern f64 D_8023EF78;

struct func_80223B2C_Mid {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80223B2C_Mid2 {
    u8 pad0[0x2C];
    struct func_80223B2C_Mid *unk2C;
};
struct func_80223B2C_Obj {
    u8 pad0[0x24];
    struct func_80223B2C_Mid2 *unk24;
    u8 pad28[0x36 - 0x28];
    u16 unk36;
};
struct func_80223B2C_Out {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80223B2C_V {
    f32 a;
    f32 b;
    f32 c;
};

void func_80223B2C(arg0, arg1, arg2, arg3)
struct func_80223B2C_Obj *arg0;
struct func_80223B2C_Out *arg1;
struct func_80223B2C_V arg2;
struct func_80223B2C_V arg3;
{
    s32 pad;
    struct func_80223B2C_Mid *sp20;
    f32 sp1C;
    f32 fv0;
    f32 fv1;
    f32 fa0;
    f64 k;
    func_80225664_Struct *v;

    sp20 = arg0->unk24->unk2C;
    sp1C = func_8001EAD0(sp20->unk12);
    fv0 = func_8001EB64(sp20->unk12);
    if (arg0->unk36 == 0x11D) {
        if ((s32)arg0 == D_801BBCCC) {
            v = (func_80225664_Struct *)D_801BC03C;
        } else {
            v = (func_80225664_Struct *)D_801BC3D8;
        }
        if (((u8 *)v)[0x390] == 2 && ((u32)(v->unk30 << 27) >> 30) == 2) {
            k = D_8023EF70;
            arg2.c = arg2.c * D_8023EF78;
            arg2.a = arg2.a * k;
            arg3.a = arg3.a * k;
        }
    }
    arg1->unk8 = (arg2.a - arg3.a) / 2;
    arg1->unkC = (arg2.c - arg3.c) / 2;
    fv1 = (arg2.a + arg3.a) * 0.5;
    fa0 = (arg2.c + arg3.c) * 0.5;
    arg1->unk0 = fv1 * fv0 + fa0 * sp1C;
    arg1->unk4 = (-fv1) * sp1C + fa0 * fv0;
}
