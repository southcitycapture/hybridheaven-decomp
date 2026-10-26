#define func_802436A4 func_802436A4__merge_frozen
#include "common.h"


struct func_80242D80_Struct {
    u8 pad[4];
    u16 unk4;
};

extern void func_8001B204(s32, s32, s32, void *);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130078(void);
extern u16 D_80089358;
extern struct func_80242D80_Struct D_80089474;
extern struct func_80242D80_Struct D_801BBBF0;
extern u8 D_8024917C[];
extern u8 D_80249188[];

void func_80242D80(void) {
    if (D_80089358 & 0x10) {
        func_8001B204(0x13, 0x18, 0xD0, D_8024917C);
    } else {
        func_8001B204(0x13, 0, 0, D_80249188);
    }
    if ((func_80130078() == 0) && (D_80089474.unk4 & 0xF000)) {
        D_801BBBF0.unk4 = 0x73;
        func_8012FE50(2, D_801BBBF0.unk4, 1, 1, 2);
        func_80020718(0xA);
    }
}


struct func_80242E30_Struct {
    u8 pad0[0x34];
    s16 *unk34;
};

void func_80242E30(struct func_80242E30_Struct *arg0, s32 arg1)
{
  s16 *temp_v0;
  s16 temp_t8;
  temp_v0 = arg0->unk34;
  temp_v0[4] = 0;
  temp_t8 = temp_v0[4];
  temp_v0[1] = 0;
  temp_v0[2] = 0;
  temp_v0[5] = 0;
  temp_v0[6] = 0;
  temp_v0[3] = ((temp_t8 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu;
}


struct func_80242E58_Struct {
    u8 pad0[0x30];
    void *unk30;
    s32 unk34;
    void *unk38;
    s16 unk3C;
    s16 unk3E;
};

struct func_80242E58_Arg {
    u8 pad0[0x68];
    s32 unk68;
};

struct func_80242E58_Table {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

extern void *func_80005670(void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80248F20[];

void *func_80242E58(void *arg0) {
    struct func_80242E58_Table *var_v1;
    struct func_80242E58_Struct *temp_v0;

    temp_v0 = func_80005670(arg0, D_80248F20);
    if (temp_v0 != NULL) {
        if ((s32) arg0 == D_801BBCCC) {
            var_v1 = (struct func_80242E58_Table *) D_801BC03C;
        } else {
            var_v1 = (struct func_80242E58_Table *) D_801BC3D8;
        }
        temp_v0->unk30 = arg0;
        temp_v0->unk34 = ((struct func_80242E58_Arg *) arg0)->unk68;
        temp_v0->unk38 = var_v1;
        temp_v0->unk3C = var_v1->unk2D8;
        temp_v0->unk3E = var_v1->unk2D9;
    }
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/D_802491F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_80242ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_8024308C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_80243174.s")

#define func_8024334C func_8024334C__func_802432F8

struct func_802432F8_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[9];
    u8 unk41;
    u8 unk42;
};

extern void func_8024334C();

void func_802432F8(struct func_802432F8_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        arg0->unk41 = 0;
        temp_v0[2] = 0x8000;
        func_800058DC((s32)arg0, func_8024334C);
    }
}
#undef func_8024334C

#define func_80243DDC func_80243DDC__func_8024334C

struct func_8024334C_S38 {
    u8 pad0[0x30];
    u32 pad30 : 11;
    u32 f30 : 2;
};
struct func_8024334C_S2C {
    u8 pad0[0xA5];
    u8 unkA5;
};
struct func_8024334C_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_8024334C_Struct {
    u8 pad0[0x2C];
    struct func_8024334C_S2C *unk2C;
    struct func_8024334C_S34 *unk30;
    struct func_8024334C_S34 *unk34;
    struct func_8024334C_S38 *unk38;
    u8 pad3C[2];
    u16 unk3E;
    u8 pad40;
    u8 unk41;
    u8 unk42;
};
extern void func_80243DDC();

void func_8024334C(struct func_8024334C_Struct *arg0, s32 arg1)
{
  struct func_8024334C_S34 *a2 = arg0->unk34;
  struct func_8024334C_S2C *s2c = arg0->unk2C;
  u8 t0 = s2c->unkA5;
  struct func_8024334C_S38 *s38 = arg0->unk38;
  u16 v1 = arg0->unk3E;
  u8 *p42;
  struct func_8024334C_S38 *new_var;
  u8 *p41;
  s32 d;
  extern s32 func_800058DC();
  p42 = &arg0->unk42;
  p41 = &arg0->unk41;
  arg0->unk42++;
  if (arg0->unk42 >= 0x15)
  {
    new_var = s38;
    *p42 = 0xC;
    (*p41)++;
    if ((*p41) >= 7)
    {
      func_800058DC((s32) arg0, func_80243DDC, a2, p42);
      return;
    }
    if (new_var->f30 != 0)
    {
      v1 = v1 & 1;
    }
    else
    {
      v1 = 7 & v1;
    }
    if (v1 == ((0, t0)))
    {
      *p42 = 0;
      func_800058DC((s32) arg0, func_80243DDC, a2, p42);
      return;
    }
    d = ((v1 - t0) + 8) % 8;
    if (d >= 5)
    {
      a2->unkC = 0x100;
      return;
    }
    a2->unkC = 0x200;
  }
}
#undef func_80243DDC

#define func_802434C0 func_802434C0__func_80243454

extern u8 func_80237250[];
void func_802434C0();

struct func_80243454_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};

struct func_80243454_S34 {
    u8 pad0[0xC];
    s16 unkC;
};

struct func_80243454_Struct {
    u8 pad0[0x2C];
    struct func_80243454_S2C *unk2C;
    u8 pad30[4];
    struct func_80243454_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

void func_80243454(struct func_80243454_Struct *arg0, s32 arg1) {
    struct func_80243454_S2C *a = arg0->unk2C;
    u8 *p = &arg0->unk42;
    struct func_80243454_S34 *v1 = arg0->unk34;

    if (a->unk1C == (void *)func_80237250) {
        if (++*p >= 0x15) {
            *p = 0;
            v1->unkC = 0x200;
            func_800058DC((s32)arg0, (void *)func_802434C0);
        }
    }
}
#undef func_802434C0

#define func_80243538 func_80243538__func_802434C0
extern u8 func_802436A4[];
extern void func_80243538();
struct func_802434C0_Struct { u8 pad0[0x34]; u8 *unk34; u8 pad38[6]; u16 unk3E; u8 pad40[2]; u8 unk42; };
void func_802434C0(struct func_802434C0_Struct *arg0, s32 arg1) {
    u8 *v0 = arg0->unk34;
    u16 v1 = arg0->unk3E;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        if (v1 < 0x14) {
            *(u16 *)(v0 + 4) = 0x8000;
            func_800058DC((s32)arg0, func_802436A4);
        } else {
            *(u16 *)(v0 + 0xC) = 0x400;
            func_800058DC((s32)arg0, func_80243538);
        }
    }
}
#undef func_80243538


struct func_80243538_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};


void func_80243538(struct func_80243538_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        temp_v0[2] = 0x8000;
        func_800058DC((s32)arg0, func_802436A4);
    }
}


