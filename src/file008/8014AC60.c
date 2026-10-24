#include "common.h"

extern u8 D_801BED38;

struct func_8014AC60_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};

void func_8014AC60(void) {
    struct func_8014AC60_Struct *p;
    struct func_8014AC60_Struct *q;
    u32 i;

    p = (struct func_8014AC60_Struct *)&D_801BED38;
    for (i = 0; i < 32; i++) {
        q = &p[i];
        q->unk0 = 0;
        q->unk1 = 0;
        q->unk2 = 0;
        q->unk4 = 0;
        q->unk6 = 0;
        q->unk8 = 0;
        q->unkA = 0;
        q->unkE = 0;
        q->unkC = 0;
        q->unkD = 0;
    }
}

extern u8 D_801BEF38;

extern s16 D_801BED30;
extern s16 D_801BED32;
extern u8 D_801BF178;

typedef struct func_8014AD20_Struct {
    u8 a;
    u8 b;
    s16 c;
    s32 d;
    u8 e;
    u8 f;
    u8 pad[2];
} func_8014AD20_Struct;

void func_8014AD20(void) {
    func_8014AD20_Struct *p;
    s32 i;

    D_801BED30 = 1;
    D_801BED32 = 0;
    for (i = 0; i < 48; i++) {
        p = (func_8014AD20_Struct *)&D_801BEF38 + i;
        p->a = 0;
        p->b = 0;
        p->c = 0;
        p->d = 0;
        p->e = 0;
        p->f = 0;
    }
}


extern u16 func_8014B518();
extern u8 *func_8014B670(void);
extern void *func_8014B7CC(u16 arg0);
extern s32 func_8014B6F8(u16);
s32 func_801FF180(f32, f32, s32, s16, void *, u8, u16);

struct func_8014ADB4_Struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

u16 func_8014ADB4(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u16 arg4, u8 arg5, volatile u16 arg6) {
    struct func_8014ADB4_Struct *p;
    s32 sp2C;

    if (arg5 >= 0x2E) {
        return 0;
    }
    if (arg6 >= 4) {
        return 0;
    }
    sp2C = arg4;
    if (sp2C >= 0x8000) {
        if (func_8014B7CC(arg4) != 0) {
            return 0;
        }
        if (func_8014B6F8(arg4) != 0) {
            return 0;
        }
    }
    p = (struct func_8014ADB4_Struct *)func_8014B670();
    if (p != NULL) {
        p->unk0 = 1;
        p->unk1 = 0;
        if (sp2C >= 0x8000) {
            p->unk2 = arg4;
        } else {
            p->unk2 = func_8014B518();
        }
        p->unk8 = arg5;
        p->unk9 = arg6;
        p->unk4 = func_801FF180(arg0, arg1, arg2, arg3, p, arg5, arg6);
        if (p->unk4 == 0) {
            return 0;
        }
        return p->unk2;
    }
    return 0;
}


struct func_8014AEF4_Struct { u8 a; u8 b; u16 c; s32 d; u8 e; u8 f; };
extern s32 func_801FF260(f32, f32, s32, s16, void *, u8, u16);

u16 func_8014AEF4(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u16 arg4, unsigned char arg5, volatile u16 arg6)
{
  struct func_8014AEF4_Struct *p;
  s32 sp2C;
  if (arg5 >= 0x2E)
  {
    return 0;
  }
  if (arg6 >= 3)
  {
    return 0;
  }
  sp2C = arg4;
  if (sp2C >= 0x8000)
  {
    if (func_8014B7CC(arg4) != 0)
    {
      return 0;
    }
    if (func_8014B6F8(arg4) != 0)
    {
      return 0;
    }
  }
  p = func_8014B670();
  if (p != 0)
  {
    (*p).a = 3;
    p->b = 0;
    if (sp2C >= 0x8000)
    {
      p->c = arg4;
    }
    else
    {
      p->c = func_8014B518();
    }
    p->e = arg5;
    p->f = arg6;
    sp2C = func_801FF260(arg0, arg1, arg2, arg3, p, arg5, arg6);
    p->d = sp2C;
    if (p->d == 0)
    {
      return 0;
    }
    return p->c;
  }
  return 0;
}


