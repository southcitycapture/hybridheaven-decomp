#include "common.h"

#define D_801BBBF0 D_801BBBF0__func_80376300
extern u8 D_801BBBF0[];

struct func_80376300_Struct2 { u8 pad[0x12]; s16 unk12; };
struct func_80376300_Struct1 { u8 pad[0x2C]; struct func_80376300_Struct2 *unk2C; };
struct func_80376300_Struct0 { u8 pad[0x24]; struct func_80376300_Struct1 *unk24; };
struct func_80376300_Struct {
    u8 pad[0xDC];
    struct func_80376300_Struct0 *unkDC;
    u8 pad2[0xEC - 0xE0];
    struct func_80376300_Struct0 *unkEC;
    u8 pad3[0xB98 - 0xF0];
    s16 unkB98;
};

#define G ((struct func_80376300_Struct *)base)
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

s32 func_80376300(s32 arg0) {
    u32 p;
    u32 base;
    s16 b, a, d;
    b = (p = arg0 - 0x7E8, base = (u32)D_801BBBF0, base == p) ? G->unkDC->unk24->unk2C->unk12 : G->unkEC->unk24->unk2C->unk12;
    a = (p == base) ? G->unkB98 : G->unkB98 + 0x1000;
    d = a - b;
    if (ABS(WRAP(d)) < 0x800) {
        return 1;
    }
    return 0;
}
#undef G
#undef WRAP
#undef ABS
#undef D_801BBBF0

extern u8 D_801842A0[];

typedef struct func_803763D4_StructEntry {
    u8 pad[9];
    u8 kind;
    u8 padA[0x12];
} func_803763D4_StructEntry;

typedef struct func_803763D4_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803763D4_StructEntry *entry;
} func_803763D4_StructOutput;

typedef struct func_803763D4_StructArg {
    u8 pad[0xA8];
    u8 flags[0x214];
    s16 value0;
    s16 value1;
} func_803763D4_StructArg;

extern u8 D_8038CD70;
extern func_803763D4_StructOutput D_8038CD74[];

void func_803763D4(arg0)
    func_803763D4_StructArg *arg0;
{
    func_803763D4_StructOutput *out;
    func_803763D4_StructEntry *entries[13];
    s32 i;
    s32 count;
    s32 n;

    count = 0;
    for (i = 0; i < 14; i = (i + 1) & 0xFF) {
        if (arg0->flags[i * 6] == 1) {
            entries[count] = &(*(func_803763D4_StructEntry (*)[14])D_801842A0)[i];
            count = (count + 1) & 0xFF;
        }
    }
    D_8038CD70 = count;
    out = D_8038CD74;
    for (i = 0, n = count; i < n; i = (i + 1) & 0xFF) {
        out->entry = entries[i];
        if ((entries[i]->kind == 0 && arg0->value0 >= 0) ||
            (entries[i]->kind == 1 && arg0->value1 >= 0)) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}


typedef struct func_803764CC_StructEntry {
    u8 pad[9];
    u8 type;
} func_803764CC_StructEntry;

typedef struct func_803764CC_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803764CC_StructEntry *entry;
} func_803764CC_StructOutput;

extern u8 D_8038CE18;
extern struct func_803767F4_StructOutput D_8038CE1C[];

