#include "common.h"

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012C3A0.s {"functions":["func_8012C3A0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012C3A0.s")


typedef struct func_8012C4D0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8012C4D0_Struct;

typedef struct func_8012C4D0_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 unk34;
    u8 pad1[9];
    u8 unk3E;
} func_8012C4D0_Obj;

func_8012C4D0_Obj *func_80005670(s32, func_8012C4D0_Struct *);
s32 func_8012C3A0(s32, u8);

func_8012C4D0_Obj *func_8012C4D0(s32 arg1, func_8012C4D0_Struct arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_v0_2;
    func_8012C4D0_Obj *temp_v0;

    temp_v0_2 = func_8012C3A0(arg1, arg5);
    if (temp_v0_2 != 0) {
        temp_v0 = func_80005670(temp_v0_2, &arg2);
        if (temp_v0 != NULL) {
            temp_v0->unk34 = arg5;
            temp_v0->unk3E = 0x19;
            temp_v0->unk30 = 0;
            return temp_v0;
        }
    }
    return NULL;
}


typedef struct func_8012C52C_StructC {
    s32 pad;
    f32 unk4;
} func_8012C52C_StructC;

typedef struct func_8012C52C_StructB {
    u8 pad[0x2C];
    func_8012C52C_StructC *unk2C;
} func_8012C52C_StructB;

typedef struct func_8012C52C_StructA {
    u8 pad[0x24];
    func_8012C52C_StructB *unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    u8 unk34;
    u8 pad2[9];
    u8 unk3E;
} func_8012C52C_StructA;

extern s32 func_80005F6C(void *, void *);
extern void func_80005700(void *);
extern u8 D_80164F30[];

void *func_8012C52C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_8012C52C_StructA *sp1C;
    s32 temp_v0;

    temp_v0 = func_8012C3A0(arg0, arg6);
    if (temp_v0 != 0) {
        sp1C = (func_8012C52C_StructA *) func_80005670(temp_v0, (func_8012C4D0_Struct *) &arg1);
        if (sp1C != NULL) {
            if (func_80005F6C(sp1C, D_80164F30) == 0) {
                func_80005700(sp1C);
                return NULL;
            }
            sp1C->unk24->unk2C->unk4 = arg7;
            sp1C->unk24->unk2C->unk4 = arg8;
            sp1C->unk24->unk2C->unk4 = arg9;
            sp1C->unk30 |= 1;
            sp1C->unk34 = arg6;
            sp1C->unk3E = 0x19;
            return sp1C;
        }
    }
    return NULL;
}


extern u8 D_80164F40[];

typedef struct func_8012C5F0_StructC {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8012C5F0_StructC;

typedef struct func_8012C5F0_StructB {
    u8 pad0[0x30];
    func_8012C5F0_StructC *unk30;
} func_8012C5F0_StructB;

typedef struct func_8012C5F0_StructA {
    u8 pad0[0x24];
    func_8012C5F0_StructB *unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 unk34;
    u8 pad2[0x9];
    u8 unk3E;
} func_8012C5F0_StructA;

func_8012C4D0_Obj *func_8012C5F0(s32 arg0, func_8012C4D0_Struct arg1, s32 arg4, s32 arg5, u8 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_8012C5F0_StructA *obj;
    s32 temp_v0;

    temp_v0 = func_8012C3A0(arg0, arg6);
    if (temp_v0 != 0) {
        obj = (func_8012C5F0_StructA *) func_80005670(temp_v0, &arg1);
        if (obj != NULL) {
            if (func_80005F6C(obj, &D_80164F40) == 0) {
                func_80005700(obj);
                return NULL;
            }
            obj->unk24->unk30->unk4 = arg7;
            obj->unk24->unk30->unk8 = arg8;
            obj->unk24->unk30->unkC = arg9;
            obj->unk30 |= 1;
            obj->unk34 = arg6;
            obj->unk3E = 0x19;
            return (func_8012C4D0_Obj *) obj;
        }
    }
    return NULL;
}


typedef struct func_8012C6B4_Struct {
    u8 pad[0x2A];
    u16 unk2A;
} func_8012C6B4_Struct;

extern f64 D_8018D530;
extern u8 D_801BBBF0[];

s32 func_8012C6B4(s32 arg0) {
    f32 result;

    ((func_8012C6B4_Struct *)D_801BBBF0)->unk2A = (((func_8012C6B4_Struct *)D_801BBBF0)->unk2A * 0x17 + 0x929) % 4535;
    result = (f64)(((func_8012C6B4_Struct *)D_801BBBF0)->unk2A * arg0) * D_8018D530;
    return (s32)result;
}


typedef struct func_8012C71C_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_8012C71C_Inner;

typedef struct func_8012C71C_Sub {
    u8 pad0[0x2C];
    func_8012C71C_Inner *unk2C;
    func_8012C71C_Inner *unk30;
} func_8012C71C_Sub;

typedef struct func_8012C71C_Outer {
    u8 pad0[0x24];
    func_8012C71C_Sub *unk24;
} func_8012C71C_Outer;

void func_8012C71C(func_8012C71C_Outer *arg0, f32 arg1) {
    func_8012C71C_Sub *temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0->unk2C != NULL) {
        temp_v0->unk2C->unk18 = arg1;
        arg0->unk24->unk2C->unk1C = arg1;
        arg0->unk24->unk2C->unk20 = arg1;
        return;
    }
    temp_v0->unk30->unk18 = arg1;
    arg0->unk24->unk30->unk1C = arg1;
    arg0->unk24->unk30->unk20 = arg1;
}


void func_8012C778(s32 arg0) {
    *(s32 *)NULL = 0;
}


typedef struct func_8012C784_StructA {
    u16 unk0;
    u8 pad2[0x26];
    s32 unk28;
    u16 unk2C;
} func_8012C784_StructA;

typedef struct func_8012C784_StructB {
    u8 pad[0x2C];
    func_8012C784_StructA *unk2C;
    func_8012C784_StructA *unk30;
} func_8012C784_StructB;

typedef struct func_8012C784_StructE {
    u16 *unk0;
    s32 *unk4;
} func_8012C784_StructE;

typedef struct func_8012C784_StructC {
    u8 pad[0x36];
    u16 unk36;
} func_8012C784_StructC;

extern func_8012C784_StructB *D_8008DA88[];
extern func_8012C784_StructE *D_80171CF0[];

void func_8012C784(func_8012C784_StructC *arg0, s32 arg1, s32 arg2) {
    func_8012C784_StructB **temp_v0;
    func_8012C784_StructB *temp_v1;
    func_8012C784_StructA *temp_a3;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a3 = temp_v1->unk2C;
    if (temp_a3 != NULL) {
        temp_a3->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
        (*temp_v0)->unk2C->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
        (*temp_v0)->unk2C->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
        return;
    }
    temp_v1->unk30->unk28 = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk4[arg2];
    (*temp_v0)->unk30->unk0 = *((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0;
    (*temp_v0)->unk30->unk2C = ((func_8012C784_StructE **) D_80171CF0 + arg0->unk36)[-1]->unk0[1];
}


void func_8012C89C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_8008DA88[arg1]->unk2C != NULL) {
        D_8008DA88[arg1]->unk2C->unk28 = D_80171CF0[arg2 - 1]->unk4[arg3];
        D_8008DA88[arg1]->unk2C->unk0 = D_80171CF0[arg2 - 1]->unk0[0];
        D_8008DA88[arg1]->unk2C->unk2C = D_80171CF0[arg2 - 1]->unk0[1];
        return;
    }
    D_8008DA88[arg1]->unk30->unk28 = D_80171CF0[arg2 - 1]->unk4[arg3];
    D_8008DA88[arg1]->unk30->unk0 = D_80171CF0[arg2 - 1]->unk0[0];
    D_8008DA88[arg1]->unk30->unk2C = D_80171CF0[arg2 - 1]->unk0[1];
}


typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;

extern func_8012C97C_Struct *D_80171CEC[];
void func_8000522C(u16, s32);

void func_8012C97C(s32 arg0, s32 arg1) {
    func_8012C97C_Struct *temp_v0;

    temp_v0 = D_80171CEC[arg0];
    func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg1]);
}


