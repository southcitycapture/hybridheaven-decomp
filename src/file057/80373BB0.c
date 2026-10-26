#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801BCD08;
extern s32 func_8000511C(u16, s32);
extern s32 func_80011590(u16, void *, void *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80374260(s32, u16, u16, s32);
extern s32 func_80374994(u64 arg0);                          /* extern */
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC25[];
extern u8 D_80387C50[];
extern u8 D_80387C64[];
extern u8 D_8038B59C[];
extern u8 D_8038B604[];
extern void func_80005700(s32);
extern void func_800058DC(s32, void (*)(void));
extern void func_8000DDB0(u32, void *, u32);
extern void func_80373D14(void *, f32 *, f32 *, s16 *, s16 *);
extern void func_80374254();
extern void func_8037488C(s32);
extern void func_803748C0(s32 arg0);
extern void func_80374B74(u64 arg0);
extern void func_80374BAC();
extern void func_80374CB8(s32 arg0, s32 arg1);
extern void func_80374D3C();
extern void func_8037532C();
extern void func_803753C4();

struct func_80373BF0_Struct {
    u8 pad[4];
    s32 *unk4;
};
extern struct func_80373BF0_Struct *D_80171CEC[];


s64 func_80373BB0(u16 arg0) {
    return func_8000511C(**(u16 **)D_80171CEC[arg0], arg0);
}




s32 func_80373BF0(u16 arg0, u16 arg1) {
    return D_80171CEC[arg0]->unk4[arg1];
}


struct func_80373C24_Struct {
    u16 unk0;
    u16 unk2;
    u8 pad4[4];
    f32 unk8;
};

u16 func_80373C24(struct func_80373C24_Struct *arg0) {
    f64 one = 2.0 - 1.0;
    return (u32)((f64)((f32)(*(u16 *)(func_80373BF0(arg0->unk0, arg0->unk2) + 0x1E) & ~0x8000) * arg0->unk8) * one) - 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80373D14.s")


struct func_80373F3C_Struct {
    f32 f[7];
    s16 h;
    s16 pad;
};
struct func_80373F3C_Big {
    struct func_80373F3C_Struct a;
    f32 g[7];
    s16 h;
    s16 pad;
};
extern struct func_80373F3C_Big D_8038CC70;

struct func_80373F3C_Struct func_80373F3C(u16 *arg1) {
    u32 *p;
    u8 pad[4];
    s64 r;
    s16 sp56;
    s16 sp54;
    f32 sp50;
    f32 sp4C;
    struct func_80373F3C_Struct s;
    s32 t;
    s32 v;
    u32 addr;

    r = func_80373BB0(arg1[0]);
    p = (u32 *)func_80373BF0(arg1[0], arg1[1]);
    func_80373D14(arg1, &sp50, &sp4C, &sp56, &sp54);
    addr = r + ((u64)(*p + ((u16)sp50 << 5)) & 0xFFFFFF);
    func_8000DDB0(addr, &D_8038CC70, sizeof(D_8038CC70));
    s = *(struct func_80373F3C_Struct *)&D_8038CC70;
    if (sp4C != 0.0f) {
        s.f[0] += (D_8038CC70.g[0] - D_8038CC70.a.f[0]) * sp4C;
        s.f[1] += (D_8038CC70.g[1] - D_8038CC70.a.f[1]) * sp4C;
        s.f[2] += (D_8038CC70.g[2] - D_8038CC70.a.f[2]) * sp4C;
        s.f[3] += (D_8038CC70.g[3] - D_8038CC70.a.f[3]) * sp4C;
        s.f[4] += (D_8038CC70.g[4] - D_8038CC70.a.f[4]) * sp4C;
        s.f[5] += (D_8038CC70.g[5] - D_8038CC70.a.f[5]) * sp4C;
        s.f[6] += (D_8038CC70.g[6] - D_8038CC70.a.f[6]) * sp4C;
        t = (s16)(D_8038CC70.h - D_8038CC70.a.h);
        if (t & 0x1000) {
            v = (t & 0x1FFF) - 0x2000;
        } else {
            v = t & 0x1FFF;
        }
        s.h = (s32)((f32)s.h + (f32)v * sp4C);
    }
    if (s.h & 0x1000) {
        s.h = (s.h & 0x1FFF) - 0x2000;
    } else {
        s.h = s.h & 0x1FFF;
    }
    return s;
}



void func_80374254() {
    D_801BCD08 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374260.s")


typedef struct func_8037470C_StructCam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8037470C_StructCam;

typedef struct func_8037470C_StructCamOwner {
    u8 pad0[0x2C];
    func_8037470C_StructCam *unk2C;
} func_8037470C_StructCamOwner;

typedef struct func_8037470C_StructNew {
    u8 pad0[0x2C];
    void *unk2C;
    u16 unk30;
    u16 unk32;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    u8 pad44[0x4C - 0x44];
    s8 unk4C;
    u8 pad4D[3];
    f32 unk50;
    u8 pad54[0x5C - 0x54];
    u16 unk5C;
    u16 unk5E;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
} func_8037470C_StructNew;

typedef struct func_8037470C_StructGlobal {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0xE8 - 0xE0];
    func_8037470C_StructCamOwner *unkE8;
    u8 padEC[0x1118 - 0xEC];
    func_8037470C_StructNew *unk1118;
} func_8037470C_StructGlobal;

extern func_8037470C_StructNew *D_80005670(void *, u8 *, u8 *, void *);

void func_8037470C(void *arg0, u16 arg1, u16 arg2, f32 arg3) {
    u8 *var_a2;
    func_8037470C_StructNew *temp_v0;

    if (arg0 == ((func_8037470C_StructGlobal *)D_801BBBF0)->unkDC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    if (((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118 == NULL) {
        ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118 = temp_v0 = D_80005670((void *)((s32)arg0 * 1), D_80387C50, var_a2, arg0);
        if (temp_v0 != NULL) {
            temp_v0->unk2C = arg0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk30 = arg1;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk32 = arg2;
            if ((*(u32 *)(var_a2 + 0x30) << 9 >> 30) == 3) {
                ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk4C = 1;
            } else {
                ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk4C = 0;
            }
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk50 = arg3;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk42 = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk5C = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk5E = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk60 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk30;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk64 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk34;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk68 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk38;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk6C = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk3C;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk70 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk40;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk74 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk44;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk78 = 35.0f;
        }
    }
}


struct func_8037488C_StructInner {
    u8 pad0[0x30];
    u16 unk30;
    u16 unk32;
    u8 pad1[0x1C];
    f32 unk50;
};

struct func_8037488C_StructBase {
    u8 pad0[0xE4];
    struct func_8037488C_StructInner *unkE4;
};

struct func_8037488C_StructOut {
    u16 unk0;
    u16 unk2;
    s16 unk4;
    s16 pad6;
    f32 unk8;
};

extern struct func_8037488C_StructBase D_801BCC24;
extern struct func_8037488C_StructOut D_8038CCB0;

void func_8037488C(s32 arg0) {
    struct func_8037488C_StructInner *inner;

    inner = D_801BCC24.unkE4;
    D_8038CCB0.unk0 = inner->unk30;
    D_8038CCB0.unk2 = inner->unk32;
    D_8038CCB0.unk4 = 0;
    D_8038CCB0.unk8 = inner->unk50;
}



void func_803748C0(s32 arg0) {
    u8 *temp_a2;
    u8 *temp_v0;

    temp_a2 = *(u8 **)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x2C);
    temp_v0 = *(u8 **)(*(u8 **)(temp_a2 + 0x24) + 0x2C);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x34) = *(f32 *)(temp_v0 + 0x4);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x38) = *(f32 *)(temp_v0 + 0x8);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x3C) = *(f32 *)(temp_v0 + 0xC);
    *(s16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x40) = *(s16 *)(temp_v0 + 0x12);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x44) = func_8001EAD0(*(s16 *)(temp_v0 + 0x12));
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x48) = func_8001EB64(*(s16 *)(temp_v0 + 0x12));
    func_8037488C(arg0);
}


