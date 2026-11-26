#include "common.h"


extern u8 D_80387010;

struct func_80369094_Struct *func_803677B0(arg0)
u16 arg0;
{
    u8 *ptr;

    ptr = &D_80387010;
    while (*ptr != 0x57) {
        if (arg0 == *ptr) {
            return (struct func_80369094_Struct *)ptr;
        }
        ptr += 0x14;
    }
    return (struct func_80369094_Struct *)&D_80387010;
}

#define D_801BBBF0 D_801BBBF0__func_8036780C
#define D_801BC03C D_801BC03C__func_8036780C
#define D_801BC3D8 D_801BC3D8__func_8036780C
#define D_80387254 D_80387254__func_8036780C
#define func_800058DC func_800058DC__func_8036780C
#define func_80368374 func_80368374__func_8036780C
#define func_80369094_Struct func_80369094_Struct__func_8036780C
#define func_8036920C func_8036920C__func_8036780C
#define func_80374F04 func_80374F04__func_8036780C
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;

typedef struct func_8036780C_Struct {
    u8 pad0[0x32];
    u16 bf:3;
    u16 rest:13;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
} func_8036780C_Struct;
extern void func_80374F04(s32, f32);
extern void func_80368374(s32, s32);
void func_8036920C(s32 arg0, s32 arg1);
extern u8 D_80387254;
extern u8 D_801BBBF0[];
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);