typedef struct func_8012C9C0_SB { u8 pad[4]; f32 a; f32 b; f32 c; } func_8012C9C0_SB;
typedef struct func_8012C9C0_SC { u8 pad[0x2C]; func_8012C9C0_SB *x; func_8012C9C0_SB *y; } func_8012C9C0_SC;
typedef struct func_8012C9C0_SO { u8 pad[0x24]; func_8012C9C0_SC *p; u8 pad2[4]; u32 flags; u8 pad3[0x10]; f32 dx; f32 dy; f32 dz; } func_8012C9C0_SO;

void func_8012C9C0(void *arg) {
    func_8012C9C0_SO *o = (func_8012C9C0_SO *)arg;

    if (o->flags & 0x20) {
        if (o->p->x != NULL) {
            o->p->x->a = (f32)((f64)o->p->x->a + (f64)o->dx);
            o->p->x->b = (f32)((f64)o->p->x->b + (f64)o->dy);
            o->p->x->c = (f32)((f64)o->p->x->c + (f64)o->dz);
            return;
        }
        o->p->y->a = (f32)((f64)o->p->y->a + (f64)o->dx);
        o->p->y->b = (f32)((f64)o->p->y->b + (f64)o->dy);
        o->p->y->c = (f32)((f64)o->p->y->c + (f64)o->dz);
    }
}


s32 func_8012CAB8(s32 arg0) {
    s32 *ptr;

    ptr = &arg0;
    arg0 &= 0xFF;
    if ((arg0 == 0xC) || (arg0 == 0x11) || (arg0 == 0x14) || (arg0 == 0x17) || (arg0 == 0x19) || (arg0 == 0x1A) || (arg0 == 0x25) || (arg0 == 0x28) || (arg0 == 0x46) || (arg0 == 0x4B) || (arg0 == 0x4C) || (arg0 == 0x50) || (arg0 == 0x51) || (arg0 == 0x5B) || (arg0 == 0x5D)) {
        return 1;
    }
    return 0;
}


typedef struct func_8012CB4C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[5];
    f32 unk44;
} func_8012CB4C_Struct;

extern s32 func_801F1114();
extern u8 D_801BBBF5;
extern u16 D_801BCAE0;

void func_8012CB4C(func_8012CB4C_Struct *arg0) {
    if (arg0->unk2C & 0x40) {
        arg0->unk44 = arg0->unk44 - (f32)arg0->unk3E / 25.0;
        if (arg0->unk44 < -10.0) {
            arg0->unk44 = -10.0f;
        } else if (arg0->unk30 & 4) {
            if (func_8012CAB8(D_801BBBF5) != 0) {
                if ((D_801BCAE0 & 0x80) || (func_801F1114() != 0x11)) {
                    if ((arg0->unk44 < 0.0) && (arg0->unk44 > -0.5)) {
                        arg0->unk44 = -0.5f;
                    }
                } else {
                    if ((arg0->unk44 < 0.0) && (arg0->unk44 > -1.0)) {
                        arg0->unk44 = -1.0f;
                    }
                }
            } else {
                if ((arg0->unk44 < 0.0) && (arg0->unk44 > -0.5)) {
                    arg0->unk44 = -0.5f;
                }
            }
        }
    }
}


typedef struct func_8012CD28_Struct {
    u8 pad00[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0xA];
    u8 unk3E;
    u8 pad2[0x5];
    f32 unk44;
} func_8012CD28_Struct;

void func_8012CD28(void *p) {
    func_8012CD28_Struct *arg0 = p;

    if (arg0->unk2C & 0x40) {
        arg0->unk44 = (f32) ((f64) arg0->unk44 - (f64) (f32) (u32) arg0->unk3E / 25.0);
        if ((f64) arg0->unk44 < -10.0) {
            arg0->unk44 = -10.0f;
            return;
        }
        if ((arg0->unk30 & 4) && ((f64) arg0->unk44 < 0.0) && ((f64) arg0->unk44 > -0.5)) {
            arg0->unk44 = -0.5f;
        }
    }
}


typedef struct func_8012CE10_StructC {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8012CE10_StructC;

typedef struct func_8012CE10_StructB {
    u8 pad[0x2C];
    func_8012CE10_StructC *unk2C;
} func_8012CE10_StructB;

typedef struct func_8012CE10_StructA {
    u8 pad[0x24];
    func_8012CE10_StructB *unk24;
    s32 unk28;
    s32 unk2C;
} func_8012CE10_StructA;


void func_8012CE10(void *arg0) {
    func_8012CE10_StructA *obj;
    func_8012CE10_StructC *temp;

    obj = arg0;
    if (obj->unk2C & 0x80) {
        temp = obj->unk24->unk2C;
        temp->unk4 += (f64)*(f32 *)(D_801BBBF0 + 0x438);
        temp = obj->unk24->unk2C;
        temp->unk8 += (f64)*(f32 *)(D_801BBBF0 + 0x43C);
        temp = obj->unk24->unk2C;
        temp->unkC += (f64)*(f32 *)(D_801BBBF0 + 0x440);
    }
}


typedef struct func_8012CE9C_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
} func_8012CE9C_Arg;

typedef struct func_8012CE9C_Struct {
    u8 pad[0x78];
    u16 unk78;
} func_8012CE9C_Struct;

extern s32 func_80011140(void *, void *, func_8012CE9C_Arg, u16);

s32 func_8012CE9C(void *arg0, func_8012CE9C_Struct *arg1, func_8012CE9C_Arg arg2, u16 arg3) {
    if (arg1->unk78 != 0) {
        if (func_80011140(arg0, arg1, arg2, arg3) == 0) {
            return 1;
        }
        arg1->unk78 = 0;
    }
    return 0;
}


struct func_8012CF10_Arg {
    s32 w0;
    s32 w1;
    s32 w2;
};

extern s32 func_80010D08(void *, void *, struct func_8012CF10_Arg, u16, s32);

struct func_8012CF10_Struct {
    u8 pad[0x78];
    u16 unk78;
};

s32 func_8012CF10(void *arg1, struct func_8012CF10_Struct *arg2, struct func_8012CF10_Arg arg3, u16 arg4, s32 arg5) {
    if (arg2->unk78 != 0) {
        if (func_80010D08(arg1, arg2, arg3, arg4, arg5) == 0) {
            return 1;
        }
        arg2->unk78 = 0;
    }
    return 0;
}

#define D_80017064 D_80017064__func_8012CF8C
#define func_80005204 func_80005204__func_8012CF8C
#define func_80017064 func_80017064__func_8012CF8C
#define func_8012C97C_Struct func_8012C97C_Struct__func_8012CF8C
extern s32 func_80005204(u16);
extern void func_80017064(u16, u8 *, u8 *, u8 *);
typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;

#define func_80017064 D_80017064
extern void D_80017064(u16);

s32 func_8012CF8C(arg0, arg1, arg2, arg3)
s32 arg0;
s32 *arg1;
u16 arg2;
s32 arg3;
{
    s32 pad;
    s32 sp20;
    u16 sp1E;
    func_8012C97C_Struct *t;

    t = D_80171CEC[arg2];
    sp20 = t->unk4[arg3];
    if ((sp20 & 0x0F000000) == 0x0D000000) {
        sp1E = t->unk0[1];
        func_80017064(sp1E);
        *arg1 = (func_80005204(sp1E) + sp20 + 0x80000000) & 0xFFFFFF;
    } else {
        sp1E = t->unk0[0];
        func_80017064(sp1E);
        *arg1 = (func_80005204(sp1E) + sp20 + 0x80000000) & 0xFFFFFF;
    }
}
#undef func_80017064
#undef D_80017064
#undef func_80005204
#undef func_80017064
#undef func_8012C97C_Struct


typedef struct func_8012D064_StructV {
    u8 pad0[0x38];
    u16 unk38;
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u16 unk3E;
    s32 unk40;
} func_8012D064_StructV;

typedef struct func_8012D064_StructO {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x9];
    func_8012D064_StructV *unk2C;
    func_8012D064_StructV *unk30;
} func_8012D064_StructO;

typedef struct func_8012D064_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8012D064_StructB;

typedef struct func_8012D064_StructA {
    u8 pad0[0x24];
    func_8012D064_StructB *unk24;
} func_8012D064_StructA;

typedef struct func_8012D064_Elem {
    s32 unk0;
    u8 unk4;
    u8 pad5[3];
} func_8012D064_Elem;

extern void func_80017064(u16, u8 *, u8 *, u8 *);
extern s32 func_80005204(u16);

