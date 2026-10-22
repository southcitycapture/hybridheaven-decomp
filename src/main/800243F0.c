#include "common.h"


struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};

extern u8 *D_800CBDA0;
extern struct func_800243F0_Struct *D_800CBDA4;

void func_800243F0(void) {
    D_800CBDA4->unk18 = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    D_800CBDA4->unk1D = 0;
}


struct func_8002442C_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

void func_8002442C(void) {
    struct func_8002442C_Struct *s;
    s32 q;

    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1D = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_8002442C_Struct *) D_800CBDA4)->unk1C = *D_800CBDA0;
    D_800CBDA0 += 1;
    s = (struct func_8002442C_Struct *) D_800CBDA4;
    q = (s32) ((s->unk1C << 8) & 0xFFFF) - (s32) s->unk18;
    s->unk1E = (s16) (q / (s32) s->unk1D);
}


struct func_800244C8_Struct {
    u8 pad[0x18];
    u16 unk18;
    u8 unk1A[2];
    u8 unk1C;
    u8 unk1D;
    s16 unk1E;
};

void func_800244C8(void) {
    s32 var_v1;

    ((struct func_800244C8_Struct *) D_800CBDA4)->unk1D = (u8) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D - 1);
    if (((struct func_800244C8_Struct *) D_800CBDA4)->unk1D != 0) {
        var_v1 = ((struct func_800244C8_Struct *) D_800CBDA4)->unk18;
        var_v1 += ((struct func_800244C8_Struct *) D_800CBDA4)->unk1E;
        if (var_v1 < 0x100) {
            var_v1 = 0x100;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) var_v1;
        return;
    }
    ((struct func_800244C8_Struct *) D_800CBDA4)->unk18 = (u16) (((struct func_800244C8_Struct *) D_800CBDA4)->unk1C << 8);
}


struct func_80024540_Struct {
    u32 unk0;
    u8 pad4[8];
    u8 unkC;
    u8 unkD;
    u8 padE[0x58 - 0xE];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
};
extern s8 *D_800482A0[];
extern s8 D_80048894[];
extern void func_80024614(s8 *);

void func_80024540(void) {
    s8 *var_a0;
    u32 var_v0;
    u8 temp_a1;

    var_v0 = ((struct func_80024540_Struct *)D_800CBDA4)->unk0 & 0x7F0000;
    if (var_v0 != 0) {
        var_v0 >>= 8;
        if (var_v0 < 0xA00U) {
            var_v0 = 0xA00;
        } else if (var_v0 >= 0x7501U) {
            var_v0 = 0x7500;
        }
        ((struct func_80024540_Struct *)D_800CBDA4)->unk5B = 0;
        ((struct func_80024540_Struct *)D_800CBDA4)->unk58 = var_v0 | 0x8000;
    }
    ((struct func_80024540_Struct *)D_800CBDA4)->unkD = *D_800CBDA0;
    D_800CBDA0 += 1;
    temp_a1 = ((struct func_80024540_Struct *)D_800CBDA4)->unkC;
    if ((s32)temp_a1 < 2) {
        var_a0 = D_800482A0[temp_a1];
        var_a0 += ((struct func_80024540_Struct *)D_800CBDA4)->unkD * 7;
    } else {
        var_a0 = D_80048894;
    }
    func_80024614(var_a0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024614.s")


struct func_80024780_Struct {
    u8 pad0[0xD];
    u8 unkD;
    u8 pad1[0x25 - 0xE];
    u8 unk25;
};

extern s8 D_8004889C[];
extern void func_80024614(s8 *);

void func_80024780(void)
{
  int new_var;
  struct func_80024780_Struct *temp_v0;
  s8 *temp_a0;
  temp_v0 = D_800CBDA4;
  new_var = 8;
  temp_a0 = (s8 *) (D_8004889C + ((temp_v0->unk25 * new_var) - 0x240));
  temp_v0->unkD = temp_a0[0];
  temp_a0 = temp_a0 + 1;
  func_80024614(temp_a0);
}


extern void func_80024540(void);
extern void func_80024820(void);

void func_800247C8(void) {
    func_80024820();
    func_80024540();
}


extern void func_80024CF8(void);

void func_800247F0(void) {
    func_80024820();
    func_80024540();
    func_80024CF8();
}


struct func_80024820_Struct {
    u32 unk0;
    u8 pad4[0x3A - 4];
    s16 unk3A;
    u8 pad3C[0x47 - 0x3C];
    u8 unk47;
};

void func_80024820(void) {
    struct func_80024820_Struct *ptr;
    u32 temp_a1;
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ptr = (struct func_80024820_Struct *) D_800CBDA4;
    temp_a1 = ptr->unk0;
    if ((temp_a1 / 0x1000000) != 0) {
        ptr->unk3A = (s16) (temp_v0 * (temp_a1 >> 24));
    } else {
        ptr->unk3A = (s16) (temp_v0 << 8);
    }
    ((struct func_80024820_Struct *) D_800CBDA4)->unk47 = 0;
}


struct func_8002487C_Struct {
    u8 pad0[0x3A];
    u16 unk3A;
    u8 pad1[0x44 - 0x3C];
    s16 unk44;
    u8 unk46;
    u8 unk47;
};

void func_8002487C(void)
{
  s32 new_var;
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk47 = D_800CBDA0[0];
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk46 = (D_800CBDA0 += 1)[0];
  D_800CBDA0 += 1;
  new_var = (s32) (((((struct func_8002487C_Struct *) D_800CBDA4)->unk46 << 8) & 0xFFFF) - ((struct func_8002487C_Struct *) D_800CBDA4)->unk3A);
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk44 = (s16) (new_var / ((s32) ((struct func_8002487C_Struct *) D_800CBDA4)->unk47));
}


void func_80024918(void) {
    s32 var_v1;

    *((u8 *) D_800CBDA4 + 0x6) = (u8) (*((u8 *) D_800CBDA4 + 0x6) | 1);
    *((u8 *) D_800CBDA4 + 0x47) = (u8) (*((u8 *) D_800CBDA4 + 0x47) - 1);
    if (*((u8 *) D_800CBDA4 + 0x47) != 0) {
        var_v1 = *((u16 *) ((u8 *) D_800CBDA4 + 0x3A));
        var_v1 += *((s16 *) ((u8 *) D_800CBDA4 + 0x44));
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) var_v1;
        return;
    }
    *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) (*((u8 *) D_800CBDA4 + 0x46) << 8);
}


