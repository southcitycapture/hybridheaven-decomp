#include "common.h"


extern void func_80001FE8(u32, void *, s32);
extern u8 D_8008DC18;

void func_8000DDB0(u32 a0, void *a1, s32 a2) {
    s32 i = 0x10;

    D_8008DC18 = 1;
    func_80001FE8(a0, a1, a2);
    while (i--) {
    }
    D_8008DC18 = 0;
}


extern s32 func_80005E44(s32, s32);
extern s32 func_80005FAC(s32, s32, s32);

typedef struct func_8000DDF4_StructEntry {
    u16 index;
    u8 pad[2];
    s32 value;
} func_8000DDF4_StructEntry;

u16 func_8000DDF4(s32 arg0, func_8000DDF4_StructEntry *arg1) {
    s32 objects[100];
    u16 count;
    u16 i;
    u16 result;
    s32 temp;

    result = 0;
    count = arg1->index;
    temp = func_80005E44(arg0, arg1->value);
    arg1++;
    objects[0] = temp;
    if (temp != 0) {
        for (i = 1; i < count; i++, arg1++) {
            temp = func_80005FAC(arg0, objects[arg1->index], arg1->value);
            objects[i] = temp;
            if (temp == 0) {
                result = 1;
                break;
            }
        }
    } else {
        result = 1;
    }
    return result;
}

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


struct func_8000E634_Struct {
    s32 unk0;
    u8 pad4[4];
    f32 unk8;
};
extern void func_8000E5D4(s32);
extern u16 D_800631EA;

