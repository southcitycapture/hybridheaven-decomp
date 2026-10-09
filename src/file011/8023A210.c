#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A234.s")


struct func_8023A2BC_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B[0x6A - 0x1B];
    u8 unk6A;
    u8 unk6B;
};

s32 func_80236C9C();
extern u8 D_801BCC20;
extern struct func_8023A2BC_Struct D_80240880;
extern s16 D_80240894;

void func_8023A2BC(void) {
    if (D_801BCC20 == 0) {
        D_80240880.unk10 = 0x1A;
        D_80240880.unk12 = 0x34;
        D_80240894 = D_80240880.unk10 + 0x64;
        D_80240880.unk16 = 0x47;
        if (func_80236C9C() != 0) {
            D_80240880.unk14 = 0xC8;
            D_80240880.unk16 = 0xC3;
        }
        D_80240880.unk1A = 0;
        D_80240880.unk18 = 3;
        D_80240880.unk19 = 4;
    } else {
        D_80240880.unk10 = 0x105;
        D_80240880.unk12 = 0xA3;
        D_80240894 = D_80240880.unk10 - 0x4B;
        D_80240880.unk16 = 0xAA;
        D_80240880.unk1A = 1;
        D_80240880.unk18 = 0xD;
        D_80240880.unk19 = 0x20;
    }
    D_80240880.unk6A = 0xFF;
    D_80240880.unk6B = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A3C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A4EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A51C.s")


s32 func_8023A51C(s32, u8);
extern u8 D_8024089E;

s32 func_8023A5A4(s32 a) {
    if (func_8023A51C(a, D_8024089E) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023A9D8.s")


s32 func_80146178(s32 a0, u8 *buf, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6, s32 s7, s32 s8, s32 s9, s32 s10);

void func_8023AB40(s32 a0) {
    u8 buf[4];

    func_80146178(a0, &buf[3],0x3A, 0x4D, 0xCC, 0x54, 2, 0, 0, 0, 0x66);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AC94.s")


extern s32 func_801453CC(s32, s32, s32, u8, s32, s32, s32);

void func_8023AD74(void) {
    if (*(s32 *) &D_80240880 != 0) {
        func_801453CC(*(s32 *) &D_80240880, 0x100, 4, D_80240880.unk19, (s32) D_80240880.unk18, 0, 0);
    }
}


extern u8 D_802408A0;

struct func_8023ADBC_Sub {
    u16 unk0;
    u16 unk2;
    u16 unk4;
};

struct func_8023ADBC_Struct {
    u8 pad0[0x94];
    struct func_8023ADBC_Sub *unk94;
};

s32 func_8023ADBC(void *arg0) {
    struct func_8023ADBC_Sub *v0;
    s32 v1 = 0;
    s32 a0;
    s32 a1;

    v0 = ((struct func_8023ADBC_Struct *)arg0)->unk94;
    a1 = v0->unk4;
    if (a1 & 8) {
        v1 = 1;
    }
    if (a1 & 1) {
        v1 = 2;
    }
    a0 = a1 & 2;
    if (a1 & 4) {
        v1 = 3;
    }
    if (a0) {
        v1 = 4;
    }
    if (D_802408A0 == 4 && a0 && (v0->unk2 & 0x2000)) {
        v1 = 5;
    }
    return v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B3CC.s")



s32 func_8023B4FC(u8 arg0) {
    u8 val;
    s32 ret;

    val = D_802408A0;
    ret = val;
    if (val == 0 && arg0 == 3) {
        return 4;
    }
    if (ret == 3 || ret == 4) {
        return 5;
    }
    val++;
    return val;
}



s32 func_8023B550(void) {
    u8 v;

    v = D_802408A0;
    if (v == 4) {
        return 0;
    }
    v--;
    return v;
}


s32 func_8023B57C(u8 arg0) {
    if (*((u8 **)&D_802408A0)[arg0] == 0) {
        return 0;
    }
    return 1;
}


void func_8023B5B4(s32 arg0) {
    s32 *ptr = &arg0;
    u8 *base;
    u8 off;

    base = (u8 *) &D_80240880;
    off = base[0x20];
    base[off + 0x1B] = (s8) (arg0 - 1);
}


extern void func_80145310(s32, u8, s32);

void func_8023B5D4(void) {
    if (*(s32 *)&D_80240880 != 0) {
        func_80145310(*(s32 *)&D_80240880, D_80240880.unk18, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BA64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BF10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C020.s")


typedef struct func_8023C084_Struct_Sub {
    u8 pad0[0x28];
    s16 unk28;
} func_8023C084_Struct_Sub;

typedef struct func_8023C084_Struct {
    u8 pad0[0x24];
    func_8023C084_Struct_Sub *unk24;
    u8 pad1[0x14];
    s16 unk3C;
} func_8023C084_Struct;

extern void func_80116E80(s32);
extern void func_80145348(void *, s32, s32);
extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_8023C134(void);

void func_8023C084(void *arg0, s32 arg1) {
    u8 sp47;

    func_80116E80(4);
    func_80146208(arg0, &sp47, 0x66, 0x80, 0x68, 0x40, 0x20, 0, 0, 0xFF, 0x20B, 4);
    func_80145348(arg0, 1, 0x21);
    ((func_8023C084_Struct *)arg0)->unk24->unk28 = 4;
    ((func_8023C084_Struct *)arg0)->unk3C = 0xF;
    func_800058DC(arg0, (void *)func_8023C134);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C1A4.s")

