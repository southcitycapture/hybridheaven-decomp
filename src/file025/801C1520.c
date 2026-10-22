#include "common.h"

extern s32 D_801D8DB0;
extern struct func_801C157C_Struct D_801DED70[];

struct func_801C1520_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

void func_801C1520(void) {
    s32 i;
    struct func_801C1520_Struct *p;

    D_801D8DB0 = 0;
    p = (struct func_801C1520_Struct *)((u8 *)D_801DED70 - 0x180);
    for (i = 0; i < 32; i++) {
        p[i].unk0 = -1;
        p[i].unk4 = -1;
        p[i].unk8 = 0;
    }
}


struct func_801C157C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_801C1834(struct func_801C157C_Struct *, s32);
extern struct func_801C157C_Struct D_801DEBF0[];

void func_801C157C(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop_1:
    if (D_801DEBF0[i].unk0 == -1) {
        D_801DEBF0[i].unk0 = arg0;
        D_801DEBF0[i].unk4 = arg1;
        D_801DEBF0[i].unk8 = 0;
        D_801D8DB0 += 1;
    } else {
        i++;
        if (D_801DED70 != &D_801DEBF0[i]) {
            goto loop_1;
        }
    }
    func_801C1834(D_801DED70, arg1);
}


void func_801C15F0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if ((arg0 == D_801DEBF0[i].unk0) && (arg1 == D_801DEBF0[i].unk4)) {
            D_801DEBF0[i].unk0 = -1;
            D_801DEBF0[i].unk4 = -1;
            D_801DEBF0[i].unk8 = 0;
            D_801D8DB0 -= 1;
            break;
        }
    }
    {
        extern void func_801C1834();
        func_801C1834();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C166C.s")


void func_801C16B0(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop:
    if (arg0 == D_801DEBF0[i].unk0 && arg1 == D_801DEBF0[i].unk4) {
        D_801DEBF0[i].unk8 = 0;
        return;
    }
    i++;
    if (i != 32) {
        goto loop;
    }
}


s32 func_801C16F4(void) {
    s32 i;
    s32 r;

    r = 1;
    for (i = 0; i < 32; i++) {
        if (D_801DEBF0[i].unk0 != -1 && D_801DEBF0[i].unk4 != -1) {
            r &= D_801DEBF0[i].unk8;
        }
    }
    {
        extern void func_801C1834();
        func_801C1834(r);
    }
    return r;
}



s32 func_801C175C(void) {
    s32 ret;

    ret = 0;
    return (D_801D8DB0 != 0) ? 1 : ret;
}


s32 func_801C1780(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DEBF0[i].unk0 && arg1 == D_801DEBF0[i].unk4) return 1;
    }
    return 0;
}



s32 func_801C1828(void) {
    return D_801D8DB0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C1520/func_801C1834.s")