struct func_80024998_Struct {
    u8 pad[0x4E];
    u16 f4E;
    u16 f50;
    u8 pad3[0x2];
    s16 f54;
};

extern u8 D_800481FE[];
extern u8 D_8004817A[];

void func_80024998(void) {
    u8 temp;

    ((struct func_80024998_Struct *) D_800CBDA4)->f4E = *(u16 *) &D_800481FE[-(*D_800CBDA0 * 2)];
    D_800CBDA0 = D_800CBDA0 + 1;
    temp = *D_800CBDA0;
    D_800CBDA0 = D_800CBDA0 + 1;
    ((struct func_80024998_Struct *) D_800CBDA4)->f50 = *(u16 *) &D_8004817A[-(((s32) (temp & 0xF0) >> 2) * 2)];
    ((struct func_80024998_Struct *) D_800CBDA4)->f54 = (s16) ((temp & 0xF) * 4);
}


struct func_80024A1C_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u16 unk4A;
    u16 unk4C;
    u8 pad4E[4];
    u16 unk52;
};

#define OBJ ((struct func_80024A1C_Struct *)D_800CBDA4)

void func_80024A1C(void) {
    u16 temp_a0;
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (temp_v0 == 0) {
        OBJ->unk52 = 0;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = 0x7FFF;
        }
    } else {
        temp_a0 = OBJ->unk52;
        OBJ->unk52 = *(u16 *)(D_800481FE + -(temp_v0 * 2)) + 1;
        if ((OBJ->unk22 == 0) && (OBJ->unk49 == 2)) {
            OBJ->unk4C = OBJ->unk52;
            if (temp_a0 == 0) {
                OBJ->unk4A = 0;
            }
        }
    }
}

#define D_800CBDA4 D_800CBDA4__func_80024ADC

struct func_80024ADC_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u8 pad4A[0x4C - 0x4A];
    u16 unk4C;
    u8 pad4E[0x56 - 0x4E];
    u16 unk56;
};

extern u8 D_800481FA[];
extern struct func_80024ADC_Struct *D_800CBDA4;

void func_80024ADC(void)
{
  D_800CBDA4->unk56 = *((u16 *) (&D_800481FA[-(((*D_800CBDA0) << 1) << 2)]));
  D_800CBDA0 += 1;
  if ((D_800CBDA4->unk22 == 0) && (D_800CBDA4->unk49 == 3))
  {
    D_800CBDA4->unk4C = D_800CBDA4->unk56;
  }
}
#undef D_800CBDA4