struct func_8014B034_Struct {
    s8 unk0;
    u8 pad1[3];
    s32 unk4;
};

extern void func_801FF438(s32, u16);

s32 func_8014B034(volatile u16 arg0, u16 arg1) {
    s8 *temp_v0_2;
    struct func_8014B034_Struct *temp_v0;
    u16 id;

    temp_v0 = func_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        temp_v0->unk0 = 0;
        if (temp_v0->unk4 != 0) {
            func_801FF438(temp_v0->unk4, arg1);
        }
    } else {
        return 0;
    }
    id = arg0;
    if ((s32) id >= 0x8000) {
        temp_v0_2 = (s8 *)func_8014B6F8(id);
        if (temp_v0_2 != NULL) {
            *temp_v0_2 = 0;
        }
    }
    return 1;
}

void *func_8014B5E8(void);


struct func_8014B0BC_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};

s32 func_8014B0BC(f32 arg0, f32 arg1, f32 arg2, s16 arg3, u16 arg4, u8 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9) {
    struct func_8014B0BC_Struct *temp_v0;

    if ((s32) arg4 < 0x8000) {
        return 0;
    }
    if (func_8014B6F8(arg4) != 0) {
        return 0;
    }
    temp_v0 = (struct func_8014B0BC_Struct *) func_8014B5E8();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk0 = (s8) (arg8 | 1);
    temp_v0->unk1 = arg9;
    temp_v0->unk2 = (s16) (s32) arg0;
    temp_v0->unk4 = (s16) (s32) arg1;
    temp_v0->unk6 = (s16) (s32) arg2;
    temp_v0->unk8 = arg3;
    temp_v0->unkA = arg4;
    temp_v0->unkE = arg7;
    temp_v0->unkC = arg5;
    temp_v0->unkD = (s8) arg6;
    return 1;
}


struct func_8014B1A4_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};


s32 func_8014B1A4(f32 arg0, f32 arg1, f32 arg2, s16 arg3, u16 arg4, u8 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9)
{
  struct func_8014B1A4_Struct *temp_v0;
  if (((s32) arg4) < 0x8000)
  {
    return 0;
  }
  if (func_8014B6F8(arg4) != 0)
  {
    return 0;
  }
  temp_v0 = (struct func_8014B1A4_Struct *) func_8014B5E8();
  if (temp_v0 == 0)
  {
    return 0;
  }
  temp_v0->unk0 = (s8) ((arg8 & 0xFFu) | 3);
  temp_v0->unk1 = arg9;
  temp_v0->unk2 = (s16) ((s32) arg0);
  temp_v0->unk4 = (s16) ((s32) arg1);
  temp_v0->unk6 = (s16) ((s32) arg2);
  temp_v0->unk8 = arg3;
  temp_v0->unkA = arg4;
  temp_v0->unkE = arg7;
  temp_v0->unkC = arg5;
  temp_v0->unkD = (s8) arg6;
  return 1;
}


struct func_8014B420_Struct;
extern struct func_8014B420_Struct *D_8014B7CC(u16);

s32 func_8014B28C(u16 arg0, u8 arg1) {
    u8 *p = (u8 *)D_8014B7CC(arg0);
    if (p != NULL) {
        p[1] = arg1;
        return 1;
    }
    return 0;
}


s32 func_8014B2CC(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return temp_v0[1];
    }
    return 0xFF00;
}