void func_8012D064(void *arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 w0;
    u16 pad;
    u16 id;
    func_8012D064_StructO **o;
    func_8012D064_StructV *v;
    func_8012D064_Elem *e;
    s32 *p40;
    u8 *p3C;
    u8 *p3B;
    u8 *p3A;
    u16 *p38;
    u16 *p3E;
    u8 *p3D;
    f64 one;
    u32 n;

    o = (func_8012D064_StructO **)&D_8008DA88[(u8)arg5];
    (*o)->unk22 = 1;
    if (((func_8012D064_StructA *)arg0)->unk24->unk2C != 0) {
        (*o)->unk2C->unk38 = arg4;
        p40 = &(*o)->unk2C->unk40;
        p3C = &(*o)->unk2C->unk3C;
        p3B = &(*o)->unk2C->unk3B;
        p3A = &(*o)->unk2C->unk3A;
        p38 = &(*o)->unk2C->unk38;
        p3E = &(*o)->unk2C->unk3E;
        p3D = &(*o)->unk2C->unk3D;
    } else {
        (*o)->unk30->unk38 = arg4;
        p40 = &(*o)->unk30->unk40;
        p3C = &(*o)->unk30->unk3C;
        p3B = &(*o)->unk30->unk3B;
        p3A = &(*o)->unk30->unk3A;
        p38 = &(*o)->unk30->unk38;
        p3E = &(*o)->unk30->unk3E;
        p3D = &(*o)->unk30->unk3D;
    }
    if (arg3 == 1) {
        *p3E |= 1;
    } else {
        *p3E &= 0xFFFE;
    }
    if (arg3 == 2) {
        *p3E |= 4;
    }
    one = 2.0 - 1.0;
    *p3D = arg2 * 10.0 * one;
    *p3B = 0;
    e = *p3B + ((func_8012D064_Elem **)D_80171CF0[*p38 - 1]->unk4)[arg1];
    w0 = e->unk0;
    n = e->unk4;
    *p3C = (f32)(u32)*p3D * (f32)n / 10.0;
    if (*p3C == 0) {
        *p3C = 1;
    }
    *p3A = arg1 + 1;
    if ((w0 & 0x0F000000) == 0x0D000000) {
        id = D_80171CF0[*p38 - 1]->unk0[1];
        func_80017064(id, p3C, p3B, p3D);
        *p40 = (func_80005204(id) + w0 + 0x80000000) & 0xFFFFFF;
    } else {
        id = D_80171CF0[*p38 - 1]->unk0[0];
        func_80017064(id, p3C, p3B, p3D);
        *p40 = (func_80005204(id) + w0 + 0x80000000) & 0xFFFFFF;
    }
}

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012D40C.s {"functions":["func_8012D40C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012D40C.s")


typedef struct func_8012D7A8_Node {
    u8 pad[0x10];
    struct func_8012D7A8_Node *unk10;
} func_8012D7A8_Node;

typedef struct func_8012D7A8_Struct {
    u8 pad0[0x24];
    func_8012D7A8_Node *unk24;
    u8 pad1[0x4];
    s32 unk2C;
} func_8012D7A8_Struct;

extern void func_8012D40C(void *, s32);

void func_8012D7A8(arg0)
    void *arg0;
{
    s32 var_s1;
    func_8012D7A8_Node *var_s0;
    func_8012D7A8_Struct *obj;

    obj = arg0;
    var_s1 = 0;
    if (obj->unk2C & 2) {
        var_s0 = obj->unk24;
        if (var_s0 != NULL) {
            do {
                func_8012D40C(obj, var_s1 & 0xFF);
                var_s0 = var_s0->unk10;
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s0 != NULL);
        }
    }
}

#define func_8012D8C8 func_8012D8C8__func_8012D814

extern void func_8012D8C8(s32, s32, s32, f32, s32, s32);

void func_8012D814(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4) {
    func_8012D8C8(arg0, arg1, arg2, arg3, arg4, 0);
}
#undef func_8012D8C8


extern s32 func_8012CF8C();

void func_8012D844(void *arg0, u16 arg1, s32 arg2) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(((u8 *)arg0) + 0x24);
    if (*(void **)(temp_v0 + 0x2C) != NULL) {
        func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x2C) + 0x40, arg1, arg2);
        return;
    }
    func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x30) + 0x40, arg1, arg2);
}


typedef struct func_8012D894_StructB {
    u8 pad0[0x2C];
    s32 unk2C;
} func_8012D894_StructB;

typedef struct func_8012D894_StructA {
    u8 pad0[0x24];
    func_8012D894_StructB *unk24;
} func_8012D894_StructA;

void func_8012D894(void *arg0, u16 arg1, s32 arg2) {
    func_8012D894_StructA *a = arg0;

    func_8012CF8C(arg0, (u8 *)a->unk24->unk2C + 0x44, arg1, arg2);
}

#define func_8012D064 func_8012D064__func_8012D8C8

typedef struct func_8012D8C8_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_8012D8C8_Struct;

extern void func_8012D064(void *arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5);

void func_8012D8C8(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5) {
    func_8012D8C8_Struct *p = (func_8012D8C8_Struct *) arg0;

    p->unk2C |= 2;
    func_8012D064(p, arg2, arg3, arg4, arg1, (u8) arg5);
}
#undef func_8012D064

#define func_8012C97C_Struct func_8012C97C_Struct__func_8012D918
typedef struct func_8012C97C_Struct {
    u16 *unk0;
    s32 *unk4;
} func_8012C97C_Struct;

typedef struct func_8012D918_StructB { u8 pad[0x2C]; s32 unk2C; } func_8012D918_StructB;
typedef struct func_8012D918_StructA { u8 pad[0x24]; func_8012D918_StructB *unk24; } func_8012D918_StructA;

