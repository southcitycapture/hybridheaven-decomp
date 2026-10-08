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


struct func_8023AC94_Obj {
    u8 pad0[0x10];
    struct func_8023AC94_Obj *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
};

struct func_8023AC94_Top {
    u8 pad0[0x4];
    struct func_8023AC94_Obj *unk4;
    u8 pad8[0x20 - 0x8];
    u8 unk20;
    u8 unk21;
    u8 unk22;
};

void func_8023AC94(void) {
    func_801453CC((s32)((struct func_8023AC94_Top *)&D_80240880)->unk4, 0x180, 5, 0x1A, 1, 3, 0x1A);
    func_801453CC((s32)((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10, 0, 5, 0x1A, 1, 3, 0x1A);
    if (((struct func_8023AC94_Top *)&D_80240880)->unk20 == 0) {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk22 = 0;
    } else {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk22 = 1;
    }
    if (((struct func_8023AC94_Top *)&D_80240880)->unk20 == ((struct func_8023AC94_Top *)&D_80240880)->unk22) {
        ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10->unk22 = 0;
        return;
    }
    ((struct func_8023AC94_Top *)&D_80240880)->unk4->unk10->unk22 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AD74.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B57C.s")


void func_8023B5B4(s32 arg0) {
    s32 *ptr = &arg0;
    u8 *base;
    u8 off;

    base = (u8 *) &D_80240880;
    off = base[0x20];
    base[off + 0x1B] = (s8) (arg0 - 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BA64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BD7C.s")


struct func_8023BF10_StructB {
    u8 pad[0x2D4];
    void *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
};

extern s8 func_80243E50(u8, s32, u8, u8);
extern void func_80376BE4(void *);
extern void func_8023A09C(void);
extern u8 D_801842A0[];

void func_8023BF10(void *arg0, void *arg1) {
    s8 temp_v0;
    struct func_8023BF10_StructB *sp18;
    u8 *cfg;

    cfg = (u8 *) &D_80240880;
    sp18 = *(struct func_8023BF10_StructB **) ((u8 *) arg0 + 0x98);
    temp_v0 = func_80243E50(cfg[0x1B], ((s32) (cfg[0x1C] - 1) / 2) & 0xFF, cfg[0x1D], cfg[0x1E]);
    sp18->unk2D4 = (void *) ((temp_v0 * 0x1C) + D_801842A0);
    sp18->unk2D9 = temp_v0;
    func_80376BE4(sp18);
    func_800058DC(arg0, func_8023A09C);
}


extern s32 func_8023A3C4(s32);
extern s8 func_8023A398(void *, s32);

struct func_8023BFA8_Struct {
    u8 pad0[0x98];
    struct func_8023BFA8_Struct2 *unk98;
};

struct func_8023BFA8_Struct2 {
    u8 pad0[0x2D9];
    u8 unk2D9;
};

void func_8023BFA8(void *arg0, s32 arg1) {
    struct func_8023BFA8_Struct2 *sp1C;

    sp1C = ((struct func_8023BFA8_Struct *)arg0)->unk98;
    sp1C->unk2D9 = func_8023A398(arg0, func_8023A3C4((D_80240880.unk6B + (D_80240880.unk6A * 0xA)) & 0xFF) & 0xFF);
    func_80376BE4(sp1C);
    func_800058DC(arg0, &func_8023A09C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023C1A4.s")

