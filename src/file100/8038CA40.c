#include "common.h"


void func_801BF6C4(s32 arg0);
extern s32 func_8038D1A0(s32 arg0, s32 arg1);
extern s32 D_8038DB8C;
extern s32 D_8038DB90;
extern s32 D_8038DB94;
extern s32 D_8038E110;

void func_8038CA40(void) {
    D_8038E110 = 0;
    func_8038D1A0(D_8038DB90, D_8038DB94);
    func_801BF6C4(7);
    D_8038E110 = 1;
    D_8038DB8C = 0;
}


extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern s32 func_8038D1B0(void);
extern u8 D_8038DB80[];
extern u8 D_8038E118[];

void func_8038CA8C(void) {
    if (func_801BF968() != 0) {
        D_8038DB90 = 0;
        D_8038DB94 = 0;
        func_801BF850(D_8038DB80, 7, D_8038E118);
        func_8038D1B0();
    }
}



s32 func_8038CAE0(void) {
    return D_8038E110;
}


s32 func_8038CAEC(void) {
    return 0x1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038CAF4.s")


extern void func_801C0D04(s32 a0, s32 a1);
extern void func_8038CC28(void);
extern s32 func_8038CCC4(void);
extern s32 func_8038CD0C(void);
extern void *D_8038E128[];
extern s32 D_8038E134;
extern s32 D_8038E138;
extern f32 D_8038E13C;
extern s32 D_8038E140;

void func_8038CB60(f32 arg0, s32 arg1) {
    D_8038E134 = 0x65C816;
    D_8038E138 = 0;
    D_8038E13C = arg0;
    D_8038E128[0] = func_8038CC28;
    D_8038E128[1] = func_8038CCC4;
    D_8038E128[2] = func_8038CD0C;
    if (D_8038E13C > 0.0f) {
        func_801C0D04(7, 0x1F40);
    }
    D_8038E140 = arg1;
}


void func_8038CBF0(void) {
    ((void (*)(void))D_8038E128[D_8038E138])();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038CC28.s")


s32 func_800178E8();

s32 func_8038CCC4(void) {
    if (func_800178E8() != 0) {
        D_8038E138 = 2;
        return 0;
    }
    D_8038E138 = 1;
    return 0;
}



s32 func_8038CD0C(void) {
    D_8038E134 = 0;
    return 1;
}

extern void func_800179B0();

void func_8038CD1C(s32 arg0, struct func_800179B0_Struct *arg1) {
    func_800179B0(arg0, arg1);
}


extern s16 D_801BBF42;

void func_8038CD3C(void) {
    func_800179B0();
    D_801BBF42 = 0;
    D_8038DB8C = 1;
}



s32 func_8038CD6C(s32 arg0) {
    D_801BBF42 = arg0;
}

extern s32 D_8038DBA4;
extern s32 D_8038DBB8;
s32 func_8038CE58(void);
s32 func_8038CF10(void);

extern void *D_8038DB98[];
extern s32 D_8038DBA8;
extern s32 D_8038DBAC;
extern s32 D_8038DBB0;
extern s32 func_8038CE74(void);

void func_8038CD78(s32 *arg0) {
    D_8038DBA8 = arg0[2] / (arg0[1] - arg0[0] + 1);
    D_8038DBAC = arg0[0];
    D_8038DBB0 = arg0[1];
    D_8038DB98[0] = func_8038CE58;
    D_8038DB98[1] = func_8038CE74;
    D_8038DB98[2] = func_8038CF10;
    D_8038DBA4 = 0;
    D_8038DBB8 = 0x22222;
}


void func_8038CE20(void) {
    ((void (*)(void))D_8038DB98[D_8038DBA4])();
}


extern s32 D_8038DBB4;

s32 func_8038CE58(void) {
    D_8038DBB4 = 0;
    D_8038DBA4 = 1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038CE74.s")



s32 func_8038CF10(void) {
    D_8038DBB8 = 0;
    func_8038CD6C(0);
    return 1;
}


typedef struct func_8038CF3C_Struct {
    void (*unk0)();
    void (*unk4)();
    void (*unk8)();
} func_8038CF3C_Struct;

extern s32 func_8038CFCC(void);
extern s32 func_8038CFE8(void);
extern void func_8038D020();
extern func_8038CF3C_Struct D_8038DBBC;
extern s32 D_8038DBC8;
extern s32 D_8038DBD0;

void func_8038CF3C(s32 arg0, s32 arg1) {
    D_8038DBBC.unk0 = func_8038CFCC;
    D_8038DBBC.unk4 = func_8038CFE8;
    D_8038DBBC.unk8 = func_8038D020;
    D_8038DBC8 = 0;
    D_8038DBD0 = arg1;
    func_8038CD6C(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038CF94.s")


extern s32 D_8038DBCC;

s32 func_8038CFCC(void) {
    D_8038DBCC = 0;
    D_8038DBC8 = 1;
    return 0;
}



s32 func_8038CFE8(void) {
    if (D_8038DBD0 < D_8038DBCC) {
        D_8038DBC8 = 2;
    }
    D_8038DBCC += 1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038D020.s")

extern s32 D_8038DBE0;
extern s32 D_8038DBE4;
s32 func_8038D0DC(void);

extern void *D_8038DBD4[];
extern s32 D_8038DBE8;
extern s32 D_8038DBEC;
extern void func_8038D10C(void);
extern void func_8038D174(void);

void func_8038D044(s32 *arg0) {
    D_8038DBE4 = arg0[0];
    D_8038DBE8 = arg0[1];
    D_8038DBD4[0] = (void *)func_8038D0DC;
    D_8038DBD4[1] = (void *)func_8038D10C;
    D_8038DBD4[2] = (void *)func_8038D174;
    D_8038DBE0 = 0;
    D_8038DBEC = 0x22355;
}


void func_8038D0A4(void) {
    ((void (*)(void))D_8038DBD4[D_8038DBE0])();
}



s32 func_8038D0DC(void) {
    func_8038CD6C(D_8038DBE4);
    D_8038DBE0 = 1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038D10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038CA40/func_8038D174.s")


s32 func_8038D1A0(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_8038D1B0(void) {
    return 0x1;
}


void func_8038D1B8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D1C4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D1D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

