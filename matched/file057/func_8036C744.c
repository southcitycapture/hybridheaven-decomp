#include "context.h"

typedef struct func_8036C744_Rec { u8 pad0[1]; u8 unk1; u8 pad2[6]; u16 unk8; u8 padA[6]; s32 unk10; } func_8036C744_Rec;
typedef struct func_8036C744_Link { u8 pad0[8]; s32 unk8; } func_8036C744_Link;
typedef struct func_8036C744_Tgt { u8 pad0[0x7C]; func_8036C744_Link *unk7C; s16 unk80; u16 unk82; } func_8036C744_Tgt;
typedef struct func_8036C744_Sub { u8 pad0[0x12]; u16 unk12; } func_8036C744_Sub;
typedef struct func_8036C744_Struct { u8 pad0[0x5C]; func_8036C744_Tgt *unk5C; } func_8036C744_Struct;
typedef struct func_8036C744_St {
    u8 pad0[0x2D4];
    func_8036C744_Sub *unk2D4;
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[2];
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x314 - 0x2F0];
    u8 unk314[4];
} func_8036C744_St;
extern void func_8036BA40(void *, void *);
extern func_8036C744_Rec *func_8036BF98();
extern void func_803605E4(s32, void *, u8);
extern void func_8036CC5C();
extern void func_8036D938();
typedef struct func_8036C744_Bits {
    u8 pad0[0x31];
    u8 b7 : 1;
    u8 b65 : 2;
    u8 rest : 5;
} func_8036C744_Bits;

void func_8036C744(struct func_80369C7C_Obj1 *arg0, s32 arg1) {
    struct func_80369C7C_Obj1 *sp34;
    func_8036C744_Tgt *t0;
    func_8036C744_St *s0;
    func_8036C744_St *a3;
    struct func_80369C7C_Obj3 *sp24;
    func_8036C744_Rec *rec;
    s32 v;

    if (arg0 != D_801BBBF0.unkDC) {
        sp34 = D_801BBBF0.unkDC;
    } else {
        sp34 = D_801BBBF0.unkEC;
    }
    t0 = ((func_8036C744_Struct *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        s0 = (func_8036C744_St *)D_801BC03C;
    } else {
        s0 = (func_8036C744_St *)D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        a3 = (func_8036C744_St *)D_801BC03C;
    } else {
        a3 = (func_8036C744_St *)D_801BC3D8;
    }
    sp24 = sp34->unk24->unk2C;
    if (func_80224AC4(arg0, 0) == 0) {
        if (func_80369CF4(arg0, sp24->unk12) != 0) {
            ((func_8036C744_Bits *)a3)->b65 = 3;
        } else {
            ((func_8036C744_Bits *)a3)->b65 = 2;
        }
        if (a3->unk2D8 == 0xF && a3->unk2DB != 0) {
            s0->unk2DA = 0;
            a3->unk2DB = 1;
            func_80006214(sp34);
            func_8036BA40(sp34, D_8008DA88);
            func_80006214(arg0);
            func_800058DC((s32)arg0, func_8036B14C);
            return;
        }
        rec = func_8036BF98(s0);
        func_803605E4(arg1, s0, rec->unk1);
        t0->unk7C = (func_8036C744_Link *)rec->unk10;
        t0->unk80 = rec->unk8 != 0 ? 3 : 2;
        t0->unk82 = rec->unk8;
        t0->unk7C->unk8 = (s32)t0->unk7C;
        func_8036C054((s32)s0->unk314, (s32)arg0, arg1);
        func_8013AE20((s32)arg0, arg1, 0);
        s0->unk2DE = 0;
        s0->unk2EC = (f32)(u32)s0->unk2D4->unk12 / 100.0;
        if (s0->unk2EC <= 0.0f) {
            s0->unk2EC = 1.0f;
        }
        func_800058DC((s32)arg0, func_8036CC5C);
        if ((a3->unk2D8 == 0xE || a3->unk2D8 == 0xE) && a3->unk2DB != 0) {
            if (func_8036AA8C(sp34) != 0) {
                if (func_8036AB2C(sp34) != 0) {
                    s0->unk2DA = 0;
                    a3->unk2DB = 1;
                    func_80006214(sp34);
                    func_8036D938(sp34, D_8008DA88);
                    func_80006214(arg0);
                    return;
                }
            }
        }
        s0->unk2DA = 1;
        a3->unk2DB = 0;
        func_800058DC((s32)sp34, func_8036B0D4);
    }
}
