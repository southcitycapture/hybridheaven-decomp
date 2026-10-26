#include "common.h"


extern s32 func_80032FB0();
extern u8 D_8005CE20[];
extern u8 D_8005CE70[];

s32 func_800024D0(void)
{
  s32 var_s0;
  s32 var_s1;
  int new_var;
  s32 var_s2;
  var_s2 = 0;
 var_s0 = 0; var_s1 = 0; do { if (func_80032FB0(D_8005CE20, D_8005CE70 + (var_s0 * 0x68), var_s1) != 0) { new_var = 1 << var_s1; var_s2 = (var_s2 | new_var) & 0xFFFF; } var_s0 = (var_s0 + 1) & 0xFF;
    var_s1 = var_s0;
  }
  while (var_s0 < 4);
  return var_s2;
}



void func_8000257C(u8 arg0) {
    s32 temp_a2;

    temp_a2 = arg0;
    func_80032FB0(D_8005CE20, D_8005CE70 + temp_a2 * 0x68, temp_a2);
}


extern void func_800308D0(void *, s32);

void func_800025C8(s32 arg0) {
    s32 temp_a1;
    s32 *pad;

    pad = &arg0;
    temp_a1 = arg0 & 0xFF;
    func_800308D0(&D_8005CE70[temp_a1 * 0x68], temp_a1);
}


extern s32 func_8002A350();

void func_8000260C(u8 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    func_8002A350(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 8), *(s32 *)(arg1 + 4), arg1 + 0xE, arg1 + 0xA, arg2, arg3);
}


extern s32 func_80031BC0();

void func_80002684(u8 arg0, u8 *arg1) {
    func_80031BC0(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA);
}


extern s32 func_8002EE40();

void func_800026E4(u8 arg0, u8 *arg1, s32 arg2) {
    func_8002EE40(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA, arg2);
}

extern s32 func_80032DD0();

void func_80002750(s32 arg0, s32 a1, s32 a2) {
    s32 temp_a3;

    temp_a3 = arg0 & 0xFF;
    func_80032DD0(D_8005CE70 + (temp_a3 * 0x68), a1, a2, temp_a3);
}

void func_80032AB0(void *, s32, s32, s32);

void func_80002794(s32 arg0, s32 a1, s32 a2) {
    s32 temp_a3;

    temp_a3 = arg0 & 0xFF;
    func_80032AB0(D_8005CE70 + (temp_a3 * 0x68), a1, a2, temp_a3);
}


extern s32 func_80026450();

