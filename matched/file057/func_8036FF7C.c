#include "context.h"

typedef struct func_8036FF7C_Anim {
    s32 id;
    u16 frame;
    u16 flags;
    f32 speed;
} func_8036FF7C_Anim;

typedef struct func_8036FF7C_Obj {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x1C - 0xE];
    func_8036FF7C_Anim anim;
} func_8036FF7C_Obj;

typedef struct func_8036FF7C_Arg {
    u8 pad0[0x5C];
    func_8036FF7C_Obj *unk5C;
} func_8036FF7C_Arg;

typedef struct func_8036FF7C_State {
    u8 pad0[0x32D];
    u8 unk32D;
    u8 pad32E[0x374 - 0x32E];
    s8 unk374;
    u8 pad375[0x392 - 0x375];
    u8 unk392;
} func_8036FF7C_State;

extern void func_802237B0(void *, s32, func_8036FF7C_State *);
extern void func_80011258(s32, void *, func_8036FF7C_State *);
extern void func_8035A914(void *, s32);
extern void func_8035A8F0(void *, s32);
extern void func_8035A734(void *, s32, u16);
typedef struct func_8036FF7C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8036FF7C_Vec;

extern func_8036FF7C_Vec func_8013BD84(void *);
extern void func_8013A1B4();
extern void func_8035C4C0();

void func_8036FF7C(void *arg0, s32 arg1) {
    func_8036FF7C_State *st;
    func_8036FF7C_Obj *obj;
    func_8036FF7C_Anim *a;
    extern s32 func_80010550();

    if ((s32)arg0 == D_801BBCCC) {
        st = (func_8036FF7C_State *)D_801BC03C;
    } else {
        st = (func_8036FF7C_State *)D_801BC3D8;
    }
    obj = ((func_8036FF7C_Arg *)arg0)->unk5C;
    a = &obj->anim;
    st->unk392 = 0;
    func_802237B0(arg0, 1, st);
    if ((a->id == 0x3200064 && a->frame == func_80011590(a->speed * 4.0f)) ||
        (a->id == 0x19100AF && a->frame == func_80011590(a->speed * (f32)2.0)) ||
        (a->id != 0x3200064 && a->id != 0x19100AF && a->frame == func_80011590(a->speed * 16.0f))) {
        if (st->unk374 < ++st->unk32D) {
            func_80011258(arg1, &a->flags, st);
        }
        if (a->id == 0x1910004 || a->id == 0x19100A1) {
            func_8035A914(arg0, arg1);
        } else if (a->id == 0x3200064) {
            func_8035A8F0(arg0, arg1);
        } else {
            func_8035A734(arg0, arg1, (a->flags & 0x10) ? 0x1D : 0x1C);
        }
        func_80020718(0x3A6);
    }
    if (func_80010550(arg1, obj) != 0) {
        if (obj->unkC >= 0x16) {
            func_8013A1B4(arg1, func_8013BD84(arg0), 0x180000);
        }
        func_800058DC((s32)arg0, func_8035C4C0);
    }
}
