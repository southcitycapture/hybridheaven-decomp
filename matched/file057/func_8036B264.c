#include "common.h"
#define HHAnim_191 AnimTag191
#define HHAnim_196 func_8036D30C_Anim
#define AnimL_926 func_8036D30C_Anim
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
extern u8 D_8038CC62;
extern void func_800058DC(s32, void *);                    /* extern */
extern s32 func_80011590(u16);
typedef struct func_8036BBBC_Tgt {
    u8 pad0[0x1C];
    void *unk1C;
    u16 unk20;
    u8 pad22[0x80 - 0x22];
    u16 unk80;
} func_8036BBBC_Tgt;
typedef struct func_8036BBBC_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_8036BBBC_Vec;
extern void func_8013A334(func_8036BBBC_Vec *, s32, func_8036BBBC_Tgt *, u8);
extern s32 func_801DB6B8(s32, s32, s32);
extern void func_802237B0(void *, s32);
extern void func_802264D0(s32, s32);
extern void func_8036265C(s32, s32);
typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
func_8036B7EC_Struct *func_803698D0(u8 *arg0);
typedef struct func_8036B158_Struct { u8 pad[0x5C]; s32 unk5C; } func_8036B158_Struct;
void func_8036B158(func_8036B158_Struct *arg0, s32 arg1);
void func_8036B7EC(s32 arg0, s32 arg1);
typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;
typedef struct func_8036D9F8_Struct3 { s32 w[3]; } func_8036D9F8_Struct3;

extern s32 D_802254F8(void *, s32, s32);

typedef struct func_8036B264_Link {
    s32 unk0;
    u8 pad4[4];
    struct func_8036B264_Link *unk8;
} func_8036B264_Link;

typedef struct func_8036B264_Sub {
    u8 pad0[8];
    func_8036B264_Link *unk8;
} func_8036B264_Sub;

typedef struct func_8036B264_Info {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    s16 unkA;
    u8 padC[0x18 - 0xC];
    func_8036B264_Sub *unk18;
    func_8036B264_Sub *unk1C;
} func_8036B264_Info;

typedef struct func_8036B264_Tgt {
    u8 pad0[0x1C];
    s32 unk1C;
    u16 unk20;
    u8 unk22[0x80 - 0x22];
    u16 unk80;
} func_8036B264_Tgt;

typedef struct func_8036B264_Arg {
    u8 pad0[0x5C];
    func_8036B264_Tgt *unk5C;
} func_8036B264_Arg;

typedef struct func_8036B264_State {
    u8 pad0[0x30];
    u32 p0 : 1;
    u32 b1 : 2;
    u32 p3 : 6;
    u32 b9 : 2;
    u32 p11 : 5;
    u32 b16 : 3;
    u32 b19 : 1;
    u32 p20 : 12;
    u8 pad34[4];
    u32 b38_7 : 1;
    u32 b38_65 : 2;
    u32 b38_4 : 1;
    u32 b38_pad : 4;
    u32 rest38 : 24;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
    u8 pad2DB[0x2FA - 0x2DB];
    u8 unk2FA;
    u8 pad2FB[0x374 - 0x2FB];
    u8 unk374;
} func_8036B264_State;
extern void func_80371A40(void *, func_8036D9F8_Struct3);
extern void func_8013B808(void *, s32, s32);
extern void func_803697AC(void *, s32, s32);
extern void func_800112B0(s32, void *);
extern u8 D_8017BC58[];
extern u16 D_80011590(u16);
#define func_80011590 D_80011590
extern void func_8036B6D4();