void func_800027D8(s32 arg0)
{
  u32 temp_a2;
  int new_var3;
  s32 *new_var;
  int new_var2;
  temp_a2 = arg0 & 0xFF;
  new_var2 = ((0xFFFFFFFF & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  temp_a2 = arg0 & 0xFF;
  new_var = (new_var = &arg0);
  new_var3 = 0xFFFFFFFFFFFFFFFF;
  if (((temp_a2 && temp_a2) & ((((((new_var2 & new_var3) & new_var3) & new_var3) & new_var3) & new_var3) & new_var3)) && temp_a2)
  {
  }
  func_80026450(&D_8005CE70[temp_a2 * 0x68]);
}


extern void func_8002A7D0(void *arg0, s32 arg1);

void func_8000281C(s32 arg0) {
    func_8002A7D0(D_8005CE20, arg0);
}


extern s32 func_80029784();

void func_80002844(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80029784((void *)(D_8005CE70 + arg0 * 0x68), arg1, 0, arg2, arg3, arg4);
}



void func_800028A8(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80029784(D_8005CE70 + arg0 * 0x68, arg1, 1, arg2, arg3, arg4);
}

extern s32 D_80037770[];
extern s32 D_80037780[];

void func_8000290C(void)
{
  s32 func_80027A90();
  s32 *temp_s1;
  s32 *var_s0;
  s32 var_s2;
  s32 var_s3;
  var_s2 = 0; var_s3 = 0; var_s0 = &D_80037770[0]; do {
    temp_s1 = (s32 *) ((u8 *) &D_80037780[0] + var_s3);
    if (((*var_s0) != 0) && ((*temp_s1) != 0))
    {
      if (func_80002A94(var_s2 & 0xFF) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      else
        if (func_80027A90(D_8005CE70 + (var_s2 * 0x68), 0) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      *var_s0 -= 1;
    }
    var_s2 += 1;
    var_s3 += 4;
    var_s0 += 1;
  }
  while (var_s2 != 4);
}


s32 func_80002A94(s32);

void func_80002A04(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 != 4; var_s0++) {
        if (func_80002A94(var_s0 & 0xFF) == 0) {
            D_80037780[var_s0] = 1;
            D_80037770[var_s0] = 3;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002A94.s")


extern s32 func_80027A90(void *, s32, s32);

s32 func_80002B44(u8 arg0) {
    u32 temp_a2;

    temp_a2 = arg0 & 0xFF;
    if (D_80037780[temp_a2] != 0) {
        return func_80027A90(D_8005CE70 + temp_a2 * 0x68, 1, temp_a2) & 0xFF;
    }
    return 0xFF;
}



s32 func_80002BAC(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    if (D_80037780[arg0] != 0) {
        D_80037770[arg0] = 3;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/D_8004B910.s")

extern s32 func_80027D04();
extern s32 func_80031FF0();

typedef struct {
    u8 pad[0x68];
} func_80002BE0_Struct;

u8 func_80002BE0(u8 arg0) {
    u8 v = 0;
    func_80002BE0_Struct *p = &((func_80002BE0_Struct *)D_8005CE70)[arg0];

    if (func_80032FB0(D_8005CE20, p, arg0) == 2) {
        v = 2;
    } else {
    }
    if (func_80027D04(D_8005CE20, p, arg0) == 0) {
        v = 7;
    } else {
    }
    if (func_80031FF0(D_8005CE20, p, arg0) == 0) {
        v = 0xF;
    } else {
    }
    if (v) {
    }
    if (v == 0) {
        switch (func_80032FB0(D_8005CE20, p, arg0)) {
        case 0: v = 0; break;
        case 1: v = 1; break;
        case 2: v = 2; break;
        case 4: v = 3; break;
        case 10: v = 5; break;
        case 11: v = 4; break;
        }
    }
    return v;
}


extern s32 D_800308D0(void *);

s32 func_80002D00(u8 arg0) {
    s32 r;
    u8 *p;

    p = D_8005CE70 + arg0 * 0x68;
    r = func_80032FB0(D_8005CE20, p, arg0);
    if (r == 10) {
        r = D_800308D0(p);
    }
    switch (r) {
    case 0: r = 0; break;
    case 1: r = 1; break;
    case 2: r = 2; break;
    case 4: r = 3; break;
    case 10: r = 5; break;
    case 11: r = 4; break;
    default: r = 0; break;
    }
    return r;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_80002EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_8000303C.s")


s32 func_80003118(u8 arg0, s8 *arg1) {
    s32 var_v1;
    u8 t;
    s32 sp1C;

    *arg1 = 0;
    t = func_80002BE0(arg0);
    var_v1 = t & 0xFF;
    if (t == 0) {
        switch (func_80026450(D_8005CE70 + arg0 * 0x68, &sp1C)) {
        case 0:
            var_v1 = 0;
            *arg1 = sp1C / 256;
            break;
        case 1:
            var_v1 = 1;
            break;
        case 2:
            var_v1 = 2;
            break;
        case 3:
            var_v1 = 8;
            break;
        case 4:
            var_v1 = 3;
            break;
        case 5:
            var_v1 = 9;
            break;
        default:
            var_v1 = 0;
            break;
        }
    }
    return var_v1;
}


extern u8 func_80002DBC(u8, u8, u8 *);

u8 func_800031EC(u8 arg0, u8 arg1, u16 arg2, u16 arg3, s32 arg4) {
    u8 v;
    u8 sp26;
    s32 r;

    v = func_80002BE0(arg0);
    if (v == 0) {
        v = func_80002DBC(arg0, arg1, &sp26);
        if (v == 0) {
            r = func_80029784(&D_8005CE70[arg0 * 0x68], sp26, 0, arg2, arg3, arg4);
            switch (r) {
            case 0: v = 0; break;
            case 1: v = 1; break;
            case 2: v = 2; break;
            case 3: v = 8; break;
            case 4: v = 3; break;
            case 5: v = 9; break;
            case 6: v = 0xD; break;
            default: v = 0; break;
            }
        }
    }
    return v;
}


u8 func_800032E0(u8 arg0, u8 arg1, u16 arg2, u16 arg3, s32 arg4) {
    u8 v;
    u8 sp26;

    v = func_80002BE0(arg0);
    if (v == 0) {
        v = func_80002DBC(arg0, arg1, &sp26);
        if (v == 0) {
            switch (func_80029784(D_8005CE70 + arg0 * 0x68, sp26, 1, arg2, arg3, arg4)) {
            case 0: v = 0; break;
            case 1: v = 1; break;
            case 2: v = 2; break;
            case 3: v = 8; break;
            case 4: v = 3; break;
            case 5: v = 9; break;
            default: v = 0; break;
            }
        }
    }
    return v;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800024D0/func_800033CC.s")


typedef struct {
    u8 pad[0x202];
    u8 a[16][33];
    u8 b[16][9];
    u8 c[16];
} func_80003550_Struct;

#define S ((func_80003550_Struct *)arg1)

void func_80003550(u8 arg0, void *arg1) {
    s32 i;

    for (i = 0; i < 32;) {
        S->a[arg0][i++] = 0xA1;
    }
    S->a[arg0][i] = 0;
    for (i = 0; i != 8;) {
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
        S->b[arg0][i++] = 0xA1;
    }
    S->b[arg0][i] = 0;
    S->c[arg0] = 0;
}
#undef S


typedef struct {
    u8 entries[16][32];
    u8 unk200;
    u8 unk201;
} func_800035C4_Struct;

extern void func_800033CC(u8, void *);
extern void func_80003550(u8, void *);

void func_800035C4(u8 arg0, func_800035C4_Struct *arg1) {
    u8 status;
    u8 j;
    u8 value;
    u8 i;

    status = func_80002BE0(arg0);
    if (status != 0) {
        for (i = 0; i < 16; i++) {
            func_80003550(i, arg1);
        }
        arg1->unk201 = 0;
        arg1->unk200 = status;
        return;
    }
    for (j = 0; j < 16; j++) {
        if (func_80032DD0(&D_8005CE70[arg0 * 0x68], j, arg1->entries[j]) == 0) {
            func_800033CC(j, arg1);
        } else {
            func_80003550(j, arg1);
        }
    }
    func_80003118(arg0, &value);
    arg1->unk201 = value;
    arg1->unk200 = 0;
}