void func_8012D918(func_8012D918_StructA *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 pad;
    s32 sp20;
    u16 a0;
    u8 *v1;
    func_8012C97C_Struct *v0;

    *(s32 *)((u8 *)&sp20 + 0xC) = arg1;
    *(s32 *)((u8 *)&sp20 + 0x14) = arg3;
    arg3 &= 0xFF;
    arg1 &= 0xFFFF;
    if (arg0->unk24->unk2C != 0) {
        if (arg4 == 0) {
            v1 = (u8 *)D_8008DA88[arg3]->unk2C + 0x40;
        } else {
            v1 = (u8 *)D_8008DA88[arg3]->unk2C + 0x44;
        }
    } else if (arg4 == 0) {
        v1 = (u8 *)D_8008DA88[arg3]->unk30 + 0x40;
    } else {
        v1 = (u8 *)D_8008DA88[arg3]->unk30 + 0x44;
    }
    v0 = D_80171CEC[arg1];
    sp20 = v0->unk4[arg2];
    if ((sp20 & 0x0F000000) == 0x0D000000) {
        a0 = v0->unk0[1];
        func_80017064(a0, (u8 *)arg1, (u8 *)arg2, (u8 *)arg3);
        goto l1;
l1:
        *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
    } else {
        a0 = v0->unk0[0];
        func_80017064(a0, (u8 *)arg1, (u8 *)arg2, (u8 *)arg3);
        goto l2;
l2:
        *(s32 *)v1 = (func_80005204(a0) + sp20 + 0x80000000) & 0xFFFFFF;
    }
}
#undef func_8012C97C_Struct

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012DA90.s {"functions":["func_8012DA90"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012DA90.s")

typedef struct func_8012DE58_C { s32 pad; f32 unk4; f32 unk8; f32 unkC; } func_8012DE58_C;
typedef struct func_8012DE58_B { u8 pad[0x2C]; func_8012DE58_C *unk2C; func_8012DE58_C *unk30; } func_8012DE58_B;
typedef struct func_8012DE58_A { u8 pad[0x24]; func_8012DE58_B *unk24; } func_8012DE58_A;

void func_8012DE58(func_8012DE58_A *arg0)
{
  func_8012DE58_B *b;
  if (arg0 == (*((func_8012DE58_A **) (D_801BBBF0 + 0xDC))))
  {
    if (func_801F1114() == 0x28)
    {
      b = arg0->unk24;
      if (arg0->unk24->unk2C != 0)
      {
        arg0->unk24->unk2C->unk4 += *((f32 *) (D_801BBBF0 + 0x390));
        arg0->unk24->unk2C->unk8 += *((f32 *) (D_801BBBF0 + 0x394));
        arg0->unk24->unk2C->unkC += *((f32 *) (D_801BBBF0 + 0x398));
      }
      else
      {
        arg0->unk24->unk30->unk4 += *((f32 *) (D_801BBBF0 + 0x390));
        arg0->unk24->unk30->unk8 += *((f32 *) (D_801BBBF0 + 0x394));
        arg0->unk24->unk30->unkC += *((f32 *) (D_801BBBF0 + 0x398));
      }
    }
  }
}


typedef struct func_8012DF38_Vec { s32 pad; f32 x, y, z; } func_8012DF38_Vec;
typedef struct func_8012DF38_C { u8 pad[0x63]; u8 unk63; } func_8012DF38_C;
typedef struct func_8012DF38_B {
    u8 pad0[0x18]; func_8012DF38_C *unk18; s32 unk1C; u8 pad20[2]; u8 unk22;
    u8 pad23[9]; func_8012DF38_Vec *unk2C;
} func_8012DF38_B;
typedef struct func_8012DF38_Struct {
    func_8012DF38_B *unk0; func_8012DF38_B *unk4; u8 pad8[0x10]; func_8012DF38_B *unk18;
    u8 pad1C[8]; func_8012DF38_B *unk24; u8 pad28[8]; func_8012DF38_B *unk30;
    u8 pad34[8]; func_8012DF38_B *unk3C; u8 pad40[8]; func_8012DF38_B *unk48;
    u8 pad4C[0x10]; func_8012DF38_B *unk5C; func_8012DF38_B *unk60;
} func_8012DF38_Struct;
typedef struct func_8012DF38_P {
    u8 pad[0xC]; u16 unkC; u8 pad2[0x96]; f32 unkA4, unkA8, unkAC;
} func_8012DF38_P;
extern void func_8013A334(s32, s32, s32, s32);
extern void func_801DB868(s32, s32);
extern u16 D_801BBC1C;

#define A ((func_8012DF38_Struct *)arg0)
#define P ((func_8012DF38_P *)arg1)

void func_8012DF38(s32 arg0, s32 arg1) {
    s32 i;
    func_8012DF38_B **q;
    func_8012DF38_B *c;
    func_8012DF38_B *b;

    if (arg0 != 0 && arg1 != 0 && (b = A->unk0) != NULL && b->unk1C != 0 && b->unk18->unk63 != 0 &&
        (D_801BBC1C == 4 || D_801BBC1C == 5 || D_801BBC1C == 0xA || D_801BBC1C == 0xB || D_801BBC1C == 0xF)) {
        func_8012DF38_Vec *v = b->unk2C;
        P->unkA4 = v->x;
        P->unkA8 = v->y;
        P->unkAC = v->z;
        if (A->unk0->unk22 == 0) {
            i = 0;
            q = (func_8012DF38_B **)arg0;
            if (P->unkC > 0) {
                do {
                    ((func_8012DF38_B **)arg0)[i]->unk1C = 0;
                    i++;
                } while (i < P->unkC);
            }
        } else {
            func_8013A334((s32)A->unk24->unk2C + 0xA4, arg0, arg1, 0x1C);
            func_8013A334((s32)A->unk30->unk2C + 0xA4, arg0, arg1, 0x1D);
            func_8013A334((s32)A->unk3C->unk2C + 0xA4, arg0, arg1, 0x1E);
            func_8013A334((s32)A->unk48->unk2C + 0xA4, arg0, arg1, 0x1F);
            func_8013A334((s32)A->unk18->unk2C + 0xA4, arg0, arg1, 0x20);
            func_8013A334((s32)A->unk4->unk2C + 0xA4, arg0, arg1, 0x19);
            if (P->unkC >= 0x17) {
                func_8013A334((s32)A->unk60->unk2C + 0xA4, arg0, arg1, 0x21);
            }
            func_801DB868(arg0, arg1);
        }
    }
}

#define func_8012DF38 func_8012DF38__func_8012E114
#define func_8012E774 func_8012E774__func_8012E114

typedef struct func_8012E114_StructG {
    u8 pad0[0xF5];
    u8 unkF5;
    u8 pad1[0x238 - 0xF6];
    f32 unk238;
    f32 unk23C;
    f32 unk240;
    u8 pad2[0xEF0 - 0x244];
    u16 unkEF0;
} func_8012E114_StructG;
typedef struct func_8012E114_StructD { u8 pad[0x98]; f32 unk98; f32 unk9C; f32 unkA0; f32 unkA4; f32 unkA8; f32 unkAC; } func_8012E114_StructD;
typedef struct func_8012E114_StructC { u8 pad[0x2C]; func_8012E114_StructD *unk2C; } func_8012E114_StructC;
typedef struct func_8012E114_StructB { u8 pad[0x22]; u8 unk22; } func_8012E114_StructB;
typedef struct func_8012E114_StructA { func_8012E114_StructB *unk0; u8 pad[0x14]; func_8012E114_StructC *unk18; } func_8012E114_StructA;
typedef struct func_8012E114_StructP { u8 pad[0x74]; u8 unk74; } func_8012E114_StructP;
typedef struct func_8012E114_StructO { u8 pad[0x5C]; func_8012E114_StructP *unk5C; } func_8012E114_StructO;

extern void func_8013C608(s32);
extern void func_8012E774();
extern void func_8012DF38(s32, s32);
extern void func_801DE7EC(void *, s32);
extern void func_801C4A5C(void *, s32);

void func_8012E114(func_8012E114_StructO *arg0, func_8012E114_StructA *arg1) {
    func_8012E114_StructP *sp24;
    u8 t;

    sp24 = arg0->unk5C;
    func_8012E774(arg0);
    if (!(((func_8012E114_StructG *)D_801BBBF0)->unkEF0 & 0x10)) {
        func_801C4A5C(arg0, 0);
    }
    ((func_8012E114_StructG *)D_801BBBF0)->unk238 = 0.0f;
    ((func_8012E114_StructG *)D_801BBBF0)->unk23C = 0.0f;
    ((func_8012E114_StructG *)D_801BBBF0)->unk240 = 0.0f;
    if (((func_8012E114_StructG *)D_801BBBF0)->unkF5 != 0) {
        func_8012DF38((s32)arg1, (s32)sp24);
        if ((arg1->unk0->unk22 != 0) && ((t = sp24->unk74, (t == 0)) || (t == 2))) {
            ((func_8012E114_StructG *)D_801BBBF0)->unk238 = (f32)((f64)(arg1->unk18->unk2C->unkA4 + arg1->unk18->unk2C->unk98) * 0.5);
            ((func_8012E114_StructG *)D_801BBBF0)->unk23C = (f32)((f64)(arg1->unk18->unk2C->unkA8 + arg1->unk18->unk2C->unk9C) * 0.5);
            ((func_8012E114_StructG *)D_801BBBF0)->unk240 = (f32)((f64)(arg1->unk18->unk2C->unkAC + arg1->unk18->unk2C->unkA0) * 0.5);
        }
        func_8013C608((s32)arg0);
        func_801DE7EC(arg0, (s32)arg0->unk5C);
    }
}
#undef func_8012DF38
#undef func_8012E774


struct func_8012E25C_StructB {
    u8 pad[0x74];
    u8 unk74;
};

struct func_8012E25C_StructA {
    u8 pad[0x5C];
    struct func_8012E25C_StructB *unk5C;
};

s32 func_80126944(void);
void func_801DBEE4(void *arg0, s32 arg1);
void func_80223ED4(void *arg0, s32 arg1);

void func_8012E25C(struct func_8012E25C_StructA *arg0, s32 arg1) {
    struct func_8012E25C_StructB *temp;

    temp = arg0->unk5C;
    if ((temp->unk74 != 4) && (func_80126944() == 1) && (D_801BBBF0[0x1031] > 0) && (D_801BBBF0[0x1031] < 0xE) && (*(void **) (D_801BBBF0 + 0xDC) != NULL) && (*(void **) (D_801BBBF0 + 0xE0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xDC))[0x63] != 0) && (*(void **) (D_801BBBF0 + 0xEC) != NULL) && (*(void **) (D_801BBBF0 + 0xF0) != 0) && (((u8 *) *(void **) (D_801BBBF0 + 0xEC))[0x63] != 0)) {
        func_80223ED4(arg0, arg1);
        func_801DBEE4(arg0, arg1);
    }
}


extern s32 D_8017BAD8;
extern u8 D_801BCC21;

typedef struct func_8012E31C_StructData {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x17];
    u8 unk4B;
} func_8012E31C_StructData;
typedef struct func_8012E31C_StructNode {
    u8 pad0[0x2C];
    func_8012E31C_StructData *unk2C;
} func_8012E31C_StructNode;
typedef struct func_8012E31C_StructState {
    u8 pad0[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
    u8 padE[0x8E];
    u8 unk9C;
} func_8012E31C_StructState;
typedef struct func_8012E31C_StructObj {
    u8 pad0[0x5C];
    func_8012E31C_StructState *unk5C;
} func_8012E31C_StructObj;

void func_8012E31C(void *arg0, s32 arg1) {
    func_8012E31C_StructState *temp_t2;
    s32 pad;
    s32 *sp24;
    s16 var_t1;
    register s32 *var_a0;
    s32 var_v1;
    register func_8012E31C_StructData *temp_v0_2;

    temp_t2 = ((func_8012E31C_StructObj *)arg0)->unk5C;
    sp24 = temp_t2->unk4;
    if (((func_80126944() != 1) || (((s32) D_801BCC21 > 0) && ((s32) D_801BCC21 < 0xA))) && ((temp_t2->unk9C == 1) || (temp_t2->unk9C == 3))) {
        var_t1 = ((func_8012E31C_StructNode **)arg1)[1]->unk2C->unk4B;
        if (temp_t2->unk9C == 1) {
            var_t1 -= 0x19;
            if (var_t1 <= 0) {
                var_t1 = 0;
                temp_t2->unk9C = 2;
            }
        } else {
            var_t1 += 0x19;
            if (var_t1 >= 0xFF) {
                var_t1 = 0xFF;
                temp_t2->unk9C = 0;
            }
        }
        if ((s32) temp_t2->unkC >= 2) {
            var_v1 = 4;
            var_a0 = sp24 + 1;
            do {
                if (*var_a0 < 0) {
                } else {
                    temp_v0_2 = (*(func_8012E31C_StructNode **)(arg1 + var_v1))->unk2C;
                    temp_v0_2->unk24 |= 0x100;
                    temp_v0_2->unk30 = (s32) &D_8017BAD8 | 0x40000000;
                    temp_v0_2->unk4B = var_t1;
                }
                var_v1 += 4;
                var_a0++;
            } while (var_v1 < temp_t2->unkC * 4);
        }
    }
}

#define func_8012C9C0 func_8012C9C0__func_8012E454
#define func_8012CB4C func_8012CB4C__func_8012E454
#define func_8012CE10 func_8012CE10__func_8012E454
#define func_8012DE58 func_8012DE58__func_8012E454
#define func_8012E25C func_8012E25C__func_8012E454
#define func_8012E31C func_8012E31C__func_8012E454
void func_8012C9C0(void *arg);
void func_8012CB4C(func_8012CB4C_Struct *arg0);
void func_8012CE10(void *arg0);
void func_8012DE58(func_8012DE58_A *arg0);
void func_8012E25C(struct func_8012E25C_StructA *arg0, s32 arg1);
extern void func_8012E31C(void *, s32);
typedef struct func_8012E454_StructC { s32 pad; f32 unk4; f32 unk8; f32 unkC; } func_8012E454_StructC;
typedef struct func_8012E454_StructB { u8 pad[0x2C]; func_8012E454_StructC *unk2C; } func_8012E454_StructB;
typedef struct func_8012E454_StructG {
    u8 pad0[0xE0];
    func_8012E454_StructB *unkE0;
    u8 pad1[0x374 - 0xE4];
    f32 unk374; f32 unk378; f32 unk37C;
    u8 pad2[0xEF0 - 0x380];
    u16 unkEF0;
    u8 pad3[0x1031 - 0xEF2];
    u8 unk1031;
} func_8012E454_StructG;
typedef struct func_8012E454_StructA { u8 pad[0x24]; s32 unk24; } func_8012E454_StructA;
extern s32 func_80108634(f32, f32, s32);
extern void func_8012DA90(void *);
extern void func_801C787C(void *);

#define G ((func_8012E454_StructG *)D_801BBBF0)

void func_8012E454(func_8012E454_StructA *arg0, s32 arg1) {
    func_8012E454_StructC *c;
    if (arg0->unk24 != 0) {
        func_8012D7A8(arg0);
        if (!(G->unkEF0 & 0x10)) {
            func_8012E25C((void *)arg0, arg1);
            func_8012DA90(arg0);
            func_8012CB4C((void *)arg0);
            func_8012C9C0(arg0);
            func_8012CE10(arg0);
            func_8012DE58((void *)arg0);
            c = G->unkE0->unk2C;
            if (func_80108634(c->unk4, c->unk8, *(s32 *)&c->unkC) != 0) {
                G->unkE0->unk2C->unk4 = G->unk374;
                G->unkE0->unk2C->unk8 = G->unk378;
                G->unkE0->unk2C->unkC = G->unk37C;
            }
            func_801C4A5C(arg0, 1);
            func_801C787C(arg0);
            if (func_80126944() == 1) {
                if (G->unk1031 != 5 && G->unk1031 != 7 && G->unk1031 != 0xA && G->unk1031 != 0xB) {
                    return;
                }
            }
            func_8012E31C(arg0, arg1);
        }
    }
}
#undef func_8012C9C0
#undef func_8012CB4C
#undef func_8012CE10
#undef func_8012DE58
#undef func_8012E25C
#undef func_8012E31C

#define func_8012E774 func_8012E774__func_8012E584

extern void func_8012E774();
extern void func_8012B7C0(s32);

void func_8012E584(s32 arg0, s32 arg1) {
    func_8012E774();
    func_8012B7C0(arg0);
}
#undef func_8012E774

#define func_8012DF38 func_8012DF38__func_8012E5B0
#define func_8012E774 func_8012E774__func_8012E5B0
extern void func_8012E774();

struct func_8012E5B0_Struct {
    u8 pad[0x24];
    s32 unk24;
    u8 pad2[0x34];
    s32 unk5C;
};

extern void func_8012DF38(s32, s32);

void func_8012E5B0(struct func_8012E5B0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012DF38(arg1, arg0->unk5C);
        if (func_80126944() != 1 || D_801BCC21 == 5 || D_801BCC21 == 7 || D_801BCC21 == 8 || D_801BCC21 == 0xA || D_801BCC21 == 0xB) {
            func_8012B7C0((s32)arg0);
            func_8012E774((s32)arg0);
            func_8013C608((s32)arg0);
            func_801DE7EC(arg0, arg0->unk5C);
        }
    }
}
#undef func_8012DF38
#undef func_8012E774