extern void func_80028EE0(s32, s32, s32, s32 *);
extern void func_80030770(s32, void *, u8);
extern s32 D_800479CC;
extern s32 D_800479D0;
extern s32 D_800498F0;
extern u8 D_800CBAB4;
extern u8 D_800CBBE0[];
extern s32 D_800CBE08;

void func_80024B4C(void) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_a2;
    s32 sp20;

    if (((u8 *)D_800CBDA4)[0x10] != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, 0);
    }
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1 * 0x28;
    if (sp20 == 0) {
        sp20 = D_800479CC;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 3, &sp20);
    temp_v1_2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    sp20 = temp_v1_2 << 7;
    if (sp20 == 0) {
        sp20 = D_800479D0;
    }
    func_80028EE0(D_800498F0, D_800CBE08, 4, &sp20);
    temp_a2 = ((u8 *)D_800CBDA4)[0x10];
    if (temp_a2 != 0) {
        func_80030770(D_800498F0, (D_800CBAB4 * 0x1C) + D_800CBBE0, temp_a2);
    }
}

extern u8 D_800CBDA8[];
extern u8 D_800CBDAF[];

void func_80024C84(void) {
    s32 a;
    s32 b;
    u8 c;
    u8 *p;
    s32 i;

    a = *D_800CBDA0++;
    b = *D_800CBDA0++;
    if (a != 0) {
        i = a;
        p = D_800CBDA8 + a;
        a = a * 1;
        c = p[-1];
        if (c != 0) {
            if (b != 0) {
                D_800CBDAF[a] = a + 0xF0;
                return;
            }
            D_800CBDAF[i] = c;
            p[-1] = 0;
        }
    }
}



struct func_80024CF8_Struct {
    u8 pad[0x58];
    s16 unk58;
    u8 unk5A;
    u8 unk5B;
};

extern void func_80022A84(u8);

void func_80024CF8(void) {
    u8 temp_v1;

    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk5B = 0;
    temp_v1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80024CF8_Struct *) D_800CBDA4)->unk58 = (s16) (temp_v1 << 8);
    func_80022A84(D_800CBAB4);
}


struct func_80024D50_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x58 - 7];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

void func_80024D50(void) {
    s32 diff;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_80024D50_Struct *) D_800CBDA4)->unk5A = *D_800CBDA0;
    D_800CBDA0++;
    if ((((struct func_80024D50_Struct *) D_800CBDA4)->unk58 >= 0x8000) || !(((struct func_80024D50_Struct *) D_800CBDA4)->unk6 & 4)) {
        diff = ((((struct func_80024D50_Struct *) D_800CBDA4)->unk5A << 8) & 0xFFFF) - (((struct func_80024D50_Struct *) D_800CBDA4)->unk58 & 0x7FFF);
        ((struct func_80024D50_Struct *) D_800CBDA4)->unk5C = diff / ((struct func_80024D50_Struct *) D_800CBDA4)->unk5B;
    }
}

#define func_80022A84 func_80022A84__func_80024E0C

struct func_80024E0C_Struct {
    u8 pad[0x58];
    u16 unk58;
    u8 unk5A;
    u8 unk5B;
    s16 unk5C;
};

extern void func_80022A84(u8, s32, void **);

void func_80024E0C(void) {
    s32 temp_a1;
    s32 var_v1;

    temp_a1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58;
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B = (u8) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B - 1);
    temp_a1 &= 0x8000;
    temp_a1 &= 0xFFFF;
    if (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5B != 0) {
        var_v1 = ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 & 0x7FFF;
        var_v1 += ((struct func_80024E0C_Struct *) D_800CBDA4)->unk5C;
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0x8000) {
            var_v1 = 0x7F00;
        }
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) var_v1;
    } else {
        ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (((struct func_80024E0C_Struct *) D_800CBDA4)->unk5A << 8);
    }
    ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58 = (u16) (temp_a1 | ((struct func_80024E0C_Struct *) D_800CBDA4)->unk58);
    func_80022A84(D_800CBAB4, temp_a1, (void **) &D_800CBDA4);
}
#undef func_80022A84


