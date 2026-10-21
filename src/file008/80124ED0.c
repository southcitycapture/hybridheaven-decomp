#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80124ED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801251BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801256C4.s")


typedef struct func_80125774_Struct {
    u8 pad0[0x42A0];
    u8 unk42A0;
    u8 pad1[3];
    s32 unk42A4;
    s32 unk42A8;
    u8 unk42AC;
    u8 unk42AD;
    u8 pad2[2];
    s32 unk42B0;
    s32 unk42B4;
    s32 unk42B8;
    s32 unk42BC;
    u8 unk42C0;
    u8 unk42C1;
    u8 pad3[2];
    s32 unk42C4;
    u8 unk42C8;
    u8 pad4[3];
    s32 unk42CC;
    u8 pad5[0x42EC - 0x42D0];
    u8 unk42EC;
} func_80125774_Struct;

extern func_80125774_Struct D_800892B0;

s32 func_80125774(s32 arg0) {
    if (D_800892B0.unk42A0 != 0) {
        return 0;
    }
    D_800892B0.unk42A0 = 1;
    D_800892B0.unk42A4 = 0;
    D_800892B0.unk42A8 = 0;
    D_800892B0.unk42AD = 0;
    D_800892B0.unk42B0 = 0;
    D_800892B0.unk42B4 = 0;
    D_800892B0.unk42B8 = 0;
    D_800892B0.unk42BC = 0;
    D_800892B0.unk42C4 = 0;
    D_800892B0.unk42CC = arg0;
    D_800892B0.unk42AC = 0;
    D_800892B0.unk42EC = 0;
    D_800892B0.unk42C1 = 0;
    D_800892B0.unk42C0 = 0;
    D_800892B0.unk42C8 = 0;
    return 1;
}


extern u8 D_8008D54C[];

void func_801257DC(void) {
    D_8008D54C[4] = 0;
    func_80125774(0);
    D_8008D54C[4] = 0;
}


extern s32 func_800044FC(u16);
extern s32 func_80004560(u16);
extern s32 func_800045E8(u16);
extern void func_80004ADC(u16, s32);
extern s32 func_80004BB0(u16, s32);
extern s32 func_80017064(u16);

u16 func_80125808(u16 arg0)
{
  u16 *p = &arg0;
  if (D_800892B0.unk42A0 != 0)
  {
    if (arg0 == 0)
    {
      return 1;
    }
    if (arg0 >= 0x271)
    {
      return 0;
    }
    if (D_800892B0.unk42C0 == 0)
    {
      if (func_80017064(arg0) != (-1))
      {
        return 2;
      }
      D_800892B0.unk42A8 = 0;
      D_800892B0.unk42C0 = 1;
    }
    if (D_800892B0.unk42C0 == 1)
    {
      if ((*(((u8 *) (&D_800892B0)) + 0x42FF)) != 0)
      {
        D_800892B0.unk42C4 = func_800044FC(arg0);
      }
      else
      {
        D_800892B0.unk42C4 = func_80004560(arg0);
      }
      if (D_800892B0.unk42C4 == 0)
      {
        return 0;
      }
      D_800892B0.unk42C0 = 2;
    }
    if (func_80004BB0(arg0, D_800892B0.unk42C4) != 0)
    {
      D_800892B0.unk42C0 = 0;
      return 1;
    }
    return 0;
  }
  if (func_80017064(arg0) == (-1))
  {
    if (arg0 != 0)
    {
 do { } while (0);
      D_800892B0.unk42C4 = func_800045E8(*p);
      func_80004ADC(*p, D_800892B0.unk42C4);
      return 1;
    }
  }
  return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80125968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126198.s")


typedef struct func_801262D4_Struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
} func_801262D4_Struct;

extern s32 func_80005204(u16);
extern void func_80126198(s32, u16, ...);
extern func_801262D4_Struct *D_80175490[];

