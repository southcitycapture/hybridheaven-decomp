#include "common.h"


typedef struct func_80004310_Struct {
    u8 pad[0x1BD];
    u8 unk1BD;
} func_80004310_Struct;

extern func_80004310_Struct D_800892B0;
extern s32 D_800894F4[];

void func_80004310(s32 arg0) {
    volatile u8 *p = &D_800892B0.unk1BD;
    D_800894F4[*p] = arg0;
    *p = *p + 1;
}


typedef struct func_8000433C_Struct {
    u32 unk0;
    s32 unk4;
} func_8000433C_Struct;

s32 func_80004484(s32, s32);
s32 func_800045E8(s32, s32);
void func_80004ADC(u16, s32);
s32 func_80016F90();
s32 func_80017014(s32);

extern s8 D_8008946D;

void func_8000433C(void) {
    s32 *var_s6;
    s32 var_s7;
    func_8000433C_Struct *temp_v0;
    func_8000433C_Struct *var_s1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_a1;
    s32 var_v0;

    var_s6 = D_800894F4;
    for (var_s7 = 0; var_s7 < 8; var_s7 = (var_s7 + 1) & 0xFF) {
        temp_v0 = (func_8000433C_Struct *) *var_s6;
        if (temp_v0 != NULL) {
            var_s1 = temp_v0;
loop_2:
            if (func_80017014(func_80016F90()) == 0) {
                temp_s0 = var_s1->unk0 & 0x0FFFFFFF;
                temp_s2 = temp_s0 & 0xFFFF;
                if (func_80017064((u16) temp_s2) != -1) {
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                } else {
                    temp_a1 = var_s1->unk4;
                    if (temp_a1 == 0) {
                        goto zero_case;
                    }
                    if (temp_a1 != -1) {
                        goto other_case;
                    }
                    var_v0 = func_80004484(temp_s0, temp_a1);
                    goto join;
zero_case:
                    var_v0 = func_800045E8(temp_s0, temp_a1);
                    goto join;
other_case:
                    var_v0 = func_80004664(temp_s0, temp_a1);
join:
                    func_80004ADC(temp_s2, var_v0);
                    if (!(var_s1->unk0 & 0x40000000)) {
                        var_s1++;
                        goto loop_2;
                    }
                }
            }
            *var_s6 = 0;
        }
        var_s6++;
    }
    D_8008946D = 0;
}

extern s32 D_801BBC10;

s32 func_80004484(s32 arg0, s32 arg1) {
    s32 sp18[2];

    arg1 = (D_801BBC10 + 7) & ~7;
    sp18[0] = arg1;
    func_8000469C(arg0, arg1);
    return sp18[0];
}


extern s32 D_80089470;

s32 func_800044BC(s32 arg0) {
    s32 sp18;
    s32 temp_a1;

    temp_a1 = (D_80089470 + 7) & ~7;
    sp18 = temp_a1;
    D_80089470 = func_8000469C(arg0, temp_a1);
    return temp_a1;
}


s32 func_80004838(s32, s32);

