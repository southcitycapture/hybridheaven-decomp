#include "common.h"
extern u8 D_80181ABC[];
extern u8 D_80181ABD[];
extern s32 D_80181D5C;
extern s32 D_80181D60;
extern u8 D_801BBBF0[];
typedef struct func_80148DDC_S { u8 pad[0x5C]; s32 unk5C; } func_80148DDC_S;
extern func_80148DDC_S *D_801BBCCC;
extern s8 D_801BCC25;
typedef struct func_80148074_Struct {
    u8 pad0[0x10];
    struct func_80148074_Struct *unk10;
} func_80148074_Struct;
extern func_80148074_Struct *D_801BED18;
extern void func_800058DC(void *, void *);
extern void func_80006088(s32);
extern void func_80020744();
extern s32 func_80126944(void);
extern u8 func_8013D4A0(u8, s32);
extern void func_801471DC(s32);
void func_80147D60(u8 arg0);
void func_80147DCC(u8 arg0);
s32 func_80148124(s32 arg0, s32 arg1);
typedef struct func_80148270_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
} func_80148270_Struct;
s32 func_80148270(func_80148270_Struct *arg0);
typedef struct func_80148500_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[6];
    void *unk98;
    u8 pad9C[4];
    s16 unkA0;
} func_80148500_Struct;
void func_80148500(func_80148500_Struct *arg0);
struct func_801486A8_Obj {
    u8 pad0[0xA0];
    s16 unkA0;
};
void func_801486A8(struct func_801486A8_Obj *arg0, s16 arg1);
typedef struct func_80148820_StructC {
    u8 pad[0x33];
    s8 f : 1;
} func_80148820_StructC;
typedef struct func_80148820_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad2[6];
    func_80148820_StructC *unk98;
    s32 unk9C;
} func_80148820_Struct;
s32 func_80148820(func_80148820_Struct *arg0);
extern void func_80148958();
void func_80148B2C(s8 arg0, s8 arg1);
void func_80148B6C(void);
typedef struct func_80148CB0_StructInner {
    u8 pad[4];
    u16 unk4;
} func_80148CB0_StructInner;
typedef struct func_80148CB0_Struct {
    u8 pad[0x91];
    s8 unk91;
    u8 unk92;
    s8 unk93;
    u8 pad94[0x10];
    func_80148CB0_StructInner *unkA4;
} func_80148CB0_Struct;
s32 func_80148CB0(func_80148CB0_Struct *arg0, s32 arg1);
typedef struct func_80148D84_Struct {
    u8 pad[0x95];
    s8 unk95;
    s8 unk96;
} func_80148D84_Struct;
void func_80148D84(func_80148D84_Struct *arg0);
void func_80148E44(s32 arg0);
typedef struct func_80148FC4_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_80148FC4_Struct;
void func_80148FC4(func_80148FC4_Struct *arg0, s32 arg1, u8 arg2, u8 arg3);
void func_80149370(void);
void func_801498CC(func_80148270_Struct *arg0, func_80148074_Struct **arg1);
void func_8014A67C(func_80148270_Struct *arg0, s32 arg1);
void func_8014AB48(s32 arg0, s32 arg1);
extern void func_801FBB20();
extern void func_80236C60(void);

#undef func_8014A234