void func_801262D4(u16 arg0, u16 arg1) {
    func_801262D4_Struct *temp_v0;
    func_801262D4_Struct *sp24;
    s32 sp1C;

    temp_v0 = D_80175490[arg0];
    if (temp_v0 != NULL) {
        if (temp_v0->unk0 != 0) {
            sp24 = temp_v0;
            func_80126198(temp_v0->unk0, arg1);
        }
        if (temp_v0->unk8 != 0) {
            sp1C = temp_v0->unk4 & 0xFFFFFF;
            func_80126198(func_80005204(temp_v0->unk8) + sp1C, arg1, sp1C);
        }
    }
}


typedef struct func_80126360_Struct {
    u8 pad[0x2C];
    s32 unk2C;
    s32 unk30;
} func_80126360_Struct;

void func_80126360(func_80126360_Struct *arg0) {
    arg0->unk2C = 0;
    arg0->unk30 = 0;
}

typedef struct func_801264D4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    u16 unk12;
} func_801264D4_Sub;
typedef struct func_801264D4_Obj {
    u8 pad[0x2C];
    func_801264D4_Sub *unk2C;
    func_801264D4_Sub *unk30;
} func_801264D4_Obj;
extern func_801264D4_Obj *D_8008DA88[];
typedef struct func_8012636C_Src {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
} func_8012636C_Src;
typedef struct func_8012636C_Arg {
    u8 pad[0x38];
    func_8012636C_Src *unk38;
} func_8012636C_Arg;
typedef struct func_8012636C_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    u16 unk12;
} func_8012636C_Sub;
typedef struct func_8012636C_Obj {
    u8 pad[0x2C];
    func_8012636C_Sub *unk2C;
    func_8012636C_Sub *unk30;
} func_8012636C_Obj;

void func_8012636C(func_8012636C_Arg *arg0, s32 arg1) {
    func_8012636C_Obj **p = (func_8012636C_Obj **)D_8008DA88 + arg1;
    if ((*p)->unk2C != NULL) {
        (*p)->unk2C->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        (*p)->unk2C->unk8 = (f32)arg0->unk38->unk8 / 10.0;
        (*p)->unk2C->unkC = (f32)arg0->unk38->unkA / 10.0;
        (*p)->unk2C->unk12 = arg0->unk38->unkC;
        return;
    }
    (*p)->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
    (*p)->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0;
    (*p)->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
    (*p)->unk30->unk12 = arg0->unk38->unkC;
}





void func_801264D4(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u16 arg5) {
    func_801264D4_Obj **temp_v0;
    func_801264D4_Sub *temp_a0;
    func_801264D4_Obj *temp_v1;

    temp_v0 = &D_8008DA88[arg1];
    temp_v1 = *temp_v0;
    temp_a0 = temp_v1->unk2C;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = arg2;
        (*temp_v0)->unk2C->unk8 = arg3;
        (*temp_v0)->unk2C->unkC = arg4;
        (*temp_v0)->unk2C->unk12 = arg5;
        return;
    }
    temp_v1->unk30->unk4 = arg2;
    (*temp_v0)->unk30->unk8 = arg3;
    (*temp_v0)->unk30->unkC = arg4;
    (*temp_v0)->unk30->unk12 = arg5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80126570.s")


typedef struct func_801266B8_Struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
} func_801266B8_Struct;

extern void func_80126570(s32, u16, ...);

void func_801266B8(u16 arg0, u16 arg1) {
    func_801266B8_Struct *temp_v0;
    func_801266B8_Struct *sp24;
    s32 sp1C;

    temp_v0 = D_80175490[arg0];
    if (temp_v0 != NULL) {
        if (temp_v0->unk0 != 0) {
            sp24 = temp_v0;
            func_80126570(temp_v0->unk0, arg1);
        }
        if (temp_v0->unk8 != 0) {
            sp1C = temp_v0->unk4 & 0xFFFFFF;
            func_80126570(func_80005204(temp_v0->unk8) + sp1C, arg1, sp1C);
        }
    }
}

