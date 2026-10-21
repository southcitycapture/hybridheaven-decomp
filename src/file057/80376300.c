#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803763D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803764CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803765D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376708.s")

#define D_801BBBF0 D_801BBBF0__func_803767F4
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

extern u8 D_801842A0[];
extern u8 D_8038CE18;
extern func_803767F4_StructOutput D_8038CE1C[];

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
#undef D_801BBBF0

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376900.s")


extern void func_803763D4();
extern void func_803764CC(void *);
extern void func_803765D4();
extern void func_80376708();
extern void func_803767F4();
extern void func_80376900(void *);
extern u8 D_801BBBF0;
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