void func_8036780C(s32 arg0, s32 arg1) {
    s32 other;
    func_8036780C_Struct *v1;
    func_8036780C_Struct *v0;

    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if (arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        v1 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v1 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        v0 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v0 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    D_80387254 = 0;
    v0->bf = 0;
    v1->bf = v0->bf;
    if (v1->unk2DA != 0 || v0->unk2D8 == 0x12) {
        func_80374F04(arg0, 1.0f);
        func_800058DC(arg0, func_80368374);
        func_800058DC(other, func_80368374);
        return;
    }
    func_800058DC(arg0, func_8036920C);
    func_800058DC(other, func_8036920C);
}
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_80387254
#undef func_800058DC
#undef func_80368374
#undef func_80369094_Struct
#undef func_8036920C
#undef func_80374F04

#define D_8008DA88 D_8008DA88__func_80367914
#define D_801842A0 D_801842A0__func_80367914
#define D_801BBBF0 D_801BBBF0__func_80367914
#define D_801BC03C D_801BC03C__func_80367914
#define D_801BC3D8 D_801BC3D8__func_80367914
#define D_80387254 D_80387254__func_80367914
#define func_800058DC func_800058DC__func_80367914
#define func_80006214 func_80006214__func_80367914
#define func_8000E634 func_8000E634__func_80367914
#define func_800112B0 func_800112B0__func_80367914
#define func_803677B0 func_803677B0__func_80367914
#define func_80367C24 func_80367C24__func_80367914
#define func_80367C30 func_80367C30__func_80367914
#define func_80367C30_Struct func_80367C30_Struct__func_80367914
#define func_80368020 func_80368020__func_80367914
#define func_80369094_Struct func_80369094_Struct__func_80367914
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern u8 D_80387254;
extern void func_800058DC(s32, void *);
s32 func_80006214();
extern s32 func_8000E634(void *);
extern void func_800112B0(s32, void *);
func_80369094_Struct *func_803677B0(u8);
void func_80367C24(s32 arg0, s32 arg1);
typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;
void func_80367C30(func_80367C30_Struct *arg0, void *arg1);
void func_80368020(void *, void *);


typedef struct func_80367914_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80367914_Copy;

typedef struct func_80367914_Sub {
    u8 pad0[0x1C];
    func_80367914_Copy unk1C;
    u8 pad28[0x7C - 0x28];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
} func_80367914_Sub;

typedef struct func_80367914_Entry {
    u8 pad0[0x30];
    u8 pad30a : 7;
    u8 unk30 : 1;
    u8 pad31;
    u8 pad32a : 3;
    u8 unk32 : 1;
    u8 pad32b : 4;
    u8 pad33;
    u32 pad34;
    u32 pad38a : 3;
    u32 unk38 : 1;
    u32 pad38b : 28;
    u8 pad3C[0x2D4 - 0x3C];
    u8 *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[0x2FA - 0x2DA];
    u8 unk2FA;
} func_80367914_Entry;

typedef struct func_80367914_Record {
    u8 unk0;
    u8 pad1[0xB];
    s32 unkC;
    s32 unk10;
} func_80367914_Record;

typedef struct func_80367914_Globals {
    u8 pad0[0xDC];
    func_80367C30_Struct *unkDC;
    u8 padE0[0xC];
    func_80367C30_Struct *unkEC;
} func_80367914_Globals;

#define GL ((func_80367914_Globals *)D_801BBBF0)

extern u8 D_801842A0[];

void func_80367914(func_80367C30_Struct *arg0, s32 arg1) {
    s32 other;
    func_80367914_Entry *v1;
    func_80367914_Entry *a3;
    func_80367914_Sub *sub;
    func_80367914_Sub *otherSub;
    func_80367914_Record *rec;
    s32 t;
    func_80367914_Copy *copy;
extern void func_80011198();
extern void func_80011258();

    if (arg0 != GL->unkDC) {
        other = (s32)GL->unkDC;
    } else {
        other = (s32)GL->unkEC;
    }
    if (arg0 == GL->unkDC) {
        v1 = (func_80367914_Entry *)&D_801BC03C;
    } else {
        v1 = (func_80367914_Entry *)&D_801BC3D8;
    }
    if (arg0 != GL->unkDC) {
        a3 = (func_80367914_Entry *)&D_801BC03C;
    } else {
        a3 = (func_80367914_Entry *)&D_801BC3D8;
    }
    sub = (func_80367914_Sub *)arg0->unk5C;
    otherSub = (func_80367914_Sub *)((func_80367C30_Struct *)other)->unk5C;
    copy = &sub->unk1C;
    D_80387254 = 0;
    if (v1->unk38 == 1) {
        t = v1->unk2D9;
        if (t < 0x39 || t >= 0x3E) {
            v1->unk2D9 = 0x39;
            v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
        }
    } else {
        t = v1->unk2D9;
        if (t < 0x25 || (t >= 0x39 && t < 0x4D) || t >= 0x4F) {
            v1->unk2D9 = 0x26;
            v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
        }
    }
    rec = (func_80367914_Record *)func_803677B0(v1->unk2D9);
    if (rec->unk0 != v1->unk2D9) {
        v1->unk2D9 = rec->unk0;
        v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
    }
    v1->unk2FA = 0;
    a3->unk2FA = 0;
    func_80011198(arg1, (s32)sub);
    sub->unk7C = rec->unkC;
    v1->unk32 = 0;
    a3->unk30 = 1;
    a3->unk32 = 1;
    otherSub->unk7C = rec->unk10;
    sub->unk82 = otherSub->unk82 = 0;
    sub->unk80 = otherSub->unk80 = 2;
    switch ((u32)copy->unk0) {
    case 0x1900082:
    case 0x1900083:
    case 0x1900084:
    case 0x1900085:
    case 0x1900086:
    case 0x1900087:
    case 0x1900088:
    case 0x1900089:
    case 0x19000A2:
    case 0x19000A3:
    case 0x19000A4:
    case 0x19000A5:
        func_80011258(arg1, &copy->unk6);
        func_80006214(other);
        func_80011258(D_8008DA88, &otherSub->unk1C.unk6);
        func_80006214((s32)arg0);
        if ((s32)copy->unk4 < (func_8000E634(copy) / 2)) {
            func_800112B0(arg1, &copy->unk6);
            func_80006214(other);
            func_800112B0((s32)D_8008DA88, &otherSub->unk1C.unk6);
            func_80006214((s32)arg0);
        }
        func_800058DC((s32)arg0, func_80367C30);
        func_800058DC(other, func_80367C24);
        return;
    default:
        func_80368020(arg0, (void *)arg1);
        return;
    }
}
#undef GL
#undef D_8008DA88
#undef D_801842A0
#undef D_801BBBF0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_80387254
#undef func_800058DC
#undef func_80006214
#undef func_8000E634
#undef func_800112B0
#undef func_803677B0
#undef func_80367C24
#undef func_80367C30
#undef func_80367C30_Struct
#undef func_80368020
#undef func_80369094_Struct


void func_80367C24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;

extern u8 D_801BBBF0[];
extern u8 D_8008DA88[];

s32 func_80006214();
s32 func_80010550(void *, s32);
s32 func_802237B0();
void func_8035DD80(void *, s32);
void func_80368020(void *, void *);

void func_80367C30(func_80367C30_Struct *arg0, void *arg1) {
    func_80367C30_Struct *var_a2;
    s32 sp28;
    s32 sp24;

    if (arg0 != *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC)) {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = var_a2->unk5C;
    func_802237B0(arg0, 1, var_a2);
    func_802237B0(var_a2, 1);
    func_80006214(var_a2);
    func_80010550(D_8008DA88, sp24);
    func_80006214(arg0);
    if (func_80010550(arg1, sp28) != 0) {
        func_8035DD80(arg0, 0);
        func_80368020(arg0, arg1);
    }
}



typedef struct func_80367CE8_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_80367CE8_Struct;

void *func_80367CE8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    func_80367CE8_Struct sp;
    f32 t;

    sp.unk0 = (arg3 * arg2) + (arg4 * arg1);
    t = arg3 * arg1;
    sp.unk8 = (arg4 * arg2) - t;
    sp.unk4 = 0.0f;
    *(func_80367CE8_Struct *) arg0 = sp;
    return arg0;
}