#define func_8012C9C0 func_8012C9C0__func_8012E654
#define func_8012CD28 func_8012CD28__func_8012E654
#define func_8012CE10 func_8012CE10__func_8012E654
#define func_8012D7A8 func_8012D7A8__func_8012E654

typedef struct func_8012E654_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E654_Struct;

extern void func_8012B1E4(void *, s32);
extern void func_8012BFA0(void *);
extern void func_8012C9C0(void *);
extern void func_8012CD28(void *);
extern void func_8012CE10(void *);
extern void func_8012D7A8();

void func_8012E654(func_8012E654_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012D7A8();
        func_8012CD28(arg0);
        func_8012C9C0(arg0);
        func_8012CE10(arg0);
        func_8012B1E4(arg0, 1);
        func_8012BFA0(arg0);
    }
}
#undef func_8012C9C0
#undef func_8012CD28
#undef func_8012CE10
#undef func_8012D7A8

#define func_8012E31C func_8012E31C__func_8012E6BC

typedef struct func_8012E6BC_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E6BC_Struct;

extern void func_8012E31C(void *, s32);

void func_8012E6BC(func_8012E6BC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012E25C((struct func_8012E25C_StructA *) arg0, arg1);
        if ((func_80126944() != 1) || (D_801BCC21 == 5) || (D_801BCC21 == 7) || (D_801BCC21 == 0xA) || (D_801BCC21 == 0xB)) {
            func_8012CD28(arg0);
            func_8012C9C0(arg0);
            func_8012CE10(arg0);
            func_8012B1E4(arg0, 1);
            func_8012BFA0(arg0);
            func_8012D7A8(arg0);
            func_8012E31C(arg0, arg1);
        }
    }
}
#undef func_8012E31C