typedef struct func_8014A234_StructInner {
    u8 pad[0xAA];
    s8 unkAA;
    s8 unkAB;
} func_8014A234_StructInner;
typedef struct func_8014A234_StructInput {
    u8 pad[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_8014A234_StructInput;
typedef struct func_8014A234_StructRecord {
    u8 mask;
    u8 kind;
    u8 pad[4];
} func_8014A234_StructRecord;
typedef struct func_8014A234_Struct {
    u8 pad[0xC];
    func_8014A234_StructInner *unkC;
    u8 pad10[0x80];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93[2];
    s8 unk95;
    s8 unk96;
    u8 pad97;
    u8 *unk98;
    u8 pad9C[8];
    func_8014A234_StructInput *unkA4;
} func_8014A234_Struct;
extern void func_8001F75C(void *);
extern void func_80232128(void *);
extern void func_8013D520(u8, s32, s32);
extern void func_80387A20(void *, u8);
extern u16 D_801BCAE0;

void func_8014A234(func_8014A234_Struct *arg0, s32 arg1) {
    func_8014A234_StructInput *sp2C;
    u8 *sp28;
    u16 temp_v0;
    s8 var_a2;
    s8 var_a3;
    volatile u8 sp23;
    u16 m;

    sp2C = arg0->unkA4;
    sp28 = arg0->unk98;
    temp_v0 = sp2C->unkC;
    var_a2 = 0;
    var_a3 = 0;
    if (temp_v0 & 0x800) var_a3 = -1;
    else if (temp_v0 & 0x400) var_a3 = 1;
    else if (temp_v0 & 0x200) var_a2 = -1;
    else if (temp_v0 & 0x100) var_a2 = 1;
    func_80149370();
    func_80148B6C();
    func_801486A8((void *)arg0, 0x80);
    if (var_a2 || var_a3) {
        func_80020744(0x300);
        arg0->unk95 += var_a2;
        arg0->unk96 += var_a3;
        func_80148D84((void *)arg0);
        func_80148B2C(arg0->unk95, arg0->unk96);
        arg0->unk90 = func_80148124((u8)arg0->unk95, (u8)arg0->unk96);
        func_80006088(D_80181D5C);
        func_80006088(D_80181D60);
        func_80148500((void *)arg0);
        func_80148958(arg0);
        return;
    }
    if (func_80148CB0((void *)arg0, arg1)) {
        arg0->unk90 = func_80148124((u8)arg0->unk95, (u8)arg0->unk96);
        func_80148500((void *)arg0);
        func_80148958(arg0);
        return;
    }
    temp_v0 = sp2C->unk4;
    if (temp_v0 & 0x4000) {
        func_80147DCC(2);
        if (func_80126944() == 0) {
            func_801471DC((s32)D_801BED18);
            func_80148FC4((void *)arg0, (s32)func_801498CC, 2, 0);
            return;
        }
        if (func_80126944() == 1) {
            func_80236C60();
            func_80148E44((s32)arg0);
            func_801FBB20();
            func_80148FC4((void *)arg0, (s32)func_8014AB48, 2, 0);
        }
    } else {
        if ((temp_v0 & 0x1000) && (func_80126944() == 0)) {
            func_80148E44((s32)arg0);
            func_80148FC4((void *)arg0, (s32)func_8014AB48, 2, 1);
            return;
        }
        m = sp2C->unk4;
        if (sp28 == D_801BBBF0 + 0x44C) sp23 = 0;
        else sp23 = 1;
        if (m & 0x8000) {
            s32 k;
            func_8014A234_StructRecord *p;
            k = sp23;
            p = (func_8014A234_StructRecord *)&D_80181ABC[arg0->unk91 * 0x78 + arg0->unk90 * 6];
            if ((arg0->unk92 & p->mask) && func_8013D4A0(p->kind, k) && func_80148270((void *)arg0) && func_80148820((void *)arg0)) {
                func_8001F75C(D_801BBCCC);
                sp28[0x2D9] = D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6];
                func_80232128(sp28);
                func_8013D520(D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6], -1, sp23);
                if (func_80126944() == 0) {
                    func_80387A20(D_801BBCCC, D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6]);
                } else if (func_80126944() == 1) {
                    arg0->unkC->unkAB = 1;
                    arg0->unkC->unkAA = arg0->unk91;
                    D_801BCAE0 = *(u16 *)(D_801BBBF0 + 0xEF0) & 0xFFEF;
                }
                func_80147D60(0x1C);
                D_801BCC25 = 2;
                func_801FBB20();
                func_80020744(4);
                func_80020744(0x104);
                func_800058DC(arg0, func_8014A67C);
            }
        }
    }
}