#define D_801BC03C D_801BC03C__func_80367D58
#define D_801BC3D8 D_801BC3D8__func_80367D58
#define func_8001EAD0 func_8001EAD0__func_80367D58
#define func_8001EB64 func_8001EB64__func_80367D58
#define func_8010843C func_8010843C__func_80367D58
#define func_80367CE8 func_80367CE8__func_80367D58
#define func_80369094_Struct func_80369094_Struct__func_80367D58
#define func_80367D58 func_80367D58_decl
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
#undef func_80367D58

typedef struct func_80367D58_StructA {
    u8 pad0[0x24];
    struct func_80367D58_StructB *unk24;
} func_80367D58_StructA;
typedef struct func_80367D58_StructB {
    u8 pad0[0x2C];
    struct func_80367D58_StructC *unk2C;
} func_80367D58_StructB;
typedef struct func_80367D58_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80367D58_StructC;
typedef struct func_80367D58_StructD {
    u8 pad0[0xDC];
    func_80367D58_StructA *unkDC;
    u8 padE0[0xC];
    func_80367D58_StructA *unkEC;
} func_80367D58_StructD;
typedef struct func_80367D58_StructE {
    u8 pad0[0x38];
    u32 pad38a:3;
    u32 unk38:1;
    u32 pad38b:28;
} func_80367D58_StructE;
extern f32 func_8001EAD0(s16, s32, void *);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80367CE8(void *, f32, f32, f32, f32);

typedef struct func_80367D58_Vec {
    f32 x, y, z;
} func_80367D58_Vec;
#define HIT(s) (func_8010843C(s->unk4, s->unk8, s->unkC, s->unk4 + sp54.x, s->unk8, s->unkC + sp54.z) != 0)

u8 func_80367D58(arg0)
s32 arg0;
{
    func_80367D58_StructA *other;
    func_80367D58_StructE *sp70;
    s32 cur;
    func_80367D58_StructC *s0;
    f32 sp64;
    f32 sp60;
    func_80367D58_Vec sp54;
    func_80367D58_StructC *s1;
    u8 r;

    cur = (s32)((func_80367D58_StructD *)D_801BBBF0)->unkDC;
    if (arg0 != cur) {
        other = (func_80367D58_StructA *)cur;
    } else {
        other = ((func_80367D58_StructD *)D_801BBBF0)->unkEC;
    }
    if (arg0 == cur) {
        sp70 = (func_80367D58_StructE *)&D_801BC03C;
    } else {
        sp70 = (func_80367D58_StructE *)&D_801BC3D8;
    }
    s0 = ((func_80367D58_StructA *)arg0)->unk24->unk2C;
    s1 = other->unk24->unk2C;
    sp64 = func_8001EAD0(s0->unk12, arg0, D_801BBBF0);
    sp60 = func_8001EB64(s0->unk12);
    r = 0;
    func_80367CE8(&sp54, 0.0f, -20.0f, sp64, sp60);
    if (HIT(s0)) {
        r = 1;
    }
    func_80367CE8(&sp54, 0.0f, (f32)((r & 1) ? 40.0 : 20.0), sp64, sp60);
    if (HIT(s1)) {
        r |= 2;
    }
    if (!sp70->unk38) {
        func_80367CE8(&sp54, 20.0f, 0.0f, sp64, sp60);
        if (HIT(s0) || HIT(s1)) {
            r |= 4;
        }
        func_80367CE8(&sp54, -20.0f, 0.0f, sp64, sp60);
        if (HIT(s0) || HIT(s1)) {
            r |= 8;
        }
    } else if (r) {
        r |= 0xC;
    }
    return r;
}
#undef HIT
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80367CE8
#undef func_80369094_Struct

#define D_8013A28C D_8013A28C__func_80368020
#define D_801BC03C D_801BC03C__func_80368020
#define D_801BC3D8 D_801BC3D8__func_80368020
#define D_80387254 D_80387254__func_80368020
#define func_800058DC func_800058DC__func_80368020
#define func_80225664 func_80225664__func_80368020
#define func_80367D58 func_80367D58__func_80368020
#define func_80369094_Struct func_80369094_Struct__func_80368020
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern u8 D_80387254;
extern void func_800058DC(s32, void *);