void func_80374960(s32 arg0, s32 arg1) {
    func_803748C0(arg0);
    func_800058DC(arg0, &func_80374B74);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374994.s")



void func_80374B74(u64 arg0) {
    if (func_80374994(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80374BAC);
    }
}



void func_80374BAC(s32 arg0, s32 arg1) {
    s32 var_a3;

    if ((*(s16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x42) != 0) || (*(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) = (u16) (*(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) + 1), (s32) *(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) >= (s32) *(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5C))) {
        if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) || (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            var_a3 = 8;
        } else {
            var_a3 = 3;
        }
        func_8011AAF4(D_8038B59C, 0x1FC, arg0, var_a3, 1, 1.0f, *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x30), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x34), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x38), 1.0f, *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x3C), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x40), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x44), 1.0f, 35.0f, 1, 0);
        func_800058DC(arg0, &func_80374CB8);
    }
}



void func_80374CB8(s32 arg0, s32 arg1) {
    func_80374254();
    func_80005700(arg0);
}



struct func_80374CE4_Struct {
    u8 pad0[0x42];
    s16 unk42;
    u8 pad44[0x18];
    u16 unk5C;
    u16 unk5E;
};

void func_80374CE4(s32 arg0, s32 arg1) {
    struct func_80374CE4_Struct *ptr;

    ptr = (struct func_80374CE4_Struct *)D_801BCC24.unkE4;
    if (ptr->unk42 == 0 && (s32)ptr->unk5E++ < (s32)ptr->unk5C) {
    } else {
        func_800058DC(arg0, func_80374D3C);
    }
}


