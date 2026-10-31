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


typedef struct func_8002E4A8_StructCmd {
    u32 w0, w1;
} func_8002E4A8_StructCmd;
typedef struct func_8002E4A8_StructCallback {
    u8 pad[4];
    func_8002E4A8_StructCmd *(*callback)(void *, s16 *, s32, s32, func_8002E4A8_StructCmd *);
} func_8002E4A8_StructCallback;
typedef struct func_8002E4A8_StructObj {
    func_8002E4A8_StructCallback *unk0;
    u8 pad04[0x10];
    s32 unk14;
    s16 unk18, unk1A, unk1C, unk1E, unk20, unk22;
    u16 unk24;
    s16 unk26, unk28;
    u16 unk2A;
    s16 unk2C, unk2E;
    s32 unk30, unk34, unk38;
    u8 pad3C[0xC];
    s32 unk48;
} func_8002E4A8_StructObj;
extern s32 func_80028A10(s32);
extern s16 func_8002E8A4(f64, f64, s32, void *);
extern s16 D_8004AD10[];
extern s16 D_8004AE0E[];

func_8002E4A8_StructCmd *func_8002E4A8(func_8002E4A8_StructObj *arg0, s16 *arg1, s16 *arg2, s32 arg3, s32 arg4, func_8002E4A8_StructCmd *arg5) {
    s32 sp2C;
    s16 temp_v1;
    func_8002E4A8_StructCallback *cb;
    func_8002E4A8_StructCmd *p;
    func_8002E4A8_StructCmd *q;
    func_8002E4A8_StructCmd *t;
    func_8002E4A8_StructCmd *t2;
    func_8002E4A8_StructCmd *t3;
    func_8002E4A8_StructCmd *t4;
    func_8002E4A8_StructCmd *t5;

    cb = arg0->unk0;
    if (arg0->unk48 != 1 || arg3 == 0) return arg5;
    p = cb->callback(cb, arg1, arg3, arg4, arg5);
    q = p + 2;
    p->w0 = (*arg1 & 0xFFFF) | 0x08000000;
    sp2C = arg3 * 2;
    p->w1 = (((*arg2 + 0x440) & 0xFFFF) << 16) | (sp2C & 0xFFFF);
    p[1].w0 = ((*arg2 + 0x580) & 0xFFFF) | 0x08080000;
    temp_v1 = *arg2;
    p[1].w1 = ((temp_v1 + 0x800) & 0xFFFF) | (((temp_v1 + 0x6C0) & 0xFFFF) << 16);
    if (arg0->unk38 != 0) {
        arg0->unk38 = 0;
        arg0->unk28 = (D_8004AD10[arg0->unk18] * arg0->unk1A) >> 15;
        arg0->unk26 = func_8002E8A4(arg0->unk1C, arg0->unk28, arg0->unk34, &arg0->unk24);
        arg0->unk2E = (*(s16 *)((u8 *)D_8004AE0E + -(arg0->unk18 * 2)) * arg0->unk1A) >> 15;
        arg0->unk2C = func_8002E8A4(arg0->unk1E, arg0->unk2E, arg0->unk34, &arg0->unk2A);
        t = q++;
        t->w0 = (arg0->unk1C & 0xFFFF) | 0x09060000;
        t->w1 = 0;
        t2 = q++;
        t2->w0 = (arg0->unk1E & 0xFFFF) | 0x09040000;
        t2->w1 = 0;
        t3 = q++; t3->w0 = (arg0->unk28 & 0xFFFF) | 0x09020000; t3->w1 =(((u32)arg0->unk26 & 0xFFFF) << 16) | ((u32)arg0->unk24 & 0xFFFF);
        t4 = q++;
        t4->w0 = (arg0->unk2E & 0xFFFF) | 0x09000000;
        t4->w1 = (((u32)arg0->unk2C & 0xFFFF) << 16) | ((u32)arg0->unk2A & 0xFFFF);
        t5 = q++;
        t5->w0 = (arg0->unk20 & 0xFFFF) | 0x09080000;
        t5->w1 = arg0->unk22 & 0xFFFF;
        { func_8002E4A8_StructCmd *g = q++; g->w0 = 0x03090000; g->w1 = func_80028A10(arg0->unk14); }
    } else {
        { func_8002E4A8_StructCmd *g = q++; g->w0 = 0x03080000; g->w1 = func_80028A10(arg0->unk14); }
    }
    *arg1 += sp2C;
    arg0->unk30 += arg3;
    return q;
}


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



f64 func_8002E87C(f64 arg0, s32 arg2) {
    s32 x;
    if (arg2 != 0) {
        x = 1 << arg2;
        arg0 *= x;
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002E8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002DEC0/func_8002EA88.s")

