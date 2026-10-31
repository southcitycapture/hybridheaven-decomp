#include "common.h"
extern u8 D_8008DA88[];
typedef struct func_8036BF98_Entry {
    u8 pad[0x1C];
} func_8036BF98_Entry;
extern func_8036BF98_Entry D_801842A0[];
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
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_80006214(void *);
typedef struct func_8036D9F8_Struct3 { s32 w[3]; } func_8036D9F8_Struct3;
extern s32 func_80011140(s32, s32, func_8036D9F8_Struct3, s32);
extern void func_80011198(s32, s32);
typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
extern func_8036B7EC_Struct *func_803698D0(void *);
void func_8036A874(s32 arg0, s32 arg1);
void func_8036AFBC(s32 arg0, s32 arg1);


typedef struct func_80369994_StructR { u8 pad0[0x18]; s32 unk18; s32 unk1C; } func_80369994_StructR;
typedef struct func_80369994_StructP { u8 pad0[0x7C]; s32 unk7C; u16 unk80; u16 unk82; } func_80369994_StructP;
typedef struct func_80369994_StructS { u8 pad0[0x24]; struct func_80369C7C_Obj2 *unk24; u8 pad1[0x5C - 0x28]; func_80369994_StructP *unk5C; } func_80369994_StructS;
typedef struct func_80369994_StructD {
    u8 pad0[0x30];
    u32 unk30_hi : 7;
    u32 unk30_b24 : 1;
    u32 unk30_hi2 : 3;
    u32 unk30_f : 2;
    u32 unk30_m : 3;
    u32 unk32_e0 : 3;
    u32 unk32_b12 : 1;
    u32 unk30_lo : 12;
    u8 pad34[0x2D4 - 0x34];
    func_8036BF98_Entry *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2FA - 0x2DA];
    u8 unk2FA;
    u8 pad2FB[0x374 - 0x2FB];
    u8 unk374;
} func_80369994_StructD;

extern func_8036D9F8_Struct3 D_802256E4(s32, s32, s32);

void func_80369994(func_80369994_StructS *arg0, s32 arg1) {
    func_80369994_StructS *t1;
    func_80369994_StructD *a2;
    func_80369994_StructD *a3;
    func_80369994_StructP *p2;
    func_80369994_StructP *p1;
    s16 v0;
    s16 v1;
    func_8036D9F8_Struct3 anim;
    s16 ang;
    func_8036B7EC_Struct *r;

    if (arg0 != (func_80369994_StructS *)D_801BBBF0.unkDC) {
        t1 = (func_80369994_StructS *)D_801BBBF0.unkDC;
    } else {
        t1 = (func_80369994_StructS *)D_801BBBF0.unkEC;
    }
    if (arg0 == (func_80369994_StructS *)D_801BBBF0.unkDC) {
        a2 = (func_80369994_StructD *)D_801BC03C;
    } else {
        a2 = (func_80369994_StructD *)D_801BC3D8;
    }
    if (arg0 != (func_80369994_StructS *)D_801BBBF0.unkDC) {
        a3 = (func_80369994_StructD *)D_801BC03C;
    } else {
        a3 = (func_80369994_StructD *)D_801BC3D8;
    }
    p2 = arg0->unk5C;
    p1 = t1->unk5C;
    if (t1 != (func_80369994_StructS *)D_801BBBF0.unkDC) {
        ang = 0;
    } else {
        ang = 0x1000;
    }
    v0 = ang + D_801BBBF0.unkB98;
    v0 = v0 & 0x1FFF;
    v1 = v0 - t1->unk24->unk2C->unk12;
    if (v1 & 0x1000) {
        ang = (v1 & 0x1FFF) - 0x2000;
    } else {
        ang = v1 & 0x1FFF;
    }
    a2->unk32_e0 = 0;
    a2->unk2FA = a3->unk2FA = 0;
    if (a3->unk30_f == 1) {
        if (a2->unk2D8 != 5 && a2->unk2D8 != 4) {
            if (ang < 0x800) {
                a2->unk2D8 = 4;
                a2->unk2D9 = 0x42;
            } else {
                a2->unk2D8 = 5;
                a2->unk2D9 = 0x4A;
            }
            a2->unk374 = 0;
            a2->unk2D4 = &D_801842A0[a2->unk2D9];
        }
    } else {
        if (a2->unk2D8 != 7 && a2->unk2D8 != 6) {
            if (ang > 0x800) {
                a2->unk2D8 = 6;
                a2->unk2D9 = 0x44;
            } else {
                a2->unk2D8 = 7;
                a2->unk2D9 = 0x47;
            }
            a2->unk374 = 0;
            a2->unk2D4 = &D_801842A0[a2->unk2D9];
        }
    }
    func_80011198(arg1, (s32)p2);
    a2->unk32_b12 = 0;
    a3->unk30_b24 = 1;
    a3->unk32_b12 = 1;
    r = func_803698D0(a2);
    p2->unk7C = ((func_80369994_StructR *)r)->unk18;
    p1->unk7C = ((func_80369994_StructR *)r)->unk1C;
    p2->unk82 = p1->unk82 = 10;
    p2->unk80 = p1->unk80 = 3;
    anim = D_802256E4((s32)arg0, 0, (s32)p2);
    func_80011140(arg1, (s32)p2, anim, 1);
    func_800058DC((s32)arg0, func_8036A874);
    func_80006214(t1);
    func_80011198((s32)D_8008DA88, (s32)p1);
    func_80006214(arg0);
    func_800058DC((s32)t1, func_8036AFBC);
}