typedef struct func_80368020_Struct {
    u8 pad0[0x30];
    u32 pad30a:9;
    u32 unk30:2;
    u32 pad30b:21;
    u8 pad34[4];
    u32 pad38a:3;
    u32 unk38:1;
    u32 pad38b:28;
} func_80368020_Struct;

typedef struct func_80368020_Tmp {
    s32 a;
    s32 b;
    s32 c;
} func_80368020_Tmp;
extern void func_80225664(func_80368020_Tmp *, s32, s32);
extern void D_8013A28C(s32, func_80368020_Tmp);
extern u8 func_80367D58(s32, func_80368020_Struct *);

void func_80368020(void *arg0, void *arg1) {
    s32 other;
    func_80368020_Struct *s;
    s32 lo;
    s32 hi;
    u8 r;
    func_80368020_Tmp tmp;

    if ((s32)arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if ((s32)arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        s = (func_80368020_Struct *)&D_801BC03C;
    } else {
        s = (func_80368020_Struct *)&D_801BC3D8;
    }
    if (++D_80387254 >= 2) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    r = func_80367D58((s32)arg0, s);
    if (r == 0 || r == 0xF) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    if ((lo = r & 2) && !(r & 1)) {
        if (s->unk38 == 1) {
            lo = 0x019000A4;
            hi = 0x019000A5;
        } else {
            lo = 0x01900084;
            hi = 0x01900085;
        }
    } else if ((r & 1) && !lo) {
        if (s->unk38 == 1) {
            lo = 0x019000A2;
            hi = 0x019000A3;
        } else {
            lo = 0x01900082;
            hi = 0x01900083;
        }
    } else if ((s->unk30 == 2 && (r & 8)) || (s->unk30 == 3 && (r & 4))) {
        lo = 0x01900088;
        hi = 0x01900089;
    } else {
        lo = 0x01900086;
        hi = 0x01900087;
    }
    func_80225664(&tmp, (s32)arg0, lo);
    D_8013A28C((s32)arg1, tmp);
    func_800058DC((s32)arg0, func_80367C30);
    func_80006214(other);
    func_80225664(&tmp, other, hi);
    D_8013A28C((s32)D_8008DA88, tmp);
    func_80006214(arg0);
    func_800058DC(other, func_80367C24);
}
#undef D_8013A28C
#undef D_801BC03C
#undef D_801BC3D8
#undef D_80387254
#undef func_800058DC
#undef func_80225664
#undef func_80367D58
#undef func_80369094_Struct


typedef struct func_80368284_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80368284_Struct;

void func_8013A334(func_80368284_Struct *, s32, s32, u16);
void func_802254F8(s32, s32, s32);
void func_802266CC(s32, u16);
void func_80371A40(s32, func_80368284_Struct);

void func_80368284(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, arg5);
    func_802254F8(arg0, 0x14, 4);
}


void func_803682FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, 0x3BB);
    func_802254F8(arg0, 0xF, 6);
}