struct func_8012E774_Glob {
    u8 pad0[0xFE];
    u16 unkFE;
    u8 pad1[0x84];
    u16 unk184;
    u8 pad2[0x2B2];
    f32 unk438;
    f32 unk43C;
    f32 unk440;
};

struct func_8012E774_Obj {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x42];
    u16 unk72;
    u8 pad3[0x18];
    s32 unk8C;
};

void func_8012E774(struct func_8012E774_Obj *arg0) {
    s32 a;
    s32 b;
    s32 p;

    ((struct func_8012E774_Glob *) D_801BBBF0)->unkFE = (u16) (((struct func_8012E774_Glob *) D_801BBBF0)->unkFE + 1);
    if ((arg0->unk2C & 0x8000) && (((struct func_8012E774_Glob *) D_801BBBF0)->unk184 != 0) && (arg0->unk72 & ((struct func_8012E774_Glob *) D_801BBBF0)->unk184)) {
        arg0->unk1C = arg0->unk8C;
        arg0->unk20 = arg0->unk20 | 0x800000;
        return;
    }
    p = arg0->unk24;
    if (p != 0) {
        arg0->unk1C = arg0->unk1C & 0xFF7FFFFF;
        arg0->unk20 = arg0->unk20 & 0xFF7FFFFF;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk440 = 0.0f;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk43C = ((struct func_8012E774_Glob *) D_801BBBF0)->unk440;
        ((struct func_8012E774_Glob *) D_801BBBF0)->unk438 = ((struct func_8012E774_Glob *) D_801BBBF0)->unk43C;
    }
}

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012E81C.s {"functions":["func_8012E81C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012E81C.s")


typedef struct func_8012F30C_StructNode {
    struct func_8012F30C_StructNode *next;
    u8 pad4[4];
    struct func_8012F30C_StructNode *child;
    u8 padC[0x29];
    u8 id;
} func_8012F30C_StructNode;

typedef struct func_8012F30C_StructGlobal {
    u8 pad[0x108];
    u8 id;
} func_8012F30C_StructGlobal;


s32 func_8012F30C(func_8012F30C_StructNode *arg0) {
    s32 id;

    id = arg0->id;
    if (id != 0 && id * 1 == ((func_8012F30C_StructGlobal *)D_801BBBF0)->id) {
        return 1;
    }
    arg0 = arg0->child;
    if (arg0 != NULL) {
        while (arg0 != NULL) {
            id = arg0->id;
            if (id != 0 && id * 1 == ((func_8012F30C_StructGlobal *)D_801BBBF0)->id) {
                return 1;
            }
            arg0 = arg0->next;
        }
    }
    return 0;
}


typedef struct func_8012F388_Struct {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x4];
    s32 unk4C;
    s32 unk50;
    u8 pad2[0xB4];
    u8 unk108;
} func_8012F388_Struct;

void func_8012F388(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = ((func_8012F388_Struct *) D_801BBBF0)->unk108;
    temp_s1 = temp_v0;
    do {
        ((func_8012F388_Struct *) D_801BBBF0)->unk108 = temp_v0 + arg0;
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk40) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk44) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk4C) != 0) {
            break;
        }
        if (func_8012F30C(((func_8012F388_Struct *) D_801BBBF0)->unk50) != 0) {
            break;
        }
        temp_v0 = ((func_8012F388_Struct *) D_801BBBF0)->unk108;
    } while (temp_v0 != temp_s1);
}


typedef struct func_8012F41C_Struct2 { u8 pad[0x24]; s32 unk24; } func_8012F41C_Struct2;
typedef struct func_8012F41C_Gfx { u32 w0; u32 w1; } func_8012F41C_Gfx;
typedef struct func_8012F41C_Struct {
    u8 pad[0x24];
    func_8012F41C_Struct2 *unk24;
    u8 pad2[0x74];
    func_8012F41C_Gfx dl[3];
} func_8012F41C_Struct;
extern u8 D_8017B4A0[];

void *func_8012F41C(func_8012F41C_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    func_8012F41C_Gfx *gfx = arg0->dl;
    func_8012F41C_Struct2 *sub = arg0->unk24;

    sub->unk24 = 0x80000600;
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xDE000000; _g->w1 = (u32)D_8017B4A0; }
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xFA000000; _g->w1 = (((u32)arg1 & 0xFF) << 24) | (((u32)arg2 & 0xFF) << 16) | (((u32)arg3 & 0xFF) << 8) | ((u32)arg4 & 0xFF); }
    { func_8012F41C_Gfx *_g = gfx++; _g->w0 = 0xDF000000; _g->w1 = 0; }
    return arg0->dl;
}


typedef struct func_8012F490_StructArgs {
    s32 words[5];
} func_8012F490_StructArgs;

typedef struct func_8012F490_StructObj {
    u8 pad[0x92];
    s16 unk92;
    u8 pad94[4];
    s16 unk98;
} func_8012F490_StructObj;

extern func_8012F490_StructArgs D_80178C10;

extern func_8012F490_StructObj *D_8012C4D0(s32, func_8012F490_StructArgs, u8);

#define SPAWN(a) D_8012C4D0(a, D_80178C10, 3)

void *func_8012F490(s32 arg0, s32 arg1) {
    func_8012F490_StructObj *obj;

    if (arg1 == 0) goto mode0;
    if (arg1 != 1) goto def;
    goto mode1;
mode0:
    {
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 0;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 1;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 2;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 3;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 4;
        }
        return obj;
    }
mode1:
    {
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 0;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 1;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 2;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 3;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 4;
        }
        return obj;
    }
def:
    return NULL;
}

#define D_80178CB4 D_80178CB4__func_8012F87C

typedef struct func_8012F87C_StructObj {
    u8 pad[0x90];
    u8 mode;
} func_8012F87C_StructObj;
extern func_8012F490_StructArgs D_80178CB4;

#define CREATE(a) ((func_8012F87C_StructObj *)D_8012C4D0(a, D_80178CB4, 3))

void *func_8012F87C(s32 arg0, s32 arg1) {
    func_8012F87C_StructObj *obj;

    if (arg1 == 0) goto mode0;
    if (arg1 != 1) goto dflt;
    goto mode1;
mode0:
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 0;
    }
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 2;
    }
    return obj;
mode1:
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 1;
    }
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 2;
    }
    return obj;
dflt:
    return NULL;
}
#undef CREATE
#undef D_80178CB4

#define D_80178CC8 D_80178CC8__func_8012FA20

extern func_8012F490_StructArgs D_80178CC8;

void *func_8012FA20(s32 arg0, s32 arg1) {
    func_8012F490_StructObj *temp;

    if (arg1 == 0) goto case0;
    if (arg1 != 1) goto def;
    goto case1;
case0:
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 0;
    }
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 2;
    }
    return temp;
case1:
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 1;
    }
    temp = D_8012C4D0(arg0, D_80178CC8, 3);
    if (temp != NULL) {
        ((u8 *)temp)[0x90] = 2;
    }
    return temp;
