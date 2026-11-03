#include "common.h"
#ifndef G
extern int func_80005204(unsigned short);
#endif
extern u8 D_801BBBF0[];
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
#define G ((func_801300E8_Struct *)D_801BBBF0)
s32 func_80151BC4();                                /* extern */

extern f32 func_8002FC20(f32);

typedef struct func_8012E81C_Vec { s32 w[8]; } func_8012E81C_Vec;
typedef struct func_8012E81C_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x1A];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
} func_8012E81C_Pos;
typedef struct func_8012E81C_Obj {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[4];
    func_8012E81C_Pos *unk2C;
} func_8012E81C_Obj;
typedef struct func_8012E81C_Glob {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[2];
    u16 unk30;
    u8 pad32[0xE];
    func_8012E81C_Obj *unk40;
    u8 pad44[0x9C];
    func_8012E81C_Obj *unkE0;
    u8 padE4[4];
    func_8012E81C_Obj *unkE8;
} func_8012E81C_Glob;

extern func_8012E81C_Vec D_80089474;
extern func_8012E81C_Vec D_80089494;
extern func_8012E81C_Vec D_800894D4;
extern func_8012E81C_Vec D_80176090;
extern s32 D_801760B0;
extern u8 D_8018D38C[];
extern u8 D_8018D390[];
extern u8 D_8018D394[];
extern u8 D_8018D398[];
extern u8 D_8018D3B0[];
extern u8 D_8018D3C8[];
extern u8 D_8018D3E0[];
extern u8 D_8018D3FC[];
extern u8 D_8018D410[];
extern u8 D_8018D424[];
extern u8 D_8018D43C[];
extern func_8012E81C_Vec D_801BBC4C;
extern func_8012E81C_Vec D_801BBC6C;
extern func_8012E81C_Vec D_801BBC8C;
extern func_8012E81C_Vec D_801BBCAC;
extern u16 D_801BBC1C;
extern func_8012E81C_Obj *D_801BBCD0;
extern func_8012E81C_Obj *D_801BBCD8;
extern void func_8001DFFC(s32, s32, s32, void *, ...);
extern s32 D_8001DFFC(s32, s32, s32, void *, ...);
#define SQRTF(x) func_8002FC20(x)
extern u16 func_80108280();
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern s32 func_80151BFC();
extern void func_80151DA4(void *);
extern void func_801521C8();

extern func_8012E81C_Glob B_801BBBF0[];
extern func_8012E81C_Glob func_801BBBF0[];
#undef G
#define G ((func_8012E81C_Glob *)D_801BBBF0)
#define D_801760B0 (*(s32 *)((u8 *)&D_80176090 + 0x20))
#define ABS(x) ((x) < 0.0f ? -(x) : (x))

