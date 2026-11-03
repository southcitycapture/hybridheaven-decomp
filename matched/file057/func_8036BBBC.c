#include "common.h"
/* context.h uses the func_8036D30C_Anim macro, which expands to AnimL_<line-of-use>
   inside context.h; supply the dangling names it leaves behind. */
typedef struct func_8036BBBC_An { int id; unsigned short frame; unsigned char pad6[2]; float speed; } func_8036BBBC_An;
#define AnimL_72 AnimEarly0
#define AnimL_77 AnimEarly0
#define AnimL_562 AnimEarly0
#define AnimL_817 func_8036BBBC_An
typedef func_8036BBBC_An func_8036D30C_Anim;
typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly0;
extern u8 D_8008DA88[];
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387AE0;
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_80006214(void *);
extern s32 func_80011590(u16);
extern void func_802237B0(void *, s32);
extern s32 func_80368E58(s32, s32, s16, u8);
void func_8036BF18(s32 arg0, s32 arg1);


typedef struct func_8036BBBC_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_8036BBBC_Vec;

typedef struct func_8036BBBC_Cur {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    s16 unk4;
    u8 pad6[2];
    void **unk8;
} func_8036BBBC_Cur;

typedef struct func_8036BBBC_CurBits {
    u32 top : 2;
} func_8036BBBC_CurBits;

typedef struct func_8036BBBC_Tgt {
    u8 pad0[0x1C];
    void *unk1C;
    u16 unk20;
    u8 pad22[0x80 - 0x22];
    u16 unk80;
} func_8036BBBC_Tgt;

typedef struct func_8036BBBC_Obj {
    u8 pad0[0x5C];
    func_8036BBBC_Tgt *unk5C;
} func_8036BBBC_Obj;

typedef struct func_8036BBBC_State {
    u8 pad0[0x30];
    u32 pad30 : 8;
    u32 b31_7 : 1;
    u32 f60 : 2;
    u32 f18 : 2;
    u32 pad31 : 3;
    u32 e0 : 3;
    u32 b10 : 1;
    u32 pad32 : 4;
    u32 pad33 : 8;
    u8 pad34[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad2F9;
    u8 unk2FA;
    u8 pad2FB[0x314 - 0x2FB];
    func_8036BBBC_Vec unk314;
    u8 unk320;
    u8 unk321;
} func_8036BBBC_State;

typedef struct func_8036BBBC_Sub {
    u8 pad0[0x12];
    s16 unk12;
} func_8036BBBC_Sub;

typedef struct func_8036BBBC_Mdl {
    u8 pad0[0x2C];
    func_8036BBBC_Sub *unk2C;
} func_8036BBBC_Mdl;

extern func_8036BBBC_Cur *D_8038CC64;
extern void func_8013A334(func_8036BBBC_Vec *, s32, func_8036BBBC_Tgt *, u8);
extern s32 func_801DB6B8(s32, s32, s32);
extern void func_802254F8(s32, s32, s32);
extern void func_802264D0(s32, s32);
extern s32 func_8036048C(s32, s32, func_8036BBBC_Vec);
extern s32 func_80364340(s32, void *, func_8036BBBC_Vec);
extern void func_803709D0(s32, func_8036BBBC_Vec, s32);
extern void func_8036265C(s32, s32);

void func_8036BBBC(s32 arg0, s32 arg1) {
    s32 tmp;
    s32 sp50;
    func_8036BBBC_Tgt *sp4C;
    s32 pad48;
    func_8036BBBC_State *sp44;
    s32 pad40;
    func_8036BBBC_Vec sp34;
    func_8036BBBC_State *var_s0;
    s32 var_v1;

    if (arg0 != (s32)D_801BBBF0.unkDC) {
        sp50 = (s32)D_801BBBF0.unkDC;
    } else {
        sp50 = (s32)D_801BBBF0.unkEC;
    }
    sp4C = ((func_8036BBBC_Obj *)arg0)->unk5C;
    if (arg0 == (s32)D_801BBBF0.unkDC) {
        var_s0 = (func_8036BBBC_State *)D_801BC03C;
    } else {
        var_s0 = (func_8036BBBC_State *)D_801BC3D8;
    }
    if (arg0 != (s32)D_801BBBF0.unkDC) {
        sp44 = (func_8036BBBC_State *)D_801BC03C;
    } else {
        sp44 = (func_8036BBBC_State *)D_801BC3D8;
    }
    func_802237B0((void *)arg0, 1);
    if (sp4C->unk80 == 0) {
        if ((s32)*D_8038CC64->unk8 == ((s32 *)sp4C)[7]) {
            if (sp4C->unk20 == func_80011590(D_8038CC64->unk2) * 1) {
                func_8013A334(&sp34, arg1, sp4C, D_8038CC64->unk1);
                sp44->unk320 = func_8036048C(arg0, arg1, sp34);
                sp44->unk2FA = 1;
                func_803709D0(sp50, var_s0->unk314, 2);
                func_802264D0(arg0, 0x3B4);
                func_802254F8(arg0, 5, 7);
                func_802254F8(sp50, 0xA, 6);
                sp44->unk2F8 = 0;
                func_80006214((void *)sp50);
                sp44->unk321 = func_80364340(sp50, D_8008DA88, sp34);
                func_80006214((void *)arg0);
                D_80387AE0 = 0;
                func_800058DC(sp50, func_8036BF18);
            }
        }
    }
    func_8013A334((func_8036BBBC_Vec *)((u8 *)var_s0 + 0x314), arg1, sp4C, D_8038CC64->unk1);
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        var_s0->b10 = 0;
        sp44->b10 = 1;
        var_s0->f18 = ((func_8036BBBC_CurBits *)D_8038CC64)->top;
        var_s0->e0 = 0;
        if (var_s0->f18 != 0) {
            func_80368E58(arg0, arg1, D_8038CC64->unk4, ((func_8036BBBC_CurBits *)D_8038CC64)->top);
            return;
        }
        if (var_s0->f60 == 3) {
            var_v1 = -D_8038CC64->unk4;
        } else {
            var_v1 = D_8038CC64->unk4;
        }
        (*(func_8036BBBC_Mdl **)arg1)->unk2C->unk12 += var_v1;
        (*(func_8036BBBC_Mdl **)arg1)->unk2C->unk12 &= 0x1FFF;
        if (sp4C->unk1C == (void *)0x01900110) {
            var_s0->f60 = var_s0->f60 ^ 1;
        }
        func_800058DC(arg0, func_8036265C);
    }
}
