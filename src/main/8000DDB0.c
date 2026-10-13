#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/D_8004C790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000DEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E264.s")


s32 func_8000511C(u16);
extern u32 *D_80171CEC[];

s64 func_8000E58C(s32 arg0) {
    s32 ret;

    ret = func_8000511C(**(u16 **) D_80171CEC[((u32) (arg0 & 0xFFFF0000) >> 0x10) & 0xFFFF]);
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000EB80.s")


extern void func_8000EB80(s32, s32, s32, s32);

void func_8000EC64(s32 arg0, u16 arg1)
{
  int new_var2;
  s32 new_var;
  new_var = (s32) arg1;
  new_var2 = new_var & 0xFFFF;
  if (!new_var2)
  {
  }
  func_8000EB80(arg0 + 0x10, (arg0 + 0x12) & 0xFFFFFFFFFFFFFFFFu, arg0 + 0x14, new_var2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000EC9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F174.s")


struct func_8000F240_StructB {
    u8 pad0[0x64];
    f32 unk64;
};

struct func_8000F240_StructA {
    struct func_8000F240_StructA *unk0;
    u8 pad4[0x4];
    struct func_8000F240_StructA *unk8;
    u8 padC[0x20];
    struct func_8000F240_StructB *unk2C;
};

void func_8000F240(struct func_8000F240_StructA *arg0, f32 arg1, u8 arg2)
{
  struct func_8000F240_StructA *temp_a0;
  struct func_8000F240_StructA *temp_v0;
  s32 var_s1;
  arg0 = arg0;
  var_s1 = arg2;
  loop_1:
  arg0->unk2C->unk64 = arg1;

  temp_a0 = arg0->unk8;
  if (temp_a0 != 0)
  {
    func_8000F240(temp_a0, arg1, 1);
  }
  if (var_s1 != 0)
  {
    temp_v0 = arg0->unk0;
    arg0 = temp_v0;
    if (temp_v0 != 0)
    {
      var_s1 = 1;
      goto loop_1;
    }
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F2B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FD0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FE48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_800101D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8001061C.s")


typedef struct func_80010884_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_80010884_Vec;

typedef struct func_80010884_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_80010884_Key;

typedef struct func_80010884_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x50 - 0x10];
    f32 unk50;
    u8 pad54[0x5C - 0x54];
    func_80010884_Key unk5C;
} func_80010884_Sub;

typedef struct func_80010884_Obj {
    u8 pad0[0x2C];
    func_80010884_Sub *unk2C;
} func_80010884_Obj;

typedef struct func_80010884_Arg1 {
    u8 pad0[0x1C];
    func_80010884_Key unk1C;
    u8 pad28[0x34 - 0x28];
    f32 unk34;
    u8 pad38[0x44 - 0x38];
    f32 unk44;
    f32 unk48;
    f32 unk4C;
} func_80010884_Arg1;

extern void func_8000DDB0(u32, void *, s32);
extern void func_8000E748(func_80010884_Key *, f32 *, s32 *, u16 *, u16 *);
extern func_80010884_Vec D_800631B0[4];
extern func_80010884_Vec D_800631BC;
extern func_80010884_Vec D_800631C8;
extern func_80010884_Vec D_800631D4;
extern u32 D_800631E4;

void func_80010884(func_80010884_Obj **arg0, func_80010884_Arg1 *arg1, func_80010884_Key arg2, u16 arg5) {
    func_80010884_Sub *obj;
    func_80010884_Sub *sub;
    f32 t;
    f32 y;
    u64 off;
    u8 pad[28];
    f32 time[2];
    s32 unk64[2];
    u8 pad2[4];
    u16 flags[2];
    u16 b[2];
    u16 a[2];
    u32 addr;
    func_80010884_Key *key;
    func_80010884_Key tmp;

    obj = arg0[0]->unk2C;
    sub = arg0[1]->unk2C;
    flags[1] = arg1->unk1C.unk6;
    flags[0] = arg2.unk6;
    if (arg5 <= 0) {
        t = 0.0f;
    } else {
        t = (f32)(obj->unk50 + 1.0) / ((u32)arg5 + 1.0);
        if (t >= 1.0) {
            t = 1.0f;
        }
    }
    off = func_8000E58C(arg2.unk0);
    func_8000E748(&arg2, &time[0], &unk64[0], &a[0], &b[0]);
    addr = off + ((s64)(((u16)time[0] * 0x18) + D_800631E4) & 0xFFFFFF);
    func_8000DDB0(addr, D_800631B0, 0x18);
    key = &arg1->unk1C;
    D_800631B0[2] = D_800631B0[0];
    D_800631B0[3] = D_800631B0[1];
    if (flags[0] & 0x10) {
        D_800631B0[2].x *= -1.0f;
        D_800631B0[3].x *= -1.0f;
    }
    off = func_8000E58C(key->unk0);
    func_8000E748(key, &time[1], &unk64[1], &a[1], &b[1]);
    addr = off + ((s64)(((u16)time[1] * 0x18) + D_800631E4) & 0xFFFFFF);
    func_8000DDB0(addr, D_800631B0, 0x18);
    if (flags[1] & 0x10) {
        D_800631B0[0].x *= -1.0f;
        D_800631B0[1].x *= -1.0f;
    }
    sub->unk4 = D_800631B0[1].x - D_800631B0[0].x;
    sub->unkC = D_800631B0[1].z - D_800631B0[0].z;
    y = D_800631B0[1].y;
    if (t != 0.0f) {
        sub->unk4 += ((D_800631B0[3].x - D_800631B0[2].x) - sub->unk4) * t;
        sub->unkC += ((D_800631B0[3].z - D_800631B0[2].z) - sub->unkC) * t;
        y += (D_800631B0[3].y - y) * t;
    }
    sub->unk8 = (arg1->unk34 * y) / 1000.0;
    arg1->unk48 = 0.0f;
    arg1->unk44 = 0.0f;
    arg1->unk4C = 0.0f;
    tmp = sub->unk5C;
    obj->unk5C = tmp;
    *key = tmp;
    obj->unk50 = sub->unk50;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80010D08.s")


struct func_80011140_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_80010D08(s32, s32, struct func_80011140_Struct, s32, s32);

void func_80011140(s32 arg0, s32 arg1, struct func_80011140_Struct arg2, u16 arg5) {
    func_80010D08(arg0, arg1, arg2, arg5, 0xFFFFFF);
}


typedef struct func_80011198_Struct_Sub {
    u8 pad0[0x50];
    f32 unk50;
} func_80011198_Struct_Sub;

typedef struct func_80011198_Struct_Obj {
    u8 pad0[0x2C];
    func_80011198_Struct_Sub *unk2C;
} func_80011198_Struct_Obj;

typedef struct func_80011198_Struct {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad1[0x76 - 0xE];
    u8 unk76;
} func_80011198_Struct;

void func_80011198(func_80011198_Struct_Obj **arg0, func_80011198_Struct *arg1)
{
  s32 var_v0;
  func_80011198_Struct_Obj **var_v1;
  func_80011198_Struct_Obj *temp_t7;
  var_v0 = 0;
  if (arg1->unkC > 0)
  {
    var_v1 = arg0;
    do
    {
      var_v0 += 1;
      var_v1 += 1;
      ;
      var_v1[-1]->unk2C->unk50 = 0.0f;
    }
    while (var_v0 < arg1->unkC);
  }
  arg1->unk76 = 1;
}


extern void func_8000F2B8(s32, s32, s32, s32);

void func_800111E0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 0x100) != 0x100) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 0x100;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 0x100, 1, 0);
    }
}