s32 func_800044FC(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
    temp_v0 = (D_801BBC10 + 7) & ~7;
    if (var_a1 == 0) {
        *(s32 *)((u8 *)&D_800892B0 + 0x42A8) = temp_v0;
        var_a1 = temp_v0;
    }
    if (func_80004838(arg0, var_a1) == 0) {
        return 0;
    }
    return *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004560.s")

extern s32 D_80037C5C[];
extern s32 func_8001F290();
extern s32 func_8000469C(s32, s32);
extern void func_80016EAC();

s32 func_800045E8(s32 arg0, s32 arg1) {
    s32 r;
    s32 *p;
    if (arg0 == 0 || (u32)arg0 >= 0x271) {
        return 0;
    }
    p = (s32 *)((s32)&D_80037C5C[arg0 * 2] - 8);
    r = func_8001F290(p[1] - p[0], arg1);
    func_8000469C(arg0, r);
    func_80016EAC(arg0 & 0xFFFF, r, arg0);
    return r;
}



s32 func_80004664(s32 arg0, s32 arg1) {
    func_80016EAC((u16) arg0);
    func_8000469C(arg0, arg1);
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_8000469C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004BB0.s")

typedef struct func_80004D20_Struct { u8 pad[0xC]; s32 unkC; u8 pad2[0x1C]; } func_80004D20_Struct;
extern s32 func_80001060();
#define func_80004EE8 func_80004EE8__decl166
extern u8 *func_80004EE8(s32, u8 *);
extern u32 func_80004F98(s32, s32);
extern void func_80015420(u8 *, func_80004D20_Struct *);
extern void func_80015488(u8 *, u8 *, func_80004D20_Struct *);
extern void func_8001F540(u8 *);
extern void func_80028A90(u8 *, s32);
extern void func_80030640(u8 *, s32);
extern void func_800306C0(u8 *, s32);
extern s16 D_80089350;
extern s16 D_80089354;
extern u8 D_8038F800[];
extern u8 D_80400000[];

u8 func_80004D20(s32 arg0, u8 *arg1) {
    u8 *s0;
    u8 *e;
    u8 sp67;
    u8 *a2;
    func_80004D20_Struct sp34;
    s16 sp32;
    u32 i;

    a2 = arg1;
    if (func_80004F98(arg0, 0) < 0x2001U) {
        s0 = func_8001F290(0x2000);
        sp67 = 0;
    } else {
        if (func_80001060() != 0) {
            s0 = D_80400000 + (D_80089350 << 20);
        } else {
            s0 = D_8038F800 + D_80089350 * 0x25800;
        }
        sp67 = 1;
        sp32 = D_80089354;
        D_80089354 = 1;
    }
    e = func_80004EE8(arg0, s0);
    if (s0[0] == 0x50 && s0[1] == 0x49 && s0[2] == 0x43) {
        func_80015420(s0, &sp34);
        func_80015488(s0, arg1, &sp34);
        a2 = arg1 + sp34.unkC;
    } else {
        i = 0;
        if ((u32)(e - s0)) {
            do {
                *a2 = s0[i];
                i++;
                a2++;
            } while (e - s0 > i);
        }
    }
    i = a2 - arg1;
    if (a2) {}
    func_80028A90(arg1, i);
    func_80030640(arg1, i);
    func_800306C0(arg1, i);
    if (sp67 == 0) {
        func_8001F540(s0);
    } else {
        D_80089354 = sp32;
    }
    return sp67;
}
#undef func_80004EE8


extern void func_80001FE8(s32, s32, s32);
extern s8 D_8008DC18;

s32 func_80004EE8(u32 arg0, s32 arg1)
{
  s32 sp2C;
  u8 i;
  s32 size;
  s32 end;
  if (arg0 >= 0x8B8AU)
  {
    return arg1;
  }
  if (arg0 >= 0x8000U)
  {
    size = func_80004F98(arg0, &sp2C);
    end = arg1 + size;
    i = 0x10;
    arg0 = (u32) (&D_8008DC18);
    if (size != 0)
    {
      if (arg0 != 0)
      {
      }
      *((u8 *) arg0) = 1;
      if ((arg0 && arg0) && arg0)
      {
      }
      func_80001FE8(sp2C, arg1, size);
      while (i--)
      {
      }

      D_8008DC18 = 0;
    }
    return end;
  }
  return 0, func_8000469C(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004F98.s")


extern u32 D_80038FEC[];

s32 func_8000511C(u16 arg0) {
    return D_80038FEC[arg0] & 0x7FFFFFFF;
}


extern s32 D_80038FF0[];

s32 func_80005144(u16 arg0) {
    return D_80038FF0[arg0] & 0x7FFFFFFF & 0x7FFFFFFF;
}



s32 func_80005170(s32 arg0)
{
  unsigned int new_var;
  int new_var2;
  s32 *temp_v1;
  new_var = arg0;
  if (new_var == 0)
  {
    return 0;
  }
  new_var2 = 2 * arg0;
  temp_v1 = (s32 *) (((new_var2 * 4) - 8) + ((s32) D_80037C5C));
  return temp_v1[1] - temp_v1[0];
}


extern u16 D_80037A30[];

u8 func_800051A4(u32 arg0) {
    s32 i;

    i = 0;
    if (arg0 == 0) {
        return i;
    }
    if (D_80037A30[0] != 0) {
        do {
            if (arg0 < D_80037A30[i]) {
                return ((u8 *)&D_80037A30[i])[3];
            }
            i += 2;
        } while (D_80037A30[i] != 0);
    }
    return 0xFF;
}


extern s32 func_8001703C(s32);
extern s32 func_80017064(s32);

void func_80005204(s32 arg0) {
    func_8001703C(func_80017064(arg0 & 0xFFFF));
}



s32 func_8000522C(s32 arg0, s32 arg1) {
    return func_8001703C(func_80017064(arg0 & 0xFFFF)) + (arg1 & 0xFFFFFF);
}