void func_8036B264(func_8036B264_Arg *arg0, s32 arg1) {
    s32 sp54;
    func_8036B264_Tgt *sp50;
    s32 v1;
    func_8036B264_State *other;
    func_8036B264_Info *t0;
    func_8036B264_Link *a1;
    func_8036D9F8_Struct3 sp34;
    func_8036B264_State *s0;
    func_8036B264_Link *a1b;
    u8 a3;

    if ((void *)arg0 != D_801BBBF0.unkDC) {
        sp54 = (s32)D_801BBBF0.unkDC;
    } else {
        sp54 = (s32)D_801BBBF0.unkEC;
    }
    sp50 = arg0->unk5C;
    if ((void *)arg0 == D_801BBBF0.unkDC) {
        s0 = (func_8036B264_State *)D_801BC03C;
    } else {
        s0 = (func_8036B264_State *)D_801BC3D8;
    }
    if ((void *)arg0 != D_801BBBF0.unkDC) {
        other = (func_8036B264_State *)D_801BC03C;
    } else {
        other = (func_8036B264_State *)D_801BC3D8;
    }
    func_802237B0(arg0, 1);
    if (s0->b19 == 1) {
        t0 = (func_8036B264_Info *)func_803698D0(other);
        if (sp50->unk80 == 0) {
            a1 = t0->unk1C->unk8;
            if ((sp50->unk1C == a1->unk0 && func_80011590(t0->unk4) == sp50->unk20) ||
                (sp50->unk1C == a1->unk8->unk0 &&func_80011590(t0->unk6) == sp50->unk20)) {
                s0->unk2FA = 1;
                a3 = ((u32)t0->unk2 >> 11) & 0xFF;
                if (s0->b9 == 3) {
                    a3 = D_8017BC58[a3];
                }
                func_8013A334((func_8036BBBC_Vec *)&sp34, arg1, (func_8036BBBC_Tgt *)sp50, a3);
                func_80371A40(arg0, sp34);
                if (!(t0->unk0 & 1)) {
                    func_802264D0(sp54, 0x3BB);
                } else {
                    func_802264D0(sp54, 0x3BC);
                }
                D_802254F8(arg0, 10, 6);
                if (D_8038CC62 != 0) {
                    func_8013B808(arg0, arg1, (s0->b1 != 0 || D_8038CC62 >= 2) ? 5 : 2);
                }
                func_8036B158((func_8036B158_Struct *)arg0, arg1);
            } else if (sp50->unk1C == a1->unk8->unk0 && sp50->unk20 == func_80011590(t0->unk8)) {
                func_803697AC(arg0, arg1, 0);
            }
        }
    }
    if (func_801DB6B8((s32)arg0, arg1, 0) != 0) {
        func_802237B0(arg0, 0);
        s0->b38_65 = 0;
        s0->b38_7 = 0;
        s0->b38_4 = 0;
        s0->b16 = 0;
        s0->unk374 = 0;
        if (s0->b19 == 1) {
            func_800058DC((s32)arg0, func_8036B7EC);
            return;
        }
        t0 = (func_8036B264_Info *)func_803698D0(s0);
        if (s0->b9 == 3) {
            v1 = -t0->unkA;
        } else {
            v1 = t0->unkA;
        }
        (*(struct func_80369C7C_Obj2 **)arg1)->unk2C->unk12 += v1;
        (*(struct func_80369C7C_Obj2 **)arg1)->unk2C->unk12 &= 0x1FFF;
        func_800058DC((s32)arg0, func_8036265C);
        return;
    }
    if (!s0->b19) {
        t0 = (func_8036B264_Info *)func_803698D0(s0);
        a1b = t0->unk18->unk8;
        if (s0->unk2D8 == 5 && sp50->unk1C == a1b->unk0 && sp50->unk20 == func_80011590(1) && sp50->unk80 == 0) {
            (*(struct func_80369C7C_Obj2 **)arg1)->unk2C->unk12 += 0x1000;
        }
        if (s0->unk2DA == 0) {
            if (s0->unk2D8 != 5) {
                a1b = (func_8036B264_Link *)t0->unk18;
            }
            if (sp50->unk1C == a1b->unk0 && func_80011590(10) < sp50->unk20) {
                func_800112B0(arg1, sp50->unk22);
                func_800058DC((s32)arg0, func_8036B6D4);
            }
        }
    }
}