s32 func_80011258(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 0x300) {
        *arg1 = temp_v0 & 0xFCFF;
        func_8000F2B8(*arg0, 0x300, 2, 0);
        return 1;
    }
    return 0;
}



void func_800112B0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 2) != 2) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 2;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 2, 1, 0);
    }
}



s32 func_80011328(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 2) {
        *arg1 = temp_v0 & 0xFFFD;
        func_8000F2B8(*arg0, 2, 2, 0);
        return 1;
    }
    return 0;
}



void func_80011380(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 1) != 1) {
        *arg1 = temp_v0 | 1;
        func_8000F2B8(*arg0, 1, 1, 0);
    }
}



s32 func_800113D0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 1) {
        *arg1 = temp_v0 & 0xFFFE;
        func_8000F2B8(*arg0, 1, 2, 0);
        return 1;
    }
    return 0;
}



void func_80011428(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 0x10) != 0x10) {
        *arg1 = temp_v0 | 0x10;
        func_8000F2B8(*arg0, 0x10, 1, 0);
    }
}



s32 func_80011478(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 0x10) {
        *arg1 = temp_v0 & 0xFFEF;
        func_8000F2B8(*arg0, 0x10, 2, 0);
        return 1;
    }
    return 0;
}


struct func_800114D0_Struct {
    u8 pad[4];
    u16 unk4;
};

s32 func_800114D0(struct func_800114D0_Struct *arg0)
{
  u16 temp_t6;
  f64 temp_ft1;
  u32 var_v0;
  temp_t6 = arg0->unk4;
  var_v0 = temp_t6 & 0xFFFFu;
  temp_ft1 = var_v0;
  return (u16) ((u32) temp_ft1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011678.s")

