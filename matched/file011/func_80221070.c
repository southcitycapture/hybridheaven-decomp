#include "context.h"
struct func_80221720_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
void func_80221720(struct func_80221720_Actor *arg0, s32 arg1);
extern void func_80011258();
extern void func_800113D0();
void func_80222370(s32 arg0, s32 arg1);
extern s32 func_80366B30();
extern u16 func_80011590(s32);
extern void func_80011198(s32 arg0, void *arg1);

struct func_80221070_StructR {
    u8 pad0[4];
    u16 unk4;
    u16 unk6;
    f32 unk8;
};
struct func_80221070_StructP {
    u8 pad0[0x22];
    u16 unk22;
    f32 unk24;
};
struct func_80221070_StructM {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80221070_StructA {
    u8 pad0[0x5C];
    struct func_80221070_StructP *unk5C;
};
struct func_80221070_StructB {
    u8 pad0[0x2C];
    struct func_80221070_StructM *unk2C;
};
struct func_80221070_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 3;
            u32 t : 4;
            u32 p : 2;
            u32 m : 2;
            u32 n : 2;
            u32 rest : 19;
        } f;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x391 - 0x2FA];
    u8 unk391;
    u8 unk392;
    u8 unk393;
};

extern void func_80366278();
extern u8 D_8022560C(void *);
extern void func_800112B0(s32, void *, void *, s32);
extern void func_80224E00(s32, s16);

#define BYTE(o) (*(u8 *)((u8 *)p + (o)))
#define Q ((u8 *)a + 0x22)
typedef struct {
    u8 b7 : 1;
    u8 f : 2;
    u8 rest : 5;
} func_80221070_StructB31;
#define B31 (*(func_80221070_StructB31 *)((u8 *)p + 0x31))

void func_80221070(s32 arg0, struct func_80221070_StructB **arg1) {
    struct func_80221070_StructS *p;
    struct func_80221070_StructP *a;
    struct func_80221070_StructR *v;
    struct func_80221070_StructM *m;
    u8 t;
    s16 sp34;

    if (arg0 == D_801BBBF0.unkDC) {
        p = (void *)&D_801BC03C;
    } else {
        p = (void *)&D_801BC3D8;
    }
    a = ((struct func_80221070_StructA *)arg0)->unk5C;
    v = (void *)((u8 *)a + 0x1C);
    m = (*arg1)->unk2C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (p->u30.f.t == 1 || p->unk2D8 == 0x14) {
            func_800058DC(arg0, (void *)func_80222370);
            return;
        }
        if (p->u30.f.t == 4) {
            BYTE(0x30) = BYTE(0x30) & 0xFF7F;
            BYTE(0x30) = BYTE(0x30) & 0xFE;
            BYTE(0x31) = BYTE(0x31) & 0xFF7F;
            BYTE(0x38) = BYTE(0x38) & 0xFF7F;
            BYTE(0x38) = BYTE(0x38) & 0xEF;
            BYTE(0x38) = BYTE(0x38) & 0x9F;
            p->unk2F1 = 0;
            p->unk391 = 0;
            p->unk393 = 0;
            if (p->u30.f.n != 0) {
                func_800058DC(arg0, func_80366278);
                return;
            }
            func_80366B30(arg0, (s32)arg1);
            return;
        }
        func_802237B0(arg0, 1);
        func_80011258((s32)arg1, Q);
        func_800113D0((s32)arg1, Q);
        if (p->u30.f.m == 0) {
            B31.f = p->unk2F9 + 2;
        }
        t = D_8022560C(a);
        if (t == 0) {
            func_800058DC(arg0, (void *)func_80221720);
            return;
        }
        if ((t == 0xA && !(v->unk4 < func_80011590((u32)(v->unk8 * 5.0f) & 0xFFFF)))
            || (t == 0xC && !(v->unk4 < func_80011590((u32)(v->unk8 * 8.0f) & 0xFFFF)))
            || (t == 0xB && !(v->unk4 < func_80011590((u32)(v->unk8 * 8.0f) & 0xFFFF)))) {
            if (v->unk6 & 0x10) {
                B31.f = 2;
            } else {
                B31.f = 3;
            }
        }
        if (t == 9 || t == 8 || t == 7) {
            func_800112B0((s32)arg1, Q, p, t);
        }
        if (func_80010550((s32)arg1, (s32)a) != 0) {
            sp34 = 0;
            if (t == 6) {
                sp34 = 0x1000;
                p->u30.f.m ^= 1;
            } else if (t == 4) {
                sp34 = (a->unk22 & 0x10) ? 0x800 : 0x1800;
            } else if (t == 5) {
                sp34 = (a->unk22 & 0x10) ? 0x1800 : 0x800;
            } else if (t == 0xA || t == 0xC || t == 0xB) {
                if (a->unk22 & 0x10) {
                    p->u30.f.m = 2;
                } else {
                    p->u30.f.m = 3;
                }
            } else if (t == 9 || t == 8 || t == 7) {
                if (a->unk22 & 0x10) {
                    p->u30.f.m = 3;
                } else {
                    p->u30.f.m = 2;
                }
            }
            m->unk12 = m->unk12 + sp34;
            m->unk12 = m->unk12 & 0x1FFF;
            if (sp34 != 0) {
                struct func_8021E52C_Struct sp28;
                func_802256E4(&sp28, arg0, 0);
                func_8013A28C((s32)arg1, sp28);
                func_80010550((s32)arg1, (s32)a);
            }
            func_80224E00(arg0, sp34);
            func_80011198((s32)arg1, a);
            func_800058DC(arg0, (void *)func_80221720);
        }
    }
}
