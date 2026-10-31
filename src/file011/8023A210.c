#define func_8023A398 func_8023A398__merge_frozen
#include "common.h"

extern void (*D_80216D10[])(void *, s32);

extern s32 D_8023E544;

s32 func_8023A210(void) {
    if (D_8023E544 != 0) {
        return 1;
    }
    return 0;
}


typedef struct func_8023A234_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_8023A234_Struct;

s32 func_8012C4D0(s32, func_8023A234_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern func_8023A234_Struct D_8023E530;

s32 func_8023A234(void) {
    if (D_8023E544 == 0) {
        D_8023E544 = func_8012C4D0(D_801BBC2C, D_8023E530, 8);
        return 1;
    }
    return 0;
}


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

#undef func_8023A398
#define D_8023A398 D_8023A398__func_8023A398
#define D_8024088C D_8024088C__func_8023A398


typedef struct func_8023A398_StructData {
    u8 pad[0xA];
    u8 value;
} func_8023A398_StructData;

typedef struct func_8023A398_StructInner {
    u8 pad[0x2D4];
    func_8023A398_StructData *data;
} func_8023A398_StructInner;

typedef struct func_8023A398_StructOuter {
    u8 pad[0x98];
    func_8023A398_StructInner *inner;
} func_8023A398_StructOuter;

typedef struct func_8023A398_StructEntry {
    func_8023A398_StructData *data;
    u32 pad4;
} func_8023A398_StructEntry;

typedef struct func_8023A398_StructTable {
    u8 pad[8];
    func_8023A398_StructEntry entries[1];
} func_8023A398_StructTable;

extern func_8023A398_StructTable *D_8024088C;

u8 func_8023A398(func_8023A398_StructOuter *arg0, u8 arg1) {
    func_8023A398_StructInner *inner;

    inner = arg0->inner;
    inner->data = D_8024088C->entries[arg1].data;
    return inner->data->value;
}

extern s8 D_8023A398(void *, s32);
#undef D_8023A398
#undef D_8024088C
#define func_8023A398 func_8023A398__merge_frozen


s32 func_8023A3C4(s32 arg0) {
    s32 i;
    s32 n;

    arg0 = *(u32 *)&arg0 & 0xFF;
    n = ((u8 *)&D_80240880)[0x23];
    for (i = 0; i < n; i = (i + 1) & 0xFF) {
        if (arg0 * 1 == ((u8 *)&D_80240880)[0x51 + i]) {
            break;
        }
    }
    if (n == i) {
        return 0xFF;
    }
    return i;
}


extern s32 func_802333FC(s32, u8);
extern u8 D_8024089B;

struct func_8023A424_Struct {
    u8 pad[0x98];
    s32 unk98;
};

s32 func_8023A424(struct func_8023A424_Struct *arg0, u8 arg1) {
    s32 temp;
    u8 value;

    temp = arg0->unk98;
    value = 2;
    if (D_8024089B == 1) {
        value = 4;
    }
    if ((arg1 == 0) || (arg1 == 2)) {
        return 0;
    }
    if (arg1 == 3) {
        value++;
    }
    if (func_802333FC(temp, value) != 0) {
        return 1;
    }
    return 0;
}


struct func_8023A4AC_Struct {
    u8 pad0[0x98];
    s32 unk98;
};

extern void func_8013C8F0(s32, s32);

void func_8023A4AC(struct func_8023A4AC_Struct *arg0, u8 arg1) {
    s32 field;

    field = arg0->unk98;
    func_8013C8F0(field, ((arg1 + 2) & 0xFF) % 5 & 0xFF);
}


extern u8 D_802408B8[];

s32 func_8023A4EC(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802408B8[arg0] != 0) {
        return 1;
    }
    return 0;
}


extern s8 func_80243E50(u8, s32, u8, u8);

s32 func_8023A51C(s32 arg0, u8 arg1) {
    s32 p;
    s32 i;
    s32 o;
    o = arg0;
    p = *(s32 *)(arg0 + 0x98);
    i = func_80243E50(((u8 *)&D_80240880)[0x1B], (((u8 *)&D_80240880)[0x1C] - 1) / 2 & 0xFF, ((u8 *)&D_80240880)[0x1D], arg1);
    if (*(u8 *)(p + 0xA8 + i * 6) == 1) {
        return 1;
    }
    return 0;
}