struct func_80126794_Struct;
extern struct func_80126794_Struct D_801BBBF0;

void func_80126744(void) {
    s32 base;

    base = (s32)&D_801BBBF0;
    if (*(u8 *)(base + 0x181) != 0) {
        *(u8 *)(base + 0x182) = 1;
    } else {
        *(u8 *)(base + 0x182) = 0;
    }
    *(u8 *)(base + 0x181) = 0;
    if (*(u8 *)(base + 0x186) != 0) {
        *(u8 *)(base + 0x187) = 1;
    } else {
        *(u8 *)(base + 0x187) = 0;
        *(u16 *)(base + 0x184) = 0;
    }
    *(u8 *)(base + 0x186) = 0;
}


typedef struct func_80126794_Struct {
    u8 pad[0x181];
    u8 unk181;
    u8 unk182;
    u16 unk184;
    u8 unk186;
    u8 unk187;
    u32 unk188;
} func_80126794_Struct;


void func_80126794(void) {
    D_801BBBF0.unk181 = 0;
    D_801BBBF0.unk182 = 0;
    D_801BBBF0.unk184 = 0;
    D_801BBBF0.unk186 = 0;
    D_801BBBF0.unk187 = 0;
    D_801BBBF0.unk188 = 0;
}


extern void func_80017594(u16);

s32 func_801267B8(u16 arg0, s32 arg1) {
    u16 temp_v0;
    u16 temp_v1;

    if (D_8008D54C[4] == 0) {
        func_80125774(arg1);
    }
    temp_v0 = func_80125808(arg0);
    temp_v1 = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    if (temp_v1 == 2) {
        func_80017594(arg0);
    }
    func_801257DC();
    return 1;
}


typedef struct func_80126820_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x181 - 6];
    u8 unk181;
    u8 unk182;
    u8 pad2[4];
    u8 unk187;
    u8 pad3[0x1114 - 0x188];
    u16 unk1114;
} func_80126820_Struct;


s32 func_80126820(u16 arg0) {
    u16 temp_a1;

    temp_a1 = arg0;
    ((func_80126820_Struct *) &D_801BBBF0)->unk1114 = temp_a1;
    if ((((func_80126820_Struct *) &D_801BBBF0)->unk182 != 0) || (((func_80126820_Struct *) &D_801BBBF0)->unk187 != 0)) {
        return 0;
    }
    ((func_80126820_Struct *) &D_801BBBF0)->unk182 = 1;
    ((func_80126820_Struct *) &D_801BBBF0)->unk181 = 1;
    func_801266B8(((func_80126820_Struct *) &D_801BBBF0)->unk4, temp_a1);
    return 1;
}


s32 func_80126880(u16 arg0) {
    if ((D_801BBBF0.unk182 != 0) || (D_801BBBF0.unk187 != 0)) {
        return 0;
    }
    D_801BBBF0.unk187 = 1;
    D_801BBBF0.unk186 = 1;
    D_801BBBF0.unk184 = arg0;
    return 1;
}


typedef struct func_801268CC_Struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad1[0x3A2 - 4];
    u16 unk3A2;
} func_801268CC_Struct;

s32 func_801268CC(u16 arg0)
{
  func_801268CC_Struct *p;
  ;
  ((func_801268CC_Struct *) (&D_801BBBF0))->unk3A2 = ((func_801268CC_Struct *) (&D_801BBBF0))->unk2;
  if (arg0 != 0)
  {
    ((func_801268CC_Struct *) (&D_801BBBF0))->unk3A2 = arg0;
  }
  return 1;
}


typedef struct func_801268F4_Struct {
    u8 pad[0x18E];
    u16 unk18E;
    u16 unk190;
    u16 unk192;
    u16 unk194;
    u16 unk196;
} func_801268F4_Struct;