struct func_80374D3C_StructXform {
    u8 pad[0x60];
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
};


void func_80374D3C(s32 arg0, s32 arg1) {
    struct func_80374D3C_StructXform *xf;

    xf = (struct func_80374D3C_StructXform *)D_801BCC24.unkE4;
    if (func_8011AAF4(D_8038B604, 0x214, arg0, 0, 2, 1.0f, xf->unk60, xf->unk64, xf->unk68, 1.0f, xf->unk6C, xf->unk70, xf->unk74, 1.0f, xf->unk78, 1, 0) == 0) {
        func_800058DC(arg0, func_80374BAC);
    }
}

#define D_80388098 D_80388098__func_80374DF0

extern u8 D_80388098[];

void *func_80374DF0(arg0)
    u8 arg0;
{
    u8 *p;

    for (p = D_80388098; *p != 0x57; p += 0x14) {
        if (arg0 == *p) {
            return p;
        }
    }
    return NULL;
}
#undef D_80388098


s32 func_80374E48(s32 arg0, u16 *arg1, u8 arg2) {
    u32 t = arg2;
    if (arg1 == NULL) {
        return 0;
    }
    return func_80374260(arg0, arg1[0], arg1[1], t);
}



s32 func_80374E88(s32 arg0, u16 *arg1, u8 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg1 == NULL) {
        return 0;
    }
    temp_v0 = func_80374260(arg0, arg1[0], arg1[1], 0);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v0 != 0) || (arg2 == 0)) {
        return temp_v1;
    }
    return func_80374260(arg0, arg1[0], arg1[1], 1);
}


typedef struct func_80374F04_StructObj {
    u8 pad0[0x24];
    struct func_80374F04_StructObj *unk24;
    u8 pad28[0x2C - 0x28];
    void *unk2C;
    u8 pad30[0x5C - 0x30];
    u8 *unk5C;
} func_80374F04_StructObj;

typedef struct func_80374F04_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80374F04_StructPos;

typedef struct func_80374F04_StructEnt {
    u8 unk0;
    u8 unk1;
    u8 pad2[2];
    u16 unk4;
    u8 pad6[2];
    u16 *unk8;
    u16 *unkC;
    u16 *unk10;
} func_80374F04_StructEnt;