/* hh-block asm/nonmatchings/file057/803677B0/_mrg_keep_text_func_80368374.s {"functions":["func_80368374"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/_mrg_keep_text_func_80368374.s")

#define func_803690F8 func_803690F8__func_80368E58

typedef struct func_80368E58_S16 { s32 w[4]; } func_80368E58_S16;
typedef struct func_80368E58_Struct { s32 a; s32 b; s32 c; } func_80368E58_Struct;
typedef struct func_80368E58_StructV { s32 pad0; u8 pad4[0x2C]; u32 pad30:9; u32 f:2; u32 g:2; u32 rest:19; } func_80368E58_StructV;
typedef struct func_80368E58_Obj { u8 pad[0x12]; s16 unk12; } func_80368E58_Obj;
extern func_80368E58_Struct D_80387258;
extern func_80368E58_S16 D_80387264;
extern void func_80224E00(s32, s16, s16);
extern void func_802256E4(void *, s32, s32);
extern void func_8013A28C(s32, func_80368E58_Struct);
extern void func_8036265C();
extern s32 D_801BBCCC;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);
void func_803690F8(s32 arg0, s32 arg1);

void func_80368E58(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
s16 arg2;
u8 arg3;
{
    func_80368E58_Struct *sp54;
    func_80368E58_StructV *v;
    s32 pad;
    func_80368E58_Struct sp40;
    func_80368E58_S16 sp30;
    s32 pad2;
    s16 a1;

    sp54 = (func_80368E58_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    pad = D_801BBCCC;
    if (arg0 == pad) {
        v = (func_80368E58_StructV *)&D_801BC03C;
    } else {
        v = (func_80368E58_StructV *)&D_801BC3D8;
    }
    sp40 = D_80387258;
    sp30 = D_80387264;
    if (v->f == 3) {
        a1 = -arg2;
    } else {
        a1 = arg2;
    }
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 += a1;
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 &= 0x1FFF;
    func_80224E00(arg0, a1, arg2);
    v->g = arg3;
    if (v->g == 0) {
        func_802256E4(&sp40, arg0, 0);
    } else {
        *(s32 *)&sp40 = sp30.w[v->g];
        if (v->f == 3) {
            ((u16 *)&sp40)[3] ^= 0x10;
        }
    }
    *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C) = sp40;
    func_8013A28C(arg1, *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C));
    func_80010550((void *)arg1, (s32)sp54);
    if (v->g == 0) {
        func_800058DC(arg0, func_8036265C);
        return;
    }
    v->f = 0;
    func_800058DC(arg0, func_803690F8);
}
#undef func_803690F8

#define D_801BC03C D_801BC03C__func_80369094
#define D_801BC3D8 D_801BC3D8__func_80369094
#define func_803677B0 func_803677B0__func_80369094
#define func_80368E58 func_80368E58__func_80369094

typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;

extern func_80369094_Struct D_801BC03C;
extern func_80369094_Struct D_801BC3D8;

func_80369094_Struct *func_803677B0(u8);
void func_80368E58(s32, s32, s16, s32);

void func_80369094(s32 arg0, s32 arg1) {
    func_80369094_Struct *var_v0;
    func_80369094_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    temp_v0 = func_803677B0(var_v0->unk2D9);
    func_80368E58(arg0, arg1, temp_v0->unk8, ((u32) temp_v0->unk1 >> 6) & 0xFF);
}
#undef D_801BC03C
#undef D_801BC3D8
#undef func_803677B0
#undef func_80368E58


typedef struct func_803690F8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 unk30;
    u8 pad34[0x2FA - 0x34];
    u8 unk2FA;
} func_803690F8_Struct;

extern void func_80225540();
extern void func_80365FE0(s32, s32);
extern void func_80222E84();
extern void func_8036648C();

void func_803690F8(s32 arg0, s32 arg1) {
    func_803690F8_Struct *var_v0;
    func_803690F8_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        var_v1 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v1 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    func_80225540();
    if ((var_v0->unk2 <= 0) || (((var_v0->unk30 * 2) >> 0x1E) != 0)) {
        if (((var_v0->unk30 * 2) >> 0x1E) == 0) {
            *(u8 *) &var_v0->unk30 = (u8) ((*(u8 *) &var_v0->unk30 & 0xFF9F) | 0x20);
        }
        func_800058DC(arg0, &func_80222E84);
        return;
    }
    var_v0->unk2FA = 0;
    *(u8 *) &var_v0->unk30 = (u8) (*(u8 *) &var_v0->unk30 & 0xFFFE);
    if ((var_v1->unk2 <= 0) || (((var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_800058DC(arg0, &func_8036648C);
        return;
    }
    func_80365FE0(arg0, arg1);
}


typedef struct func_8036920C_Struct {
    u8 pad0[0x1C];
    u8 unk1C[4];
    u16 unk20;
    u8 unk22[2];
} func_8036920C_Struct;
extern f64 D_8038AD60;
extern void func_801DB6B8();
extern s32 func_8000E634(void *);
extern s32 func_80011590(s32);
extern void func_800112B0(s32, void *);
extern void func_803693E4();

#define func_8036920C_Struct func_8036920C_Struct__func_8036920C

typedef struct func_8036920C_Struct {
    u8 pad0[0x1C];
    u8 unk1C[4];
    u16 unk20;
    u8 unk22[2];
} func_8036920C_Struct;

void func_8036920C(s32 arg0, s32 arg1) {
    func_8036920C_Struct *sp24;
    func_80369094_Struct *a3;
    s32 v1;
    u16 a0;

    sp24 = (func_8036920C_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        a3 = &D_801BC03C;
    } else {
        a3 = &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        v1 = (s32)&D_801BC03C;
    } else {
        v1 = (s32)&D_801BC3D8;
    }
    func_801DB6B8(arg0, arg1, 0, a3);
    if (((func_803690F8_Struct *)a3)->unk30 << 19 >> 31 == 1) {
        a0 = ((func_80369094_Struct *)v1)->unk2D9;
    } else {
        a0 = a3->unk2D9;
    }
    if (a0 == 0x3C || a0 == 0x3B || a0 == 0x3D) {
        v1 = 0;
    } else if (a0 == 0x2B) {
        v1 = func_80011590(10) & 0xFFFF;
    } else {
        v1 = (u32)((f64)(u32)func_8000E634(sp24->unk1C) * (0.15)) & 0xFFFF;
    }
    if (v1 < sp24->unk20) {
        func_800112B0(arg1, sp24->unk22);
        func_800058DC(arg0, func_803693E4);
    }
}
#undef func_8036920C_Struct

#define D_801842A0 D_801842A0__func_803693E4
#define D_801BC03C D_801BC03C__func_803693E4
#define D_801BC3D8 D_801BC3D8__func_803693E4
#define D_803677B0 D_803677B0__func_803693E4
#define D_80385650 D_80385650__func_803693E4
#define func_8013A28C func_8013A28C__func_803693E4
#define func_8022C0A0 func_8022C0A0__func_803693E4
#define func_80231CEC func_80231CEC__func_803693E4
#define func_8035DF80 func_8035DF80__func_803693E4
#define func_8035EF60 func_8035EF60__func_803693E4
#define func_80367C30_Struct func_80367C30_Struct__func_803693E4
#define func_80368374 func_80368374__func_803693E4
#define func_80368E58_Struct func_80368E58_Struct__func_803693E4
#define func_80369094_Struct func_80369094_Struct__func_803693E4
#define func_80374F04 func_80374F04__func_803693E4
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
typedef struct func_80368E58_Struct { s32 a; s32 b; s32 c; } func_80368E58_Struct;
extern void func_8013A28C(s32, func_80368E58_Struct);
typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;
extern void func_80368374(s32, s32);
extern void func_80374F04(s32, f32);


typedef struct func_803693E4_StructSub {
    u8 pad[0x1C];
    func_80368E58_Struct v;
    u8 pad2[0x7C - 0x28];
    s32 unk7C;
    u32 unk80:16, unk82:16;
} func_803693E4_StructSub;
typedef struct func_803693E4_StructG {
    u8 pad[0xDC];
    func_80367C30_Struct *unkDC;
    u8 padE0[0xC];
    func_80367C30_Struct *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
} func_803693E4_StructG;
typedef struct func_803693E4_StructSt {
    u8 pad0[0x30];
    u32 b30_0:7, b30_7:1, b30_8:1, b30_9:2, b30_11:8, b30_19:1, b30_20:12;
    u8 pad34[4];
    u32 b38_0:1, b38_1:2, b38_3:1, b38_4:28;
    u8 pad3C[0x2D4 - 0x3C];
    void *unk2D4;
    u8 unk2D8, unk2D9, unk2DA, unk2DB, pad2DC, unk2DD;
    u8 pad2DE[0x2FA - 0x2DE];
    u8 unk2FA;
} func_803693E4_StructSt;
typedef struct func_803693E4_StructRet {
    u8 pad[0xC];
    s32 unkC, unk10;
} func_803693E4_StructRet;
extern void func_8022C0A0(void);
extern void func_80231CEC(void);
extern void func_8035EF60(func_80367C30_Struct *, s32, func_803693E4_StructSub *);
extern u8 D_801842A0[];
extern func_80368E58_Struct D_80385650;
extern void func_8035DF80();
extern struct func_80369094_Struct *D_803677B0(u8);
#define G ((func_803693E4_StructG *)D_801BBBF0)

void func_803693E4(func_80367C30_Struct *arg0, s32 arg1) {
    func_80367C30_Struct *o;
    func_803693E4_StructSt *a, *b;
    func_803693E4_StructSub *sa, *sb;
    u8 c;
    func_80368E58_Struct *t;

    if (arg0 != G->unkDC) o = G->unkDC;
    else o = G->unkEC;
    if (arg0 == G->unkDC) a = (func_803693E4_StructSt *)&D_801BC03C;
    else a = (func_803693E4_StructSt *)&D_801BC3D8;
    if (arg0 != G->unkDC) b = (func_803693E4_StructSt *)&D_801BC03C;
    else b = (func_803693E4_StructSt *)&D_801BC3D8;
    sa = (func_803693E4_StructSub *)arg0->unk5C;
    sb = (func_803693E4_StructSub *)o->unk5C;
    if (func_80010550((void *)arg1, (s32)sa) != 0 && a->b30_19 == 1) {
        if (a->unk2D8 == 0x10 && a->unk2DB != 0) {
            a->b30_19 = 0;
            b->b30_19 = 1;
            G->unk1030 ^= 1;
            func_8022C0A0();
            func_80231CEC();
            a->unk2D8 = 2;
            a->unk2DD = 1;
            if (a->b38_3 == 1) {
                c = a->unk2D9;
                if (c != 0x4F) {
                    c = a->unk2D9 = 0x4F;
                    a->unk2D4 = D_801842A0 + c * 0x1C;
                }
            } else {
                c = a->unk2D9;
                if (c < 0x25 || (c >= 0x4E && c != 0x4E)) {
                    c = a->unk2D9 = 0x4E;
                    a->unk2D4 = D_801842A0 + c * 0x1C;
                }
            }
            t = (func_80368E58_Struct *)D_803677B0(c);
            a->unk2FA = 0;
            b->unk2FA = 0;
            sa->unk7C = ((func_803693E4_StructRet *)t)->unkC;
            sb->unk7C = ((func_803693E4_StructRet *)t)->unk10;
            sa->unk82 = sb->unk82 = 0;
            sa->unk80 = sb->unk80 = 2;
            func_80374F04((s32)arg0, 1.0f);
            func_800058DC((s32)arg0, func_80368374);
            func_800058DC((s32)o, func_80368374);
            return;
        }
        if (a->unk2D8 == 0x11 && a->unk2DA != 0) {
            func_8035EF60(arg0, arg1, sa);
            return;
        }
        t = &sa->v;
        *t = D_80385650;
        if (a->b30_9 == 3) ((u16 *)t)[3] ^= 0x10;
        func_8013A28C(arg1, *t);
        a->b30_7 = 0;
        a->b38_0 = 1;
        func_800058DC((s32)arg0, func_8035DF80);
        sb->v = D_80385650;
        t = &sb->v;
        if (b->b30_9 == 3) ((u16 *)t)[3] ^= 0x10;
        func_80006214(o);
        func_8013A28C((s32)D_8008DA88, *t);
        func_80006214(arg0);
        b->b30_7 = 0;
        b->b38_0 = 1;
        func_800058DC((s32)o, func_8035DF80);
    }
}
#undef G
#undef D_801842A0
#undef D_801BC03C
#undef D_801BC3D8
#undef D_803677B0
#undef D_80385650
#undef func_8013A28C
#undef func_8022C0A0
#undef func_80231CEC
#undef func_8035DF80
#undef func_8035EF60
#undef func_80367C30_Struct
#undef func_80368374
#undef func_80368E58_Struct
#undef func_80369094_Struct
#undef func_80374F04


typedef struct func_803697AC_StructTable {
    u16 values[2][3];
} func_803697AC_StructTable;

typedef struct func_803697AC_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_803697AC_StructActor;

extern void func_80020718(u16);
extern s32 func_801DFE28(void *);
extern func_803697AC_StructTable D_80387274;

#define D_80387274 D_80387274__func_803697AC
#define func_803697AC_StructActor func_803697AC_StructActor__func_803697AC
#define func_803697AC_StructTable func_803697AC_StructTable__func_803697AC


typedef struct func_803697AC_StructTable {
    u16 values[2][3];
} func_803697AC_StructTable;

typedef struct func_803697AC_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_803697AC_StructActor;
extern func_803697AC_StructTable D_80387274;

void func_803697AC(func_803697AC_StructActor *arg0, s32 arg1, u8 arg2) {
    s32 value;
    func_803697AC_StructTable table;
    u16 temp;
    u8 index;

    arg2 = (s32)arg2 % 3;
    table = D_80387274;
    index = 0;
    if (func_801DFE28(arg0) == 1) {
        index = 1;
    }
    temp = table.values[index][arg2];
    func_80020718(temp);
    value = arg0->unk36;
    if (value == 0xF6 || value == 0xF4 || value == 0xF5) {
        func_80020718(0x22E);
    }
    func_802254F8((s32)arg0, (s16)(arg2 * 10 + 5), (u8)(arg2 * 2 + 1));
}
#undef D_80387274
#undef func_803697AC_StructActor
#undef func_803697AC_StructTable

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/_pad_32.s")


/* Original readonly objects; named loads retain their original addresses. */