#define func_8023A51C func_8023A51C__func_8023A5A4

s32 func_8023A51C(s32, u8);
extern u8 D_8024089E;

s32 func_8023A5A4(s32 a) {
    if (func_8023A51C(a, D_8024089E) != 0) {
        return 1;
    }
    return 0;
}
#undef func_8023A51C

extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern u8 func_80006214(s32);
extern s32 D_8008DA88[];

void func_8023A5D4(s32 arg0) {
    u8 sp47;
    u8 sp46;

    sp46 = func_80006214(arg0);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 8), D_80240880.unk16 - 0x12, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 0);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 + 2), D_80240880.unk16 - 8, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 2);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 8), D_80240880.unk16 + 2, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 1);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 0x12), D_80240880.unk16 - 8, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 3);
    *(s32 *) ((u8 *) &D_80240880 + 8) = D_8008DA88[sp46];
}

#define D_8023E548 D_8023E548__func_8023A790
#define D_80240880 D_80240880__func_8023A790
#define func_8023A2BC_Struct func_8023A2BC_Struct__func_8023A790
#define B ((u8 *)&D_80240880)
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
extern struct func_8023A2BC_Struct D_80240880;
#define B ((u8 *)&D_80240880)

extern s32 D_8023E548;
typedef struct func_8023A790_StructEntry {
    u8 pad0[0x38];
    u8 active;
    u8 pad39[0x18];
    u8 value;
} func_8023A790_StructEntry;
void func_8023A790(s32 arg0) {
    u8 q;
    u8 output;
    u8 saved;
    s32 colors;
    u8 off;
    u8 n;

    off = B[0x20] * 4;
    colors = D_8023E548;
    saved = func_80006214(arg0);
    for (n = 0; n < 4; n++) {
    u8 r;
    u8 idx;
    q = ((func_8023A790_StructEntry *)(B + off + (s32)n))->value / 10;
    r = ((func_8023A790_StructEntry *)(B + off + (s32)n))->value % 10;
    q = (s32)q % 4;
    idx = func_80006214(arg0);
    func_80146208((void *)arg0, &output, 6, 0xE1, (s16)((s32)n * 0x14 + 0x51), 0x10, 0x10, 0, 0, 0xFF, 0x20B, ((u8 *)&colors)[q]);
    func_80146208((void *)arg0, &output, 6, 0xF2, (s16)((s32)n * 0x14 + 0x51), 0x10, 0x10, 0, 0, 0xFF, 0x20B, ((u8 *)&colors)[r]);
    if (((func_8023A790_StructEntry *)(B + off + (s32)n))->active == 0) {
        ((u8 *)D_8008DA88[idx + 1])[0x22] = 0;
        ((u8 *)D_8008DA88[idx])[0x22] = ((u8 *)D_8008DA88[idx + 1])[0x22];
    }
    if (B[0x22] == B[0x20] && (s32)n >= B[0x23] - B[0x20] * 4 - 1) {
        break;
    }
    }
    *(s32 *)(B + 8) = D_8008DA88[saved];
}
#undef B
#undef D_8023E548
#undef D_80240880
#undef func_8023A2BC_Struct

