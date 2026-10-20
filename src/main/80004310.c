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

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_800045E8.s")


extern s32 func_8000469C(s32, s32);
extern void func_80016EAC();

s32 func_80004664(s32 arg0, s32 arg1) {
    func_80016EAC((u16) arg0);
    func_8000469C(arg0, arg1);
    return arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_8000469C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004EE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80004310/func_80004F98.s")


extern u32 D_80038FEC[];

s32 func_8000511C(u16 arg0) {
    return D_80038FEC[arg0] & 0x7FFFFFFF;
}


extern s32 D_80038FF0[];

s32 func_80005144(u16 arg0) {
    return D_80038FF0[arg0] & 0x7FFFFFFF & 0x7FFFFFFF;
}


extern s32 D_80037C5C[];

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

