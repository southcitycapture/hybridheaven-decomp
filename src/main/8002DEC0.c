#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002DEC0.s")


typedef struct func_8002E3C8_Obj {
    void *unk0;
    u8 pad04[4];
    void (*unk8)(void *, s32, void *);
    u8 pad0C[0x0E];
    s16 unk1A;
    u8 pad1C[0x1C];
    s32 unk38;
    void *unk3C;
    void *unk40;
    u8 pad44[4];
    s32 unk48;
} func_8002E3C8_Obj;

s32 func_8002E3C8(func_8002E3C8_Obj *arg0, s32 arg1, void *arg2) {
    func_8002E3C8_Obj *temp_a0;
    void *temp_v0;

    switch (arg1) {
    case 3:
        temp_v0 = arg0->unk40;
        if (temp_v0 != NULL) {
            *(void **)temp_v0 = arg2;
        } else {
            arg0->unk3C = arg2;
        }
        arg0->unk40 = arg2;
        break;
    case 4:
        temp_a0 = arg0->unk0;
        arg0->unk38 = 1;
        arg0->unk48 = 0;
        arg0->unk1A = 1;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, 4, arg2);
        }
        break;
    case 9:
        temp_a0 = arg0->unk0;
        arg0->unk48 = 1;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, 9, arg2);
        }
        break;
    case 1:
        arg0->unk0 = arg2;
        break;
    default:
        temp_a0 = arg0->unk0;
        if (temp_a0 != NULL) {
            temp_a0->unk8(temp_a0, arg1, arg2);
        }
        break;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002E4A8.s")


f64 func_8002E790(f64 arg0, s32 *arg2)
{
  s32 *new_var;
  f64 var_fv0;
  f64 var_fv1;
  new_var = arg2;
  *new_var = 0;
  if (arg0 == 0.0)
  {
    return arg0;
  }
  if (arg0 > 0.0)
  {
    var_fv0 = arg0;
  }
  else
  {
    var_fv0 = -arg0;
  }
  while (var_fv0 >= 1.0)
  {
    if (((!new_var) && (!new_var)) && (!new_var))
    {
    }
    *new_var += 1;
    var_fv0 *= 0.5;
  }

  if (var_fv0 < 0.5)
  {
    do
    {
      var_fv0 *= 2.0;
      *new_var -= 1;
    }
    while (var_fv0 < 0.5);
  }
  if (arg0 > 0.0)
  {
    var_fv1 = var_fv0;
  }
  else
  {
    var_fv1 = -var_fv0;
  }
  return var_fv1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002E87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002E8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002EA88.s")