void func_80243588(u16 arg0, s8 *arg1, s8 *arg2) {
    s32 t;

    if ((arg0 == 0) || (arg0 >= 0x26)) {
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
    if (arg0 < 0x10) {
        t = --arg0;
        *arg1 = t % 4;
        *arg2 = t / 4;
        return;
    }
    if (arg0 < 0x14) {
        *arg1 = arg0 - 0x10;
        *arg2 = 4;
        return;
    }
    if (arg0 < 0x1E) {
        arg0 = arg0 - 0x14;
        t = arg0;
        *arg1 = t % 4;
        *arg2 = t / 4;
        return;
    }
    if (arg0 < 0x21) {
        *arg1 = arg0 - 0x1E;
        *arg2 = 3;
        return;
    }
    if (arg0 < 0x23) {
        *arg1 = arg0 - 0x1F;
        *arg2 = 2;
        return;
    }
    *arg1 = arg0 - 0x23;
    *arg2 = 4;
}

#undef func_802436A4
#define D_80243588 D_80243588__func_802436A4
#define func_800058DC func_800058DC__func_802436A4
#define func_80243DDC func_80243DDC__func_802436A4
extern s32 func_800058DC(s32, void *);
extern void func_80243DDC();


typedef struct func_802436A4_Struct {
    u8 pad0[0xC];
    s16 unkC;
} func_802436A4_Struct_B;

typedef struct func_802436A4_Struct_A {
    u8 pad0[0x34];
    func_802436A4_Struct_B *unk34;
    u8 pad38[6];
    u16 unk3E;
    u8 unk40;
    u8 unk41;
    u8 unk42;
} func_802436A4_Struct_A;

extern void D_80243588(u16, u8 *, u8 *, func_802436A4_Struct_A *);

void func_802436A4(func_802436A4_Struct_A *arg0, s32 arg1) {
    func_802436A4_Struct_B *b;
    u8 *p;
    u8 *q1;
    u8 *q2;
    s32 pad;
  {
    u16 sp2A;
    u8 sp29;
    u8 sp28;

    b = arg0->unk34;
    sp2A = arg0->unk3E;
    q1 = &arg0->unk40;
    q2 = &arg0->unk41;
    arg0->unk42++;
    p = &arg0->unk42;
    if (arg0->unk42 >= 0x1F) {
        *p = 0x14;
        D_80243588(sp2A, &sp29, &sp28, arg0);
        if (sp29 != *q1) {
            if ((sp29 - *q1 + 4) % 4 < 3) {
                b->unkC = 0x100;
                *q1 = (*q1 + 1) % 4;
            } else {
                b->unkC = 0x200;
                *q1 = (*q1 + 3) % 4;
            }
            return;
        }
        if (sp28 != *q2) {
            if ((sp28 - *q2 + 5) % 5 < 3) {
                b->unkC = 0x400;
                *q2 = (*q2 + 1) % 5;
            } else {
                b->unkC = 0x800;
                *q2 = (*q2 + 4) % 5;
            }
            return;
        }
        *p = 0;
        func_800058DC((s32)arg0, (void *)func_80243DDC);
    }
  }
}
#undef D_80243588
#undef func_800058DC
#undef func_80243DDC
#define func_802436A4 func_802436A4__merge_frozen


struct func_802438A4_S2C {
    u8 pad0[0x1C];
    void *unk1C;
};
struct func_802438A4_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_802438A4_Struct {
    u8 pad0[0x2C];
    struct func_802438A4_S2C *unk2C;
    u8 pad30[4];
    struct func_802438A4_S34 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};
extern void func_8022696C();
extern u8 func_80243920[];

void func_802438A4(struct func_802438A4_Struct *arg0, s32 arg1) {
    struct func_802438A4_S2C *s = arg0->unk2C;
    struct func_802438A4_S34 *p = arg0->unk34;
    u8 *c = &arg0->unk42;

    if (s->unk1C !=(void *)func_80237250) {
        func_8022696C();
        return;
    }
    *c += 1;
    if (*c >= 0x15) {
        *c = 0;
        p->unkC = 0x100;
        func_800058DC((s32)arg0, func_80243920);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_80243920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_80243A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file012/80242D80/func_80243B4C.s")

#define func_80243CA4 func_80243CA4__func_80243C3C

struct func_80243CA4_Struct;
void func_80243CA4(struct func_80243CA4_Struct *arg0, s32 arg1);
struct func_80243C3C_B { u8 pad[0xA5]; u8 unkA5; };
struct func_80243C3C_C { u8 pad[0xC]; s16 unkC; };
struct func_80243C3C_Struct {
    u8 pad0[0x2C];
    struct func_80243C3C_B *unk2C;
    u8 pad30[4];
    struct func_80243C3C_C *unk34;
    u8 pad38[0x42 - 0x38];
    u8 unk42;
};

void func_80243C3C(arg0, arg1)
struct func_80243C3C_Struct *arg0;
u8 arg1;
{
    struct func_80243C3C_B *b = arg0->unk2C;
    struct func_80243C3C_C *c = arg0->unk34;

    arg1 = b->unkA5;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x10) {
        arg0->unk42 = 0;
        if (arg1 == 1) {
            func_800058DC((s32)arg0, (void *)func_80243CA4);
        } else {
            c->unkC = 0x400;
        }
    }
}
#undef func_80243CA4


struct func_80243CA4_Struct {
    u8 pad0[0x34];
    s16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

extern void func_80243CF4();

void func_80243CA4(struct func_80243CA4_Struct *arg0, s32 arg1) {
    s16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0xB) {
        arg0->unk42 = 0;
        temp_v0[6] = 0x100;
        func_800058DC((s32)arg0, func_80243CF4);
    }
}

#define func_80243DDC func_80243DDC__func_80243CF4
#define func_80243DDC_Struct func_80243DDC_Struct__func_80243CF4
struct func_80243DDC_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0x42 - 0x38];
    u8 unk42;
};
extern void func_80243DDC(struct func_80243DDC_Struct *arg0, s32 arg1);