u16 func_8000E634(struct func_8000E634_Struct *arg0) {
    f64 k = 2.0 - 1.0;
    func_8000E5D4(arg0->unk0);
    return (u32)(((f64)((f32)(u32)(D_800631EA & 0xFFFF7FFF & 0xFFFF) * arg0->unk8) * k) + 0.5) - 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000E748.s")


typedef struct func_8000E980_Struct6 {
    s16 v[3];
} func_8000E980_Struct6;

extern u8 D_800631ED;
typedef struct func_8000E980_StructC {
    func_8000E980_Struct6 *unk0;
    u8 pad4[8];
    u8 unkC;
} func_8000E980_StructC;
extern func_8000E980_StructC D_800631E0;
extern func_8000E980_Struct6 D_80062D30[];

typedef struct func_8000E980_StructB {
    func_8000E980_Struct6 unk0;
    u8 pad[2];
    f32 f8;
    f32 fC;
    f32 f10;
} func_8000E980_StructB;

typedef struct func_8000E980_Key {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
} func_8000E980_Key;

struct func_80010884_Key;
extern void func_8000DDB0(u32, void *, s32);
extern void func_8000E748(struct func_80010884_Key *, f32 *, s32 *, u16 *, u16 *);

void func_8000E980(func_8000E980_Key arg0, u16 arg3, func_8000E980_StructB *arg4) {
    u8 pad[8];
    s64 sp38;
    u8 sp37;
    u16 sp34;
    u16 sp32;
    f32 sp2C;
    s32 sp28;
    u32 var;

    sp38 = func_8000E58C(arg0.unk0);
    func_8000E5D4(arg0.unk0);
    sp37 = D_800631ED;
    func_8000E748((struct func_80010884_Key *)&arg0,&sp2C, &sp28, &sp34, &sp32);
    var = (u32) sp2C;
    func_8000DDB0(((u64)(u32) &D_800631E0.unk0[(((var & 0xFFFF) * D_800631E0.unkC) + arg3) * sp37] & 0xFFFFFF) + sp38, D_80062D30, sp37 * 6);
    arg4->unk0 = D_80062D30[0];
    if (sp37 == 2) {
        arg4->f8 = D_80062D30[1].v[0] * 0.00390625;
        arg4->fC = D_80062D30[1].v[1] * 0.00390625;
        arg4->f10 = D_80062D30[1].v[2] * 0.00390625;
        return;
    }
    arg4->f10 = 1.0f;
    arg4->fC = 1.0f;
    arg4->f8 = 1.0f;
}

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


typedef struct func_8000F174_StructVec {
    f32 x, y, z;
} func_8000F174_StructVec;

typedef struct func_8000F174_StructSub {
    u8 pad[0x5C];
    func_8000F174_StructVec vec;
} func_8000F174_StructSub;

typedef struct func_8000F174_StructObj {
    struct func_8000F174_StructObj *next;
    u8 pad4[4];
    struct func_8000F174_StructObj *child;
    u8 padC[0x20];
    func_8000F174_StructSub *sub;
} func_8000F174_StructObj;

void D_8000F174(func_8000F174_StructObj *arg0, func_8000F174_StructVec arg1, u8 arg4);

void func_8000F174(func_8000F174_StructObj *arg0, func_8000F174_StructVec arg1, u8 arg4) {
    func_8000F174_StructObj *child;

    arg0->sub->vec = arg1;
    child = arg0->child;
    if (child != NULL) {
        D_8000F174(child, arg1, 1);
    }
    if (arg4 != 0) {
        if (arg0->next != NULL) {
            D_8000F174(arg0->next, arg1, 1);
        }
    }
}


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


f32 func_8000F3D8(f32 arg0) {
    f64 k;
    arg0 *= 1024.0f;
    if (arg0 >= 0.0f) {
        k = 0.5;
    } else {
        k = -0.5;
    }
    arg0 = k + (f64)arg0;
    arg0 = (s32)arg0;
    return arg0 * 0.0009765625;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000F458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_8000FC60.s")


typedef struct func_8000FCD0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8000FCD0_Struct;

void func_8000FCD0(u16 *arg0, func_8000FCD0_Struct *arg1, func_8000FCD0_Struct *arg2) {
    arg2[*arg0] = *arg1;
    *arg0 += 1;
}


extern void func_800279F0(void *, s32);
extern u16 func_8000FC60(func_8000FCD0_Struct *, u16, void *);

u16 func_8000FD0C(u32 **arg0, u16 arg1, void *arg2, u16 *arg3, u32 arg4) {
    u8 pad[4];
    u16 sp5A;
    func_8000FCD0_Struct *p;
    s32 i;
    s32 j;
    u32 m;

    sp5A = 0;
    func_800279F0(arg2, 0x240);
    for (i = 0; i < 0x30; i++) {
        arg3[i] = 0xFFFF;
    }
    j = 1;
    m = arg4;
    if (arg1 >= 2 && m != 0) {
        do {
            if (m & 1) {
                p = (func_8000FCD0_Struct *)(arg0[j][0x2C / 4] + 0x5C);
                arg3[j] = func_8000FC60(p, sp5A, arg2);
                if (sp5A == arg3[j]) {
                    func_8000FCD0(&sp5A, p, arg2);
                }
            }
            j++;
            m >>= 1;
        } while (j < arg1 && m != 0);
    }
    return sp5A;
}


struct func_8000FE48_StructObj {
    u8 pad[0x2C];
    u8 *unk2C;
};

#define A0 (*(struct func_8000FE48_StructObj ***)&arg0)
#define A3 (*(u16 **)&arg3)

u16 func_8000FE48(struct func_8000FE48_StructObj **arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3) {
    s32 i;
    u16 count;
    u16 *out;
    u8 *data;
    struct func_8000FE48_StructObj **obj;

    count = 0;
    func_800279F0(arg2, 0x240);
    {
        u16 *p;
        s32 j;

        p = A3;
        for (j = 0; j < 0x30; j++) {
            p[j] = 0xFFFF;
        }
        p[1] = count;
    }
    data = A0[1]->unk2C;
    func_8000FCD0(&count, (func_8000FCD0_Struct *)(data + 0x5C), arg2);
    i = 2;
    if (arg1 >= 3) {
        out = A3 + 2;
        obj = A0 + 2;
        do {
            data = (*obj)->unk2C + 0x5C;
            *out = func_8000FC60((func_8000FCD0_Struct *)data, count, arg2);
            if (count == *out) {
                func_8000FCD0(&count, (func_8000FCD0_Struct *)data, arg2);
            }
            i++;
            out++;
            obj++;
        } while (i != arg1);
    }
    return count;
}
#undef A0
#undef A3


s32 func_8000FF80(s32 arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3, func_8000FCD0_Struct arg4) {
    s32 i;
    u16 sp32;
    s32 j;

    sp32 = 0;
    func_800279F0(arg2, 0x240);
    for (i = 0; i < 0x30; i++) {
        arg3[i] = 0xFFFF;
    }
    func_8000FCD0(&sp32, &arg4, arg2);
    for (j = 1; j < arg1; j++) {
        arg3[j] = 0;
    }
    return 1;
}


typedef struct func_80010068_Struct { s32 a; s32 b; s32 c; } func_80010068_Struct;
typedef struct func_80010068_Key { s32 unk0; u16 unk4; u16 unk6; s32 unk8; } func_80010068_Key;
extern f32 D_8000E748(void *, f32 *, s32 *, s32, u16 *);
extern void func_8000EC9C(func_80010068_Struct, s32, s32, u32, u16, s32, s32, u16);

void func_80010068(u16 arg0, s32 arg1, u16 arg2, s32 arg3, func_80010068_Key *arg4, s32 arg5, s32 arg6, u16 *arg7) {
    s32 pad1;
    func_80010068_Struct sp48;
    f32 f;
    f32 sp40;
    s32 sp3C;
    func_80010068_Key *p;

    p = &arg4[arg0];
    sp48 = *(func_80010068_Struct *)p;
    f = D_8000E748(p, &sp40, &sp3C, arg6, arg7);
    if (sp40 == f) {
        p->unk4 = *arg7;
    }
    func_8000EC9C(sp48, sp3C, arg5, (u32)sp40, arg2, arg1, arg3, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_800101D8.s")


typedef struct func_80010454_StructVec {
    s32 x, y, z;
} func_80010454_StructVec;
typedef struct func_80010454_StructArg {
    u8 pad[0xC];
    u16 unkC;
    u8 padE[0x44 - 0xE];
    func_80010454_StructVec unk44;
} func_80010454_StructArg;
extern u16 func_800101D8(u16, u32 **, u16);
extern void func_8000F458(u32 **, void *);
extern u8 D_800631F0[];
extern u16 D_80063DF0[];
extern func_80010454_StructVec D_801BC028;

u16 func_80010454(u32 **arg0, func_80010454_StructArg *arg1, u32 arg2) {
    s32 prev;
    u16 first;
    u16 count;
    u16 i;
    u16 value;

    count = func_8000FD0C(arg0, arg1->unkC, D_800631F0, D_80063DF0, arg2);
    if (count == 0xFFFF) {
        return 0;
    }
    for (i = 0; i < count; i++) {
        value = func_800101D8(i, arg0, arg1->unkC);
        if (i == 0) {
            first = value;
        }
    }
    if (arg2 & 1) {
        func_8000F458(arg0, arg1);
        D_801BC028 = arg1->unk44;
    }
    return first;
}

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


u16 func_80011590(u16 arg0) {
    f64 one = 2.0 - 1.0;
    return (u32)((f64)arg0 * one + 0.5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000DDB0/func_80011678.s")