static const unsigned char rodata_803677B0_8038AA20[] = {
    0xC1, 0xC8, 0xA4, 0xDF, 0xB5, 0xBB, 0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3,
    0x20, 0x25, 0x64, 0x20, 0xA4, 0xAC, 0xB8, 0xAB, 0xA4, 0xC4, 0xA4, 0xAB, 0xA4, 0xEA, 0xA4, 0xDE,
    0xA4, 0xBB, 0xA4, 0xF3, 0xA1, 0xA3, 0xC2, 0xE5, 0xA4, 0xEA, 0xA4, 0xCB, 0x20, 0x57, 0x5A, 0x5F,
    0x46, 0x4C, 0x59, 0x49, 0x4E, 0x47, 0x4D, 0x41, 0x49, 0x59, 0x41, 0x20, 0xA4, 0xF2, 0xBB, 0xC8,
    0xA4, 0xA4, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0xC1, 0xC8, 0xA4, 0xDF, 0xB5, 0xBB, 0x20, 0xA4,
    0xCE, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x28, 0x25, 0x64, 0x29, 0xA4, 0xAC, 0x20, 0xC9, 0xD4, 0xC0,
    0xB5, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0xB8, 0xE5, 0xA4, 0xED, 0xC1, 0xC8, 0xA4, 0xDF, 0xA4,
    0xCE, 0xB5, 0xBB, 0xA4, 0xCB, 0xA4, 0xCA, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4,
    0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xC5, 0xAA, 0xA4, 0xCB,
    0xA5, 0xD0, 0xA5, 0xC3, 0xA5, 0xAF, 0xA5, 0xC9, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xD7, 0xA4, 0xCB,
    0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0xC1, 0xC8, 0xA4, 0xDF, 0xB5, 0xBB, 0x20, 0xA4,
    0xCE, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x28, 0x25, 0x64, 0x29, 0xA4, 0xAC, 0x20, 0xC9, 0xD4, 0xC0,
    0xB5, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0xC0, 0xB5, 0xCC, 0xCC, 0xC1, 0xC8, 0xA4, 0xDF, 0xA4,
    0xCE, 0xB5, 0xBB, 0xA4, 0xCB, 0xA4, 0xCA, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4,
    0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xC5, 0xAA, 0xA4, 0xCB,
    0xA5, 0xBF, 0xA5, 0xC3, 0xA5, 0xAF, 0xA5, 0xEB, 0xA4, 0xCB, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9,
    0x0A, 0x00, 0x00, 0x00, 0xB8, 0xE5, 0xA4, 0xCB, 0xCA, 0xC9, 0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA,
    0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00, 0xC1, 0xB0, 0xA4, 0xCB, 0xCA, 0xC9, 0xA4, 0xAC,
    0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00, 0xBA, 0xB8, 0xA4, 0xCB,
    0xCA, 0xC9, 0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00,
    0xB1, 0xA6, 0xA4, 0xCB, 0xCA, 0xC9, 0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE, 0xA4, 0xB9,
    0x0A, 0x00, 0x00, 0x00, 0xC1, 0xC8, 0xA4, 0xDF, 0xB5, 0xBB, 0x20, 0xA4, 0xCE, 0x20, 0xC8, 0xD6,
    0xB9, 0xE6, 0x28, 0x25, 0x64, 0x29, 0xA4, 0xAC, 0x20, 0xC9, 0xD4, 0xC0, 0xB5, 0xA4, 0xC7, 0xA4,
    0xB9, 0xA1, 0xA3, 0xB8, 0xE5, 0xA4, 0xED, 0xC1, 0xC8, 0xA4, 0xDF, 0xA4, 0xCE, 0xCA, 0xD6, 0xA4,
    0xB7, 0xB5, 0xBB, 0xA4, 0xCB, 0xA4, 0xCA, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xDE, 0xA4,
    0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xC5, 0xAA, 0xA4, 0xCB,
    0xC0, 0xDA, 0xA4, 0xEA, 0xCA, 0xD6, 0xA4, 0xB7, 0xA5, 0xA8, 0xA5, 0xEB, 0xA5, 0xDC, 0xA1, 0xBC,
    0xA4, 0xCB, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00, 0xC1, 0xC8, 0xA4, 0xDF,
    0xB5, 0xBB, 0x20, 0xA4, 0xCE, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x28, 0x25, 0x64, 0x29, 0xA4, 0xAC,
    0x20, 0xC9, 0xD4, 0xC0, 0xB5, 0xA4, 0xC7, 0xA4, 0xB9, 0xA1, 0xA3, 0xC0, 0xB5, 0xCC, 0xCC, 0xC1,
    0xC8, 0xA4, 0xDF, 0xA4, 0xCE, 0xB5, 0xBB, 0xA4, 0xCB, 0xA4, 0xCA, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4,
    0xA4, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xB6, 0xAF, 0xC0, 0xA9,
    0xC5, 0xAA, 0xA4, 0xCB, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xEB, 0xA5, 0xC0, 0xA1, 0xBC, 0xA5, 0xB9,
    0xA5, 0xEB, 0xA1, 0xBC, 0xA4, 0xCB, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00,
};
static const unsigned char rodata_803677B0_8038ACD0[] = {
    0x80, 0x36, 0x85, 0xF8, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x84, 0x84,
    0x80, 0x36, 0x84, 0x84, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x85, 0x5C, 0x80, 0x36, 0x85, 0xA0,
    0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x86, 0x54, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0xFC,
    0x80, 0x36, 0x84, 0xBC, 0x80, 0x36, 0x86, 0xFC, 0x80, 0x36, 0x86, 0x90, 0x00, 0x00, 0x00, 0x00,
};
/* hh-placed-function func_80367914 */
/* hh-placed-function func_8036920C */
/* hh-rodata-layout [848,[[0,0,544],[544,688,144],[688,544,144],[832,832,16]]] */