s32 func_801268F4(s32 arg0) {
    if (((func_801268F4_Struct *)&D_801BBBF0)->unk18E == 0) {
        ((func_801268F4_Struct *)&D_801BBBF0)->unk18E = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk190 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk192 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk196 = 0;
        return 1;
    }
    return 0;
}


extern s8 D_801BBF90;

s32 func_80126930(s32 arg0) {
    s32 *p = &arg0;
    D_801BBF90 = arg0;
    return 1;
}



u8 func_80126944(void) {
    return D_801BBF90;
}


extern u8 D_801BBD72;

u8 func_80126950(void) {
    return D_801BBD72;
}


extern u8 D_801BBD77;

u8 func_8012695C(void) {
    return D_801BBD77;
}


extern s16 func_80020EA0(s32);
extern s16 D_801BBBFE;
extern s16 D_801BBC00;
extern s16 D_801BBC02;
extern s16 D_801BBC04;

s32 func_80126968(void) {
    D_801BBBFE = func_80020EA0(0);
    D_801BBC00 = func_80020EA0(1);
    D_801BBC02 = func_80020EA0(2);
    D_801BBC04 = func_80020EA0(3);
    return 1;
}


extern void func_800208C4(u16);

s32 func_801269C0(void) {
    func_800208C4(D_801BBBFE);
    func_800208C4(D_801BBC00);
    func_800208C4(D_801BBC02);
    func_800208C4(D_801BBC04);
    return 1;
}


extern s32 D_801267B8(u16, s32, void *, s32);

s32 func_80126A0C(s32 arg0, u16 arg1, u8 arg2) {
    u32 f = arg2;

    if (D_801BBBF0.unk188 != 0) {
        if (arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if (f != 0) {
        if (*(u32 *)((u8 *)&D_800892B0 + 0x42D0) >= 0x3001U) {
            D_801BBBF0.unk181 = 1;
            return 0;
        }
    } else {
        if (*(u32 *)((u8 *)&D_800892B0 + 0x42D0) >= 0x3001U) {
            D_801BBBF0.unk181 = 1;
            return 0;
        }
    }
    if (f != 0) {
        *((u8 *)&D_800892B0 + 0x42FF) = 1;
    }
    if (D_801267B8(arg1, 0x3000, &D_800892B0, f) != 1) {
        D_801BBBF0.unk181 = 1;
        *((u8 *)&D_800892B0 + 0x42FF) = 0;
        D_801BBBF0.unk188 = arg0;
        return 0;
    }
    *((u8 *)&D_800892B0 + 0x42FF) = 0;
    return 1;
}


typedef struct func_80126B14_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x72 - 0x38];
    u16 unk72;
    u8 pad3[0x8C - 0x74];
    s32 unk8C;
} func_80126B14_Struct;

extern s32 D_8008D558[];
extern u16 **D_80171CEC[];

