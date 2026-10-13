#include "context.h"

typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;

typedef struct func_8036D30C_Obj {
    u8 pad0[0x1C];
    func_8036D30C_Anim anim;
} func_8036D30C_Obj;

typedef struct func_8036D30C_Arg {
    u8 pad0[0x5C];
    func_8036D30C_Obj *unk5C;
} func_8036D30C_Arg;

typedef struct func_8036D30C_State {
    u8 pad0[0x30];
    u32 b30_7 : 1;
    u32 b30_pad : 6;
    u32 b30_0 : 1;
    u32 b31_7 : 1;
    u32 b31_65 : 2;
    u32 b31_43 : 2;
    u32 b31_pad : 3;
    u32 rest30 : 16;
    u8 pad34[4];
    u32 b38_7 : 1;
    u32 b38_65 : 2;
    u32 b38_4 : 1;
    u32 b38_pad : 4;
    u32 rest38 : 24;
} func_8036D30C_State;

extern s32 func_80011590(u16);
extern void func_8013A28C(void *, func_8036D30C_Anim);
extern void func_8036D7FC();
extern func_8036D30C_Anim D_80387AF0;

void func_8036D30C(s32 arg0, struct func_80369C7C_Obj2 **arg1) {
    func_8036D30C_State *st;
    func_8036D30C_Obj *obj;
    func_8036D30C_Anim *a;
    func_8036D30C_Anim anim;

    if (arg0 == D_801BBCCC) {
        st = (func_8036D30C_State *)D_801BC03C;
    } else {
        st = (func_8036D30C_State *)D_801BC3D8;
    }
    obj = ((func_8036D30C_Arg *)arg0)->unk5C;
    anim = D_80387AF0;
    a = &obj->anim;
    if ((a->id == 0x190001F || a->id == 0x1900020 || a->id == 0x1900022 || a->id == 0x1900023) &&
        func_80011590(a->speed * 4.0f) < a->frame && a->frame < func_80011590(a->speed * 20.0f)) {
        st->b31_43 = 1;
        (*arg1)->unk2C->unk12 += 0x1000;
        (*arg1)->unk2C->unk12 &= 0x1FFF;
    } else if ((a->id == 0x190001E || a->id == 0x1900021) &&
               func_80011590(a->speed * 7.0f) < a->frame && a->frame < func_80011590(a->speed * 21.0f)) {
        st->b31_43 = 3;
        (*arg1)->unk2C->unk12 += 0x1000;
        (*arg1)->unk2C->unk12 &= 0x1FFF;
    }
    if (st->b31_43 == 2) {
        anim.id = 0x190013B;
    } else if (st->b31_43 == 3) {
        anim.id = 0x190013D;
    } else {
        anim.id = 0x190013A;
    }
    st->b31_65 = 0;
    st->b38_7 = 0;
    st->b38_4 = 0;
    st->b38_65 = 0;
    st->b30_0 = 1;
    st->b30_7 = 1;
    *a = anim;
    func_8013A28C(arg1, *a);
    func_800058DC(arg0, func_8036D7FC);
}