void func_8012E81C(void) {
    func_8012E81C_Pos *p;
    s32 v;
    s16 sp66, sp64, sp62;
    s16 ang, t;
    f32 sp58, sp54;
    f32 c, b, a;
    f32 sp44;
    s16 diff;
    u16 sp40;
    f32 d, e;

    v = G->unk2C;
    G->unk30 = G->unk30 + 1;
    if (v != 0xF) {
        if (v != 5) {
            v = func_80151BC4();
            if (v != 0) {
                if (v != 1) {
                    if (v != 2) goto cdef;
                    goto c2;
                }
                goto c1;
            }
            D_801BBC8C = D_80176090;
            goto e1;
        c1:
            D_801BBC8C = D_80089474;
        e1:
            goto e2;
        c2:
            if (func_80151BFC() == 0) {
                func_80151DA4(&D_801BBC8C);
            } else {
                D_801BBC8C = D_80089474;
                func_801521C8();
            }
        e2:
            goto done;
        cdef:
            D_801BBC8C = D_80089474;
        done:
            v = D_801BBC1C;
        } else {
            *(func_8012E81C_Vec *)(D_801BBBF0 + 0x9C) = D_80089474;
            v = G->unk2C;
        }
    }
    if (v == 0xA || v == 0xB) {
        D_801BBCAC = D_80089494;
    }
    D_801BBC6C = D_800894D4;
    D_801BBC4C = D_80176090;
    if (G->unk40->unk24 == 0) {
        D_801760B0 += 1;
        return;
    }
    func_8001DFFC(8, 20, 50, D_8018D38C);
    func_8001DFFC(9, 20, 50, D_8018D390);
    func_8001DFFC(10, 20, 50, D_8018D394);

    a = D_801BBCD8->unk2C->unk30; sp44 = ABS(a);
    b = D_801BBCD8->unk2C->unk34; d = ABS(b);
    c = D_801BBCD8->unk2C->unk38; e = ABS(c);
    func_8001DFFC(2, 20, 50, D_8018D398, (s32)a, (s32)((f64)sp44 * 10.0) % 10, (s32)b, (s32)((f64)d * 10.0) % 10, (s32)c, (s32)((f64)e * 10.0) % 10);

    a = D_801BBCD8->unk2C->unk3C; sp44 = ABS(a);
    b = D_801BBCD8->unk2C->unk40; d = ABS(b);
    c = D_801BBCD8->unk2C->unk44; e = ABS(c);
    func_8001DFFC(3, 20, 60, D_8018D3B0, (s32)a, (s32)((f64)sp44 * 10.0) % 10, (s32)b, (s32)((f64)d * 10.0) % 10, (s32)c, (s32)((f64)e * 10.0) % 10);

    func_80119F9C(&sp66, &sp64);
    func_8011A0F0(&sp62);
    ang = (s16)(0x800 - B_801BBBF0->unkE0->unk2C->unk12) & 0x1FFF;
    diff = ang - sp66;
    if (diff & 0x1000) {
        t = (s16)((diff & 0x1FFF) - 0x2000);
    } else {
        t = (s16)(diff & 0x1FFF);
    }
    e = B_801BBBF0->unkE8->unk2C->unk30 - B_801BBBF0->unkE8->unk2C->unk3C;
    c = B_801BBBF0->unkE8->unk2C->unk38 - B_801BBBF0->unkE8->unk2C->unk44;
    sp58 = SQRTF(e * e + c * c);
    c = func_801BBBF0->unkE8->unk2C->unk30 - func_801BBBF0->unkE0->unk2C->unk4;
    d = func_801BBBF0->unkE8->unk2C->unk38 - func_801BBBF0->unkE0->unk2C->unkC;
    sp54 = SQRTF(c * c + d * d);
    func_8001DFFC(4, 20, 70, D_8018D3C8, sp66, sp64, ang, t);
    func_8001DFFC(5, 20, 80, D_8018D3E0, (s32)sp58, (s32)((f64)sp58 * 10.0) % 10, (s32)sp54, (s32)((f64)sp54 * 10.0) % 10);
    func_8001DFFC(6, 20, 90, D_8018D3FC, (s32)(D_801BBCD8->unk2C->unk48 * 1000.0f), (s32)(D_801BBCD8->unk2C->unk4C * 1000.0f), (s32)(D_801BBCD8->unk2C->unk50 * 1000.0f), sp62);
    sp40 = func_80108280();
    D_8001DFFC(7, 20, 100, D_8018D410, sp40 >> 8, func_80108280() & 0xFF);

    p = D_801BBCD0->unk2C;
    a = p->unk4; sp44 = ABS(a);
    b = p->unk8; d = ABS(b);
    c = p->unkC; e = ABS(c);
    D_8001DFFC(0, 20, 30, D_8018D424, (s32)a, (s32)((f64)sp44 * 10.0) % 10, (s32)b, (s32)((f64)d * 10.0) % 10, (s32)c, (s32)((f64)e * 10.0) % 10);
    func_8001DFFC(1, 20, 40, D_8018D43C, D_801BBCD0->unk2C->unk10, (s16)(D_801BBCD0->unk2C->unk12 & 0x1FFF), D_801BBCD0->unk2C->unk14);
}