void func_80024EB8(void) {
    *(s16 *)((u8 *)D_800CBDA4 + 0x2E) = (s16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
}


struct func_80024EE8_Struct {
    u8 pad[0x30];
    s16 unk30;
};

void func_80024EE8(void) {
    ((struct func_80024EE8_Struct *) D_800CBDA4)->unk30 = *((s8 *) D_800CBDA0) * 4;
    D_800CBDA0++;
}


struct func_80024F18_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 pad94;
    u8 unk95;
    u8 pad96[3];
    u8 unk99;
    u16 unk9A;
    u8 pad9C[2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};
#define P ((struct func_80024F18_Struct *)D_800CBDA4)

void func_80024F18(void) {
    s32 a;
    u8 v;

    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) v < 0x64) {
        P->unk93 = v;
    } else {
        P->unk93 = 0U;
        P->unk9E = (u8) (v - 0x64);
    }
    v = *D_800CBDA0;
    D_800CBDA0 += 1;
    if (v < 0x40) {
        if (v < 0x20) {
            P->unk99 = 1;
            v = v * 8;
        } else {
            P->unk99 = 2;
            v = v * 4;
        }
    } else if (v < 0x80) {
        v = v * 2;
        P->unk99 = 4;
    } else if (v == 0xFF) {
        P->unk99 = 0x10;
    } else {
        P->unk99 = 8;
    }
    P->unk95 = v;
    P->unk9A = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0 += 1;
    a = P->unk9E;
    if (a != 0) {
        P->unkA0 = (s16) ((s32) P->unk9A / a);
    }
}
#undef P


struct func_8002507C_Struct {
    u8 pad0[0x93];
    u8 unk93;
    u8 unk94;
    u8 pad1[0x01];
    u16 unk96;
    u8 unk98;
    u8 pad3[0x01];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
};

void func_8002507C(void) {
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk94 = ((struct func_8002507C_Struct *) D_800CBDA4)->unk93;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk9F = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9E;
    if (((struct func_8002507C_Struct *) D_800CBDA4)->unk9E == 0) {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = ((struct func_8002507C_Struct *) D_800CBDA4)->unk9A;
    } else {
        ((struct func_8002507C_Struct *) D_800CBDA4)->unk9C = 0;
    }
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk96 = 0;
    ((struct func_8002507C_Struct *) D_800CBDA4)->unk98 = (u8) ((struct func_8002507C_Struct *) D_800CBDA4)->unk96;
}


struct func_800250D4_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad1[0x5];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
};

extern void func_80025150(void *);

void func_800250D4(void)
{
  u8 temp_v1;
  u8 temp_v1_2;
  temp_v1 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk94;
  if (temp_v1)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk94 = (u8) (temp_v1 - 1);
    return;
  }
  temp_v1_2 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F;
  if (temp_v1_2)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F = (u8) (temp_v1_2 - 1);
    if (((struct func_800250D4_Struct *) D_800CBDA4)->unk9F != 0)
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) (((struct func_800250D4_Struct *) D_800CBDA4)->unk9C + ((struct func_800250D4_Struct *) D_800CBDA4)->unkA0);
    }
    else
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) ((struct func_800250D4_Struct *) D_800CBDA4)->unk9A;
    }
  }
  func_80025150(&D_800CBDA4);
}


struct func_80025150_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad1[0x36 - 7];
    s16 unk36;
    u8 pad2[0x94 - 0x38];
    u8 unk94;
    u8 unk95;
    u16 unk96;
    u8 unk98;
    u8 unk99;
    u8 pad3[2];
    u16 unk9C;
};
extern u8 D_80048200[];
#define P ((struct func_80025150_Struct *)D_800CBDA4)

void func_80025150(void *arg0) {
    if (arg0) {}
    if (P->unk94 == 0) {
        P->unk96 = P->unk96 + P->unk95;
        if (P->unk96 >= 0x100) {
            P->unk96 = P->unk96 & 0xFF;
            P->unk6 = P->unk6 | 2;
            P->unk98 = P->unk98 + P->unk99;
            P->unk98 = P->unk98 & 0x3F;
            if (P->unk9C < 0x8000) {
                P->unk36 = P->unk9C >> 7;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 8;
            } else {
                P->unk36 = (P->unk9C >> 8) & 0x7F;
                P->unk36 = P->unk36 + 2;
                P->unk36 = (D_80048200[P->unk98 & 0x1F] * P->unk36) >> 1;
            }
            if (P->unk98 >= 0x20) {
                P->unk36 = -P->unk36;
            }
        }
    }
}