def:
    return NULL;
}
#undef D_80178CC8

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FBC4.s {"functions":["func_8012FBC4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FBC4.s")

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FD1C.s {"functions":["func_8012FD1C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FD1C.s")

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FE50.s {"functions":["func_8012FE50"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FE50.s")


extern u8 D_801BBD6E;

u8 func_8012FF40(void) {
    return D_801BBD6E;
}


extern u8 D_801BBD6C;

u8 func_8012FF4C(void) {
    return D_801BBD6C;
}


s32 func_80151BC4();                                /* extern */
s32 func_80151C34();                                /* extern */
extern u16 D_801BBC1E;

u16 func_8012FF58(void) {
    s32 temp_v0;

    if (func_80151BC4() != 2) {
        goto block_load;
    }
    temp_v0 = func_80151C34();
    if (temp_v0 == 1) {
        goto block_r3;
    }
    if (temp_v0 == 2) {
        goto block_r32;
    }
    if (temp_v0 != 0x67) {
        goto block_load;
    }
block_r3:
    return 3U;
block_r32:
    return 0x32U;
block_load:
    return D_801BBC1E;
}

extern s8 D_801BBC06;


u8 func_8012FFC0(void) {
    return D_801BBC06;
}



void func_8012FFCC(s32 arg0) {
    s32 *p = &arg0;
    D_801BBC06 = arg0;
}

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FFDC.s {"functions":["func_8012FFDC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_8012FFDC.s")

/* hh-block asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_80130038.s {"functions":["func_80130038"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012C3A0/_mrg_keep_text_func_80130038.s")


extern s16 D_80089354;
extern u8 D_801BBD4D;

s32 func_80130078(void) {
    return ((D_801BBD4D & 0x80) || (D_80089354 != 0)) ? 1 : 0;
}


struct func_801300B0_Struct {
    u8 pad0[0x112C];
    s32 unk112C;
    f32 unk1130;
    u8 pad1[0x4];
    s32 unk1138;
    u8 pad2[0x8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
};

void func_801300B0(f32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4) {
    struct func_801300B0_Struct *obj = (struct func_801300B0_Struct *) D_801BBBF0;

    obj->unk112C = 1;
    obj->unk1130 = arg0;
    obj->unk1138 = arg2;
    obj->unk1144 = arg3;
    obj->unk1148 = arg4;
    obj->unk114C = 0.0f;
}


typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;

extern void func_801518D4(s32, u8, s32);
extern f64 D_8018D670;

#define G ((func_801300E8_Struct *)D_801BBBF0)

void func_801300E8(void) {
    s32 v;
    s32 n;
    f32 a;

    if (G->unk112C != 0) {
        if ((G->unk30 % 7) == 0) {
            v = (s32)(((f64)G->unk1130 * 5.0) / 7.0);
            if (v >= 8) {
                v = 7;
            }
            func_801518D4(0, v, 8);
        }
        if (G->unk1138 != 0) {
            if (--G->unk1138 == 0) {
                G->unk112C = 0;
                G->unk114C = 0.0f;
                return;
            }
        }
        if (!(G->unk1138 & 1)) {
            if (G->unk1130 > 0.0f) {
                G->unk324 = G->unk1130;
                if (G->unk1130 <= G->unk1148) {
                    G->unk1130 = G->unk1130 * G->unk1144;
                }
                G->unk1130 = -G->unk1130;
            } else {
                G->unk324 = G->unk1130;
                G->unk1130 = -G->unk1130;
            }
            if (G->unk1130 < 0.0f) {
                a = -G->unk1130;
            } else {
                a = G->unk1130;
            }
            if (a < D_8018D670) {
                G->unk112C = 0;
                G->unk324 = 0.0f;
            }
        }
    }
}

extern u8 D_801760B4;


void func_80130254(s32 arg0) {
    s32 *p = &arg0;
    D_801760B4 = arg0;
}


s32 func_80001060();                                /* extern */

s32 func_80130264(void) {
    if (func_80001060() != 0) {
        return 1;
    }
    return 0;
}

#define func_80130264 func_80130264__func_80130290

s32 func_80130264();                                /* extern */

s32 func_80130290(void) {
    if ((func_80130264() != 0) && (D_801760B4 == 0)) {
        return 1;
    }
    return 0;
}
#undef func_80130264


s32 func_801302CC(void) {
    if ((func_80130264() != 0) && (D_801760B4 == 1)) {
        return 1;
    }
    return 0;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8012C3A0[] = {
    0x73, 0x65, 0x74, 0x20, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x65, 0x72,
    0x72, 0x6F, 0x72, 0x21, 0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x74, 0x5F, 0x63, 0x6F, 0x75, 0x6E,
    0x74, 0x20, 0x6F, 0x76, 0x65, 0x72, 0x20, 0x25, 0x64, 0x20, 0x61, 0x74, 0x74, 0x72, 0x69, 0x20,
    0x25, 0x64, 0x20, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x61, 0x70, 0x70, 0x65, 0x72, 0x5F, 0x73, 0x65,
    0x74, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x21, 0x21, 0x00, 0x00, 0x00, 0x61, 0x70, 0x70, 0x65,
    0x72, 0x5F, 0x6E, 0x64, 0x6F, 0x62, 0x6A, 0x5F, 0x73, 0x65, 0x74, 0x20, 0x65, 0x72, 0x72, 0x6F,
    0x72, 0x21, 0x21, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x61, 0x70, 0x70, 0x65, 0x72, 0x5F, 0x6E, 0x64,
    0x6F, 0x62, 0x6A, 0x5F, 0x73, 0x65, 0x74, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x21, 0x21, 0x28,
    0x6E, 0x6F, 0x74, 0x20, 0x73, 0x64, 0x6F, 0x62, 0x6A, 0x29, 0x0A, 0x00, 0x61, 0x70, 0x70, 0x65,
    0x72, 0x5F, 0x73, 0x64, 0x6F, 0x62, 0x6A, 0x5F, 0x73, 0x65, 0x74, 0x20, 0x65, 0x72, 0x72, 0x6F,
    0x72, 0x21, 0x21, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x6B, 0x79, 0x6F, 0x75, 0x73, 0x65, 0x69, 0x20,
    0x73, 0x74, 0x6F, 0x70, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x62, 0x61, 0x73, 0x65,
    0x5F, 0x6D, 0x64, 0x6C, 0x5F, 0x73, 0x65, 0x74, 0x20, 0x25, 0x78, 0x20, 0x25, 0x78, 0x20, 0x25,
    0x78, 0x20, 0x25, 0x78, 0x0A, 0x00, 0x00, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64,
    0x5D, 0xA4, 0xAC, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4,
    0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x31, 0x20,
    0x20, 0x42, 0x6B, 0x69, 0x6E, 0x62, 0x64, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x72, 0x6F, 0x6D, 0x4E,
    0x6F, 0x5B, 0x25, 0x64, 0x5D, 0xA4, 0xAC, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4,
    0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61,
    0x6E, 0x69, 0x33, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64,
    0x5D, 0xA4, 0xAC, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4,
    0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x31, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64, 0x5D, 0xA4, 0xAC, 0xC5,
    0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4,
    0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x33, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xC3, 0xA5, 0xD7, 0x20, 0x65, 0x72, 0x72, 0x20, 0x67, 0x20, 0x25,
    0x78, 0x20, 0x64, 0x5F, 0x6E, 0x6F, 0x20, 0x25, 0x78, 0x20, 0x42, 0x73, 0x74, 0x61, 0x74, 0x75,
    0x73, 0x5F, 0x61, 0x6E, 0x69, 0x20, 0x25, 0x78, 0x20, 0x42, 0x42, 0x6B, 0x69, 0x6E, 0x64, 0x20,
    0x25, 0x78, 0x20, 0x66, 0x72, 0x61, 0x6D, 0x65, 0x5F, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x25, 0x78,
    0x20, 0x74, 0x65, 0x78, 0x73, 0x65, 0x67, 0x20, 0x25, 0x78, 0x20, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x64, 0x6C, 0x69, 0x73, 0x74, 0x20, 0x20, 0x25, 0x78, 0x20, 0x20, 0x63, 0x6E, 0x74, 0x20, 0x20,
    0x25, 0x64, 0x20, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64,
    0x5D, 0xA4, 0xAC, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4,
    0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x34, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64, 0x5D, 0xA4, 0xAC, 0xC5,
    0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4,
    0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x36, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64, 0x5D, 0xA4, 0xAC, 0xC5, 0xB8, 0xB3, 0xAB, 0xA4,
    0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0x74,
    0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x31, 0x20, 0x20, 0x42, 0x6B, 0x69, 0x6E, 0x62, 0x64, 0x20,
    0x25, 0x64, 0x0A, 0x00, 0x72, 0x6F, 0x6D, 0x4E, 0x6F, 0x5B, 0x25, 0x64, 0x5D, 0xA4, 0xAC, 0xC5,
    0xB8, 0xB3, 0xAB, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4,
    0xF3, 0xA1, 0xA3, 0x74, 0x65, 0x78, 0x5F, 0x61, 0x6E, 0x69, 0x33, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x4F, 0x42, 0x4A, 0x20, 0x20, 0x6E, 0x6F, 0x25, 0x64, 0x20, 0x78, 0x25, 0x64, 0x2E, 0x25, 0x64,
    0x20, 0x79, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20, 0x7A, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x00, 0x00,
    0x4F, 0x42, 0x4A, 0x52, 0x20, 0x20, 0x72, 0x78, 0x25, 0x78, 0x20, 0x72, 0x79, 0x25, 0x78, 0x20,
    0x72, 0x7A, 0x25, 0x78, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x65, 0x77, 0x20, 0x6F, 0x62, 0x6A, 0x20,
    0x6E, 0x6F, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x46, 0x28, 0x25, 0x35, 0x2E, 0x32, 0x66, 0x29,
    0x2C, 0x46, 0x28, 0x25, 0x35, 0x2E, 0x32, 0x66, 0x29, 0x2C, 0x46, 0x28, 0x25, 0x35, 0x2E, 0x32,
    0x66, 0x29, 0x2C, 0x25, 0x78, 0x2C, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x46, 0x28, 0x25, 0x35,
    0x2E, 0x32, 0x66, 0x29, 0x2C, 0x46, 0x28, 0x25, 0x35, 0x2E, 0x32, 0x66, 0x29, 0x2C, 0x46, 0x28,
    0x25, 0x35, 0x2E, 0x32, 0x66, 0x29, 0x2C, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x46, 0x28, 0x25, 0x35,
    0x2E, 0x32, 0x66, 0x29, 0x2C, 0x46, 0x28, 0x25, 0x35, 0x2E, 0x32, 0x66, 0x29, 0x2C, 0x46, 0x28,
    0x25, 0x35, 0x2E, 0x32, 0x66, 0x29, 0x2C, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x46, 0x28, 0x25, 0x35,
    0x2E, 0x32, 0x66, 0x29, 0x2C, 0x0A, 0x0A, 0x00, 0x53, 0x50, 0x45, 0x45, 0x44, 0x20, 0x20, 0x25,
    0x64, 0x2E, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00, 0x73, 0x70, 0x65, 0x65, 0x64, 0x20, 0x75, 0x70,
    0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x73, 0x70, 0x65, 0x65, 0x64, 0x20, 0x64, 0x6F,
    0x77, 0x6E, 0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0xA5, 0xD7, 0xA5, 0xEC, 0xA5, 0xA4, 0xA5, 0xE4,
    0xA1, 0xBC, 0xA4, 0xAC, 0xA4, 0xDE, 0xA4, 0xC0, 0xA4, 0xC7, 0xA4, 0xAD, 0xA4, 0xC6, 0xA4, 0xCA,
    0xA4, 0xA4, 0xA1, 0xAA, 0xA1, 0xAA, 0xA1, 0xAA, 0x20, 0x69, 0x6E, 0x20, 0x62, 0x61, 0x73, 0x65,
    0x5F, 0x73, 0x75, 0x62, 0x31, 0x28, 0x25, 0x64, 0x29, 0x0A, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x43, 0x20, 0x20, 0x20, 0x25, 0x64, 0x2E, 0x25,
    0x64, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x00, 0x00, 0x00,
    0x43, 0x41, 0x20, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20,
    0x25, 0x64, 0x2E, 0x25, 0x64, 0x00, 0x00, 0x00, 0x44, 0x4F, 0x20, 0x20, 0x48, 0x3A, 0x25, 0x78,
    0x20, 0x56, 0x3A, 0x25, 0x78, 0x20, 0x50, 0x3A, 0x25, 0x78, 0x20, 0x44, 0x3A, 0x25, 0x78, 0x00,
    0x44, 0x49, 0x53, 0x20, 0x43, 0x2D, 0x43, 0x41, 0x3A, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20, 0x43,
    0x2D, 0x50, 0x3A, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00, 0x55, 0x50, 0x20, 0x20,
    0x25, 0x64, 0x20, 0x25, 0x64, 0x20, 0x25, 0x64, 0x20, 0x3A, 0x20, 0x25, 0x78, 0x00, 0x00, 0x00,
    0x41, 0x52, 0x45, 0x41, 0x20, 0x25, 0x64, 0x20, 0x53, 0x54, 0x41, 0x47, 0x45, 0x20, 0x25, 0x64,
    0x00, 0x00, 0x00, 0x00, 0x50, 0x20, 0x20, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x20, 0x25, 0x64,
    0x2E, 0x25, 0x64, 0x20, 0x25, 0x64, 0x2E, 0x25, 0x64, 0x00, 0x00, 0x00, 0x50, 0x52, 0x20, 0x20,
    0x25, 0x78, 0x20, 0x25, 0x78, 0x20, 0x25, 0x78, 0x00, 0x00, 0x00, 0x00, 0xA4, 0xAD, 0xA4, 0xBF,
    0xA4, 0xE8, 0xA5, 0xD5, 0xA5, 0xA7, 0xA1, 0xBC, 0xA5, 0xC9, 0xB3, 0xAB, 0xBB, 0xCF, 0x20, 0x25,
    0x78, 0x0A, 0x00, 0x00, 0x66, 0x61, 0x64, 0x65, 0x20, 0x25, 0x78, 0x20, 0x0A, 0x00, 0x00, 0x00,
    0x20, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5F, 0x63, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x5F, 0x73, 0x74,
    0x61, 0x74, 0x75, 0x73, 0x5F, 0x77, 0x20, 0x25, 0x78, 0x20, 0x25, 0x78, 0x0A, 0x00, 0x00, 0x00,
    0x20, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5F, 0x63, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x32, 0x0A, 0x00,
    0x20, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5F, 0x63, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x33, 0x0A, 0x00,
    0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9, 0xA5, 0xB7, 0xA5, 0xA7, 0xA1, 0xBC, 0xA5, 0xAF, 0x20, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9, 0xA5, 0xB7, 0xA5, 0xA7, 0xA1, 0xBC,
    0xA5, 0xAF, 0xA4, 0xAD, 0xA4, 0xBF, 0x20, 0x73, 0x69, 0x6E, 0x20, 0x25, 0x66, 0x20, 0x74, 0x69,
    0x6D, 0x65, 0x20, 0x25, 0x64, 0x20, 0x67, 0x65, 0x6E, 0x20, 0x25, 0x66, 0x20, 0x73, 0x61, 0x69,
    0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xA5, 0xAB, 0xA5, 0xE1, 0xA5, 0xE9, 0xBD, 0xE8,
    0xCD, 0xFD, 0x32, 0x20, 0x79, 0x20, 0x25, 0x66, 0x0A, 0x00, 0x00, 0x00, 0x80, 0x12, 0xC3, 0xD4,
    0x80, 0x12, 0xC3, 0xF4, 0x80, 0x12, 0xC4, 0x04, 0x80, 0x12, 0xC3, 0xE4, 0x80, 0x12, 0xC4, 0x14,
    0x80, 0x12, 0xC4, 0x3C, 0x80, 0x12, 0xC4, 0x44, 0x80, 0x12, 0xC4, 0x28, 0x80, 0x12, 0xC4, 0x58,
    0x3F, 0x2C, 0xE5, 0x5C, 0x8E, 0xAC, 0x79, 0x00, 0x80, 0x12, 0xDA, 0xCC, 0x80, 0x12, 0xDB, 0x1C,
    0x80, 0x12, 0xDB, 0x38, 0x80, 0x12, 0xDB, 0x54, 0x80, 0x12, 0xDB, 0xC4, 0x80, 0x12, 0xDC, 0x20,
    0x80, 0x12, 0xDC, 0x64, 0x80, 0x12, 0xDC, 0x88, 0x80, 0x12, 0xDC, 0xE4, 0x80, 0x12, 0xDD, 0x6C,
    0x80, 0x12, 0xDD, 0xD4, 0x3F, 0xE6, 0x66, 0x66, 0x3F, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xD3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3F, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0xB9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x40, 0x0C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD,
    0x3F, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x80, 0x12, 0xFB, 0xF8, 0x80, 0x12, 0xFC, 0x08,
    0x80, 0x12, 0xFC, 0x58, 0x80, 0x12, 0xFC, 0xA8, 0x80, 0x12, 0xFC, 0xC0, 0x80, 0x12, 0xFC, 0xD8,
    0x80, 0x12, 0xFC, 0xF0, 0x80, 0x12, 0xFD, 0x50, 0x80, 0x12, 0xFD, 0x60, 0x80, 0x12, 0xFD, 0xA0,
    0x80, 0x12, 0xFD, 0xE0, 0x80, 0x12, 0xFD, 0xF8, 0x80, 0x12, 0xFE, 0x10, 0x80, 0x12, 0xFE, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFE, 0xDC, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFE, 0xEC, 0x80, 0x12, 0xFE, 0xF8, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x34, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x08, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x18, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFE, 0xF8, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28, 0x80, 0x12, 0xFF, 0x28,
    0x3F, 0x50, 0x62, 0x4D, 0xD2, 0xF1, 0xA9, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