/* hh-block asm/nonmatchings/file011/8023A210/_ro_func_8023A9D8.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file011/8023A210/func_8023A9D8.s","D_802405E0"],[".rodata","asm/nonmatchings/file011/8023A210/func_8023A9D8.s","D_802405E8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/_ro_func_8023A9D8.s")


extern void func_8001B204(s32, s32, s16, void *, s32, s32, s32);
extern void func_80147D60(s32);
extern u8 D_802405E0[];
extern u8 D_802405E8[];
#define B ((u8 *)&D_80240880)

void func_8023A9D8(u8 arg0) {
    u8 idx = B[0x20] * 4;
    u8 *p;
    s32 i;
    s32 j;

    func_80147D60(8);
    p = B + idx;
    for (i = 0, j = 0; i < 4; j = i) {
        u8 *e = p + j;
        u8 q = e[0x51] / 10;
        if (q >= 4 && e[0x38] != 0) {
            func_8001B204((u8)(j + 4), 0xD1, j * 0x14 + 0x50, D_802405E0, arg0, 4, (s32)D_802405E8);
        }
        i = (i + 1) & 0xFF;
        if (B[0x22] == B[0x20] && j >= B[0x23] - B[0x20] * 4 - 1) {
            break;
        }
    }
}


s32 func_80146178(s32 a0, u8 *buf, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6, s32 s7, s32 s8, s32 s9, s32 s10);

void func_8023AB40(s32 a0) {
    u8 buf[4];

    func_80146178(a0, &buf[3],0x3A, 0x4D, 0xCC, 0x54, 2, 0, 0, 0, 0x66);
}

extern void func_80145348(void *, s32, s32);

extern s32 D_80240884;

void func_8023AB94(s32 arg0) {
    u8 sp47;
    u8 sp46;

    sp46 = func_80006214(arg0);
    func_80146208((void *)arg0, &sp47, 0xE6, 0x2E, 0x70, 8, 8, 8, 0, 0xFF, 0x209, 6);
    func_80145348((void *)arg0, 0x1A, 3);
    func_80146208((void *)arg0, &sp47, 0x66, 0x10A, 0x70, 8, 8, 0, 0, 0xFF, 0x209, 6);
    func_80145348((void *)arg0, 0x1A, 3);
    D_80240884 = D_8008DA88[sp46];
}

extern s32 func_801453CC(s32, s32, s32, u8, s32, s32, s32);


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

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802405EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802405F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802405FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_8024060C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240614.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_8024064C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_8024065C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_8024066C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023AFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_80240690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_8024069C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023B148.s")

#define D_802406D8 D_802406D8__func_8023B2E8

typedef struct func_8023B2E8_StructEntry {
    s32 unk0;
    s32 **unk4;
} func_8023B2E8_StructEntry;

typedef struct func_8023B2E8_Struct {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x10];
    u8 unk20;
    u8 unk21;
    u8 unk22;
    u8 unk23;
    s32 *unk24[4];
} func_8023B2E8_Struct;

extern s32 D_802406D8[];

#define S ((func_8023B2E8_Struct *)&D_80240880)

void func_8023B2E8(void) {
    func_8023B2E8_StructEntry *sp1C;
    u8 sp1B;
    u8 i;
    s32 j;

    sp1C = (func_8023B2E8_StructEntry *)(S->unkC + 4);
    sp1B = S->unk20 * 4;
    func_80147D60(4);
    for (i = 0; i < 4; i++) {
        S->unk24[i] = D_802406D8;
    }
    for (i = 0; i < 4; i++) {
        j = i;
        S->unk24[i] = (s32 *) **(sp1C + sp1B)[j].unk4;
        if (S->unk20 == S->unk22 && j >= S->unk23 - S->unk20 * 4 - 1) {
            break;
        }
    }
}
#undef S
#undef D_802406D8

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/D_802406D8.s")

/* hh-block asm/nonmatchings/file011/8023A210/_ro_func_8023B3CC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file011/8023A210/func_8023B3CC.s","D_802406DC"],[".rodata","asm/nonmatchings/file011/8023A210/func_8023B3CC.s","D_802406E4"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/_ro_func_8023B3CC.s")


extern u8 D_802406DC[];
extern u8 D_802406E4[];

void func_8023B3CC(u8 arg0)
{
  u8 *base;
  u8 *temp_s3;
  u8 *temp_p;
  s32 temp_v3;
  s32 var_s0;
  s32 var_v0;
  base = (u8 *) (&D_80240880);
  temp_v3 = base[0x20];
  temp_v3 = temp_v3 << 2;
 temp_v3 &= 0xFF; temp_s3 = base + temp_v3; var_v0 = 0; var_s0 = 0; do {
    temp_p = temp_s3 + var_v0;
    if (temp_p[0x38] != 0)
    {
      func_8001B204(var_s0 & 0xFF, 0x3F, (s16) ((var_v0 * 0x14) + 0x50), D_802406DC, arg0, 0, *((s32 *) ((base + 0x24) + (var_s0 * 4))));
    }
    else
    {
      func_8001B204(var_s0 & 0xFF, 0x3F, (s16) ((var_v0 * 0x14) + 0x50), D_802406E4, 3, 0, *((s32 *) ((base + 0x24) + ((var_s0 * 2) * 2))));
    }
    var_s0 = (var_s0 + 1) & 0xFF;
    var_v0 = var_s0;
  }
  while (var_s0 < 4);
}



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


extern s8 func_8024402C(u8);
extern void func_8023A790(s32);
extern void func_8023B2E8(void);
extern s8 func_8023A398(void *, s32);

typedef struct func_8023B608_Ent {
    u8 unk0;
    u8 pad1[7];
} func_8023B608_Ent;

void func_8023B608(void *arg0, void *arg1) {
    s32 v;
    s32 i;
    s32 n;
    u8 *data;

    D_80240880.unk6A = D_80240880.unk6B = 0xFF;
    *(void **)(B + 0xC) = arg1;
    B[0x23] = *(u8 *)arg1;
    B[0x20] = 0;
    v = B[0x23];
    i = 0;
    B[0x22] = (v - 1) / 4;
    if (v > 0) {
        data = (u8 *)arg1 + 4;
        do {
            B[0x38 + i] = ((func_8023B608_Ent *)data)[i].unk0;
            B[0x51 + i] = func_8024402C(func_8023A398(arg0, i & 0xFF));
            i = (i + 1) & 0xFF;
        } while (i < B[0x23]);
    }
    func_8023AB40((s32)arg0);
    func_8023AB94((s32)arg0);
    func_8023AC94();
    func_8023B2E8();
    func_8023A790((s32)arg0);
}

#define func_8023B608 func_8023B608__func_8023B704
#define func_8023B86C func_8023B86C__func_8023B704
extern u8 D_8038CEC0[];
extern u8 D_801BBBF0[];
extern s8 func_802242D0(s32);
extern s32 func_80236374(void *);
extern void func_8023AFD0(u8);
extern s32 D_80145310(s32, u8, s32);
extern void func_8023B148(void *, s32);
extern void func_8023B608(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_8023BD7C();
struct func_8023B86C_Struct;
void func_8023B86C(struct func_8023B86C_Struct *arg0, s32 arg1);

void func_8023B704(u8 *arg0, s32 *arg1) {
    u8 sp4F;
    u8 sp4E;

    func_8023A2BC();
    arg0[0xA8] = func_802242D0(D_801BBBF0[0x1030] == 0 ? *(s32 *)(D_801BBBF0 + 0xDC) : *(s32 *)(D_801BBBF0 + 0xEC));
    if (func_80236C9C() == 0) {
        sp4E = func_80006214((s32)arg0);
        func_80146208(arg0, &sp4F, 0x66, D_80240880.unk10, D_80240880.unk12, 0x20, 0x18, 0, 0, 0xFF, 0x20C, D_80240880.unk1A);
        D_80145310(arg1[sp4E], D_80240880.unk19, 0);
        *(s32 *)B = arg1[sp4E];
    } else {
        *(s32 *)B = 0;
    }
    if (func_80236374(arg0) != 0) {
        func_8023B608(arg0, D_8038CEC0);
        func_800058DC(arg0, (void *)func_8023BD7C);
        return;
    }
    B[0x20] = 0;
    func_8023A5D4((s32)arg0);
    func_8023AFD0(B[0x20]);
    func_8023B148(arg0, 0xFF);
    func_800058DC(arg0, (void *)func_8023B86C);
}
#undef func_8023B608
#undef func_8023B86C

#define func_8023B608 func_8023B608__func_8023B86C
#define func_8023BBDC func_8023BBDC__func_8023B86C

struct func_8023B86C_Struct {
    u8 pad0[0x24];
    s32 unk24;
};

extern void func_80147148(s32, s32);
extern void func_80020744(s32);
extern void func_801471DC(s32);
extern void func_80148FC4(void *, void *, s32, s32);
extern void func_80236BC8(s32);
extern void func_80236A3C(void);
extern void func_80236BD8(void);
extern void func_8023B608(void *, void *);
extern s32 func_8023639C();
extern void func_80237630(void);
extern void func_8023BA64();
extern void func_8023BBDC();
extern s32 D_80240888;
extern u8 D_802408A1;
extern u8 D_8038CE18[];

void func_8023B86C(struct func_8023B86C_Struct *arg0, s32 arg1) {
    struct func_8023ADBC_Sub *sp24;
    u8 sp23x[4];
#define sp23 sp23x[3]
    u8 a;

    sp24 = ((struct func_8023ADBC_Struct *)arg0)->unk94;
    sp23 = func_8023ADBC(arg0);
    func_8023AD74();
    func_8023B148(arg0, 0xFF);
    func_80147148(arg0->unk24, 1);
    a = sp23;
    if ((a != 0) && (func_8023B57C(a) != 0)) {
        func_80020744(0x104);
        if (D_802408A0 == 0) {
            if (func_8023639C(arg0) != 0) {
                if (sp23 == 3) {
                    func_801471DC(D_80240888);
                    func_8023B608(arg0, D_8038CEC0);
                    func_800058DC(arg0, func_8023BD7C);
                    return;
                }
                if (sp23 == 2) {
                    func_801471DC(D_80240888);
                    func_8023B608(arg0, D_8038CE18);
                    func_800058DC(arg0, func_8023BD7C);
                    return;
                }
            }
            if (sp23 == 4) {
                func_80147148(arg0->unk24, 0);
                func_80147D60(4);
                func_80236BC8(0);
                func_80236A3C();
                func_80236BD8();
                func_80148FC4(arg0, func_80237630, 6, 0);
                return;
            }
        }
        func_8023B5B4(sp23);
        D_802408A1 = func_8023B4FC(sp23);
        func_800058DC(arg0, func_8023BA64);
        return;
    }
    if (sp24->unk4 & 0x4000) {
        if (D_802408A0 == 0) {
            func_800058DC(arg0, func_8023BBDC);
            return;
        }
        D_802408A1 = func_8023B550();
        func_800058DC(arg0, func_8023BA64);
    }
}
#undef func_8023B608
#undef func_8023BBDC

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8023A210/func_8023BA64.s")


typedef struct func_8023BBDC_StructData {
    u8 pad[0xB];
    u8 value;
} func_8023BBDC_StructData;

typedef struct func_8023BBDC_StructNode {
    u8 pad[0x10];
    struct func_8023BBDC_StructNode *next;
    u8 pad14[0x1C];
    func_8023BBDC_StructData *data;
} func_8023BBDC_StructNode;

typedef struct func_8023BBDC_StructState {
    u8 pad[0x44];
    s16 timer;
} func_8023BBDC_StructState;

typedef struct func_8023BBDC_Struct {
    u8 pad[0x24];
    func_8023BBDC_StructNode *node;
    u8 pad28[0x70];
    func_8023BBDC_StructState *state;
} func_8023BBDC_Struct;

extern void func_8023A154(void);

void func_8023BBDC(func_8023BBDC_Struct *arg0, s32 arg1) {
    func_8023BBDC_StructState *state;
    s16 value;
    func_8023BBDC_StructNode *node;
    extern void func_8023B148();

    node = arg0->node;
    state = arg0->state;
    if (node != NULL) {
        value = node->data->value;
    }
    value -= 25;
    if (value > 0) {
        func_8023B148(arg0, (u8)value, value);
        while (node != NULL) {
            node->data->value = (u8)value;
            node = node->next;
        }
    } else {
        func_80147D60(4);
        state->timer = 20;
        func_800058DC(arg0, func_8023A154);
    }
}

#define D_80147D60 D_80147D60__func_8023BC98
#define D_8023A9D8 D_8023A9D8__func_8023BC98
#define D_8023B3CC D_8023B3CC__func_8023BC98

struct func_8023BC98_Node {
    u8 pad0[0x10];
    struct func_8023BC98_Node *unk10;
    u8 pad14[0x30 - 0x14];
    struct func_8023BC98_Sub *unk30;
};
struct func_8023BC98_Sub {
    u8 pad0[0xB];
    u8 unkB;
};
struct func_8023BC98_Obj {
    u8 pad0[0x24];
    struct func_8023BC98_Node *unk24;
    u8 pad28[0x98 - 0x28];
    u8 *unk98;
};
extern void D_8023A9D8(s32, s16, s32, void *);
extern void D_8023B3CC(s32);
extern void D_80147D60(s32, s16, void *, void *);

#define arg0 ((struct func_8023BC98_Obj *)argp)
void func_8023BC98(void *argp, s32 arg1) {
    u8 *a3;
    s16 t;
    struct func_8023BC98_Node *p;

    p = arg0->unk24;
    a3 = arg0->unk98;
    if (arg0->unk24 != NULL) {
        t = arg0->unk24->unk30->unkB;
    }
    t = t - 0x19;
    if (t > 0) {
        arg1 = t * 1;
        D_8023A9D8(t & 0xFF, t, arg1, a3);
        D_8023B3CC(t & 0xFF);
        while (p != NULL) {
            if (t < p->unk30->unkB) {
                p->unk30->unkB = arg1;
            }
            p = p->unk10;
        }
    } else {
        D_80147D60(8, t, arg0, a3);
        *(s16 *)(a3 + 0x44) = 0xA;
        func_800058DC(arg0, func_8023A154);
    }
}
#undef arg0
#undef D_80147D60
#undef D_8023A9D8
#undef D_8023B3CC

#define func_8023AE34 func_8023AE34__func_8023BD7C
#define func_8023BC98 func_8023BC98__func_8023BD7C
#define func_8023BFA8 func_8023BFA8__func_8023BD7C

typedef struct func_8023BD7C_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_8023BD7C_Sub;

typedef struct func_8023BD7C_Arg {
    u8 pad0[0x94];
    func_8023BD7C_Sub *unk94;
} func_8023BD7C_Arg;

typedef struct func_8023BD7C_Inner {
    u8 pad0[0x10];
    s32 unk10;
} func_8023BD7C_Inner;

typedef struct func_8023BD7C_G {
    func_8023BD7C_Inner *unk0;
    u8 pad4[0x1C];
    u8 unk20;
    u8 unk21;
    u8 unk22;
} func_8023BD7C_G;

#define G ((func_8023BD7C_G *)&D_80240880)
extern s32 func_8023AE34(void *);
void func_8023BC98(void *, s32);
void func_8023BFA8(void *arg0, s32 arg1);

void func_8023BD7C(func_8023BD7C_Arg *arg0, s32 arg1) {
    func_8023BD7C_Sub *sp1C;
    u8 flag;

    flag = 0;
    sp1C = arg0->unk94;
    func_8023AD74();
    if ((sp1C->unkC & 0x200) && (G->unk20 > 0)) {
        G->unk20--;
        flag = 1;
    }
    if ((sp1C->unkC & 0x100) && (G->unk20 < G->unk22)) {
        G->unk20++;
        flag = 1;
    }
    if (flag) {
        func_80020744(0x300);
        func_801471DC(D_80240888);
        func_8023B2E8();
        func_8023A790((s32)arg0);
    }
    func_8023AC94();
    func_8023A9D8(0xFF);
    func_8023B3CC(0xFF);
    if (func_8023AE34(arg0) != 0) {
        func_80020744(0x104);
        func_800058DC(arg0, func_8023BFA8);
        return;
    }
    if (sp1C->unk4 & 0x4000) {
        if (func_80236374(arg0) != 0) {
            func_800058DC(arg0, func_8023BC98);
            return;
        }
        func_80147D60(8);
        func_801471DC(G->unk0->unk10);
        D_802408A0 = 0;
        func_8023A5D4((s32)arg0);
        func_8023AFD0(D_802408A0);
        func_8023B148(arg0, 0xFF);
        func_800058DC(arg0, func_8023B86C);
    }
}
#undef G
#undef func_8023AE34
#undef func_8023BC98
#undef func_8023BFA8


struct func_8023BF10_StructB {
    u8 pad[0x2D4];
    void *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_80376BE4(void *);
extern void func_8023A09C();
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

#define func_8023A3C4 func_8023A3C4__func_8023BFA8

extern s32 func_8023A3C4(s32);

struct func_8023BFA8_Struct {
    u8 pad0[0x98];
    struct func_8023BFA8_Struct2 *unk98;
};

struct func_8023BFA8_Struct2 {
    u8 pad0[0x2D9];
    u8 unk2D9;
};

struct func_8023BFA8_Struct3 {
    u8 pad0[0x6A];
    u8 unk6A;
    u8 unk6B;
};


void func_8023BFA8(void *arg0, s32 arg1) {
    struct func_8023BFA8_Struct2 *sp1C;

    sp1C = ((struct func_8023BFA8_Struct *)arg0)->unk98;
    sp1C->unk2D9 = func_8023A398(arg0, func_8023A3C4((D_80240880.unk6B + (D_80240880.unk6A * 0xA)) & 0xFF) & 0xFF);
    func_80376BE4(sp1C);
    func_800058DC(arg0, &func_8023A09C);
}
#undef func_8023A3C4


struct func_8023C020_Struct {
    u8 pad0[0x98];
    struct func_8023C020_Inner *unk98;
};

struct func_8023C020_Inner {
    u8 pad0[0x2D8];
    u8 unk2D8;
};

extern void func_8013CD04(void *, s32, s32);
extern u8 D_8024089F;

void func_8023C020(struct func_8023C020_Struct *arg0, s32 arg1) {
    struct func_8023C020_Inner *temp_a0;
    s32 temp_a1;

    temp_a1 = (D_8024089F + 2) & 0xFF;
    temp_a1 = temp_a1 % 5;
    temp_a1 = temp_a1 & 0xFF;
    temp_a0 = arg0->unk98;
    temp_a0->unk2D8 = 0xA;
    func_8013CD04(temp_a0, temp_a1, 0);
    func_800058DC(arg0, func_8023A09C);
}

#define func_8023C134 func_8023C134__func_8023C084

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
extern void func_8023C134();

void func_8023C084(void *arg0, s32 arg1) {
    u8 sp47;

    func_80116E80(4);
    func_80146208(arg0, &sp47, 0x66, 0x80, 0x68, 0x40, 0x20, 0, 0, 0xFF, 0x20B, 4);
    func_80145348(arg0, 1, 0x21);
    ((func_8023C084_Struct *)arg0)->unk24->unk28 = 4;
    ((func_8023C084_Struct *)arg0)->unk3C = 0xF;
    func_800058DC(arg0, (void *)func_8023C134);
}
#undef func_8023C134

#define func_8023C1A4 func_8023C1A4__func_8023C134
struct func_8023C1A4_StructB {
    u8 padB[0xB];
    u8 unkB;
};
struct func_8023C1A4_StructA {
    u8 padA[0x30];
    struct func_8023C1A4_StructB *unk30;
};
struct func_8023C1A4_Struct {
    u8 pad0[0x24];
    struct func_8023C1A4_StructA *unk24;
};
void func_8023C1A4(struct func_8023C1A4_Struct *arg0, s32 arg1);

struct func_8023C134_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
};

void func_8023C134(struct func_8023C134_Struct *arg0, s32 arg1) {
    func_801453CC(arg0->unk24, 0x400, 4, 1, 3, 3, 0x21);
    if (arg0->unk3C-- > 0) {
    } else {
        func_800058DC(arg0, func_8023C1A4);
    }
}
#undef func_8023C1A4





extern void func_801170DC(s32);
extern void func_80005700(void *);

void func_8023C1A4(struct func_8023C1A4_Struct *arg0, s32 arg1) {
    s16 sp2E;
    s16 temp_v1;
    struct func_8023C1A4_StructA *temp_v0;

    func_801453CC((s32) arg0->unk24, 0x300, 4, 1, 3, 3, 0x21);
    temp_v0 = arg0->unk24;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unk30->unkB;
        sp2E = temp_v1;
    }
    temp_v1 = sp2E - 0x19;
    if (temp_v1 > 0) {
        temp_v0->unk30->unkB = temp_v1;
        return;
    }
    D_8023E544 = 0;
    func_801170DC(4);
    func_80005700(arg0);
}


#undef func_8023A398