struct func_80243CF4_B { u8 pad[0xA5]; u8 unkA5; };
struct func_80243CF4_C { u8 pad[0xC]; s16 unkC; };
struct func_80243CF4_Struct {
    u8 pad0[0x2C];
    struct func_80243CF4_B *unk2C;
    u8 pad30[4];
    struct func_80243CF4_C *unk34;
    u8 pad38[0x3E - 0x38];
    u16 unk3E;
    u8 pad40[2];
    u8 unk42;
};

void func_80243CF4(struct func_80243CF4_Struct *arg0, s32 arg1)
{
    struct func_80243CF4_B *b = arg0->unk2C;
    struct func_80243CF4_C *c = arg0->unk34;
    u16 w = arg0->unk3E;
    u8 v = b->unkA5;
    u8 *p = &arg0->unk42;
    *p = *p + 1;
    if (*p > 0x14) {
        *p = 0;
        if (w == v) {
            func_800058DC((s32)arg0, (void *)func_80243DDC);
        } else if (w > v) {
            *p = 10;
            c->unkC = 0x400;
        } else {
            *p = 10;
            c->unkC = 0x800;
        }
    }
}
#undef func_80243DDC
#undef func_80243DDC_Struct

#define func_80243E2C func_80243E2C__func_80243D8C

extern void func_80243E2C(s32 arg0, s32 arg1);
struct func_80243D8C_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

void func_80243D8C(struct func_80243D8C_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        temp_v0[2] = 0x4000;
        func_800058DC((s32)arg0, func_80243E2C);
    }
}
#undef func_80243E2C

#define func_80243E2C func_80243E2C__func_80243DDC

extern void func_80243E2C(s32 arg0, s32 arg1);

struct func_80243DDC_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0x42 - 0x38];
    u8 unk42;
};

void func_80243DDC(struct func_80243DDC_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 11) {
        arg0->unk42 = 0;
        temp_v0[2] = 0x8000;
        func_800058DC((s32)arg0, func_80243E2C);
    }
}
#undef func_80243E2C


extern void func_80005700(s32 arg0, s32 arg1);

void func_80243E2C(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


#undef func_802436A4
