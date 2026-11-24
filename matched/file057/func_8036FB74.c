#include "common.h"
typedef struct func_8036F898_StructA {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036F898_StructA;
extern struct func_8036F898_StructA D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
typedef struct func_8036EA80_Vec { s32 x; s32 y; s32 z; } func_8036EA80_Vec;
extern s32 func_80011140(s32, void *, func_8036EA80_Vec, s32);
extern s32 func_80224AC4(void *, s32);
void func_8036FF7C(void *arg0, s32 arg1);
void func_8037036C(void *arg0, s32 arg1);

extern s32 func_80225664(func_8036EA80_Vec *, void *, s32);

typedef struct func_8036FB74_StructSub { s32 w0; u16 w4; u16 w6; f32 w8; } func_8036FB74_StructSub;
typedef union func_8036FB74_StructAnim {
    func_8036EA80_Vec vec;
    func_8036FB74_StructSub fields;
} func_8036FB74_StructAnim;
typedef struct func_8036FB74_StructS {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x2D8 - 0x31];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2[0x32D - 0x2DA];
    u8 unk32D;
    u8 pad3[0x374 - 0x32E];
    s8 unk374;
    u8 pad4[0x392 - 0x375];
    u8 unk392;
} func_8036FB74_StructS;
typedef union func_8036FB74_StructPtr {
    func_8036FB74_StructS *opponent;
    func_8036EA80_Vec *anim;
} func_8036FB74_StructPtr;
typedef struct func_8036FB74_StructArg { u8 pad0[0x36]; u16 unk36; u8 pad1[0x5C - 0x38]; void *unk5C; } func_8036FB74_StructArg;
typedef struct func_8036FB74_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1030 - 0xE0];
    u8 unk1030;
} func_8036FB74_StructD;
typedef struct func_8036FB74_StructFlags {
    u8 pad;
    u8 flag;
    u16 result;
} func_8036FB74_StructFlags;
#define GLOBAL ((func_8036FB74_StructD *)&D_801BBBF0)
extern void func_8013A28C(s32, func_8036EA80_Vec);
extern void func_8036FEA4(void *, s32);
void func_8036FB74(arg0, arg1)
    func_8036FB74_StructArg *arg0;
    s32 arg1;
{
    void *sp44;
    func_8036FB74_StructS *s;
    func_8036FB74_StructPtr p;
    func_8036EA80_Vec sp30;
    u32 sp2C;
    u16 result;
    u8 flag;
    sp44 = arg0->unk5C;
    s = (func_8036FB74_StructS *)(arg0 == GLOBAL->unkDC ? D_801BC03C : D_801BC3D8);
    p.opponent = (func_8036FB74_StructS *)(arg0 != GLOBAL->unkDC ? D_801BC03C : D_801BC3D8);
    s->unk392 = 0;
    s->unk32D = 0;
    if (arg0->unk36 == 0x11D) {
        if (s->unk2D9 < 5) {
            flag = func_80224AC4(arg0, 0);
            sp2C = 0x019100A1;
        } else {
            flag = 0;
            sp2C = 0x019100A0;
        }
    } else {
        flag = func_80224AC4(arg0, 0);
        if (s->unk2D9 < 5) {
            if (arg0->unk36 == 0x148) {
                sp2C = 0x03200063;
            } else if (arg0->unk36 == 0xF6 || arg0->unk36 == 0xF4 || arg0->unk36 == 0xF5) {
                sp2C = 0x019100AF;
            } else {
                sp2C = 0x01910004;
            }
        } else {
            sp2C = 0x01910003;
        }
    }
    if (p.opponent->unk2D8 == 0xC && (p.opponent->unk30 & 1)) {
        if (arg0 != GLOBAL->unkDC) {
            GLOBAL->unk1030 = 0;
        } else {
            GLOBAL->unk1030 = 1;
        }
    } else {
    if (arg0 == GLOBAL->unkDC) {
        GLOBAL->unk1030 = 0;
    } else {
        GLOBAL->unk1030 = 1;
    }
    p.anim = &sp30;
    func_80225664(p.anim, arg0, sp2C);
    if (sp2C == 0x03200063) {
        result = 1;
        ((func_8036FB74_StructSub *)&sp30)->w8 = 2.0f;
        func_8013A28C(arg1, *p.anim);
    } else {
        if (s->unk374 != 0) {
            ((func_8036FB74_StructSub *)&sp30)->w6 |= 0x100;
        }
        result = (u16)func_80011140(arg1, sp44, *p.anim, 0xA);
    }
    if (result == 0) return;
    if (flag != 0) return;
    if (sp2C == 0x03200063) {
        func_800058DC(arg0, func_8036FEA4);
        return;
    }
    if (s->unk2D9 < 5) {
        func_800058DC(arg0, func_8036FF7C);
        return;
    }
    func_800058DC(arg0, func_8037036C);
    }
}