struct func_80025280_Struct {
    u8 pad0[0x9A];
    u16 unk9A;
    u8 pad9C[0x2];
    u8 unk9E;
    u8 pad9F;
    s16 unkA0;
};

void func_80025280(void) {
    u8 temp_v0;
    struct func_80025280_Struct *s;

    temp_v0 = *D_800CBDA0;
    ((struct func_80025280_Struct *) D_800CBDA4)->unk9E = temp_v0;
    D_800CBDA0 += 1;
    if (temp_v0 != 0) {
        s = (struct func_80025280_Struct *) D_800CBDA4;
        s->unkA0 = (s16) ((s32) s->unk9A / (s32) s->unk9E);
    }
}


struct func_800252F4_Struct {
    u8 pad0[0x8D];
    u8 unk8D;
    u16 unk8E;
    s16 unk90;
    u8 unk92;
};

void func_800252F4(void) {
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk92 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E = (u16) (*D_800CBDA0 << 8);
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8E += *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D = 0;
    ((struct func_800252F4_Struct *) D_800CBDA4)->unk90 = (s16) ((struct func_800252F4_Struct *) D_800CBDA4)->unk8D;
    if (((struct func_800252F4_Struct *) D_800CBDA4)->unk92 == 0) {
        *(s16 *) ((u8 *) D_800CBDA4 + 0x38) = 0;
    }
}


struct func_8002538C_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad7[0x30];
    u16 unk38;
    u8 pad3a[0x53];
    u8 unk8D;
    u16 unk8E;
    u16 unk90;
    u8 unk92;
};

extern u8 D_80048220[];

void func_8002538C(void) {
    s32 temp_v1;

    ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 + ((struct func_8002538C_Struct *) D_800CBDA4)->unk92;
    temp_v1 = ((struct func_8002538C_Struct *) D_800CBDA4)->unk90;
    if (temp_v1 >= 0x100) {
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk90 = temp_v1 & 0xFF;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk6 |= 2;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 = D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D];
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D++;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk8D &= 0x7F;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 += D_80048220[((struct func_8002538C_Struct *) D_800CBDA4)->unk8D] << 8;
        ((struct func_8002538C_Struct *) D_800CBDA4)->unk38 &= ((struct func_8002538C_Struct *) D_800CBDA4)->unk8E;
    }
}



void func_80025448(void) {
    D_800CBDA0 += 3;
}


struct func_80025460_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x28 - 0x1A];
    s32 unk28;
    u8 pad2[0x7D - 0x2C];
    u8 unk7D;
    u8 pad3[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
};

void func_80025460(void)
{
  struct func_80025460_Struct *p;
  s32 divisor;
  s32 temp_a0;
  s32 temp_a1;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  divisor = (s32) (((((u32) (((struct func_80025460_Struct *) D_800CBDA4)->unk7D << 0x10)) / ((struct func_80025460_Struct *) D_800CBDA4)->unk18) + 1) & 0xFFFF);
  temp_a0 = ((struct func_80025460_Struct *) D_800CBDA4)->unk80 - ((struct func_80025460_Struct *) D_800CBDA4)->unk28;
  ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = temp_a0 / divisor;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  ;
  if (((struct func_80025460_Struct *) D_800CBDA4)->unk84 == 0)
  {
    if (temp_a0 < 0)
    {
      ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 - 1;
      return;
    }
    ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 + 1;
  }
}



struct func_80025500_Struct {
    u8 pad0[8];
    u8 *unk8;
    u8 padC[0x25 - 0xC];
    u8 unk25;
    u8 pad26[2];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
    u8 unk8C;
};

#define OBJ ((struct func_80025500_Struct *)D_800CBDA4)

void func_80025500(void) {
    s32 valid;
    s32 value;

    valid = *D_800CBDA0++ == 0xE4;
    if (valid) {
        if (D_800CBAB4 < 0x10 && OBJ->unk8A == 0) {
            OBJ->unk8C = 0;
            OBJ->unk7C = *D_800CBDA0;
            D_800CBDA0++;
            OBJ->unk7D = *D_800CBDA0;
            D_800CBDA0++;
            value = *D_800CBDA0++;
            value = (value - OBJ->unk25) << 8;
            OBJ->unk80 = OBJ->unk28 + value;
            func_80025460();
        } else {
            D_800CBDA0 += 3;
        }
        OBJ->unk8 = D_800CBDA0;
    }
}