#define func_8014B420_Struct func_8014B420_Struct__func_8014B2FC
#define func_8014B420_StructInner func_8014B420_StructInner__func_8014B2FC
struct func_8014B420_StructInner {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
struct func_8014B420_Struct {
    u8 pad[4];
    struct func_8014B420_StructInner *unk4;
};

struct func_8014B420_Struct;

s32 func_8014B2FC(arg0, arg1)
    u16 arg0;
    u8 arg1;
{
    u8 *temp_v0;

    temp_v0 = (u8 *)D_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
        return 1;
    }
    return 0;
}
#undef func_8014B420_Struct
#undef func_8014B420_StructInner


s32 func_8014B33C(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return *temp_v0;
    }
    return 0xFF00;
}



s32 func_8014B36C(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        *temp_v0 |= 0x10;
        return 1;
    }
    return 0;
}


s32 func_8014B3B0(u16 arg0, u8 arg1) {
    u8 *temp_v0;

    temp_v0 = (u8 *)D_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        temp_v0[8] = arg1;
        return 1;
    }
    return 0;
}



s32 func_8014B3F0(s32 arg0) {
    void *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return ((u8 *)temp_v0)[8];
    }
    return 0xFF00;
}


struct func_8014B420_StructInner {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};

struct func_8014B420_Struct {
    u8 pad[4];
    struct func_8014B420_StructInner *unk4;
};


s32 func_8014B420(u16 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    struct func_8014B420_Struct *temp_v0;

    temp_v0 = D_8014B7CC(arg0);
    if ((temp_v0 != NULL) && (temp_v0->unk4 != NULL)) {
        temp_v0->unk4->unk90 = arg1;
        temp_v0->unk4->unk94 = arg2;
        temp_v0->unk4->unk98 = arg3;
        temp_v0->unk4->unk9C = arg4;
        return 1;
    }
    return 0;
}


struct func_8014B4A0_StructOutput {
    f32 x;
    f32 y;
    f32 z;
    s16 angle;
};

s32 func_8014B4A0(u16 arg0, struct func_8014B4A0_StructOutput *arg1) {
    struct func_8014B420_Struct *entry;

    entry = D_8014B7CC(arg0);
    if ((entry != NULL) && (entry->unk4 != NULL)) {
        arg1->x = entry->unk4->unk90;
        arg1->y = entry->unk4->unk94;
        arg1->z = entry->unk4->unk98;
        arg1->angle = entry->unk4->unk9C;
        return 1;
    }
    return 0;
}


u16 func_8014B518() {
    s32 i;
    s32 j;
    s32 t;

    if (*(u16 *)&D_801BED32 == 0) {
        t = *(u16 *)&D_801BED30;
        if (t >= 0x80F7) {
            *(u16 *)&D_801BED32 = 1;
            *(u16 *)&D_801BED30 = 1;
        } else {
            *(u16 *)&D_801BED30 = t + 1;
            return t;
        }
    }
    for (i = 0; i != 0x80F6; i++) {
        for (j = 0; j < 48; j++) {
            if (((&D_801BEF38)[j * 12] & 1) &&
                *(u16 *)&D_801BED30 == *(u16 *)(&D_801BEF38 + j * 12 + 2)) {
                break;
            }
            if (j == 47) {
                return (*(u16 *)&D_801BED30)++;
            }
        }
    }
    return 0;
}



void *func_8014B5E8(void) {
    u8 *var_v1;

    for (var_v1 = &D_801BED38; ; ) {
        if (!(var_v1[0x0] & 1)) {
            return var_v1;
        }
        if (!(var_v1[0x10] & 1)) {
            return var_v1 + 0x10;
        }
        if (!(var_v1[0x20] & 1)) {
            return var_v1 + 0x20;
        }
        if (!(var_v1[0x30] & 1)) {
            return var_v1 + 0x30;
        }
        var_v1 += 0x40;
        if (var_v1 == &D_801BEF38) {
            return NULL;
        }
    }
}