s32 func_80126B14(func_80126B14_Struct *arg0, s32 arg1, u16 arg2, u16 arg3) {
    u16 a;

    arg0->unk36 = arg3;
    if (D_801BBBF0.unk188 != 0) {
        if ((u32)arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (arg0->unk36 == 0) {
        arg0->unk8C = arg1;
        arg0->unk72 = arg2;
        arg0->unk2C |= 0x8000;
        return 1;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if ((u32)D_8008D558[10] >= 0x3001U) {
        D_801BBBF0.unk181 = 1;
        return 0;
    }
    arg0->unk72 = arg2;
    if (arg0->unk8C == 0) {
        a = D_80171CEC[arg3][0][0] & 0xFFFFFFF;
        if (a != 0) {
            if (func_801267B8(a, 0x3000) != 1) {
                D_801BBBF0.unk181 = 1;
                D_801BBBF0.unk188 = (u32)arg0;
                return 0;
            }
        }
    }
    arg0->unk8C = arg1;
    a = D_80171CEC[arg3][0][1] & 0xFFFFFFF;
    if (a != 0) {
        if (func_801267B8(a, 0x3000) != 1) {
            D_801BBBF0.unk181 = 1;
            D_801BBBF0.unk188 = (u32)arg0;
            return 0;
        }
    }
    arg0->unk2C |= 0x8000;
    return 1;
}


typedef struct func_80126CC0_Inner {
    u8 pad[0x1E];
    u16 unk1E;
} func_80126CC0_Inner;

typedef struct func_80126CC0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    func_80126CC0_Inner *unk38;
    u8 pad2[0x72 - 0x3C];
    u16 unk72;
    u8 pad3[0x8C - 0x74];
    s32 unk8C;
} func_80126CC0_Struct;


s32 func_80126CC0(func_80126CC0_Struct *arg0, s32 arg1) {
    extern u16 **D_80171CEC[];
    u16 temp_a0;
    u16 temp_a0_2;

    if (arg0->unk38->unk1E == 0) {
        return 1;
    }
    if (D_801BBBF0.unk188 != 0) {
        if ((u32) arg0 != D_801BBBF0.unk188) {
            return 0;
        }
        D_801BBBF0.unk188 = 0;
    }
    if (arg0->unk36 == 0) {
        arg0->unk8C = arg1;
        arg0->unk2C = arg0->unk2C | 0x8000;
        arg0->unk72 = arg0->unk38->unk1E;
        return 1;
    }
    if (D_801BBBF0.unk181 != 0) {
        return 0;
    }
    if ((u32) D_8008D558[10] >= 0x3001) {
        D_801BBBF0.unk181 = 1;
        return 0;
    }
    arg0->unk72 = arg0->unk38->unk1E;
    if (arg0->unk8C == 0) {
        temp_a0 = **D_80171CEC[arg0->unk36] & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0 && func_801267B8(temp_a0, 0x3000) != 1) {
            D_801BBBF0.unk181 = 1;
            D_801BBBF0.unk188 = (u32) arg0;
            return 0;
        }
    }
    arg0->unk8C = arg1;
    temp_a0_2 = (*D_80171CEC[arg0->unk36])[1] & 0x0FFFFFFF & 0xFFFF;
    if (temp_a0_2 != 0 && func_801267B8(temp_a0_2, 0x3000) != 1) {
        D_801BBBF0.unk181 = 1;
        D_801BBBF0.unk188 = (u32) arg0;
        return 0;
    }
    arg0->unk2C = arg0->unk2C | 0x8000;
    return 1;
}


extern void func_8001769C(s32);

void func_80126E88(s32 arg0) {
    s32 *p = &arg0;
    func_8001769C(arg0 & 0xFFFF);
}

extern void func_80005700(void *);
extern s8 D_801BBD76;
struct func_80126F4C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    s16 unk90;
};

/* The 20-byte D_80164E80 is passed BY VALUE to func_8012C4D0 (copied into a1..a3 and the
   two stack arg slots), then the literal 3 goes in the next stack slot. */
typedef struct func_80126EAC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80126EAC_Struct;

extern void *func_8012C4D0(void *, func_80126EAC_Struct, s32);
extern func_80126EAC_Struct D_80164E80;

void func_80126EAC(struct func_80126F4C_Struct *arg0, s32 arg1) {
    s32 sp2C;
    u16 sp2A;
    struct func_80126F4C_Struct *temp_v0;

    D_801BBD76 = 1;
    sp2A = arg0->unk36;
    func_80005700(arg0);
    if (sp2A != 0) {
        temp_v0 = func_8012C4D0(arg0, D_80164E80, 3);
        if (temp_v0 != NULL) {
            temp_v0->unk36 = sp2A;
            temp_v0->unk90 = 5;
        }
    }
}