struct func_800255FC_Struct {
    u8 pad_0[6];
    u8 unk6;
    u8 pad_7[0x21];
    s32 unk28;
    u8 pad_2C[0x50];
    u8 unk7C;
    u8 unk7D;
    u8 pad_7E[2];
    s32 unk80;
    s32 unk84;
    u8 pad_88[4];
    u8 unk8C;
};

extern void func_80025834(void **);

void func_800255FC(void)
{
  long temp_v1;
  if (((struct func_800255FC_Struct *) D_800CBDA4)->unk8C == 0)
  {
    temp_v1 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C;
    if (temp_v1 != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C = (u8) (temp_v1 - 1);
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk6 | 2);
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk7D = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D - 1);
    if (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 + ((struct func_800255FC_Struct *) D_800CBDA4)->unk84;
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk80;
    return;
  }
  func_80025834((void **) &D_800CBDA4);
}


struct func_80025694_Struct {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad1[0x28 - 0x7];
    s32 unk28;
    u8 pad2[0x7C - 0x2C];
    u8 unk7C;
    u8 pad3[0x84 - 0x7D];
    s32 unk84;
    u8 pad4[0x8C - 0x88];
    u8 unk8C;
};

void func_80025694(void) {
    extern void func_80025834();

    if (((struct func_80025694_Struct *) D_800CBDA4)->unk8C == 0) {
        if (((struct func_80025694_Struct *) D_800CBDA4)->unk7C == 0) {
            ((struct func_80025694_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_80025694_Struct *) D_800CBDA4)->unk6 | 2);
            ((struct func_80025694_Struct *) D_800CBDA4)->unk28 = (s32) (((struct func_80025694_Struct *) D_800CBDA4)->unk28 + ((struct func_80025694_Struct *) D_800CBDA4)->unk84);
        }
    } else {
        func_80025834();
    }
}


struct func_800256FC_Struct {
    u8 pad0[0x88];
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
};

void func_800256FC(void) {
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8C = 0;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk88 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk89 = *D_800CBDA0;
    D_800CBDA0++;
    ((struct func_800256FC_Struct *) D_800CBDA4)->unk8A = (s16) ((s8) *D_800CBDA0 << 8);
    D_800CBDA0++;
}


typedef struct func_80025768_Struct {
    u8 pad0[0x28];
    s32 unk28;
    u8 pad2C[0x7C - 0x2C];
    u8 unk7C;
    u8 unk7D;
    u8 pad7E[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
    u8 unk88;
    u8 unk89;
    s16 unk8A;
    u8 unk8C;
} func_80025768_Struct;


void func_80025768(void) {
    if (((func_80025768_Struct *) D_800CBDA4)->unk8C == 0) {
        ((func_80025768_Struct *) D_800CBDA4)->unk7C = ((func_80025768_Struct *) D_800CBDA4)->unk88;
        ((func_80025768_Struct *) D_800CBDA4)->unk7D = ((func_80025768_Struct *) D_800CBDA4)->unk89;
        ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
        ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk28 - ((func_80025768_Struct *) D_800CBDA4)->unk8A;
        func_80025460();
        return;
    }
    ((func_80025768_Struct *) D_800CBDA4)->unk80 = ((func_80025768_Struct *) D_800CBDA4)->unk28;
    ((func_80025768_Struct *) D_800CBDA4)->unk28 = ((func_80025768_Struct *) D_800CBDA4)->unk84;
    ((func_80025768_Struct *) D_800CBDA4)->unk7D = 1;
}



void func_800257F8(void) {
    ((u8 *) D_800CBDA4)[0x8C] = 1;
    *(s16 *) ((u8 *) D_800CBDA4 + 0x8A) = *D_800CBDA0;
    D_800CBDA0 += 1;
}


struct func_80025834_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x28 - 7];
    s32 unk28;
    u8 pad2C[0x7D - 0x2C];
    u8 unk7D;
    u8 pad7E[2];
    s32 unk80;
    u8 pad84[6];
    s16 unk8A;
};

#define S ((struct func_80025834_Struct *)D_800CBDA4)

