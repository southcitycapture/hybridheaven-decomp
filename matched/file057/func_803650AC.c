#include "context.h"

typedef struct func_803650AC_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_803650AC_G;

typedef struct func_803650AC_S {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 a : 1;
    u32 b : 2;
    u32 c : 4;
    u32 d : 1;
    u32 e : 1;
    u32 f : 2;
    u32 g : 2;
    u32 rest : 19;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2F8 - 0x2DA];
    u8 unk2F8;
    u8 pad2F9[0x320 - 0x2F9];
    u8 unk320;
    u8 unk321;
    u8 pad322[0x392 - 0x322];
    u8 unk392;
    u8 pad393[3];
    u8 unk396;
} func_803650AC_S;

typedef struct func_803650AC_Inner {
    u8 pad0[0x1C];
    func_80364F74_Struct2 unk1C;
    u8 pad[0x80 - 0x1C - sizeof(func_80364F74_Struct2)];
    u16 unk80;
} func_803650AC_Inner;

typedef struct func_803650AC_Arg0 {
    u8 pad0[0x5C];
    func_803650AC_Inner *unk5C;
} func_803650AC_Arg0;

typedef struct func_803650AC_Obj2 {
    u8 pad0[0x12];
    s16 unk12;
} func_803650AC_Obj2;

typedef struct func_803650AC_Obj {
    u8 pad0[0x2C];
    func_803650AC_Obj2 *unk2C;
} func_803650AC_Obj;

extern u8 func_80222E84[];
extern void func_8036265C();
extern void func_80224E00(s32, s16);
extern s32 func_80365410(s32, s32);
extern void func_803697AC(s32, s32, u8);

#define GG ((func_803650AC_G *)&D_801BBBF0)

void func_803650AC(func_803650AC_Arg0 *arg0, s32 arg1) {
    func_803650AC_Inner *sp24;
    s32 pad;
    func_803650AC_S *self;
    func_803650AC_S *other;
    s16 var_a1;
    u8 r;
    u8 v;
    u32 w;
    u32 x;

    sp24 = arg0->unk5C;
    self = (func_803650AC_S *)((s32)arg0 == GG->unkDC ? D_801BC03C : D_801BC3D8);
    other = (func_803650AC_S *)((s32)arg0 != GG->unkDC ? D_801BC03C : D_801BC3D8);
    if (GG->unk1031 == 0xF) {
        return;
    }
    func_803602D4(arg0, arg1);
    self->d = 1;
    r = func_80364F74(&sp24->unk1C);
    if (r != 0) {
        func_803697AC((s32)arg0, arg1, r);
    }
    if ((other->unk2D8 == 0x13 && other->unk2D9 < 5) || other->unk2D8 == 0xC || other->unk2D8 == 0 || other->unk2D8 == 1) {
        v = self->unk2F8;
        if (v < 3 || v == 6) {
            func_80367460((s32)arg0, (void **)arg1);
        }
    }
    if (sp24->unk80 == 2) {
        v = self->unk320;
        if (v == 1 || v == 3) {
            var_a1 = -0x800;
            if (self->unk321 == 3) {
                var_a1 = 0x800;
            }
            if (self->f == 3) {
                var_a1 = -var_a1;
            }
            (*(func_803650AC_Obj **)arg1)->unk2C->unk12 += var_a1;
            (*(func_803650AC_Obj **)arg1)->unk2C->unk12 &= 0x1FFF;
            func_80224E00((s32)arg0, var_a1);
        }
    }
    if (func_801DB6B8((s32)arg0, arg1, 0) != 0) {
        v = other->unk2D8;
        if (v != 0xC && v != 0x13) {
            func_80225540((s32)arg0);
        }
        if (self->unk2 <= 0 && self->b == 0) {
            self->b = 1;
        }
        if (self->g == 0) {
            if (self->b != 0 || self->unk2 <= 0) {
                func_802233B0(arg0, arg1);
            } else if (self->c == 1) {
                func_803667C4((void *)arg0, arg1);
            } else if (self->c == 4 || self->unk396 != 0) {
                func_80366B30((void *)arg0, arg1);
            } else {
                func_800058DC((s32)arg0, func_8036265C);
            }
        } else if (self->b != 0 || self->unk2 <= 0) {
            func_800058DC((s32)arg0, func_80222E84);
        } else {
            func_80365FE0((u8 *)arg0, arg1);
        }
    } else {
        v = self->unk2F8;
        if (v >= 3 && v < 6 && func_80365410((s32)arg0, arg1) != 0) {
            return;
        }
    }
    self->unk392 = 0;
}