void func_80126F4C(struct func_80126F4C_Struct *arg0, struct func_80126F4C_Struct *arg1) {
    s16 temp_v0;
    s32 temp_a0;
    u16 *var_v0;

    arg1 = arg0;
    D_801BBD76 = 1;
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        var_v0 = D_80171CEC[arg1->unk36][0];
        temp_a0 = *var_v0 & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
            var_v0 = D_80171CEC[arg1->unk36][0];
        }
        temp_a0 = var_v0[1] & 0x0FFFFFFF & 0xFFFF;
        if (temp_a0 != 0) {
            func_80126E88(temp_a0);
        }
        func_80005700(arg1);
    }
}


typedef struct func_80127014_GlobalStruct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80127014_GlobalStruct;

void func_8013B208(void);

void func_80127014(void *arg0, s32 arg1)
{
  void *temp_v0;
  u16 sp2A;
  if (arg0)
  {
  }
  D_801BBD76 = 1;
  sp2A = *((u16 *) (((u8 *) arg0) + 0x36));
  func_8013B208();
  func_80005700(arg0);
  if (sp2A != 0)
  {
    temp_v0 = func_8012C4D0(arg0, D_80164E80, 3);
    if (temp_v0 != 0)
    {
      *((u16 *) (((u8 *) temp_v0) + 0x36)) = sp2A;
      *((u16 *) (((u8 *) temp_v0) + 0x90)) = 5;
    }
  }
}