typedef struct func_80374F04_StructCam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80374F04_StructCam;

typedef struct func_80374F04_StructCamOwner {
    u8 pad0[0x2C];
    func_80374F04_StructCam *unk2C;
} func_80374F04_StructCamOwner;

typedef struct func_80374F04_StructNew {
    u8 pad0[0x2C];
    func_80374F04_StructObj *unk2C;
    u8 pad30[4];
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    s16 unk40;
    s16 unk42;
    f32 unk44;
    f32 unk48;
    s8 unk4C;
    u8 pad4D[3];
    f32 unk50;
    func_80374F04_StructEnt *unk54;
    u16 *unk58;
    u16 unk5C;
    u16 unk5E;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
} func_80374F04_StructNew;

typedef struct func_80374F04_StructGlobal {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80374F04_StructObj *unkDC;
    u8 padE0[0xE8 - 0xE0];
    func_80374F04_StructCamOwner *unkE8;
    func_80374F04_StructObj *unkEC;
    u8 padF0[0x1118 - 0xF0];
    func_80374F04_StructNew *unk1118;
} func_80374F04_StructGlobal;

typedef struct func_80374F04_StructSide {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x374 - 0x2DA];
    s8 unk374;
} func_80374F04_StructSide;

#define G ((func_80374F04_StructGlobal *)D_801BBBF0)
#define NEW (*(func_80374F04_StructNew **)(D_801BBBF0 + 0x1118))

#define func_80374DF0 func_80374DF0__decl471
extern func_80374F04_StructEnt *func_80374DF0(u8, func_80374F04_StructObj *);
extern func_80374F04_StructNew *func_80005670(func_80374F04_StructObj *, u8 *, func_80374F04_StructPos *);

void func_80374F04(func_80374F04_StructObj *arg0, f32 arg1) {
    func_80374F04_StructObj *opp;
    s32 r;
    u8 *self;
    u8 *other;
    func_80374F04_StructSide *side;
    s32 unused;
    func_80374F04_StructPos *pos;
    func_80374F04_StructEnt *ent;
    u16 *val;
    u8 cnt;
    u8 flag;

    opp = (arg0 != G->unkDC) ? G->unkDC : G->unkEC;
    self = arg0->unk5C;
    other = opp->unk5C;
    side = (arg0 == G->unkDC) ? (func_80374F04_StructSide *)D_801BC03C : (func_80374F04_StructSide *)D_801BC3D8;
    if (G->unk1B != 0 && NEW == NULL) {
        if (side->unk2D9 < 0x25) {
            ent = func_80374DF0(0, arg0);
        } else {
            ent = func_80374DF0(side->unk2D9, arg0);
        }
        if (ent != NULL) {
            if (ent->unk1 & 1) {
                flag = 1;
            } else {
                flag = 0;
            }
            if (self[0x74] == 3 && other[0x74] == 0) {
                val = ent->unkC;
                r = func_80374E88((s32)arg0, val, flag);
                cnt = r;
                if (r == 0) {
                    return;
                }
                goto found;
            }
            val = ent->unk8;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r != 0) goto found;
            val = ent->unkC;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r != 0) goto found;
            val = ent->unk10;
            r = func_80374E88((s32)arg0, val, flag);
            cnt = r;
            if (r == 0) return;
found:
            if (r) {}
            pos = arg0->unk24->unk2C;
            NEW = func_80005670(arg0, D_80387C64, pos);
            if (NEW != NULL) {
                NEW->unk2C = arg0;
                NEW->unk34 = pos->unk4;
                NEW->unk38 = pos->unk8;
                NEW->unk3C = pos->unkC;
                NEW->unk40 = pos->unk12;
                if (side->unk2D8 == 5) {
                    NEW->unk40 += 0x1000;
                    NEW->unk40 &= 0x1FFF;
                }
                NEW->unk44 = func_8001EAD0(NEW->unk40);
                NEW->unk48 = func_8001EB64(NEW->unk40);
                NEW->unk4C = cnt - 1;
                NEW->unk50 = arg1;
                NEW->unk54 = ent;
                NEW->unk58 = val;
                NEW->unk42 = 0;
                if (ent->unk1 & 8) {
                    NEW->unk5C = (u32)((u32)ent->unk4 * (side->unk374 + 2.5));
                } else {
                    NEW->unk5C = ent->unk4;
                }
                NEW->unk5E = 0;
                NEW->unk60 = G->unkE8->unk2C->unk30;
                NEW->unk64 = G->unkE8->unk2C->unk34;
                NEW->unk68 = G->unkE8->unk2C->unk38;
                NEW->unk6C = G->unkE8->unk2C->unk3C;
                NEW->unk70 = G->unkE8->unk2C->unk40;
                NEW->unk74 = G->unkE8->unk2C->unk44;
                NEW->unk78 = 35.0f;
            }
        }
    }
}
#undef func_80374DF0


