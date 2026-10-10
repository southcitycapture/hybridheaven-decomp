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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002442C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024540.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_8002487C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024ADC.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024C84.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024E0C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80024F18.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025150.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025500.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025694.s")


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

extern void func_80025460(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025834.s")


void func_80025908(void) {
    ((u8 *) D_800CBDA4)[0x5E] = 0;
    *(s32 *)((u8 *) D_800CBDA4 + 0x60) = (s32) D_800CBDA0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x40) = 0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x32) = *(s16 *)((u8 *) D_800CBDA4 + 0x40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025A38.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80025BD8.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_80026140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800261C4.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800243F0/func_800262DC.s")

