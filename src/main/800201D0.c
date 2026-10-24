#include "common.h"


typedef struct { s32 a, b, c, d; s32 e; void *f; s32 g; s8 h; void *i; } func_800201D0_StructA;
typedef struct { s32 a, b, c; } func_800201D0_StructB;

extern void func_80001FE8();
extern void func_8001F8A0();
extern void func_800203C4();
extern void func_80028694();
extern void func_800305D0();
extern s32 D_80047960[];
extern s32 D_80047978[];
extern s32 D_80047990[];
extern s32 D_800479A8[];
extern u8 D_800479C0[];
extern u8 D_80096A70[];
extern u8 D_80096A88[];
extern u8 *D_80096A98[];
extern u8 D_80096AB0[];
extern u8 D_80191520[];

void func_800201D0(void) {
    func_800201D0_StructA a;
    func_800201D0_StructB b;
    s32 i;
    s32 off;
    s32 n;
    s32 s;
    s32 j;

    for (i = 0; i < 0x100000; i++) {}
    func_800305D0(D_80096A88, D_80096AB0, 0x35000);
    off = 0;
    for (j = 0; j < 6; j++) {
        n = D_80047978[j] - D_80047960[j];
        s = D_80047960[j];
        D_80096A98[j] = D_80191520 + off;
        for (i = 0; i != n; i++) {
            (D_80191520 + off)[i] = 0;
        }
        func_80001FE8(s * 1, D_80096A98[j], n, s);
        off += n;
    }
    for (j = 0; j < 6; j++) {
        func_80028694(D_80096A98[j], D_80047990[j]);
    }
    a.a = 0x10;
    a.b = 0x10;
    a.c = 0xA0;
    a.e = 0;
    a.g = 0;
    a.f = D_80096A88;
    a.h = 6;
    a.i = D_800479C0;
    b.a = 0xAC44;
    b.b = 1;
    b.c = 0x1000;
    func_8001F8A0(&a, 0xC, &b);
    func_800203C4(D_80096A70);
    for (i = 0; i < 0x100000; i++) {}
}

extern s32 D_800498F0;
extern u16 D_800CBAB2;
extern u8 D_800CBAB5;
extern s8 D_800CBAB6;
extern u8 D_800CBAB7;
extern u8 D_800CBAB8;
extern s8 D_800CBB21;
extern u8 D_800CBAB0;
extern u8 D_800CBB22;
extern void func_80020460(void);
extern void func_80032A60(s32, void *, u8 *, u8 *);
typedef struct func_800203C4_Struct { s32 unk0; void *unk4; void *unk8; } func_800203C4_Struct;