void func_803764CC(void *arg0) {
    func_803764CC_StructEntry *entries[20];
    func_803764CC_StructOutput *out;
    u8 i;
    u8 count;

    count = 0;
    for (i = 0; i < 20; i++) {
        if (*((u8 *)arg0 + i * 6 + 0xFC) == 1) {
            entries[count++] = (func_803764CC_StructEntry *)(D_801842A0 + i * 0x1C + 0x188);
        }
    }
    D_8038CE18 = count;
    out = (func_803764CC_StructOutput *)D_8038CE1C;
    for (i = 0; i < count; i++) {
        out->entry = entries[i];
        if ((entries[i]->type == 2 && *(s16 *)((u8 *)arg0 + 0x2C0) >= 0) ||
            (entries[i]->type == 3 && *(s16 *)((u8 *)arg0 + 0x2C2) >= 0)) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803765D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376708.s")

extern u8 D_801BBBF0[];

typedef struct func_803767F4_StructEntry {
    u8 pad[6];
    u8 value;
} func_803767F4_StructEntry;

typedef struct func_803767F4_StructOutput {
    u8 enabled;
    u8 pad[3];
    func_803767F4_StructEntry *entry;
} func_803767F4_StructOutput;

typedef struct func_803767F4_StructArg {
    u8 pad[0xA];
    s16 value;
    u8 padC[0x210];
    u8 flags[18];
} func_803767F4_StructArg;


void func_803767F4(arg0)
    func_803767F4_StructArg *arg0;
{
    func_803767F4_StructEntry *entries[3];
    func_803767F4_StructOutput *out;
    u8 i;
    u8 count;

    count = 0;
    for (i = 0; i < 3; i++) {
        if (arg0->flags[i * 6] == 1) {
            entries[count++] = (func_803767F4_StructEntry *)(D_801842A0 + i * 0x1C + 0x6C8);
        }
    }
    D_8038CE18 = count;
    out = D_8038CE1C;
    for (i = 0; i < count; i++) {
        out->entry = entries[i];
        if (arg0->value >= entries[i]->value && *(f32 *)((u8 *)&D_801BBBF0 + 0xB94) < 20.0f) {
            out->enabled = 1;
        } else {
            out->enabled = 0;
        }
        out++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376900.s")


extern void func_803765D4();
extern void func_80376708();
extern void func_80376900(void *);
extern u8 D_801BC03C;
extern u8 D_801BC3D8;

void func_80376B2C(void *arg0) {
    u8 *var_v0;
    u32 temp_v1;

    if ((u32) arg0 == (u32) &D_801BBBF0 + 0x44C) {
        var_v0 = &D_801BC3D8;
    } else {
        var_v0 = &D_801BC03C;
    }
    temp_v1 = *(u32 *) ((u8 *) arg0 + 0x38);
    if ((temp_v1 >> 0x1F) == 0) {
        if (((u32) (*(u32 *) (var_v0 + 0x30) << 0xB) >> 0x1E) != 0) {
            func_803767F4();
            func_80376900(arg0);
            return;
        }
        func_803763D4();
        func_803764CC(arg0);
        return;
    }
    if (((u32) (temp_v1 * 8) >> 0x1F) == 1) {
        func_80376708();
        return;
    }
    func_803765D4();
}


struct func_80376BE4_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
extern u8 D_801842B0[];

void func_80376BE4(struct func_80376BE4_Struct *arg0)
{
  u8 temp_v1;
  if (arg0->unk2D9 < 0xE)
  {
    arg0->unk2D8 = 0;
    return;
  }
  if (arg0->unk2D9 < 0x22)
  {
    arg0->unk2D8 = 1;
    return;
  }
  if (arg0->unk2D9 < 0x25)
  {
    arg0->unk2D8 = 3;
    return;
  }
  if (arg0->unk2D9 < 0x3E)
  {
    arg0->unk2D8 = 2;
    return;
  }
  if (arg0->unk2D9 < 0x41)
  {
    arg0->unk2D8 = 8;
    return;
  }
  if (arg0->unk2D9 < 0x4E)
  {
    temp_v1 = D_801842B0[((unsigned int) arg0->unk2D9) * 0x1C];
    if (temp_v1 == 7)
    {
      goto case7;
    }
    if (temp_v1 == 8)
    {
      goto case8;
    }
    if (temp_v1 == 9)
    {
      goto case9;
    }
    if (temp_v1 == 10)
    {
      goto case10;
    }
    arg0->unk2D8 = 4;
    return;
    case7:
    arg0->unk2D8 = 4;

    return;
    case8:
    arg0->unk2D8 = 6;

    return;
    case9:
    arg0->unk2D8 = 5;

    return;
    case10:
    arg0->unk2D8 = 7;

  }
}


struct func_80376CCC_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

void func_80376CCC(struct func_80376CCC_Struct *arg0) {
    if (arg0->unk2D9 < 0x14) {
        arg0->unk2D8 = 0xB;
        return;
    }
    if (arg0->unk2D9 < 0x1E) {
        arg0->unk2D8 = 0xC;
        return;
    }
    arg0->unk2D8 = 0xB;
}