u8 *func_8014B670(void)
{
  u8 *var_v1;
 var_v1 = &D_801BEF38; loop_1: if (!(var_v1[0x0] & 1)) {
    return var_v1;
  }

  if (!(var_v1[0xC] & 1))
  {
    return var_v1 + 0xC;
  }
  if (!(var_v1[0x18] & 1))
  {
    return var_v1 + 0x18;
  }
  if (!(var_v1[0x24] & 1))
  {
    return var_v1 + 0x24;
  }
  var_v1 += 0x30;
  if (var_v1 == (&D_801BF178))
  {
    return 0;
  }
  goto loop_1;
}


struct func_8014B6F8_Struct {
    u8 flags;
    u8 pad[9];
    u16 id;
    u8 padC[4];
};

s32 func_8014B6F8(u16 arg0) {
    struct func_8014B6F8_Struct *p;
    s32 i;
    s32 id;

    id = arg0;
    if (id < 0x8000) {
        return 0;
    }
    i = 0;
loop:
    p = &((struct func_8014B6F8_Struct *)&D_801BED38)[i];
    if ((p->flags & 1) && (id == p->id)) {
        return (s32)p;
    }
    if ((p[1].flags & 1) && (id == p[1].id)) {
        return (s32)(p + 1);
    }
    if ((p[2].flags & 1) && (id == p[2].id)) {
        return (s32)(p + 2);
    }
    if ((p[3].flags & 1) && (id == p[3].id)) {
        return (s32)(p + 3);
    }
    i += 4;
    if (i != 32) {
        goto loop;
    }
    return 0;
}


struct func_8014B7CC_StructInner {
    u8 pad[0xA8];
    u16 flags;
};

struct func_8014B7CC_Struct {
    u8 flags;
    u8 pad1;
    u16 id;
    struct func_8014B7CC_StructInner *ptr;
    u8 pad8[4];
};

void *func_8014B7CC(u16 arg0) {
    struct func_8014B7CC_Struct *p;
    s32 i;

    for (i = 0; i < 48; i += 4) {
        p = &((struct func_8014B7CC_Struct *)&D_801BEF38)[i];
        if ((p[0].flags & 1) && !(p[0].ptr->flags & 4) && arg0 == p[0].id) {
            return &p[0];
        }
        if ((p[1].flags & 1) && !(p[1].ptr->flags & 4) && arg0 == p[1].id) {
            return &p[1];
        }
        if ((p[2].flags & 1) && !(p[2].ptr->flags & 4) && arg0 == p[2].id) {
            return &p[2];
        }
        if ((p[3].flags & 1) && !(p[3].ptr->flags & 4) && arg0 == p[3].id) {
            return &p[3];
        }
    }
    return NULL;
}


struct func_8014B8DC_Inner {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
struct func_8014B8DC_Struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    struct func_8014B8DC_Inner *unk4;
    u8 unk8;
    u8 unk9;
    u8 pad[2];
};
extern s32 func_8012FF58();