void func_80025834(void **arg0) {
    s32 diff;
    u32 step;

    if (arg0) {}
    S->unk6 |= 2;
    diff = S->unk80 - S->unk28;
    step = diff;
    if (diff < 0) {
        step = -diff;
    }
    step = (s32)(S->unk8A * step) >> 8;
    if (step == 0) {
        step = 1;
    }
    if (diff < 0) {
        S->unk28 -= step;
        if (S->unk28 < S->unk80) {
            S->unk28 = S->unk80;
        }
    } else {
        S->unk28 += step;
        if (S->unk80 < S->unk28) {
            S->unk28 = S->unk80;
        }
    }
    if (S->unk28 == S->unk80) {
        S->unk7D = 0;
    }
}


void func_80025908(void) {
    ((u8 *) D_800CBDA4)[0x5E] = 0;
    *(s32 *)((u8 *) D_800CBDA4 + 0x60) = (s32) D_800CBDA0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x40) = 0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x32) = *(s16 *)((u8 *) D_800CBDA4 + 0x40);
}


struct func_80025940_Struct {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x40 - 0x34];
    s16 unk40;
    u8 pad42[0x5E - 0x42];
    u8 unk5E;
    u8 pad5F;
    u8 *unk60;
};
#define O ((struct func_80025940_Struct *)D_800CBDA4)

void func_80025940(void) {
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    O->unk5E++;
    if ((temp_v0 == 0) || (temp_v0 * 1 != O->unk5E)) {
        O->unk40 += (s8)*D_800CBDA0;
        D_800CBDA0 += 1;
        O->unk32 += (s8)*D_800CBDA0 * 8;
        D_800CBDA0 += 1;
        D_800CBDA0 = O->unk60;
        return;
    }
    O->unk40 = 0;
    O->unk32 = O->unk40;
    D_800CBDA0 += 2;
}


struct func_80025A00_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[0x68 - 0x65];
    s32 unk68;
};

void func_80025A00(void) {
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk64 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk68 = (s32) D_800CBDA0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk42 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A00_Struct *) D_800CBDA4)->unk42;
}


struct func_80025A38_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[3];
    u8 *unk68;
};

#define THIS ((struct func_80025A38_Struct *)D_800CBDA4)

void func_80025A38(void)
{
  u32 temp_v0;
  temp_v0 = *D_800CBDA0;
 D_800CBDA0 += 1; ((struct func_80025A38_Struct *) D_800CBDA4)->unk64++; if ((temp_v0 == 0) || ((temp_v0 ^ 0) != ((struct func_80025A38_Struct *) D_800CBDA4)->unk64)) {
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 += *((s8 *) D_800CBDA0);
    D_800CBDA0 += 1;
    ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 += (*((s8 *) D_800CBDA0)) * 8;
    D_800CBDA0 += 1;
    D_800CBDA0 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk68;
    return;
  }
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk42 = 0;
  ((struct func_80025A38_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A38_Struct *) D_800CBDA4)->unk42;
  D_800CBDA0 += 2;
}
#undef THIS


void func_80025AF8(void) {
    *(s32 *) ((u8 *) D_800CBDA4 + 0x6C) = (s32) D_800CBDA0;
}


void func_80025B10(void) {
    D_800CBDA0 = *(u8 **)((u8 *)D_800CBDA4 + 0x6C);
}



void func_80025B28(void) {
    ((u8 *) D_800CBDA4)[0x70] = 0;
    ((s32 *) D_800CBDA4)[0x74 / 4] = D_800CBDA0;
}


struct func_80025B4C_Struct {
    u8 pad[0x70];
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    s32 unk74;
    s32 unk78;
};

void func_80025B4C(void)
{
  u8 temp_a0;
  ;
  switch ((s32) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70)
  {
    case 0:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      return;

    case 1:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78 = (s32) D_800CBDA0;
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk74;
      return;

    case 2:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 - 1);
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78;
      return;

  }

}


struct func_80025BD8_Struct {
    u32 unk0;
    u8 pad4[0xC];
    u8 unk10;
};
extern u8 D_800CBAD0[];

void func_80025BD8(void) {
    s32 var_a0;
    u8 var_a2;
    s32 var_v1;
    u8 temp_a2;
    struct func_80025BD8_Struct *ptr;

    ptr = (struct func_80025BD8_Struct *) D_800CBDA4;
    if ((u32) (ptr->unk0 & 0x7FFF) < 0x100U) {
        var_a0 = 0;
    } else {
        var_a0 = 1;
    }
    var_a2 = *D_800CBDA0;
    D_800CBDA0 += 1;
    var_a2 += D_800CBAD0[var_a0];
    if (var_a2 >= 0x80) {
        var_a2 = 0x7F;
    }
    if (var_a2 != ptr->unk10) {
        ptr->unk10 = (u8) var_a2;
        func_80030770(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, (u8) var_a2);
    }
}



