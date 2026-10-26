#include "common.h"


typedef struct func_8035EF60_StructB {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 mode : 2;
    u32 pad30b : 5;
    u32 hi : 3;
    u32 pad30c : 13;
    u32 pad34;
    u32 f7 : 1;
    u32 f56 : 2;
    u32 f4 : 1;
    u32 pad38b : 28;
} func_8035EF60_StructB;

typedef struct func_8035EF60_Obj {
    u8 pad[0x5C];
    u8 *unk5C;
} func_8035EF60_Obj;

typedef struct func_8035EF60_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035EF60_Arg;

typedef struct func_8035EF60_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0xEC - 0xE0];
    void *unkEC;
} func_8035EF60_Globals;

extern void func_803711E8();
extern void func_802264D0();
extern void func_80006214();
extern void func_802237B0();
extern void func_800058DC();
extern void func_8035F224();
extern void func_8035F6B4();
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8008DA88[];
extern void B_8013A28C(s32, func_8035EF60_Arg);

typedef struct func_8035EF60_P {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
    u8 padC[0x1C - 0xC];
    s32 unk1C;
} func_8035EF60_P;


void func_8035EF60(func_8035EF60_Obj *arg0, s32 arg1) {
    s32 o[1];
    func_8035EF60_StructB *b;
    func_8035EF60_StructB *a;
    func_8035EF60_Obj *dc;
    func_8035EF60_Obj *other;
    u8 *volatile o2;
    func_8035EF60_P *p;
#define g ((func_8035EF60_Globals *)D_801BBBF0)

    o[0] = (s32)arg0->unk5C;
    dc = (func_8035EF60_Obj *)g->unkDC;
    if (arg0 == dc) {
        b = (func_8035EF60_StructB *)D_801BC03C;
    } else {
        b = (func_8035EF60_StructB *)D_801BC3D8;
    }
    if (arg0 == dc) {
        a = (func_8035EF60_StructB *)D_801BC3D8;
    } else {
        a = (func_8035EF60_StructB *)D_801BC03C;
    }
    if (arg0 != dc) {
        other = dc;
    } else {
        other = (func_8035EF60_Obj *)g->unkEC;
    }
    o2 = other->unk5C;
    func_803711E8(arg0, arg1, 1);
    func_802264D0(arg0, 0x3AB);
    a->f7 = 0;
    b->f7 = a->f7;
    a->f56 = 2;
    b->f56 = a->f56;
    a->hi = 1;
    b->hi = a->hi;
    func_802237B0(arg0, 1);
    if (!b->f4) {
        p = (func_8035EF60_P *)o[0];
        p->unk1C = 0x190007E;
        p = (func_8035EF60_P *)((u8 *)p + 0x1C);
    } else {
        p = (func_8035EF60_P *)((u8 *)o[0] + 0x1C);
        p->unk0 = 0x19000C8;
    }
    p->unk4 = 0;
    p->unk8 = 1.0f;
    p->unk6 = 0;
    if (b->mode == 3) {
        p->unk6 ^= 0x10;
    }
    B_8013A28C(arg1, *(func_8035EF60_Arg *)p);
    func_800058DC(arg0, func_8035F6B4);
    p = (func_8035EF60_P *)(o2 + 0x1C);
    if (!b->f4) {
        p = (func_8035EF60_P *)o2;
        p->unk1C = 0x190007F;
        p = (func_8035EF60_P *)((u8 *)p + 0x1C);
    } else {
        p->unk0 = 0x19000C7;
    }
    p->unk4 = 0;
    p->unk8 = 1.0f;
    p->unk6 = 0;
    if (a->mode == 3) {
        p->unk6 ^= 0x10;
    }
    func_80006214(other);
    B_8013A28C((s32)D_8008DA88, *(func_8035EF60_Arg *)p);
    func_80006214(arg0);
    func_800058DC(other, func_8035F224);
}
#undef g