void func_8014B8DC(void) {
    struct func_8014B8DC_Struct *p;
    s32 s;
    u8 *end;
    s8 *a;
    struct func_8014B0BC_Struct *b;

    s = func_8012FF58();
    for (p = (struct func_8014B8DC_Struct *)&D_801BEF38; ; ) {
        if (p->unk0 & 1) {
            if (p->unk2 >= 0x8000) {
                a = (s8 *)func_8014B6F8(p->unk2);
                if (a != NULL) {
                    *a = 0;
                }
                b = func_8014B5E8();
                if (b != NULL) {
                    b->unk0 = p->unk0;
                    b->unk1 = p->unk1;
                    b->unk2 = (s32)p->unk4->unk90;
                    b->unk4 = (s32)p->unk4->unk94;
                    b->unk6 = (s32)p->unk4->unk98;
                    b->unk8 = p->unk4->unk9C;
                    b->unkA = p->unk2;
                    b->unkE = s;
                    b->unkC = p->unk8;
                    b->unkD = p->unk9;
                }
            }
        }
        p++;
        if ((u8 *)p == &D_801BF178) break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014B9FC.s")


struct func_8014BB50_StructQ {
    u8 f0;
    u8 p1;
    u16 f2;
    u8 pad[8];
};

void func_8014BB50(void) {
    s32 i;

    for (i = 0; i < 48; i++) {
        if (((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f0 & 1) {
            if (((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f2 != 0 && ((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f2 < 0x8000) {
                ((struct func_8014BB50_StructQ *)&D_801BEF38)[i].f0 = 0;
            }
        }
    }
}

#define D_801BEF38 D_801BEF38__func_8014BC18
#define D_801BF178 D_801BF178__func_8014BC18
#define func_8014B034 func_8014B034__func_8014BC18

extern void func_8014B034(u16, s32);
extern u8 D_801BEF38[];
extern u8 D_801BF178[];

void func_8014BC18(void)
{
  u8 *var_s0;
  u8 *var_s1;
 var_s0 = D_801BEF38; var_s1 = D_801BF178;
  do
  {
    if (((*var_s0) & 1) && ((*var_s0) & 0x10))
    {
      func_8014B034(*((u16 *) (var_s0 + 2)), 0);
    }
    var_s0 += 0xC & 0xFF;
  }
  while (var_s0 != var_s1);
}
#undef D_801BEF38
#undef D_801BF178
#undef func_8014B034

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8014AC60/func_8014BC78.s")



s32 func_8014C068(s32 arg0) {
    u8 *temp_v0;
    s32 *arg_p;

    arg_p = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (*temp_v0 & 2)) {
        return 1;
    }
    return 0;
}



s32 func_8014C0A8(s32 arg0) {
    u8 *temp_v0;
    u8 temp_v1;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        if ((temp_v1 & 2) && (temp_v1 & 4)) {
            return 1;
        }
    }
    return 0;
}



s32 func_8014C0F0(s32 arg0) {
    u8 *temp_v0;
    u8 temp_v1;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        if ((temp_v1 & 2) && (temp_v1 & 8)) {
            return 1;
        }
    }
    return 0;
}

struct func_8014C1F0_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

s32 func_8014C138(unsigned int arg0)
{
  struct func_8014C1F0_Struct *temp_v0;
  temp_v0 = (struct func_8014C1F0_Struct *) func_8014B7CC(arg0 & 0xFFFF);
  if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0))
  {
    if (!arg0)
    {
    }
    return func_801FF348(temp_v0->unk4);
  }
  return 0;
}


s32 func_8014C194(unsigned int arg0)
{
  struct func_8014C1F0_Struct *temp_v0;
  temp_v0 = (struct func_8014C1F0_Struct *) func_8014B7CC(arg0 & 0xFFFF);
  if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0))
  {
    if (!arg0)
    {
    }
    return func_801FF3D0(temp_v0->unk4);
  }
  return 0;
}




s32 func_8014C1F0(s32 arg0) {
    struct func_8014C1F0_Struct *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL && (temp_v0->unk0 & 2) && temp_v0->unk4 != 0) {
        return temp_v0->unk9;
    }
    return 0xFF00;
}


struct func_8014C23C_Inner {
    u8 pad0[0xA8];
    u16 unkA8;
};

struct func_8014C23C_Struct {
    u8 unk0;
    u8 pad1[3];
    struct func_8014C23C_Inner *unk4;
};

s32 func_8014C23C(s32 arg0) {
    struct func_8014C23C_Struct *temp_v0;
    struct func_8014C23C_Inner *temp_v1;
    s32 *temp_ptr;

    temp_ptr = &arg0;
    temp_v0 = (struct func_8014C23C_Struct *) func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (temp_v0->unk0 & 2)) {
        temp_v1 = temp_v0->unk4;
        if (temp_v1 != NULL) {
            temp_v1->unkA8 = temp_v1->unkA8 | 8;
        }
    }
    return 0;
}


u8 *func_8014C294(void) {
    return &D_801BED38;
}


s32 func_8014C2A0(void) {
    return 0x200;
}