void func_800203C4(func_800203C4_Struct *arg0) {
    D_800CBAB0 = 8;
    D_800CBAB2 = D_800CBB22 = D_800CBAB5 = D_800CBAB8 = *(u8 *)&D_800CBB21 = 0;
    D_800CBAB7 = D_800CBAB6 = 0;
    arg0->unk0 = 0;
    arg0->unk8 = (void *)func_80020460;
    arg0->unk4 = arg0;
    func_80032A60(D_800498F0, arg0, &D_800CBAB5, &D_800CBB22);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_8002059C.s")


extern void func_800207D0(u16 arg0, s32 arg1, u8 arg2);

void func_80020718(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}



void func_80020744(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}


extern void D_800207D0(u16, u8, u8);

void func_80020770(u16 arg0, u8 arg1) {
    D_800207D0(arg0, arg1, 0);
}



void func_800207A0(u16 arg0, u8 arg1) {
    func_800207D0(arg0, 0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800207D0.s")


extern u8 D_800CBAB1;
extern u8 D_800CBDA8[];
extern u8 D_800CBDAC[];
extern u8 D_80153032[];

void func_800208C4(u16 arg0) {
    u8 index;

    if (arg0 != 0) {
        D_800CBAB1 = 0xFF;
        index = D_80153032[arg0 * 4];
        if (index != 0) {
            index--;
            D_800CBDA8[index] = arg0;
            D_800CBDAC[index] = arg0;
            D_800CBAB1 = 0;
        } else {
            for (index = 0; index < 3; index++) {
                D_800CBDA8[index] = 0;
            }
            D_800CBAB1 = 0;
            func_800207D0(arg0, 0, 0);
        }
    }
}

extern u8 D_800CBB20;
typedef struct { u16 a; s16 b; u8 c; u8 p; } func_8002096C_Struct;
extern func_8002096C_Struct D_800CBAF0[];

void func_8002096C(arg0, arg1, arg2)
u16 arg0;
u8 arg1;
s16 arg2;
{
    func_8002096C_Struct *p;
    s32 n = D_800CBB20;
    if (n < 8 && arg0 != 0 && arg1 < 3) {
        p = &D_800CBAF0[n];
        p->a = arg0;
        p->b = arg2;
        p->c = arg1;
        D_800CBB20 = n + 1;
        D_800CBAB1 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800209E4.s")

extern void *D_800CBDA4;
extern u32 D_801B5520;

typedef struct func_80020A7C_Struct {
    u32 unk0;
    u8 pad4[0xA2 - 0x4];
    s16 unkA2[(0xD8 - 0xA2) / 2];
} func_80020A7C_Struct;

extern s16 func_800209E4(u8, u8);

void func_80020A7C(s32 arg0) {
    extern s16 D_80047E00[][2];
    s32 result;
    s32 bound;
    s32 value;
    s32 i;
    u32 index;
    s16 *limits;
    func_8002096C_Struct *config;

    config = &D_800CBAF0[arg0];
    index = config->c;
    for (i = 0; i < 16; i++) {
        D_800CBDA4 = &((func_80020A7C_Struct *)&D_801B5520)[i];
        if (config->a == (((func_80020A7C_Struct *)D_800CBDA4)->unk0 & 0x7FFF)) {
            limits = D_80047E00[index];
            result = func_800209E4(arg0, index);
            value = result;
            if (result < limits[0]) {
                value = limits[0];
            } else if (limits[1] < result) {
                value = limits[1];
            }
            if ((s16)value != ((func_80020A7C_Struct *)D_800CBDA4)->unkA2[index]) {
                ((func_80020A7C_Struct *)D_800CBDA4)->unkA2[index] = value;
            }
        }
    }
}

extern u8 D_800CBAD0[];

void func_80020B98(u8 arg0, u8 arg1) {
    if (arg1 >= 0x15) {
        arg1 = 0x14;
    }
    if (arg0 <= 0) {
        D_800CBAD0[arg0] = arg1;
    } else {
        D_800CBAD0[0] = arg1;
        D_800CBAD0[1] = arg1;
    }
}



void func_80020BE4(void) {
    D_800CBAD0[1] = 0;
    D_800CBAD0[0] = 0;
}


extern void func_80020C20(s32, s32);

void func_80020BF8(s32 arg0) {
    s32 *p = &arg0;
    func_80020C20(arg0 & 0xFFFF, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020C20.s")


extern u8 D_800CBB90[];

void func_80020D2C(s32 arg0) {
    D_800CBB90[arg0] = 0;
}



u8 func_80020D3C(s32 arg0) {
    return D_800CBB90[arg0];
}


extern u8 D_800CBBD8[];

s32 func_80020D4C(s32 arg0) {
    return D_800CBBD8[arg0] + D_800CBB90[arg0];
}


extern u16 D_800CBABE;
extern u16 D_800CBAC2;

s32 func_80020D6C(void) {
    s32 var_v1;

    var_v1 = D_800CBABE + D_800CBAC2;
    if ((var_v1 == 0) && (D_801B5520 != 0) && ((u32) D_801B5520 < 0x100U)) {
        var_v1 = -1;
    }
    return var_v1;
}


typedef struct func_80020DAC_Struct {
    u32 unk0;
    u8 pad4[0xB4 - 0x4];
    s16 unkB4;
    u8 padB6[0xD8 - 0xB6];
} func_80020DAC_Struct;

s32 func_80020DAC(u16 arg0) {
    s32 i;
    s32 value;

    for (i = 0; i < 16; i++) {
        if (arg0 == (((func_80020DAC_Struct *)&D_801B5520)[i].unk0 & 0x7FFF)) {
            value = ((func_80020DAC_Struct *)D_800CBDA4)[i].unkB4;
            if (value == 0) {
                value++;
            }
            return value;
        }
    }
    return 0;
}


typedef struct func_80020EA0_Struct {
    u32 value;
    u8 pad[0xD4];
} func_80020EA0_Struct;

s32 func_80020EA0(s32 arg0) {
    func_80020EA0_Struct *p;
    s32 i;

    if (arg0 == 0) {
        return (u16)(D_801B5520 & 0x7FFF);
    }
    arg0--;
    if (D_800CBDAC[arg0] == 0) {
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if ((((func_80020EA0_Struct *)&D_801B5520)[i].value & 0x7FFF) == D_800CBDAC[arg0]) {
            return D_800CBDAC[arg0];
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80020F60.s")


typedef struct func_80021094_Struct {
    u16 unk0;
    u16 unk2;
} func_80021094_Struct;

extern u8 D_800CBB91[];
extern s32 D_800CBB48;
void func_80021968(s32);
extern func_80021094_Struct D_800CBB98[][16];

void func_80021094(void) {
    s32 i;
    u8 t;
    func_80021094_Struct *p;

    for (i = 0; i != 1; i++) {
        if (D_800CBBD8[i] == 0) {
            if (D_800CBB90[i] != 0) {
                p = &D_800CBB98[i][D_800CBB91[i]];
                if (p->unk2 != 0) {
                    p->unk2--;
                } else {
                    if (p->unk0 != 0) {
                        D_800CBB48 = p->unk0;
                        func_80021968(0);
                    }
                    D_800CBB90[i]--;
                    D_800CBB91[i]++;
                    if (D_800CBB91[i] >= 0x10) {
                        D_800CBB91[i] = 0;
                    }
                }
            }
        }
    }
}

typedef struct { u16 w; u8 pad; u8 a; u8 b; u8 c; } Lim;
typedef struct { u16 flags; u16 pad; Lim *lim; u16 hi; u16 pad2; } Ent;
extern u8 D_800CBDB3;
extern Ent D_800CBDB8[];
extern s16 D_800CBAD8[];

void func_800211B4(void) {
    Ent *e;
    Lim *l;
    s16 x, y, z, t, u;
    s32 q;
    s32 m;
    u16 f;
    while (D_800CBDB3 != 0) {
        D_800CBDB3--;
        e = &D_800CBDB8[D_800CBDB3];
        f = e->flags;
        l = e->lim;
        t = f >> 3;
        x = t & 0x3FFF;
        t = t >> 3;
        y = t & 0xFF;
        u = t >> 3;
        z = u & 0x7F;
        if (l->pad != 0) {
            s16 m = l->pad << 8;
            if (m < x) { do { x >>= 1; } while (m < x); }
        } else x = 0;
        q = l->a;
        if (q != 0) {
            if (q < y) { m = q; do { y >>= 1; } while (m < y); }
        } else y = 0;
        q = l->b;
        if (q != 0) {
            if (q < z) { m = q; do { z >>= 1; } while (m < z); }
        } else z = 0;
        if (f & 1) x = -x;
        if (f & 2) y = -y;
        if (f & 4) z = -z;
        D_800CBB48 = (e->hi << 16) + l->w;
        D_800CBAD8[6] = x;
        D_800CBAD8[7] = y;
        D_800CBAD8[8] = z;
        if ((u32)(D_800CBB48 & 0x7FFF) >= 0x100) func_80021968(1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/D_8004D040.s")

typedef struct { u16 a; u8 t; u8 p[3]; } func_800213DC_Struct;
extern func_800213DC_Struct D_800CBDD8[];
extern u8 D_800CBDD0;
extern void (*D_80047E0C[])(void);
extern void func_80021518();
extern void func_80021824();
extern s32 func_80021EB8();

void func_800213DC(void)
{
  func_800213DC_Struct *e;
  u16 v;
  while (D_800CBDD0 != 0)
  {
    D_800CBDD0--;
    e = &D_800CBDD8[D_800CBDD0];
    v = e->a;
    switch (e->t)
    {
      case 0:
        D_800CBB48 = v;
        if (v < 0x100U)
      {
        if (v < 0x10U)
        {
          D_80047E0C[v - 1]();
        }
        else
        {
          func_80021EB8();
        }
      }
      else
      {
        func_80021968(0);
      }
        break;

      case 1:
        func_80021518(v, (unsigned long) v);
        break;

      case 2:
        func_80021824(0);
        break;

      case 3:
        func_80021824(1);
        break;

      case 4:
        func_80021824(2);
        break;

    }

  }

}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021C10.s")


extern u8 D_801B595C;
extern u8 D_801B62A4;
typedef struct func_80021D50_Struct {
    u8 pad0[4];
    u8 value;
    u8 pad5[0xD8 - 5];
} func_80021D50_Struct;

s32 func_80021D50(s32 arg0) {
    u8 i;
    u8 sel;
    u8 result;
    u8 min;

    arg0 = *(u32 *)&arg0 & 0xFF;
    result = 5;
    if (arg0 == 1) {
        min = D_801B595C;
        for (i = 6; i < 16; i++) {
            if (((func_80021D50_Struct *)&D_801B5520)[i].value <= min) {
                result = i;
                min = ((func_80021D50_Struct *)&D_801B5520)[i].value;
            }
        }
    } else {
        result = 14;
        if (arg0 == 0) {
            result = 16;
            min = D_801B62A4;
            for (i = 17; i < 20; i++) {
                if (((func_80021D50_Struct *)&D_801B5520)[i].value <= min) {
                    result = i;
                    min = ((func_80021D50_Struct *)&D_801B5520)[i].value;
                }
            }
        } else {
            min = 0xFF;
            for (i = 14; i >= 5; i -= 2) {
                sel = i;
                if (((func_80021D50_Struct *)&D_801B5520)[i].value < ((func_80021D50_Struct *)&D_801B5520)[i + 1].value) {
                    sel++;
                }
                if (((func_80021D50_Struct *)&D_801B5520)[sel].value <= min) {
                    result = i;
                    min = ((func_80021D50_Struct *)&D_801B5520)[sel].value;
                }
            }
        }
    }
    return result;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80021EB8.s")


extern void func_80003824(void *, void *, s32);
extern void func_80022128(u16, s32);
extern u8 *D_800479E8[];
extern u8 *D_80047BF4[];
extern u8 D_8008DC18;
extern u16 D_800CBB4C;
extern u8 D_800CBB4E;
typedef struct func_80022044_StructBank {
    u8 bank;
    u8 pad[3];
} func_80022044_StructBank;
extern func_80022044_StructBank D_80153072[];
extern u8 D_801B6600[];
extern u8 D_801B8600[];

void func_80022044(void) {
    s32 size;
    u8 *source;
    s32 index;
    s32 bank;

    if (--D_800CBB4E == 0) {
        if (D_8008DC18 != 0) {
            D_800CBB4E = 1;
            return;
        }
        D_800CBB21 = D_800CBB4C;
        index = (u16)(D_800CBB4C - 0x10);
        size = D_80047BF4[index] - D_800479E8[index];
        bank = D_80153072[index].bank;
        if (bank != 0) {
            func_80003824(D_800479E8[index], D_801B8600 + (bank << 12) - 0x1000, size);
        } else {
            func_80003824(D_800479E8[index], D_801B6600, size);
        }
        func_80022128(D_800CBB4C, 5);
        D_800CBB4C = 0;
    }
}


typedef struct func_80022128_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 pad6[2];
    u8 **unk8;
} func_80022128_Struct;
typedef struct func_80022128_StructEntry {
    u8 unk0, unk1, unk2, unk3;
} func_80022128_StructEntry;

extern void func_80022214();
extern u8 *D_800CBB50[];
extern u8 D_80153070[];

void func_80022128(u16 arg0, s32 arg1)
{
    func_80022128_StructEntry *temp_v0;
    u8 temp_v1;
    u8 *base;
    s32 i;

    temp_v0 = (func_80022128_StructEntry *)D_80153070 + arg0;
    temp_v1 = temp_v0[-16].unk2;
    ((func_80022128_Struct *)D_800CBAD8)->unk5 = temp_v1;
    ((func_80022128_Struct *)D_800CBAD8)->unk0 = temp_v0[-16].unk0;
    ((func_80022128_Struct *)D_800CBAD8)->unk3 = temp_v0[-16].unk1;
    ((func_80022128_Struct *)D_800CBAD8)->unk1 = temp_v0[-16].unk3;
    ((func_80022128_Struct *)D_800CBAD8)->unk8 = D_800CBB50;
    if (temp_v1 != 0) {
        base = D_801B8600 + (((volatile func_80022128_StructEntry *)temp_v0)[-16].unk2 << 12) - 0x1000;
    } else {
        base = D_801B6600;
    }
    for (i = 0; i < ((func_80022128_Struct *)D_800CBAD8)->unk0; i++) {
        D_800CBB50[i] = base + ((u16 *)base)[i];
    }
    D_800CBB48 = arg0;
    ((func_80022128_Struct *)D_800CBAD8)->unk2 = 0x1E;
    ((func_80022128_Struct *)D_800CBAD8)->unk4 = *((u8 *)&arg1 + 3);
    func_80022214(0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022528.s")

void func_80022874(s32 arg0);
extern u16 D_800CBACA;
extern s8 D_800CBACC;
extern s8 D_800CBACD;
extern u8 D_800CBACE;

extern u8 D_800CBDB0[];

void func_80022694(void) {
    s32 j;
    u32 *entry;
    s32 i;
    u32 flags;

    j = 0;
    do {
        D_800CBDB0[j] = 0;
        j++;
    } while (&D_800CBDB0[j] < &D_800CBDB3);
    D_800CBB4C = 0;
    D_800CBB4E = 0;
    D_800CBABE = 0;
    D_800CBACC = D_800CBACA = 0;
    D_800CBACD = D_800CBACE = 0;
    D_800CBAB7 = D_800CBAB6 = 0;
    entry = &D_801B5520;
    i = 0;
    do {
        flags = *entry & 0x7FFF;
        if (flags >= 0x10U && flags < 0x100U) {
            func_80022874(i);
        }
        i++;
        entry = (u32 *)((u8 *)entry + 0xD8);
    } while (i != 0x14);
}


extern void func_80022C8C(u8, u8 *);

void func_80022778(u8 arg0)
{
  u32 *p;
  u32 v;
 p = &D_801B5520; do {
    v = (*p) & 0x7FFF;
    if ((((v >= 0x10) ^ 0) && (v < 0x100)) && (arg0 == ((u8 *) p)[0xD5]))
    {
      D_800CBB48 = v;
      func_80022C8C(arg0, D_801B6600);
      return;
    }
    p += 0x36;
  }
  while (((u8 *) p) != D_801B6600);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_800227EC.s")


typedef struct func_80022874_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[0xE - 0x5];
    u8 unkE;
    u8 unkF;
    u8 padF[0xB4 - 0x10];
    u16 unkB4;
    u16 unkB6;
} func_80022874_Struct;

extern u8 D_800CBBE0[];
void func_80026950(s32, void *, s32, s32);

void func_80022874(s32 arg0) {
    D_800CBDA4 = (func_80022874_Struct *)((arg0 * 0xD8) + (s32)&D_801B5520);
    ((func_80022874_Struct *)D_800CBDA4)->unk0 = 0;
    ((func_80022874_Struct *)D_800CBDA4)->unk4 = 0;
    if (arg0 < 0x10) {
        if (((func_80022874_Struct *)D_800CBDA4)->unkE != 0) {
            ((func_80022874_Struct *)D_800CBDA4)->unkF = 2;
            ((func_80022874_Struct *)D_800CBDA4)->unkB4 = 0;
            ((func_80022874_Struct *)D_800CBDA4)->unkB6 = 0;
            func_80026950(D_800498F0, (u8 *)D_800CBBE0 + arg0 * 0x1C, 0, 0x1388);
        }
    }
}



void func_80022930(void) {
    if (D_800CBAB7 != 0x7F) {
        D_800CBAB6 = -4;
    }
}



void func_80022954(void) {
    if (D_800CBAB7 != 0) {
        D_800CBAB6 = 4;
    }
}


extern void func_80022A84(s32);

typedef struct func_80022978_Struct {
    u32 unk0;
    u8 pad4[0xD8 - 0x4];
} func_80022978_Struct;

void func_80022978(void) {
    func_80022978_Struct *ptr;
    s32 i;

    if (D_800CBAB8 != 0) {
        D_800CBAB8 = 0;
        for (i = 0, ptr = (func_80022978_Struct *)&D_801B5520; i != 16; i++, ptr++) {
            D_800CBDA4 = ptr;
            if (((func_80022978_Struct *)D_800CBDA4)->unk0 != 0) {
                func_80022A84(i & 0xFF);
            }
        }
    }
}



typedef struct func_800229FC_Struct {
    u32 value;
    u8 pad[0xD4];
} func_800229FC_Struct;

void func_800229FC(void) {
    s32 i;
    func_800229FC_Struct *ptr;

    if (D_800CBAB8 == 0) {
        D_800CBAB8 = 1;
        for (i = 0, ptr = (func_800229FC_Struct *)&D_801B5520; i != 0x10; i++, ptr++) {
            D_800CBDA4 = ptr;
            if (((func_800229FC_Struct *)D_800CBDA4)->value != 0) {
                func_80022A84(i & 0xFF);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022A84.s")


typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;

extern u16 D_80047E3A[];
extern func_80022B6C_Struct D_800CBABC;
extern func_80022B6C_Struct D_800CBAC0;

void func_80022B6C(void) {
    if (D_800CBB48 != 0xA) {
        if (D_800CBABC.unk2 == 0) {
            D_800CBABC.unk2 = 0xFFFFU;
        }
        D_800CBABC.unk0 = D_80047E3A[D_800CBB48];
        return;
    }
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFFU;
    }
    D_800CBAC0.unk0 = D_80047E3A[D_800CBB48];
}


struct func_80022BE0_Struct {
    u16 unk0;
    u16 unk2;
};


void func_80022BE0(void) {
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFF;
    }
    D_800CBAC0.unk0 = 0x199;
}



void func_80022C08(void) {
    if ((s32) D_800CBACA < 0x100) {
        D_800CBACC = 0x10;
    }
}



void func_80022C2C(void)
{
  s16 *new_var;
  volatile s16 *p;
  new_var = &D_800CBACA;
  new_var = &D_800CBACA;
  p = new_var;
  new_var[0] = 0;
  D_800CBACC = 0;
  if (!new_var)
  {
  }
}



void func_80022C44(void) {
    if (D_800CBACE == 0) {
        D_800CBACD = -4;
    }
}



void func_80022C68(void) {
    if (D_800CBACE != 0) {
        D_800CBACD = 4;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80022D20.s")


typedef struct func_80022DC0_Struct {
    u32 unk0;
    u8 pad4;
    u8 unk5;
    u8 pad6[0xE - 0x6];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x1A - 0x10];
    u16 unk1A;
    u8 pad1C[0xD8 - 0x1C];
} func_80022DC0_Struct;

extern void func_80022528(void);
extern void func_80022D20(u16);
extern void func_80023174(void);
extern void func_80034EE0(s32, void *);
extern u32 D_801B61C8;
extern u8 D_800CBAB4;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];

#define CUR ((func_80022DC0_Struct *)D_800CBDA4)

void func_80022DC0(void) {
    s32 i;
    u16 *p;

    if (D_800CBBD8[0] == 2 && (D_801B61C8 & 0x7FFF) < 0x607) {
        D_800CBBD8[0] = 0;
    }
    if (D_800CBAB6 != 0 && !(D_800CBAB2 & 3)) {
        D_800CBAB7 += D_800CBAB6;
        if (D_800CBAB7 < 0x80) {
            if (D_800CBAB6 < 0) {
                D_800CBAB7 = 0x7F;
            } else {
                D_800CBAB7 = 0;
            }
            D_800CBAB6 = 0;
        }
    }
    if (D_800CBAC0.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBAC0.unk2 -= D_800CBAC0.unk0;
        if (D_800CBAC0.unk2 < 0x1000) {
            func_80022528();
        }
    }
    if (D_800CBABC.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBABC.unk2 -= D_800CBABC.unk0;
        if (D_800CBABC.unk2 < 0x1000) {
            func_80022694();
        }
    }
    if (D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        p = D_800CBAC8;
        i = 0;
        do {
            if (*p != 0) {
                D_800CBAC4[i].unk2 -= D_800CBAC4[i].unk0;
                if (D_800CBAC4[i].unk2 < 0x1000) {
                    func_80022D20(i);
                }
            }
            i++;
            p++;
        } while (i != 1);
    }
    if (*(u8 *)&D_800CBACC != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 7)) {
        (*(u8 *)&D_800CBACC)--;
        D_800CBACA++;
    }
    if (D_800CBACD != 0 && !(D_800CBAB2 & 3)) {
        D_800CBACE += D_800CBACD;
        if (D_800CBACE < 0xB1) {
            if (D_800CBACD < 0) {
                D_800CBACE = 0xB0;
            } else {
                D_800CBACE = 0;
            }
            D_800CBACD = 0;
        }
    }
    for (D_800CBAB4 = 0; D_800CBAB4 < 20; D_800CBAB4++) {
        D_800CBDA4 = &((func_80022DC0_Struct *)&D_801B5520)[D_800CBAB4];
        if (CUR->unkF != 0) {
            CUR->unkF--;
            if (CUR->unkF == 0 && CUR->unkE != 0) {
                CUR->unkE = 0;
                func_80034EE0(D_800498F0, &D_800CBBE0[D_800CBAB4 * 0x1C]);
            }
        }
        if (CUR->unk0 != 0) {
            if (CUR->unk5 != 0) {
                CUR->unk5--;
            } else if ((CUR->unk0 & 0x7FFF) < 0x100) {
                if (D_800CBAB5 == 0) {
                    CUR->unk1A += D_800CBACA;
                    func_80023174();
                }
            } else {
                func_80023174();
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80023520.s")


extern void func_800255FC(void);
extern void func_800250D4(void);
extern void func_80023BF4(void);
extern void func_8002430C(void);
extern void func_800242C8(void);
extern void func_80024358(void);
extern s32 func_80023D04();
extern void func_80023A74(void);

typedef struct func_80023958_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x4C - 0x25];
    u16 unk4C;
    u8 pad4E[0x7D - 0x4E];
    u8 unk7D;
    u8 pad7E[0x9A - 0x7E];
    u16 unk9A;
} func_80023958_Struct;

void func_80023958(void) {
    u8 temp_v1;

    if (((func_80023958_Struct *) D_800CBDA4)->unk7D != 0) {
        func_800255FC();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk9A != 0) {
        func_800250D4();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 2) {
        func_80023BF4();
    }
    if ((((func_80023958_Struct *) D_800CBDA4)->unk22 != 0) && (((func_80023958_Struct *) D_800CBDA4)->unk21 == 1)) {
        func_8002430C();
        return;
    }
    temp_v1 = ((func_80023958_Struct *) D_800CBDA4)->unk24;
    if (temp_v1 != 0) {
        ((func_80023958_Struct *) D_800CBDA4)->unk24 = (u8) (temp_v1 - 1);
        if (((func_80023958_Struct *) D_800CBDA4)->unk24 == 0) {
            func_800242C8();
            return;
        }
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk4C != 0) {
        func_80024358();
    }
    if (((func_80023958_Struct *) D_800CBDA4)->unk6 & 1) {
        func_80023D04();
        return;
    }
    func_80023A74();
}


void func_80023A74(void) {
    s32 i;
    u32 cmd;

    if (D_800CBAB6 != 0) {
        func_80023D04();
        return;
    }
    if (D_800CBAC2 != 0) {
        func_80023D04();
        return;
    }
    cmd = *(s32 *)D_800CBDA4 & 0x7FFF;
    if ((cmd < 0x100U) && ((D_800CBABE != 0) || (D_800CBACD != 0))) {
        func_80023D04();
        return;
    }
    for (i = 0; i < 1; i++) {
        if (cmd == D_800CBAC8[i]) {
            func_80023D04();
            return;
        }
    }
}


struct func_80023B48_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x45];
    u16 unk4C;
    u8 pad4E[0x2F];
    u8 unk7D;
    u8 pad7E[0x1C];
    u16 unk9A;
};


extern void func_80025150(void);
extern void func_80025694(void);

void func_80023B48(void) {
    struct func_80023B48_Struct *temp_v0;

    temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    if (temp_v0->unk7D != 0) {
        func_80025694();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk9A != 0) {
        func_80025150();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 2) {
        func_80023BF4();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk4C != 0) {
        func_80024358();
        temp_v0 = (struct func_80023B48_Struct *) D_800CBDA4;
    }
    if (temp_v0->unk6 & 1) {
        func_80023D04();
    }
}


typedef struct func_80023BF4_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x28 - 7];
    s32 unk28;
    u8 pad2C[0x36 - 0x2C];
    s16 unk36;
    u16 unk38;
    u8 pad3A[0xA8 - 0x3A];
    s16 unkA8;
    u8 padAA[0xB0 - 0xAA];
    f32 unkB0;
    u8 padB4[0xC6 - 0xB4];
    s16 unkC6;
} func_80023BF4_Struct;

extern f32 D_80047FD8[];
extern void func_8002AB10(s32, void *, f32);

#define Q ((func_80023BF4_Struct *) D_800CBDA4)

void func_80023BF4(void) {
    f32 *tbl;
    f32 v;
    f32 lo;
    u32 frac;
    s32 x;

    Q->unk6 &= 0xFD;
    x = Q->unkA8 + Q->unk28 + Q->unk38 + Q->unk36;
    x += Q->unkC6;
    if (x < 0) {
        x = 0;
    } else if (x > 0x4800) {
        x = 0x4800;
    }
    frac = x & 0xFF;
    x >>= 8;
    tbl = &D_80047FD8[x];
    v = tbl[1] - tbl[0];
    v = (frac * v) / (f32)0x100;
    v += tbl[0];
    if (v != Q->unkB0) {
        Q->unkB0 = v;
        func_8002AB10(D_800498F0, &D_800CBBE0[D_800CBAB4 * 0x1C], v);
    }
}


extern s32 func_80024114(s32, u8, s8, ...);
typedef struct func_80023D04_Struct {
    u32 unk0;
    u8 pad4[2];
    u8 unk6;
    u8 pad7[0x3A - 7];
    u16 unk3A;
    u8 pad3C[4];
    s16 unk40;
    s16 unk42;
    u8 pad44[4];
    u8 unk48;
    u8 pad49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0xAA - 0x4E];
    s16 unkAA;
    u8 padAC[8];
    s16 unkB4;
    u16 unkB6;
    u8 padB8[6];
    u8 unkBE;
    u8 padBF[9];
    s16 unkC8;
} func_80023D04_Struct;
#define Q ((func_80023D04_Struct *) D_800CBDA4)

s32 func_80023D04(void) {
    s32 value;
    s16 modifier;
    s16 factor;
    s32 sound;
    s32 id;
    s32 firstId;
    s32 scale;
    s32 i;
    u16 *ids;
    func_80022B6C_Struct *entry;

    Q->unk6 &= 0xFE;
    value = Q->unk48 + Q->unk40 + Q->unk42;
    value *= Q->unk3A;
    if (value >= 0x800000) {
        value = 0x7FFF;
    } else if (value < 0) {
        value = 0;
    } else {
        value >>= 8;
    }
    modifier = Q->unkAA;
    sound = Q->unk4C;
    value = (Q->unk4A * value) >> 8;
    if (modifier != 0) {
        value = ((modifier + 0x100) * value) >> 8;
        if (value >= 0x8000) value = 0x7FFF;
    }
    modifier = Q->unkC8;
    if (modifier != 0) {
        factor = modifier / 64;
        if (factor < -0xFF) {
            value = 0;
        } else {
            value = ((factor + 0x100) * value) >> 8;
            if (value >= 0x8000) value = 0x7FFF;
        }
    }
    if (Q->unkBE != 0) {
        value = (Q->unkBE * value) >> 8;
        sound = func_80024114(sound, Q->unkBE, 2);
    }
    scale = D_800CBAC0.unk2;
    if (scale != 0) {
        switch (Q->unk0 & 0x7FFF) {
        case 0x11E:
        case 0x122:
        case 0x125:
        case 0x12A:
        case 0x213:
        case 0x214:
            break;
        default:
            value = (scale * value) >> 16;
            sound = func_80024114(sound, scale >> 8, 4 - (D_800CBAC0.unk0 >> 8), &D_800CBAC0);
            break;
        }
    }
    if ((Q->unk0 & 0x7FFF) < 0x100U) {
        scale = D_800CBABC.unk2;
        if (scale != 0) {
            value = (scale * value) >> 16;
            sound = func_80024114(sound, scale >> 8, 4 - (D_800CBABC.unk0 >> 8), &D_800CBABC);
        }
        if (D_800CBACE != 0) {
            value = (D_800CBACE * value) >> 8;
            if (D_800CBACD < 0) sound = func_80024114(sound, D_800CBACE, 2);
        }
    }
    id = Q->unk0 & 0x7FFF;
    if (D_800CBAB7 != 0 && id != 0x104 && id != 0x300) {
        value = (D_800CBAB7 * value) >> 8;
        if (D_800CBAB6 < 0) {
            sound = func_80024114(sound, D_800CBAB7, 1);
            id = Q->unk0 & 0x7FFF;
        }
    }
    ids = D_800CBAC8;
    i = 0;
    do {
        if (id == *ids) {
            entry = &D_800CBAC4[i];
            value = (entry->unk2 * value) >> 16;
            sound = func_80024114(sound, entry->unk2, 4 - (entry->unk0 >> 8));
            break;
        }
        i++;
        ids++;
    } while (i != 1);
    if (Q->unkB4 != (s16)value || Q->unkB6 != (sound & 0xFFFF)) {
        Q->unkB4 = value;
        Q->unkB6 = sound;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, (s16)value, sound * 0x1388);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800201D0/func_80024114.s")


extern void func_8002420C(void);

struct func_80024180_Struct {
    u8 pad[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
};

void func_80024180(void) {
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = 0;
    if (((struct func_80024180_Struct *) D_800CBDA4)->unk4E != 0) {
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x20;
        func_80023D04();
        ((struct func_80024180_Struct *) D_800CBDA4)->unk49 = 0;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
        ((struct func_80024180_Struct *) D_800CBDA4)->unk4C = ((struct func_80024180_Struct *) D_800CBDA4)->unk4E;
        func_80023D04();
        return;
    }
    ((struct func_80024180_Struct *) D_800CBDA4)->unk4A = 0x100;
    func_80023D04();
    func_8002420C();
}


struct func_8002420C_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u16 unk50;
    u8 pad52[0x54 - 0x52];
    u16 unk54;
};

extern void func_80024278(void);

void func_8002420C(void) {
    if (((struct func_8002420C_Struct *) D_800CBDA4)->unk54 != 0) {
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk49 = 1;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A = ((struct func_8002420C_Struct *) D_800CBDA4)->unk4A - ((struct func_8002420C_Struct *) D_800CBDA4)->unk54;
        ((struct func_8002420C_Struct *) D_800CBDA4)->unk4C = ((struct func_8002420C_Struct *) D_800CBDA4)->unk50;
        func_80023D04();
        return;
    }
    func_80024278();
}


typedef struct func_80024278_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[0x52 - 0x4E];
    u16 unk52;
} func_80024278_Struct;

void func_80024278(void) {
    ((func_80024278_Struct *) D_800CBDA4)->unk49 = 2;
    if (((func_80024278_Struct *) D_800CBDA4)->unk52 != 0) {
        ((func_80024278_Struct *) D_800CBDA4)->unk4A = 0;
        ((func_80024278_Struct *) D_800CBDA4)->unk4C = ((func_80024278_Struct *) D_800CBDA4)->unk52;
        func_80023D04();
    }
}


struct func_800242C8_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[8];
    u16 unk56;
};

void func_800242C8(void) {
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk49 = 3;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4A = 0;
    ((struct func_800242C8_Struct *) D_800CBDA4)->unk4C = ((struct func_800242C8_Struct *) D_800CBDA4)->unk56;
    func_80023D04();
}


struct func_8002430C_Struct {
    u8 pad0[0xF];
    u8 unkF;
    u8 pad10[0x49 - 0x10];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
};


void func_8002430C(void) {
    ((struct func_8002430C_Struct *)D_800CBDA4)->unkF = 1;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk49 = 3;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4A = 0;
    ((struct func_8002430C_Struct *)D_800CBDA4)->unk4C = 1;
    func_80023D04();
}


typedef struct func_80024358_Struct {
    u8 pad0[0x49];
    u8 unk49;
    u8 pad4A[2];
    u16 unk4C;
    u8 pad4E[0xB6 - 0x4E];
    u16 unkB6;
} func_80024358_Struct;

void func_80024358(void) {

    ((func_80024358_Struct *)D_800CBDA4)->unk4C--;
    if (((func_80024358_Struct *)D_800CBDA4)->unkB6 != 0) {
        ((func_80024358_Struct *)D_800CBDA4)->unkB6--;
    }
    if (((func_80024358_Struct *)D_800CBDA4)->unk4C == 0) {
        switch (((func_80024358_Struct *)D_800CBDA4)->unk49) {
        case 0:
            func_8002420C();
            return;
        case 1:
            func_80024278();
            break;
        }
    }
}