typedef struct func_801270C0_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x4C - 0x30];
    u8 unk4C, unk4D, unk4E, unk4F;
    u8 pad2[4];
    s32 unk54;
} func_801270C0_StructObj;
typedef struct func_801270C0_StructPos {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801270C0_StructPos;
typedef struct func_801270C0_StructMid {
    u8 pad[0x2C];
    func_801270C0_StructPos *unk2C;
} func_801270C0_StructMid;
typedef struct func_801270C0_StructGlobal {
    u8 pad0[0x58];
    s32 unk58;
    u8 pad1[0x1031 - 0x5C];
    u8 unk1031;
} func_801270C0_StructGlobal;
extern void func_801FBB20(void);
extern void func_80005670(s32, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_8021D8D0();
extern u8 D_8018C734[];
extern u8 D_8023C250[];
extern s32 D_801BBCCC;
extern func_801270C0_StructMid *D_801BBCD8;

s32 func_801270C0(func_801270C0_StructObj *arg0) {

    func_801FBB20();
    ((func_801270C0_StructGlobal *)&D_801BBBF0)->unk1031 = 0;
    func_80005670(((func_801270C0_StructGlobal *)&D_801BBBF0)->unk58, D_8023C250);
    func_8011AAF4(D_8018C734, 0x674, arg0, 3, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
    arg0->unk2C = 0x83E0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x14;
    arg0->unk4E = 0xA;
    arg0->unk4F = 0;
    arg0->unk54 |= 0xE1;
    func_800058DC((s32)arg0, (void *)func_8021D8D0);
    func_801C3B10(0);
    func_800058DC(D_801BBCCC, (void *)func_8021D8D0);
    return 1;
}


typedef struct func_801271E4_StructB {
    u8 pad0[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 pad1[5];
    s32 unk54;
} func_801271E4_StructB;
typedef struct func_801271E4_StructC {
    u8 pad[0x30];
    f32 f[6];
} func_801271E4_StructC;
typedef struct func_801271E4_StructA {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0xDC - 6];
    func_801271E4_StructB *unkDC;
    u8 pad2[0xE8 - 0xE0];
    struct { u8 pad[0x2C]; func_801271E4_StructC *unk2C; } *unkE8;
    u8 pad3[0xEF5 - 0xEC];
    u8 unkEF5;
    u8 pad4[6];
    s32 unkEFC;
} func_801271E4_StructA;
#define G ((func_801271E4_StructA *)&D_801BBBF0)
extern u8 D_8018C79C[];
extern u8 D_8018C7D4[];
extern void func_801C4A5C(void *, s32);
extern u8 func_80127374[];

s32 func_801271E4(void *arg0) {
    if (G->unk4 == 0x21) {
        func_8011AAF4(D_8018C79C, 0x69A, arg0, 0, 1, 0.0f, G->unkE8->unk2C->f[0], G->unkE8->unk2C->f[1], G->unkE8->unk2C->f[2], 0.0f, G->unkE8->unk2C->f[3], G->unkE8->unk2C->f[4], G->unkE8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
    } else {
        func_8011AAF4(D_8018C7D4, 0x69C, arg0, 2, 1, 0.0f, G->unkE8->unk2C->f[0], G->unkE8->unk2C->f[1], G->unkE8->unk2C->f[2], 0.0f, G->unkE8->unk2C->f[3], G->unkE8->unk2C->f[4], G->unkE8->unk2C->f[5], 0.0f, 35.0f, -1, -1);
    }
    G->unkEF5 = 0;
    G->unkDC->unk54 = G->unkEFC;
    func_801C4A5C(G->unkDC, 0);
    G->unkDC->unk4E = 3;
    G->unkDC->unk4C = G->unkDC->unk4E;
    G->unkDC->unk4D = 0x12;
    func_800058DC((s32)G->unkDC, func_80127374);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_80127430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_801276CC.s")


void func_801277B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern s32 func_80005F6C(s32, void *);
extern s32 func_80006214(s32);
extern s32 func_800058DC(s32, void *);
extern u8 D_80164F30[];
extern void func_80127918(s32 arg0, s32 arg1);

void func_801277BC(s32 arg0, s32 arg1) {
    func_80005F6C(arg0, D_80164F30);
    func_80006214(arg0);
    func_800058DC(arg0, func_80127918);
}


typedef struct func_80127800_Struct {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[4];
    void *unk28;
} func_80127800_Struct;

typedef struct func_80127800_Mid {
    u8 pad[0x2C];
    func_80127800_Struct *unk2C;
} func_80127800_Mid;

typedef struct func_80127800_Obj {
    u8 pad[0x24];
    func_80127800_Mid *unk24;
} func_80127800_Obj;

typedef struct func_80127800_Globals {
    u8 pad[0x112];
    s16 unk112;
    s16 unk114;
    s16 unk116;
    s16 unk118;
    s16 unk11A;
    s16 unk11C;
} func_80127800_Globals;

extern f32 D_8018CC10;
extern u8 D_3000210[];

void func_80127800(void *arg0, func_80127800_Mid **arg1) {
    f32 temp;

    func_80005F6C((s32) arg0, D_80164F30);
    func_80006214((s32) arg0);
    if (1) {
        temp = D_8018CC10;
    }
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk0 = 0x73;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk28 = D_3000210;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk4 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk112;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk8 = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk114;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unkC = (f32) ((func_80127800_Globals *) &D_801BBBF0)->unk116;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk10 = ((func_80127800_Globals *) &D_801BBBF0)->unk118;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk12 = ((func_80127800_Globals *) &D_801BBBF0)->unk11A;
    ((func_80127800_Obj *) arg0)->unk24->unk2C->unk14 = ((func_80127800_Globals *) &D_801BBBF0)->unk11C;
    (*arg1)->unk2C->unk18 = temp;
    (*arg1)->unk2C->unk1C = temp;
    (*arg1)->unk2C->unk20 = temp;
    func_800058DC((s32) arg0, (void *) func_80127918);
}


void func_80127918(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80127924_StructB {
    u8 pad0[0x30];
    void *unk30;
} func_80127924_StructB;

typedef struct func_80127924_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    func_80127924_StructB *unk30;
} func_80127924_StructA;

extern u8 D_80164F40[];
extern u8 D_8017B768[];
extern u8 func_8012798C[];

void func_80127924(s32 arg0, func_80127924_StructA **arg1) {
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = D_8017B768;
    (*arg1)->unk24 = -3;
    func_800058DC(arg0, func_8012798C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80124ED0/func_8012798C.s")