void func_80025C90(void) {
    *((u8 *)D_800CBDA4 + 0xC) = *D_800CBDA0;
    D_800CBDA0 += 1;
}


extern s8 D_800CBBD8;

void func_80025CBC(void) {
    if (D_800CBAB4 == 0xF) {
        D_800CBBD8 = 0;
    }
}


struct func_80025CDC_Struct {
    u8 pad0[0xE];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x11];
    u8 unk21;
    u8 unk22;
};

extern void func_80026950(s32, void *, s32, s32);

void func_80025CDC(void) {
    if (((struct func_80025CDC_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_80025CDC_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk22 = 1;
}


typedef struct func_80025D78_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x1A];
    u8 unk21;
    u8 unk22;
    u8 pad23;
    u8 unk24;
    u8 pad25[0x27];
    u16 unk4C;
} func_80025D78_Struct;

extern void func_80023D04();
extern void func_80024358(void *);

void func_80025D78(void) {
    s32 temp_v1;

    ((func_80025D78_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((func_80025D78_Struct *) D_800CBDA4)->unk22 = *D_800CBDA0;
    D_800CBDA0 += 1;
    if ((s32) D_800CBAB4 < 0x10) {
        temp_v1 = ((func_80025D78_Struct *) D_800CBDA4)->unk22;
        if (temp_v1 == 0) {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 0;
        } else {
            ((func_80025D78_Struct *) D_800CBDA4)->unk24 = (u8) ((s32) (((func_80025D78_Struct *) D_800CBDA4)->unk21 * temp_v1) >> 7);
            if (((func_80025D78_Struct *) D_800CBDA4)->unk24 == 0) {
                ((func_80025D78_Struct *) D_800CBDA4)->unk24 = 1;
            }
        }
        ((func_80025D78_Struct *) D_800CBDA4)->unk6 = (u8) (((func_80025D78_Struct *) D_800CBDA4)->unk6 | 1);
        if (((func_80025D78_Struct *) D_800CBDA4)->unk4C != 0) {
            func_80024358(&D_800CBDA4);
        }
        if (((func_80025D78_Struct *) D_800CBDA4)->unk6 & 1) {
            func_80023D04();
        }
    }
}


void func_80025E78(void) {
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xB8) = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xBB) = *D_800CBDA0;
    D_800CBDA0 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025ED4.s")


extern void func_80026140(s32, u8, s32, s32);

void func_80026058(void) {
    u8 temp_a1;

    temp_a1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    func_80026140(0, temp_a1, 0, 0);
}



void func_80026098(void) {
    u8 temp_a1;
    u8 temp_a2;

    temp_a1 = *D_800CBDA0++;
    temp_a2 = *D_800CBDA0++;
    func_80026140(1, temp_a1, temp_a2, 0);
}


extern void func_800261C4(s32);

void func_800260E0(void) {
    func_800261C4(2);
}



void func_80026100(void) {
    func_800261C4(3);
}



void func_80026120(void) {
    func_800261C4(4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026140.s")


void func_800261C4(s32 arg0)
{
  u8 temp_a1;
  u8 temp_a2;
  u8 temp_a3;
  s16 temp_s16;
  temp_a1 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a2 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a3 = D_800CBDA0[(arg0 & 0xFF) * 0];
  temp_s16 = (s16) (((s8) (temp_a3 & 0xFF)) << 8);
  D_800CBDA0 = D_800CBDA0 + 1;
  func_80026140(arg0 & 0xFF, temp_a1, temp_a2, temp_s16);
}


struct func_8002622C_Struct {
    s32 unk0;
    u8 unk4;
    u8 pad5[9];
    u8 unkE;
    u8 unkF;
};


void func_8002622C(void) {
    if (((struct func_8002622C_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_8002622C_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk0 = 0;
    ((struct func_8002622C_Struct *) D_800CBDA4)->unk4 = ((struct func_8002622C_Struct *) D_800CBDA4)->unk0;
}



void func_800262AC(void) {
    D_800CBDA0 += 1;
}



void func_800262C4(void) {
    D_800CBDA0 += 2;
}



void func_800262DC(void) {
    D_800CBDA0 += 3;
}

