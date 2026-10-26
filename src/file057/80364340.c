#include "common.h"

extern f32 D_8038AA10;
extern f64 D_8038AA18;
extern s32 D_801BBCCC;
extern s32 func_80005E44(void *, void *);
extern s32 func_801DB6B8(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_8022397C();
extern s32 func_802242D0(s32, void *);
extern s32 func_802320E8(void *);
extern u16 func_80011590(s32);
extern u8 D_8008DA88[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC21;
extern u8 D_803868C8[];
extern u8 D_803868D8[];
extern u8 D_803868FC[];
extern u8 func_80222E84[];
#define func_80366278 func_80366278__decl
extern u8 func_80366278[];
#define func_8036648C func_8036648C__decl
extern u8 func_8036648C[];
extern void func_80005700(s32 arg0, s32 arg1);
extern void func_800058DC(s32, void *);
extern void func_80006214();
extern void func_80010550(s32, s32);
extern void func_80011198(s32 arg0, void *arg1);
extern void func_80020718(s32);
extern void func_8013A334(void *, s32, s32, s32);
extern void func_8013B808(void *, s32, s32);
extern void func_801CD3FC(s32, u8, void **);
extern void func_80222450();
extern void func_802233B0();
extern void func_802237B0(void *, s32);
extern void func_802254F8(s32, u8, s32);
extern void func_80225540(s32 arg0);
extern void func_80226710(void *, s32, f32);
extern void func_80360400();
extern void func_8036265C();
extern void func_80366888();
extern void func_80366BF4();
extern void func_80366F88(s32 arg0, s32 arg1);
extern void func_80367050();
extern void func_80367288(s32, s32, u8);
extern void func_803676B8();
extern void func_80367788(s32, s32);
extern void func_80371DF4(void *, s32);



typedef struct func_80364340_Struct {
    s32 unk0;
    f32 unk4;
    s32 unk8;
} func_80364340_Struct;

s32 func_80364340(void *arg0, s32 arg1, s32 arg2, f32 arg3) {
    s32 temp_a2;
    func_80364340_Struct sp28;
    func_80364340_Struct sp1C;
    s32 var_v1;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(&sp28, arg1, temp_a2, 0x19);
    func_8013A334(&sp1C, arg1, temp_a2, 6);
    if (arg3 < sp28.unk4) {
        var_v1 = 2;
    } else if (arg3 < sp1C.unk4) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

typedef struct func_803643CC_Struct {
    s32 x, y, z;
} func_803643CC_Struct;
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
struct func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern void D_80364340(s32, s32, func_803643CC_Struct);

void func_803643CC(s32 arg0, s32 arg1) {
    s32 a;
    func_803643CC_Struct sp28;

    if (arg0 != ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkDC;
    } else {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkEC;
    }
    func_80006214(a);
    func_80360400(&sp28, a, D_8008DA88);
    func_80006214(arg0);
    D_80364340(arg0, arg1, sp28);
}

/* hh-block asm/nonmatchings/file057/80364340/_mrg_keep_text_func_8036445C.s {"functions":["func_8036445C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/_mrg_keep_text_func_8036445C.s")

#define D_80006214 D_80006214__func_80364D2C
#define D_80020718 D_80020718__func_80364D2C
#define D_803643CC D_803643CC__func_80364D2C
#define D_803709D0 D_803709D0__func_80364D2C
#define D_803869EC D_803869EC__func_80364D2C
#define func_803643CC_Glob func_803643CC_Glob__func_80364D2C
#define func_8036445C func_8036445C__func_80364D2C
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;

typedef struct func_80364D2C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x2D8 - 0x38];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2F8 - 0x2DA];
    u8 unk2F8;
    u8 pad2F9[0x320 - 0x2F9];
    u8 unk320;
    u8 pad321[0x375 - 0x321];
    u8 unk375;
    u8 unk376;
} func_80364D2C_Struct;
typedef struct func_80364D2C_Struct4 {
    u16 t[3][3];
} func_80364D2C_Struct4;
typedef struct func_80364D2C_Vec {
    s32 x, y, z;
} func_80364D2C_Vec;

#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)

extern u8 D_803643CC(s32, s32);
extern s32 D_80006214(s32);
extern void D_803709D0(s32, func_80364D2C_Vec, s32);
extern void D_80020718(s32);
extern void func_8036445C(s32, s32, u8, u8);
extern func_80364D2C_Struct4 D_803869EC;

void func_80364D2C(s32 arg0, s32 arg1) {
    s32 sp54;
    func_80364D2C_Struct *sp50;
    func_80364D2C_Struct *t0;
    func_80364D2C_Struct4 sp38;
    func_80364D2C_Vec sp2C;
    u8 v1;
    u8 v0;
    u8 sp29;

    if (arg0 != G80364D2C->unkDC) {
        sp54 = G80364D2C->unkDC;
    } else {
        sp54 = G80364D2C->unkEC;
    }
    if (arg0 == G80364D2C->unkDC) {
        sp50 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        sp50 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    if (arg0 != G80364D2C->unkDC) {
        t0 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        t0 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    sp38 = D_803869EC;
    if (sp50->unk2F8 != 0) {
        sp29 = D_803643CC(arg0, arg1);
        func_80006214(sp54);
        func_80360400(&sp2C, sp54, D_8008DA88);
        D_80006214(arg0);
        if (t0->unk2D8 == 0xA || t0->unk2D8 == 9) {
            if (t0->unk375 >= t0->unk376) {
                sp50->unk2F8 = 4;
            }
        }
        D_803709D0(arg0, sp2C, sp50->unk2F8);
        if (sp50->unk2F8 >= 6) {
            v1 = 0;
        } else if (sp50->unk2F8 >= 4) {
            v1 = 2;
        } else {
            v1 = (sp50->unk2F8 - 1) & 0xFF;
        }
        if (((func_80364D2C_Struct *)sp54)->unk36 == 0xF6 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF4 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF5) {
            D_80020718(0x229);
        } else {
            if (((func_80364D2C_Struct *)arg0)->unk36 == 0xF6 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF4 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF5) {
                v0 = 2;
            } else {
                v0 = (t0->unk2D9 < 0xE) ? 0 : 1;
            }
            D_80020718(sp38.t[v0][v1]);
        }
        func_8036445C(arg0, arg1, sp50->unk320, sp29);
    }
}
#undef G80364D2C
#undef D_80006214
#undef D_80020718
#undef D_803643CC
#undef D_803709D0
#undef D_803869EC
#undef func_803643CC_Glob
#undef func_8036445C


typedef struct func_80364F74_Struct {
    s32 unk0;
    u16 unk4;
    u8 unk6;
    u8 pad7;
} func_80364F74_Struct;
typedef struct func_80364F74_Struct2 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_80364F74_Struct2;
extern func_80364F74_Struct D_80386830[];

u8 func_80364F74(func_80364F74_Struct2 *arg0) {
    func_80364F74_Struct *p;

    for (p = D_80386830; p->unk0 != 0; p++) {
        if (arg0->unk0 == p->unk0) {
            if (arg0->unk4 == func_80011590((u16)(u32)((f32)(u32)p->unk4 * arg0->unk8))) {
                return p->unk6;
            }
            return 0;
        }
    }
    return 0;
}

#define func_80224E00 func_80224E00__func_803650AC
#define func_803602D4 func_803602D4__func_803650AC
#define func_80365410 func_80365410__func_803650AC
#define func_80365FE0 func_80365FE0__func_803650AC
#define func_803667C4 func_803667C4__func_803650AC
#define func_803667C4_StructArg func_803667C4_StructArg__func_803650AC
#define func_80366B30 func_80366B30__func_803650AC
#define func_80366B30_StructArg func_80366B30_StructArg__func_803650AC
#define func_80367460 func_80367460__func_803650AC
#define func_803697AC func_803697AC__func_803650AC
typedef struct func_80366888_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 b0 : 1;
            u32 f1 : 2;
            u32 f2 : 4;
            u32 rest : 25;
        } b;
        u16 h;
    } u30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366888_Struct;
extern void func_803602D4();
extern void func_80365FE0(u8 *arg0, s32 arg1);
typedef struct func_803667C4_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_803667C4_StructArg;
extern void func_803667C4(func_803667C4_StructArg *arg0, s32 arg1);
typedef struct func_80366B30_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_80366B30_StructArg;
extern void func_80366B30(func_80366B30_StructArg *arg0, s32 arg1);
extern void func_80367460(s32 arg0, void **arg1);

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
#undef GG
#undef func_80224E00
#undef func_803602D4
#undef func_80365410
#undef func_80365FE0
#undef func_803667C4
#undef func_803667C4_StructArg
#undef func_80366B30
#undef func_80366B30_StructArg
#undef func_80367460
#undef func_803697AC

/* hh-block asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80365410.s {"functions":["func_80365410"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80365410.s")

/* hh-block asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80365AAC.s {"functions":["func_80365AAC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80365AAC.s")

extern void func_803602D4();
extern void func_80366090();

typedef struct func_80365FE0_Struct {
    u8 pad0[0x30];
    u32 p30 : 8;
    u32 a31 : 1;
    u32 b31 : 2;
    u32 c31 : 5;
    u32 p32 : 16;
    u8 pad34[4];
    u32 a38 : 1;
    u32 b38 : 2;
    u32 c38 : 1;
    u32 d38 : 4;
    u32 p39 : 24;
    u8 pad3C[0x2FA - 0x3C];
    u8 unk2FA;
} func_80365FE0_Struct;

void func_80365FE0(u8 *arg0, s32 arg1) {
    func_80365FE0_Struct *v;
    s32 a3;

    if ((s32)arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        v = (func_80365FE0_Struct *)&D_801BC03C;
    } else {
        v = (func_80365FE0_Struct *)&D_801BC3D8;
    }
    a3 = *(s32 *)(arg0 + 0x5C);
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        v->unk2FA = 0;
        v->b31 = 0;
        v->a38 = 0;
        v->c38 = 0;
        v->b38 = 0;
        func_803602D4(arg0, arg1);
        func_80011198(arg1, (void *)a3);
        func_800058DC((s32)arg0, func_80366090);
    }
}


typedef struct func_80366090_Struct { s32 a; s32 b; s32 c; } func_80366090_Struct;
typedef struct func_80366090_S2 { u8 p0[2]; s16 s2; u8 p4[0x2C]; u32 u30; } func_80366090_S2;
extern s32 func_80011140(s32, s32, func_80366090_Struct, s32);
extern void func_8013A28C(s32, func_80366090_Struct);
extern func_80366090_Struct D_80386A00;

void func_80366090(u8 *arg0, s32 arg1) {
    func_80366090_S2 *v1;
    func_80366090_S2 *v0;
    s32 a1;
    func_80366090_Struct sp28;
    u32 w;

    if (arg0 == *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v1 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    if (arg0 != *(u8 **)((u8 *)&D_801BBBF0 + 0xDC)) {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x44C);
    } else {
        v0 = (func_80366090_S2 *)((u8 *)&D_801BBBF0 + 0x7E8);
    }
    a1 = *(s32 *)(arg0 + 0x5C);
    sp28 = D_80386A00;
    if (v1->s2 <= 0 || (w = v1->u30, ((w << 1) >> 30) != 0)) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (v0->s2 <= 0 || ((v0->u30 << 1) >> 30) != 0) {
        func_800058DC((s32)arg0, func_8036648C);
        return;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if ((*(u16 *)&v1->u30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (((w << 11) >> 30) == 2) {
            sp28.a = 0x0190001C;
        } else if (((w << 11) >> 30) == 3) {
            sp28.a = 0x0190001D;
        } else {
            sp28.a = 0x0190001B;
        }
        if (func_80011140(arg1, a1, sp28, 3) != 0) {
            func_8013A28C(arg1, sp28);
            func_80010550(arg1, a1);
            func_800058DC((s32)arg0, func_80366278);
        }
    }
}

#undef func_80366278
#define D_801BBBF0 D_801BBBF0__func_80366278
#define func_803643CC_Glob func_803643CC_Glob__func_80366278
#define func_803673B4_StructGlobal func_803673B4_StructGlobal__func_80366278
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;


typedef struct func_80366278_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 a:1;
            u32 b:2;
            u32 c:4;
            u32 d:1;
            u32 rest:24;
        } bf;
        u8 b8[4];
        struct {
            u16 hi:13;
            u16 lo3:3;
        } hb;
    } u30;
    u8 pad34[0x312 - 0x34];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
} func_80366278_Struct;

void func_80366278(s32 arg0, s32 arg1) {
    func_80366278_Struct *v0;
    func_80366278_Struct *v1;
    s32 a1;
    u16 *t0;
    s32 r;

    if (arg0 == ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) { v0 = (func_80366278_Struct *)D_801BC03C; } else { v0 = (func_80366278_Struct *)D_801BC3D8; }
    if (arg0 != ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) { v1 = (func_80366278_Struct *)D_801BC03C; } else { v1 = (func_80366278_Struct *)D_801BC3D8; }
    a1 = *(s32 *)(arg0 + 0x5C);
    t0 = *(u16 **)(arg0 + 0x68);
    if (v0->unk2 <= 0 || v0->u30.bf.b != 0) {
        func_800058DC(arg0, func_80222E84);
        return;
    }
    v0->u30.b8[0] = v0->u30.b8[0] & 0xFF7F;
    v0->u30.b8[2] = v0->u30.b8[2] & 0xFF1F;
    v0->u30.b8[0] = v0->u30.b8[0] & 0xFE;
    if (v1->unk2 <= 0 || v1->u30.bf.b != 0) {
        func_800058DC(arg0, func_8036648C);
        return;
    }
    r = ((u8 *)&D_801BBBF0)[0x1031];
    if (r == 0xF) {
        return;
    }
    {
        if (v0->u30.bf.c == 3) {
            v0->u30.b8[0] = v0->u30.b8[0] & 0xFFE1;
            r = D_801BCC21;
        }
        if (r == 5U && v0->u30.bf.a != 1) {
            if (v0->u30.hb.lo3 == 5) {
                func_8022397C(arg0, a1);
                return;
            }
            v0->unk392 = 1;
            if (v0->u30.bf.c != 4) {
                func_80010550(arg1, a1);
                if (v0->u30.bf.c != 1) {
                    if (v0->unk312 != 0) {
                        v0->unk312 = v0->unk312 - 1;
                        return;
                    }
                    if (!(t0[1] & 0x2000)) {
                        v0->u30.b8[0] = v0->u30.b8[0] & 0xFFE1;
                        func_800058DC(arg0, func_8036648C);
                        return;
                    }
                    v0->u30.b8[0] = (v0->u30.b8[0] & 0xFFE1) | 4;
                }
            }
        }
    }
}
#undef D_801BBBF0
#undef func_803643CC_Glob
#undef func_803673B4_StructGlobal
#define func_80366278 func_80366278__decl

#undef func_8036648C
#define D_801BBBF0 D_801BBBF0__func_8036648C
#define D_80386450 D_80386450__func_8036648C
#define D_80386470 D_80386470__func_8036648C
#define D_80386480 D_80386480__func_8036648C
#define func_8013C6FC func_8013C6FC__func_8036648C
#define func_802237B0 func_802237B0__func_8036648C
#define func_803643CC_Glob func_803643CC_Glob__func_8036648C
#define func_80366648 func_80366648__func_8036648C
#define func_803673B4_StructGlobal func_803673B4_StructGlobal__func_8036648C
#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)
extern void func_802237B0(s32, s32);


typedef struct func_8036648C_StructA {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 b31 : 1;
            u32 b29 : 2;
            u32 b25 : 4;
            u32 pad21 : 4;
            u32 b19 : 2;
            u32 rest : 19;
        } bf;
        u16 h;
    } u30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_8036648C_StructA;

typedef struct func_8036648C_StructI {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
} func_8036648C_StructI;

typedef struct func_8036648C_StructO {
    u8 pad0[0x5C];
    func_8036648C_StructI *unk5C;
} func_8036648C_StructO;
extern void func_8013C6FC(s32, s32, s32);
extern void func_80366648();
extern u8 D_80386450[];
extern u8 D_80386470[];
extern u8 D_80386480[];

#define GB ((u8 *)&D_801BBBF0)

void func_8036648C(func_8036648C_StructO *arg0, s32 arg1) {
    func_8036648C_StructA *a;
    func_8036648C_StructA *b;
    func_8036648C_StructI *o;
    u8 v;
    u32 k;

    if ((s32)arg0 == G80364D2C->unkDC) {
        a = (func_8036648C_StructA *)D_801BC03C;
    } else {
        a = (func_8036648C_StructA *)D_801BC3D8;
    }
    if ((s32)arg0 != G80364D2C->unkDC) {
        b = (func_8036648C_StructA *)D_801BC03C;
    } else {
        b = (func_8036648C_StructA *)D_801BC3D8;
    }
    o = arg0->unk5C;
    a->unk392 = 0;
    if (a->unk2 <= 0 || a->u30.bf.b29 != 0) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (GB[0x1031] == 0xF) {
        return;
    }
    if (b->unk2 > 0 && b->u30.bf.b29 == 0) {
        if (GB[0x1031] != 5) {
            return;
        }
        if ((a->u30.h & 7) == 5U) {
            func_8022397C(arg0);
            return;
        }
        if (a->u30.bf.b31 == 1) {
            return;
        }
        if (a->u30.bf.b25 == 4) {
            return;
        }
        if (a->u30.bf.b25 == 1) {
            return;
        }
    }
    func_802237B0((s32)arg0, 1);
    k = a->u30.bf.b19;
    if (k == 2) {
        o->unk7C = D_80386480;
    } else if (k == 3) {
        o->unk7C = D_80386470;
    } else {
        o->unk7C = D_80386450;
    }
    func_8013C6FC((s32)arg0, arg1, 1);
    o->unk80 = 2;
    func_800058DC((s32)arg0, (void *)func_80366648);
}
#undef G80364D2C
#undef GB
#undef D_801BBBF0
#undef D_80386450
#undef D_80386470
#undef D_80386480
#undef func_8013C6FC
#undef func_802237B0
#undef func_803643CC_Glob
#undef func_80366648
#undef func_803673B4_StructGlobal
#define func_8036648C func_8036648C__decl

#define func_802237B0 func_802237B0__func_80366648

typedef struct func_80366648_StructA {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 unk31_a : 3;
    u8 unk31_b : 2;
    u8 unk31_c : 3;
    u8 pad32;
    u8 unk33_a : 1;
    u8 unk33_b : 7;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366648_StructA;
typedef struct func_80366648_StructI {
    u8 pad0[0x1C];
    s32 unk1C;
} func_80366648_StructI;
typedef struct func_80366648_StructO {
    u8 pad0[0x5C];
    func_80366648_StructI *unk5C;
} func_80366648_StructO;

extern void func_802237B0(s32, s32);

void func_80366648(s32 arg0, s32 arg1) {
    func_80366648_StructA *a;
    func_80366648_StructI *p;
    s32 v;

    if (arg0 == *(s32 *)((u8 *)&D_801BBBF0 + 0xDC)) {
        a = (func_80366648_StructA *)&D_801BC03C;
    } else {
        a = (func_80366648_StructA *)&D_801BC3D8;
    }
    p = ((func_80366648_StructO *)arg0)->unk5C;
    a->unk392 = 0;
    if (a->unk2 <= 0) {
        func_800058DC(arg0, func_80222E84);
        return;
    }
    if (((u8 *)&D_801BBBF0)[0x1031] != 0xF) {
        if ((*(u16 *)&a->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        v = p->unk1C;
        if (v == 0x0190001A) {
            a->unk31_b = 3;
        } else if (v == 0x01900075 || v == 0x01900077) {
            a->unk31_b = 0;
        }
        if (func_802242D0(arg0, a) != 0 || func_802320E8(a) == 0) {
            a->unk33_a = 0;
        } else {
            a->unk33_a = 1;
        }
        if (func_801DB6B8(arg0, arg1, 0) != 0) {
            func_802237B0(arg0, 0);
            func_800058DC(arg0, func_8036265C);
        }
    }
}
#undef func_802237B0

#define func_802237B0 func_802237B0__func_803667C4
extern void func_802237B0(s32, s32);

typedef struct func_803667C4_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_803667C4_StructArg;


void func_803667C4(func_803667C4_StructArg *arg0, s32 arg1) {
    void *temp_a3;
    u8 *var_v0;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = (u8 *)&D_801BC03C;
    } else {
        var_v0 = (u8 *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    var_v0[0x30] &= ~0x80;
    var_v0[0x30] &= 0xFE;
    var_v0[0x31] &= ~0x80;
    var_v0[0x38] &= ~0x80;
    var_v0[0x38] &= 0xEF;
    var_v0[0x38] &= 0x9F;
    var_v0[0x2F1] = 0;
    var_v0[0x391] = 0;
    var_v0[0x393] = 0;
    func_80011198(arg1, temp_a3);
    func_800058DC((s32)arg0, (void *)func_80366888);
}
#undef func_802237B0

#define func_80225664 func_80225664__func_80366888
#define func_80366888_Struct func_80366888_Struct__func_80366888
#define func_80366A0C func_80366A0C__func_80366888
#define func_80366A0C_G func_80366A0C_G__func_80366888
typedef struct func_80366A0C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366A0C_G;
extern void func_80366A0C(func_803667C4_StructArg *arg0, s32 arg1);

typedef struct func_80366888_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 b0 : 1;
            u32 f1 : 2;
            u32 f2 : 4;
            u32 rest : 25;
        } b;
        u16 h;
    } u30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366888_Struct;
extern void func_80225664(void *, void *, s32, s32);

#define G ((func_80366A0C_G *)&D_801BBBF0)

void func_80366888(func_803667C4_StructArg *arg0, s32 arg1) {
    void *sp44;
    func_80366888_Struct *v;
    func_80366888_Struct *o;
    func_80366090_Struct sp30;

    sp44 = arg0->unk5C;
    if ((s32)arg0 == G->unkDC) {
        v = (func_80366888_Struct *)D_801BC03C;
    } else {
        v = (func_80366888_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != G->unkDC) {
        o = (func_80366888_Struct *)D_801BC03C;
    } else {
        o = (func_80366888_Struct *)D_801BC3D8;
    }
    v->unk392 = 0;
    if (G->unk1031 == 0xF) {
        return;
    }
    if (v->unk2 <= 0 || v->u30.b.f1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if ((v->u30.h & 7) == 5) {
        func_8022397C(arg0);
        return;
    }
    if (v->u30.b.f2 != 1 || o->unk2 <= 0 || o->u30.b.f1 != 0) {
        func_80222450(arg0, arg1, 5);
        return;
    }
    func_80225664(&sp30, arg0, 0x01900073, arg1);
    ((u16 *)&sp30)[3] |= 0x100;
    if (func_80011140(arg1, (s32)sp44, sp30, 5) != 0) {
        func_800058DC((s32)arg0, func_80366A0C);
    }
}
#undef G
#undef func_80225664
#undef func_80366888_Struct
#undef func_80366A0C
#undef func_80366A0C_G


typedef struct func_80366A0C_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 rest : 25;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366A0C_Struct;

typedef struct func_80366A0C_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366A0C_G;

extern void func_802233B0();
extern void func_80222450();

void func_80366A0C(func_803667C4_StructArg *arg0, s32 arg1) {
    func_80366A0C_Struct *v0;
    func_80366A0C_Struct *a0;
    s32 a2;

    a2 = (s32)arg0->unk5C;
    if ((s32)arg0 == ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        v0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        v0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != ((func_80366A0C_G *)&D_801BBBF0)->unkDC) {
        a0 = (func_80366A0C_Struct *)D_801BC03C;
    } else {
        a0 = (func_80366A0C_Struct *)D_801BC3D8;
    }
    v0->unk392 = 0;
    if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 != 0xF) {
        if (v0->unk2 <= 0 || v0->f1 != 0) {
            func_802233B0(arg0, arg1, a2);
            return;
        }
        if ((*(u16 *)((u8 *)v0 + 0x30) & 7) == 5U) {
            func_8022397C(arg0, ((func_80366A0C_G *)&D_801BBBF0)->unk1031, a2);
            return;
        }
        if (v0->f2 != 1 || a0->unk2 <= 0 || a0->f1 != 0) {
            func_80222450(arg0, arg1, 5);
            return;
        }
        if (((func_80366A0C_G *)&D_801BBBF0)->unk1031 == 5) {
            func_80010550(arg1, a2);
        }
    }
}

#define func_80366BF4 func_80366BF4__func_80366B30

typedef struct func_80366B30_StructArg {
    u8 pad[0x5C];
    void *unk5C;
} func_80366B30_StructArg;

extern void func_80366BF4();

void func_80366B30(func_80366B30_StructArg *arg0, s32 arg1) {
    void *temp_a3;
    u8 *var_v0;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = (u8 *)&D_801BC03C;
    } else {
        var_v0 = (u8 *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    var_v0[0x30] &= ~0x80;
    var_v0[0x30] &= 0xFE;
    var_v0[0x31] &= ~0x80;
    var_v0[0x38] &= ~0x80;
    var_v0[0x38] &= 0xEF;
    var_v0[0x38] &= 0x9F;
    var_v0[0x2F1] = 0;
    var_v0[0x391] = 0;
    var_v0[0x393] = 0;
    func_80011198(arg1, temp_a3);
    func_800058DC((s32)arg0, (void *)func_80366BF4);
}
#undef func_80366BF4

#define D_801BBBF0 D_801BBBF0__func_80366BF4
#define func_8022397C func_8022397C__func_80366BF4

typedef struct func_80366BF4_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 rest : 25;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
    u8 pad393[3];
    u8 unk396;
} func_80366BF4_Struct;

typedef struct func_80366BF4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366BF4_G;

extern func_80366BF4_G D_801BBBF0;
extern void func_8022397C();

void func_80366BF4(s32 arg0, s32 arg1)
{
  func_80366BF4_Struct *v0;
  func_80366BF4_Struct *a0;
  unsigned int v1;
  if (arg0 == D_801BBBF0.unkDC)
  {
    v0 = (func_80366BF4_Struct *) (&D_801BC03C);
  }
  else
  {
    v0 = (func_80366BF4_Struct *) (&D_801BC3D8);
  }
  if (arg0 != D_801BBBF0.unkDC)
  {
    a0 = (func_80366BF4_Struct *) (&D_801BC03C);
  }
  else
  {
    a0 = (func_80366BF4_Struct *) (&D_801BC3D8);
  }
  v0->unk392 = 0;
  v1 = D_801BBBF0.unk1031;
  if (v1 != 0xF)
  {
    if ((v0->unk2 <= 0) || (v0->f1 != 0))
    {
      func_802233B0(arg0);
      return;
    }
    if ((a0->unk2 <= 0) || (a0->f1 != 0))
    {
      v0->unk396 = 0;
      *((u8 *) (&v0->pad0[0x30])) = (*((u8 *) (&v0->pad0[0x30]))) & 0xFFE1;
      v1 = D_801BCC21;
    }
    if (v1 == 5)
    {
      if (((*((u16 *) (&v0->pad0[0x30]))) & 7) == 5)
      {
        func_8022397C(arg0);
        return;
      }
      if ((v0->f2 != 4) || (a0->unk2 <= 0))
      {
        func_80222450(arg0, arg1, 5);
      }
    }
  }
}
#undef D_801BBBF0
#undef func_8022397C


typedef struct func_80366D28_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b31 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 b24 : 1;
    u32 b16 : 8;
    u32 g : 3;
    u32 b5 : 8;
    u32 h : 2;
    u32 b0 : 3;
    u8 pad34[0x2DE - 0x34];
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x320 - 0x2F0];
    u8 unk320;
    u8 pad321[0x390 - 0x321];
    u8 unk390;
} func_80366D28_Struct;

typedef struct func_80366D28_Struct2 {
    u8 pad0[0x5C];
    void *unk5C;
} func_80366D28_Struct2;

typedef struct func_80366D28_Struct3 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366D28_Struct3;

void func_80366EC0(s32 arg0, s32 arg1);
extern u8 D_80386878[];
extern u8 D_80386888[];
extern u8 D_803868A8[];

void func_80366D28(s32 arg0, s32 arg1, u8 arg2) {
    func_80366D28_Struct *a;
    func_80366D28_Struct *b;
    func_80366D28_Struct3 *p;

    if (arg0 == D_801BBCCC) {
        a = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        a = (func_80366D28_Struct *)&D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        b = (func_80366D28_Struct *)&D_801BC03C;
    } else {
        b = (func_80366D28_Struct *)&D_801BC3D8;
    }
    p = ((func_80366D28_Struct2 *)arg0)->unk5C;
    func_802237B0(arg0, 1);
    a->unk320 = arg2;
    a->b24 = 1;
    a->g = 0;
    b->unk2DE = 0;
    b->unk2EC = 1.0f;
    if (a->unk2 <= 0) {
        a->f1 = 1;
    }
    func_80011198(arg1, p);
    if (a->f1 != 0) {
        func_80366F88(arg0, arg1);
    } else {
        if (a->h != 0 && a->unk390 == 2) {
            p->unk7C = D_803868A8;
        } else if (arg2 < 2) {
            p->unk7C = D_80386878;
        } else {
            p->unk7C = D_80386888;
        }
        p->unk82 = 5;
        p->unk80 = 3;
        func_8013B808((void *)arg0, arg1, 2);
        func_800058DC(arg0, (void *)func_80366EC0);
    }
}

#define D_801BC03C D_801BC03C__func_80366EC0
#define D_801BC3D8 D_801BC3D8__func_80366EC0
#define func_800058DC func_800058DC__func_80366EC0
#define func_80366F88 func_80366F88__func_80366EC0

typedef struct func_80366EC0_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u8 unk30;
    u8 pad31[0x392 - 0x31];
    u8 unk392;
} func_80366EC0_Struct;

extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80366F88(s32 arg0, s32 arg1);
extern func_80366EC0_Struct D_801BC03C;
extern func_80366EC0_Struct D_801BC3D8;

void func_80366EC0(s32 arg0, s32 arg1) {
    func_80366EC0_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v1 = &D_801BC03C;
    } else {
        var_v1 = &D_801BC3D8;
    }
    var_v1->unk392 = 0;
    if (func_801DB6B8(arg0, arg1, 0) != 0) {
        func_80225540(arg0);
        var_v1->unk30 = var_v1->unk30 & 0xFFFE;
        if (var_v1->unk2 <= 0 || ((*(u32 *) &var_v1->unk30 << 1) >> 0x1E) != 0) {
            var_v1->unk30 = (var_v1->unk30 & 0xFF9F) | 0x20;
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}
#undef D_801BC03C
#undef D_801BC3D8
#undef func_800058DC
#undef func_80366F88

#define func_80367050 func_80367050__func_80366F88

extern void func_80367050();

typedef struct func_80366F88_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x390 - 0x34];
    u8 unk390;
    u8 pad391;
    u8 unk392;
} func_80366F88_Struct;

typedef struct func_80366F88_Struct2 {
    u8 pad0[0x7C];
    void *unk7C;
    s16 unk80;
    s16 unk82;
} func_80366F88_Struct2;

void func_80366F88(s32 arg0, s32 arg1) {
    func_80366F88_Struct *var_v0;
    func_80366F88_Struct2 *temp_a1;
    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80366F88_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80366F88_Struct *) &D_801BC3D8;
    }
    temp_a1 = *(func_80366F88_Struct2 **) (arg0 + 0x5C);
    var_v0->unk392 = 0;
    func_80011198(arg1, temp_a1);
    if ((((u32) var_v0->unk30 << 27) >> 30) != 0 && (var_v0->unk390 == 2 || var_v0->unk390 == 2)) {
        temp_a1->unk7C = D_803868C8;
    } else {
        temp_a1->unk7C = D_803868D8;
    }
    temp_a1->unk82 = 5;
    temp_a1->unk80 = 3;
    func_800058DC(arg0, (void *) func_80367050);
}
#undef func_80367050

typedef struct func_80367050_StructP {
    s32 unk0;
    u16 unk4;
} func_80367050_StructP;
typedef struct func_80367050_StructB {
    u8 pad0[0x80];
    u16 unk80;
} func_80367050_StructB;
typedef struct func_80367050_StructA {
    u8 pad0[0x5C];
    func_80367050_StructB *unk5C;
} func_80367050_StructA;
typedef struct func_80367050_StructS {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad31[0x2F8 - 0x31];
    u8 unk2F8;
    u8 pad2F9[0x392 - 0x2F9];
    u8 unk392;
} func_80367050_StructS;

void func_80367050(func_80367050_StructA *arg0, s32 arg1) {
    func_80367050_StructS *s;
    func_80367050_StructB *b;
    func_80367050_StructP *p;

    if ((s32)arg0 == D_801BBCCC) {
        s = (func_80367050_StructS *)&D_801BC03C;
    } else {
        s = (func_80367050_StructS *)&D_801BC3D8;
    }
    b = arg0->unk5C;
    s->unk392 = 0;
    p = (func_80367050_StructP *)((u8 *)b + 0x1C);
    if (b->unk80 == 0) {
        if (p->unk0 == 0x0191009F && p->unk4 == func_80011590(1)) {
            func_8013B808(arg0, arg1, 2);
        } else if (p->unk0 == 0x019100A5) {
            if (p->unk4 == func_80011590(1)) {
                func_80226710(arg0, 0x262, 1.0f);
                func_8013B808(arg0, arg1, 5);
                s->unk2F8 = 3;
                func_80371DF4(arg0, arg1);
            }
        }
    }
    if (func_801DB6B8((s32)arg0, arg1, 0) != 0) {
        func_80225540((s32)arg0);
        s->unk30 &= 0xFFFE;
        s->unk30 = (s->unk30 & 0x9F) | 0x20;
        func_800058DC((s32)arg0, func_80222E84);
    }
}

#define func_80367288_Vec func_80367288_Vec__func_803671A0
typedef struct func_80367288_Vec { f32 x, y, z; } func_80367288_Vec;

#if __LINE__ == 3
#define func_803671A0_Vec func_80367288_Vec
#else
typedef struct func_803671A0_Vec { f32 x, y, z; } func_803671A0_Vec;
#endif

extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern f32 func_8002FC20(f32, f32);

typedef struct func_803671A0_C { u8 pad0[0x12]; s16 unk12; } func_803671A0_C;
typedef struct func_803671A0_B { u8 pad0[0x2C]; func_803671A0_C *unk2C; } func_803671A0_B;
typedef struct func_803671A0_A { u8 pad0[0x24]; func_803671A0_B *unk24; } func_803671A0_A;
typedef struct func_803671A0_Dst {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    func_803671A0_Vec unk368;
} func_803671A0_Dst;

void func_803671A0(s32 arg0, void *arg1, func_803671A0_Vec arg2, u8 arg3) {
    f32 d;
    s32 raw;

    d = func_8002FC20(arg2.x * arg2.x + arg2.z * arg2.z, arg2.x);
    if (d <= 1.0) {
        raw = ((func_803671A0_A *)arg0)->unk24->unk2C->unk12 + 0x1000;
        arg2.x = func_8001EAD0((s16)raw);
        arg2.z = func_8001EB64((s16)raw);
        arg2.y = 0.0f;
    } else {
        arg2.x /= d;
        arg2.y /= d;
        arg2.z /= d;
    }
    ((func_803671A0_Dst *)arg1)->unk368 = arg2;
    ((func_803671A0_Dst *)arg1)->unk365 = arg3;
}
#undef func_803671A0_Vec
#undef func_80367288_Vec

typedef struct func_80367288_Vec { f32 x, y, z; } func_80367288_Vec;
typedef struct func_80367288_Ent { u8 pad0[0x2D8]; u8 unk2D8; u8 pad2D9[0x365-0x2D9]; u8 unk365; u8 pad366[2]; f32 unk368; u8 pad36C[4]; f32 unk370; } func_80367288_Ent;
typedef struct func_80367288_Ent2 { u8 pad0[0x314]; f32 unk314; f32 unk318; f32 unk31C; } func_80367288_Ent2;
typedef struct func_80367288_Base { u8 pad0[0xDC]; s32 unkDC; u8 padE0[0xC]; s32 unkEC; } func_80367288_Base;
#define func_803671A0 func_803671A0__decl544
extern void func_803671A0(s32, void *, func_80367288_Vec, u8);

void func_80367288(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp44;
    u8 *sp40;
    void *sp3C;
    func_80367288_Vec sp30;
    u8 pad[8];

    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkDC;
    } else {
        sp44 = ((func_80367288_Base *)&D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp40 = (u8 *)&D_801BC03C;
    } else {
        sp40 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != ((func_80367288_Base *)&D_801BBBF0)->unkDC) {
        sp3C = &D_801BC03C;
    } else {
        sp3C = &D_801BC3D8;
    }
    if (sp40[0x2D8] == 0xA || sp40[0x2D8] == 9) {
        ((func_80367288_Ent *)sp3C)->unk370 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk365 = 0;
        ((func_80367288_Ent *)sp40)->unk368 = 0.0f;
        ((func_80367288_Ent *)sp40)->unk370 = 0.0f;
        return;
    }
    func_80360400(&sp30, arg0, arg1);
    sp30.x -= ((func_80367288_Ent2 *)sp40)->unk314;
    sp30.y -= ((func_80367288_Ent2 *)sp40)->unk318;
    sp30.z -= ((func_80367288_Ent2 *)sp40)->unk31C;
    func_803671A0(sp44, sp3C, sp30, arg2);
}
#undef func_803671A0

#define D_801BBBF0 D_801BBBF0__func_803673B4
#define func_80360400 func_80360400__func_803673B4
#define func_80367288 func_80367288__func_803673B4

typedef struct func_803673B4_StructVec {
    s32 x, y, z;
} func_803673B4_StructVec;

typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;

extern func_803673B4_StructGlobal D_801BBBF0;
extern void func_80360400(func_803673B4_StructVec *, s32, s32);
extern void func_803709D0(s32, func_803673B4_StructVec, s32);
extern void func_80367288(s32, s32, u8);

void func_803673B4(s32 arg0, s32 arg1, u8 arg2) {
    s32 sp34;
    func_803673B4_StructVec sp28;

    if (arg0 != D_801BBBF0.unkDC) {
        sp34 = D_801BBBF0.unkDC;
    } else {
        sp34 = D_801BBBF0.unkEC;
    }
    func_80360400(&sp28, arg0, arg1);
    func_803709D0(sp34, sp28, 0);
    func_80020718(0x3AC);
    func_802254F8(sp34, arg2, 2);
    func_80367288(arg0, arg1, arg2);
}
#undef D_801BBBF0
#undef func_80360400
#undef func_80367288


typedef struct func_80367460_Struct {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    f32 unk368;
    u8 pad36C[4];
    f32 unk370;
} func_80367460_Struct;

typedef struct func_80367460_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80367460_Inner;

typedef struct func_80367460_Outer {
    u8 pad0[0x2C];
    func_80367460_Inner *unk2C;
} func_80367460_Outer;


void func_80367460(s32 arg0, void **arg1) {
    func_80367460_Struct *var_v0;
    f32 temp_fv0;
    u8 temp_a1;
    func_80367460_Inner *temp_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80367460_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80367460_Struct *) &D_801BC3D8;
    }
    temp_a1 = var_v0->unk365;
    temp_v1 = ((func_80367460_Outer *) *arg1)->unk2C;
    if ((s32) temp_a1 > 0) {
        temp_fv0 = (f32) ((f64) (f32) temp_a1 / 15.0);
        temp_v1->unk4 = (f32) (temp_v1->unk4 + (var_v0->unk368 * temp_fv0));
        temp_v1->unkC = (f32) (temp_v1->unkC + (var_v0->unk370 * temp_fv0));
        var_v0->unk365 = (u8) (var_v0->unk365 - 1);
        func_801CD3FC(arg0, temp_a1, arg1);
    }
}

/* hh-block asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80367518.s {"functions":["func_80367518"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/80364340/_mrg_keep_text_func_80367518.s")

#define func_803676B8 func_803676B8__func_803675F8
#define func_80367788 func_80367788__func_803675F8

typedef struct func_803675F8_Struct {
    u8 pad0[0x2C];
    f32 x, y, z;
    u16 unk38, unk3A;
    u8 pad3C[4];
    s32 unk40;
    u8 pad44[0x10];
    u8 unk54;
} func_803675F8_Struct;

typedef struct func_803675F8_StructData {
    f32 x, y, z;
    s16 unkC, unkE, unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30, unk34, unk38;
} func_803675F8_StructData;

extern void func_803676B8();
extern void func_80367788(s32, s32);
extern func_803675F8_StructData D_8038CC20;

void func_803675F8(func_803675F8_Struct *arg0, s32 arg1) {
    D_8038CC20.x = arg0->x;
    D_8038CC20.y = arg0->y;
    D_8038CC20.z = arg0->z;
    D_8038CC20.unk10 = 0;
    D_8038CC20.unkE = D_8038CC20.unk10;
    D_8038CC20.unkC = D_8038CC20.unk10;
    D_8038CC20.unk18 = arg0->unk38;
    D_8038CC20.unk20 = arg0->unk3A;
    D_8038CC20.unk1C = arg0->unk40;
    D_8038CC20.unk14 = 0x15;
    D_8038CC20.unk38 = D_8038AA10;
    D_8038CC20.unk34 = D_8038CC20.unk38;
    D_8038CC20.unk30 = D_8038CC20.unk38;
    if (func_80005E44(arg0, D_803868FC) != 0) {
        arg0->unk54 = 0;
        func_800058DC((s32) arg0, func_803676B8);
        return;
    }
    func_800058DC((s32) arg0, func_80367788);
}
#undef func_803676B8
#undef func_80367788

#define func_80367788 func_80367788__func_803676B8

typedef struct func_803676B8_StructPos {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    s16 rx;
    s16 ry;
} func_803676B8_StructPos;

typedef struct func_803676B8_StructLink {
    u8 pad0[0x2C];
    func_803676B8_StructPos *pos;
    func_803676B8_StructPos *other;
} func_803676B8_StructLink;

typedef struct func_803676B8_StructParent {
    u8 pad0[0x24];
    func_803676B8_StructLink *link;
} func_803676B8_StructParent;

typedef struct func_803676B8_Struct {
    u8 pad0[0xC];
    func_803676B8_StructParent *parent;
    u8 pad10[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 count;
} func_803676B8_Struct;

extern void func_80367788(s32 arg0, s32 arg1);

void func_803676B8(func_803676B8_Struct *arg0, func_803676B8_StructLink **arg1) {
    func_803676B8_StructPos *pos;
    f32 x, z;
    u8 *counter;

    pos = (*arg1)->other;
    arg0->y = (f32)((f64)arg0->y - D_8038AA18);
    x = arg0->x;
    z = arg0->z;
    pos->x += x;
    pos->y += arg0->y;
    pos->z += z;
    pos->rx += 0x50;
    pos->ry += 0x70;
    counter = &arg0->count;
    if ((pos->y <= arg0->parent->link->pos->y) ||
        (++*counter >= 0x97)) {
        func_800058DC((s32)arg0, func_80367788);
    }
}
#undef func_80367788



void func_80367788(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80364340[] = {
    0xA5, 0xD2, 0xA5, 0xC3, 0xA5, 0xC8, 0xB9, 0xE2, 0xA4, 0xB5, 0x20, 0x3D, 0x20, 0x25, 0x66, 0x20,
    0xBF, 0xAC, 0x20, 0x25, 0x66, 0x20, 0xBC, 0xF3, 0x20, 0x25, 0x66, 0x20, 0x20, 0xB9, 0xE2, 0xA4,
    0xB5, 0xA5, 0xEC, 0xA5, 0xD9, 0xA5, 0xEB, 0x20, 0x20, 0x3D, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00,
    0x62, 0x77, 0x70, 0x2D, 0x3E, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6C, 0x65, 0x76, 0x65,
    0x6C, 0x20, 0x25, 0x64, 0x20, 0x20, 0x6A, 0x66, 0x67, 0x2E, 0x64, 0x65, 0x61, 0x64, 0x20, 0x25,
    0x64, 0x0A, 0x00, 0x00, 0xB6, 0xF5, 0xC3, 0xE6, 0xC9, 0xE2, 0xCD, 0xB7, 0x20, 0xBF, 0xE1, 0xA4,
    0xC3, 0xC8, 0xF4, 0xA4, 0xD3, 0x20, 0xA5, 0xC0, 0xA5, 0xE1, 0xA1, 0xBC, 0xA5, 0xB8, 0x0A, 0x00,
    0xA5, 0xA2, 0xA5, 0xC3, 0xA5, 0xD1, 0xA1, 0xBC, 0x20, 0xBF, 0xE1, 0xA4, 0xC3, 0xC8, 0xF4, 0xA4,
    0xD3, 0x20, 0xA5, 0xC0, 0xA5, 0xE1, 0xA1, 0xBC, 0xA5, 0xB8, 0x0A, 0x00, 0x64, 0x61, 0x67, 0x65,
    0x6B, 0x69, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D, 0x6F, 0x74, 0x69, 0x6F, 0x6E,
    0x5F, 0x73, 0x65, 0x74, 0x20, 0x20, 0x20, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6C, 0x65,
    0x76, 0x65, 0x6C, 0x20, 0xC2, 0xD4, 0xA4, 0xC1, 0x0A, 0x00, 0x00, 0x00, 0xCA, 0xC9, 0xA4, 0xCB,
    0xC5, 0xF6, 0xA4, 0xC3, 0xA4, 0xBF, 0x0A, 0x00, 0xA4, 0xB7, 0xA4, 0xEA, 0xA4, 0xE2, 0xA4, 0xC1,
    0xB2, 0xBB, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x0A, 0x00, 0x00, 0x00, 0xC3, 0xCF, 0xCC, 0xCC,
    0xA5, 0xD2, 0xA5, 0xC3, 0xA5, 0xC8, 0xB2, 0xBB, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x0A, 0x00,
    0x39, 0x30, 0xC5, 0xD9, 0xB2, 0xF3, 0xC5, 0xBE, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA2, 0xA5, 0xA4,
    0xA5, 0xB9, 0x20, 0xB9, 0xC5, 0xC4, 0xBE, 0xC3, 0xE6, 0x6E, 0x00, 0x00, 0xA5, 0xC0, 0xA5, 0xA6,
    0xA5, 0xF3, 0x20, 0xA5, 0xD4, 0xA5, 0xE8, 0xA4, 0xEA, 0xC3, 0xE6, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0xC0, 0xA5, 0xA6, 0xA5, 0xF3, 0xC3, 0xE6, 0x20, 0x77, 0x61, 0x69, 0x74, 0x5F, 0x74, 0x69,
    0x6D, 0x65, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x54, 0x52,
    0x47, 0x5F, 0x5A, 0x20, 0xB5, 0xB6, 0xA5, 0xD4, 0xA5, 0xE8, 0xA4, 0xEA, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xB9, 0x20, 0xB9, 0xC5, 0xC4, 0xBE, 0xC3, 0xE6, 0x6E, 0x00, 0x00,
    0xA5, 0xC0, 0xA5, 0xA6, 0xA5, 0xF3, 0x20, 0xA5, 0xD4, 0xA5, 0xE8, 0xA4, 0xEA, 0xC3, 0xE6, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0xCE, 0xA9, 0xA4, 0xC1, 0x20, 0xA5, 0xD4, 0xA5, 0xE8, 0xA4, 0xEA, 0xBD,
    0xAA, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xCE, 0xA9, 0xA4, 0xC1, 0x20, 0xA5, 0xD4, 0xA5,
    0xE8, 0xA4, 0xEA, 0xBD, 0xAA, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA5, 0xA2, 0xA5, 0xA4,
    0xA5, 0xB9, 0x20, 0xC9, 0xB9, 0xB7, 0xEB, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x0A, 0x00, 0x00,
    0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xB9, 0x20, 0xC9, 0xB9, 0xB7, 0xEB, 0xC3, 0xE6, 0x20, 0x25, 0x64,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xB9, 0x20, 0xC9, 0xB9, 0xB7, 0xEB, 0xBD,
    0xAA, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA4, 0xAF, 0xA4, 0xE9, 0xA4, 0xA4, 0xCA, 0xFD,
    0xB8, 0xFE, 0x20, 0x78, 0x20, 0x25, 0x66, 0x20, 0x7A, 0x20, 0x25, 0x66, 0x20, 0xC2, 0xE7, 0xA4,
    0xAD, 0xA4, 0xB5, 0x20, 0x25, 0x66, 0x0A, 0x00, 0xB3, 0xEA, 0xA4, 0xEA, 0xCA, 0xFD, 0xB8, 0xFE,
    0x20, 0x78, 0x20, 0x25, 0x66, 0x20, 0x7A, 0x20, 0x25, 0x66, 0x20, 0xBB, 0xFE, 0xB4, 0xD6, 0x20,
    0x25, 0x64, 0x0A, 0x00, 0xA5, 0xB5, 0xA5, 0xF3, 0xA5, 0xB0, 0xA5, 0xE9, 0xA5, 0xB9, 0xC8, 0xAF,
    0xC0, 0xB8, 0xA1, 0xAA, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xB5, 0xA5, 0xF3, 0xA5, 0xB0, 0xA5, 0xE9,
    0xA5, 0xB9, 0x20, 0x25, 0x64, 0x20, 0x78, 0x3A, 0x25, 0x66, 0x20, 0x79, 0x3A, 0x25, 0x66, 0x20,
    0x7A, 0x3A, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xB5, 0xA5, 0xF3, 0xA5, 0xB0, 0xA5, 0xE9,
    0xA5, 0xB9, 0xBE, 0xC3, 0xB5, 0xEE, 0x0A, 0x00, 0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C,
    0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C,
    0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0xC0,
    0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0,
    0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0x90,
    0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0x90,
    0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0x90, 0x80, 0x36, 0x54, 0x9C, 0x80, 0x36, 0x54, 0xC0,
    0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0,
    0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xC0, 0x80, 0x36, 0x54, 0xA8,
    0x80, 0x36, 0x54, 0xB4, 0x80, 0x36, 0x54, 0xA8, 0x80, 0x36, 0x54, 0xB4, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xF1, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0xF1, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0x50, 0x62, 0x4D, 0xD2, 0xF1, 0xA9, 0xFC, 0x3F, 0xC3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3F, 0xBE, 0xB8, 0x51, 0xEB, 0x85, 0x1E, 0xB8, 0x3F, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3C, 0x23, 0xD7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x84, 0x7A, 0xE1, 0x47, 0xAE, 0x14, 0x7B,
};
