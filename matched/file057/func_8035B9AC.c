#include "context.h"
struct func_8035BCCC_Struct {
    u8 pad0[0x3E];
    u16 unk3E;
    u8 pad1[0xC];
    u16 unk4C;
};
void func_8035BCCC(struct func_8035BCCC_Struct *arg0, s32 arg1);

typedef struct func_8035B9AC_Vec { s32 w[3]; } func_8035B9AC_Vec;
typedef struct func_8035B9AC_Out { f32 unk0; f32 unk4; f32 unk8; f32 unkC; } func_8035B9AC_Out;
typedef struct func_8035B9AC_Pos { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8035B9AC_Pos;
typedef struct func_8035B9AC_Obj {
    u8 pad[0xB0];
    func_8035B9AC_Vec a;
    func_8035B9AC_Vec b;
} func_8035B9AC_Obj;
typedef struct func_8035B9AC_Holder {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_8035B9AC_Pos *p; } *unk24;
    u8 pad1[0x5C - 0x28];
    func_8035B9AC_Obj *unk5C;
} func_8035B9AC_Holder;
typedef struct func_8035B9AC_Arg {
    u8 pad0[0xC];
    func_8035B9AC_Holder *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
    u8 pad2[0x6C - 0x40];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_8035B9AC_Arg;
extern f64 D_8038A088;
extern f64 D_8038A090;
extern f32 D_8038A098;
extern f32 D_8038A09C;
extern f32 D_8038A0A0;
extern f32 D_8038A0A4;

void func_8035B9AC(func_8035B9AC_Arg *arg0, s32 arg1) {
    func_8035B9AC_Pos *sp9C;
    func_8035B9AC_Holder *h;
    func_8035B9AC_Out sp88;
    f32 v;
    f32 big;

    h = arg0->unkC;
    sp9C = h->unk24->p;
    func_80223B2C((s32)h, (func_80358C6C_Out *)&sp88, *(func_80358C6C_Vec6 *)&h->unk5C->a, *(func_80358C6C_Vec6 *)&h->unk5C->b);
    big = sp88.unkC < sp88.unk8 ? sp88.unk8 : sp88.unkC;
    big = (f32)((f64)big * D_8038A088);
    if ((f64)big < D_8038A090) {
        big = D_8038A098;
    }
    arg0->unk6C = sp9C->unk4 + sp88.unk0;
    arg0->unk70 = sp9C->unk8;
    arg0->unk74 = sp9C->unkC + sp88.unk4;
    func_801CE1C8(arg0, 0x28, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0, 0x4D, 0x73, 0xA5, 0xFF, 0x4D, 0x73, 0xA5, 0, 6, 0x3C, big, D_8038A09C, big, 0.0f, 4);
    func_801CE4D4(arg0, 0x2A, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x4D, 0x73, 0xA5, 0xFF, 0, 3, 0x32, D_8038A0A0, 5);
    func_801CE1C8(arg0, 0x29, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 2, 0x28, D_8038A0A4, D_8038A0A4, D_8038A0A4, 0.0f, 5);
    func_802254F8(arg0, 0x3C, 4);
    arg0->unk3E = 0;
    func_800058DC(arg0, func_8035BCCC);
}