struct func_8037532C_Struct2 {
    u8 pad0[0x5C];
    u8 *unk5C;
};
struct func_8037532C_Struct {
    u8 pad0[0x2C];
    struct func_8037532C_Struct2 *unk2C;
    u16 unk30;
    u16 unk32;
    u8 pad34[0x20];
    u16 *unk54;
    u16 *unk58;
};
struct func_8037532C_StructG {
    u8 pad0[0x1118];
    struct func_8037532C_Struct *unk1118;
};

void func_8037532C(s32 arg0, s32 arg1) {
    struct func_8037532C_Struct2 *q = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk2C;
    u8 *sp20 = q->unk5C;
    u16 *a1 = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk54;
    u16 *a2 = ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk58;

    if ((s32)*(u16 *)(sp20 + 0x20) >= func_80011590(a1[1], a1, a2)) {
        ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk30 = a2[0];
        ((struct func_8037532C_StructG *)D_801BBBF0)->unk1118->unk32 = a2[1];
        func_8037488C(arg0);
        func_800058DC(arg0, func_803753C4);
    }
}


struct func_803753C4_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x4C - 0x30];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 *unk54;
    struct func_803753C4_Obj2 *unk58;
    u8 pad5C[2];
    s16 unk5E;
};
struct func_803753C4_Obj2 {
    u8 pad0[8];
    void *unk8;
};
struct func_803753C4_Bits {
    u8 pad0[0x30];
    u32 a : 9;
    u32 b : 2;
    u32 c : 21;
};
struct func_803753C4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad[0x1118 - 0xE0];
    struct func_803753C4_Obj *unk1118;
};

void func_803753C4(s32 arg0, s32 arg1, s32 arg2) {
    s32 a1;
    struct func_803753C4_Obj2 *t1;
    u8 *t2;
    struct func_803753C4_Bits *t0;
    u8 a2;
    extern s32 func_80374994();

    a1 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk2C;
    t1 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk58;
    t2 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk54;
    if (a1 == ((struct func_803753C4_G *)D_801BBBF0)->unkDC) {
        t0 = (struct func_803753C4_Bits *)D_801BC03C;
    } else {
        t0 = (struct func_803753C4_Bits *)D_801BC3D8;
    }
    if (func_80374994(arg0 * 1, a1, arg2, arg0) != 0) {
        if (t1->unk8 == NULL) {
            ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk5E = 0;
            if (t2[1] & 4) {
                func_800058DC(arg0, func_80374CE4);
                return;
            }
            func_800058DC(arg0, func_80374BAC);
            return;
        }
        a2 = ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk4C;
        if (t0->b == 3) {
            a2 = (a2 ^ 1) & 0xFF;
        }
        if (func_80374E88(a1, t1->unk8, a2) == 0) {
            ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk5E = 0;
            if (t2[1] & 4) {
                func_800058DC(arg0, func_80374CE4);
                return;
            }
            func_800058DC(arg0, func_80374BAC);
            return;
        }
        ((struct func_803753C4_G *)D_801BBBF0)->unk1118->unk58 = t1->unk8;
        func_800058DC(arg0, func_8037532C);
    }
}

