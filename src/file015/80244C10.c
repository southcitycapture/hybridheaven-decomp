#include "common.h"

extern f32 D_80258B90;
extern f32 D_80258BB0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_80258B98;
extern f64 D_80258BA0;
extern f64 D_80258BA8;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_80011198(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
extern s32 func_801C2FF8(void);
extern s32 func_801C3B5C();
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_80258780[];
extern u8 D_802587C0[];
extern u8 D_80258940[];
extern u8 D_802589C0[];
extern u8 D_80258A00[];
extern u8 func_80245CE4[];
extern u8 func_80246020[];
extern void *D_8025A2A4;
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801C2F0C(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C4058(void *, f32, f32, s32);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_80245588();
extern void func_80245758();
extern void func_80245988(void *arg0, s32 arg1);
extern void func_802459C8(void);
extern void func_80245C60();
extern void func_80246388();
extern void func_80246598(void *, s32);
extern void func_802466A4(void *arg0, void **arg1);
extern void func_80246760();
extern void func_802467FC(void *arg0, s32 arg1);
extern void func_80246874(void *arg0, s32 arg1);
extern void func_80246920();
extern void func_802469F8();
extern void func_80246A44();
extern void func_80246C20();
extern void func_80246D34();
extern void func_80246E34();
extern void func_80246EB8();
extern void func_802470E0();
extern void func_8024723C(void *arg0, s32 arg1);
extern void func_80247284(void *arg0, s32 arg1);
extern void func_802472D4();
extern void func_80247498();
extern void func_80247568();
extern void func_8024770C();

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80244C10.s")


void func_802453F0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct { u8 pad0[0x40]; f32 f40; u8 pad44[4]; f32 f48; } func_802453FC_StructB;
typedef struct { u8 pad[0xDC]; func_802453FC_StructB *p; u8 pad2[0x1E8-0xE0]; f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC; } func_802453FC_Struct;
typedef struct { u8 pad[0x3C]; s16 h3C; } func_802453FC_StructA;
extern func_802453FC_Struct D_801BBBF0;
extern f32 D_80258A78, D_80258A7C, D_80258A80, D_80258A84, D_80258A88, D_80258A8C;
extern f32 D_80258A90, D_80258A94, D_80258A98, D_80258A9C, D_80258AA0, D_80258AA4;

void func_802453FC(func_802453FC_StructA *arg0, s32 arg1) {
    if (func_801C3D20(D_80258A78, D_80258A7C, 20.0f) != 0 || func_801C3D20(D_80258A80, D_80258A84, 20.0f) != 0 || func_801C3D20(D_80258A88, D_80258A8C, 20.0f) != 0) {
        func_80133980(0x74);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.p->f40 = 0.0f;
        D_801BBBF0.p->f48 = 0.0f;
        D_801BBBF0.f1E8 = D_80258A90;
        D_801BBBF0.f1EC = D_80258A94;
        D_801BBBF0.f1F0 = D_80258A98;
        D_801BBBF0.f1F4 = D_80258A9C;
        D_801BBBF0.f1F8 = D_80258AA0;
        D_801BBBF0.f1FC = D_80258AA4;
        func_8011AAF4(D_80258780, 0x218, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_801FBB30();
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245588);
    }
}


extern f32 D_80258AA8, D_80258AAC;
extern f32 D_80258AB0, D_80258AB4, D_80258AB8;
extern f32 D_80258ABC, D_80258AC0, D_80258AC4;

typedef struct func_80245588_StructObj {
    u8 pad[0x3C];
    u16 counter;
} func_80245588_StructObj;

typedef union func_80245588_StructData {
    u8 storage[0x20];
    struct {
        f32 x, y, z;
        s16 type;
        s32 id;
        f32 scale;
        s16 a, b;
    } first;
    struct {
        s16 type;
        s32 id;
        f32 scale;
        s16 a;
    } second;
} func_80245588_StructData;

void func_80245588(func_80245588_StructObj *arg0, s32 arg1)
{
  func_80245588_StructData data;
  u16 temp_v0;
  if (func_801C2FF8() != 0)
  {
    temp_v0 = arg0->counter;
    arg0->counter = temp_v0 + 1;
    if (temp_v0 >= 12)
    {
      if (temp_v0 == 12)
      {
        data.first.type = 0x1100;
        data.first.id = 0x0168003F;
        data.first.a = 0;
        data.first.b = 0;
        data.first.x = -304.0f;
        data.first.y = D_80258AA8;
        data.first.z = 0.0f;
        data.first.scale = D_80258AAC;
        func_801C2F0C(2, &data);
      }
      if (!D_801BBBF0.f1EC)
      {
      }
      if (func_801C3B5C() == 4)
      {
        data.second.type = 0x1000;
        data.second.id = 0x01680041;
        data.second.a = 10;
        data.second.scale = 1.0f;
        func_801C2F0C(3, &data);
        D_801BBBF0.f1E8 = D_80258AB0;
        D_801BBBF0.f1EC = D_80258AB4;
        D_801BBBF0.f1F0 = D_80258AB8;
        D_801BBBF0.f1F4 = D_80258ABC;
        D_801BBBF0.f1F8 = D_80258AC0;
        D_801BBBF0.f1FC = D_80258AC4;
        func_8011AAF4(D_802587C0, 0x24C, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->counter = 0;
        func_80020718(7);
        func_800058DC(arg0, func_80245758);
      }
    }
  }
}


extern u8 D_80258800[], D_80258840[];
extern f32 D_80258AC8, D_80258ACC, D_80258AD0, D_80258AD4, D_80258AD8, D_80258ADC, D_80258AE0;
extern f32 D_80258AE4, D_80258AE8, D_80258AEC, D_80258AF0, D_80258AF4, D_80258AF8, D_80258AFC, D_80258B00;

typedef struct { u8 pad[4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[2]; s16 s12; } func_80245758_StructB;
typedef struct { u8 pad[0x2C]; func_80245758_StructB *p; } func_80245758_StructA;

void func_80245758(func_802453FC_StructA *arg0, s32 arg1) {
    s32 v = *(u16 *)&arg0->h3C;
    (*(u16 *)&arg0->h3C)++;
    if (v == 0) {
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->f4 = D_80258AC8;
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->fC = D_80258ACC;
        ((func_80245758_StructA *)*(void **)((u8 *)&D_801BBBF0 + 0xE0))->p->s12 = 0x1000;
    }
    if (v == 0x32) {
        D_801BBBF0.f1E8 = D_80258AD0;
        D_801BBBF0.f1EC = D_80258AD4;
        D_801BBBF0.f1F0 = D_80258AD8;
        D_801BBBF0.f1F4 = -278.0f;
        D_801BBBF0.f1F8 = D_80258ADC;
        D_801BBBF0.f1FC = D_80258AE0;
        func_8011AAF4(D_80258800, 0x271, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        func_80020718(0x1B5);
        func_800208C4(0x7C);
        func_80133980(0x77);
    }
    if (v >= 0x6E && D_8011AAF4(D_80258840, 0x27D, arg0, 0, 2, D_80258AE4, D_80258AE8, D_80258AEC, D_80258AF0, D_80258AF4, D_80258AF8, D_80258AFC, D_80258B00, 0.0f, 35.0f, -1, -1) == 0) {
        arg0->h3C = 0;
        func_800058DC(arg0, func_80245988);
    }
}



void func_80245988(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = ((u16 *)arg0)[0x3C / 2];
    ((u16 *)arg0)[0x3C / 2] = temp_v0 + 1;
    if (temp_v0 == 0xA0) {
        ((u16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_802459C8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802459C8.s")


struct func_80245BCC_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
};


void func_80245BCC(void *arg0, s32 arg1) {
    struct func_80245BCC_Struct sp18;

    if (func_801C3B5C() == 4) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100022;
        sp18.unkC = 6;
        sp18.unk8 = 1.5f;
        func_801C2F0C(5, &sp18);
        func_800058DC(D_8025A2A4, func_8024770C);
        ((s16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_80245C60);
    }
    func_80246598(arg0, arg1);
}



void func_80245C60(func_80245588_StructObj *arg0, s32 arg1) {
    if (arg0->counter++ == 5) {
        func_80133980(0x77);
    }
    if (func_801C3B5C() == 4) {
        arg0->counter = 0;
        func_800058DC(arg0, func_80245CE4);
    }
    func_80246598(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80245CE4.s")

typedef struct { u8 pad[0x3C]; u16 h3C; u8 pad3E[2]; f32 f40; } func_80245E8C_Struct;
typedef struct { s16 a; s32 b; f32 c; s16 d; u8 pad[8]; } func_80245E8C_Msg;
extern f32 D_80258B38, D_80258B3C, D_80258B40, D_80258B44, D_80258B48, D_80258B4C;

void func_80245E8C(func_80245E8C_Struct *arg0, s32 arg1) {
    u16 t;
    u8 padx[4];
    func_80245E8C_Msg m;
    t = arg0->h3C;
    arg0->h3C = t + 1;
    if (t == 0x1E) {
        func_80133980(0x73);
        m.a = 0x1100;
        m.b = 0x01680041;
        m.c = 1.0f;
        m.d = 0xA;
        func_801C2F0C(5, &m);
    }
    if (t >= 0x5A && func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        D_801BBBF0.f1E8 = -330.0f;
        D_801BBBF0.f1EC = D_80258B38;
        D_801BBBF0.f1F0 = D_80258B3C;
        D_801BBBF0.f1F4 = D_80258B40;
        D_801BBBF0.f1F8 = D_80258B44;
        D_801BBBF0.f1FC = D_80258B48;
        func_8011AAF4(D_80258940, 0x337, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->h3C = 0;
        arg0->f40 = D_80258B4C;
        func_800058DC(arg0, func_80246020);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246020.s")


typedef struct func_802461CC_StructVec {
    f32 x, y, z;
} func_802461CC_StructVec;
typedef struct func_802461CC_StructObj {
    u8 pad[0x22];
    u8 flag;
    u8 pad23[9];
    func_802461CC_StructVec *p2C;
    func_802461CC_StructVec *p30;
} func_802461CC_StructObj;
typedef struct func_802461CC_StructGlobal {
    u8 pad[0x24];
    func_802461CC_StructObj *p24;
} func_802461CC_StructGlobal;
typedef struct func_802461CC_StructState {
    u8 pad[0x3C];
    u16 count;
    u8 pad3E[6];
    f32 velocity;
    u8 pad48[0x50];
    f32 height;
    u8 pad9C[4];
    f32 scale;
} func_802461CC_StructState;

extern const f64 D_80258B80, D_80258B88;

void func_802461CC(func_802461CC_StructState *arg0, func_802461CC_StructObj **arg1) {
    s32 count;
    f32 velocity;
    f64 displacement;
    func_802461CC_StructVec *p;
    func_802461CC_StructVec *q;

    count = arg0->count++;
    func_801C4058(arg0, 0.0f, 0.0f, 11);
    if (count >= 30) {
        if (count == 30) {
            func_80020718(442);
        }
        velocity = arg0->velocity;
        displacement = D_80258B80;
        arg0->height += velocity;
        p = ((func_802461CC_StructGlobal *)D_8025A2A4)->p24->p2C;
        p->z += velocity;
        arg0->velocity -= 0.5;
        arg1[0]->p30->z = arg0->height;
        arg1[1]->p30->z = arg0->height;
        arg1[2]->p30->z = arg0->height;
        arg1[5]->p30->z = (arg0->scale * D_80258B88) + (arg0->height + 9.5);
        arg1[6]->p30->z = arg0->height;
        arg1[7]->p30->z = arg0->height;
        q = arg1[6]->p30;
        q->y -= displacement;
        p = arg1[7]->p30;
        p->y += displacement;
        if (count >= 60) {
            arg1[0]->flag = 0;
            arg0->count = 0;
            func_80133980(115);
            func_800058DC(arg0, func_80246388);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246388.s")


typedef struct func_802463EC_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_802463EC_StructB;
typedef struct func_802463EC_StructA {
    u8 pad[0x2C];
    func_802463EC_StructB *p;
} func_802463EC_StructA;

extern func_802463EC_StructA *D_801BBCD0;

void func_802463EC(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->p->s12);
    if (func_801C3DC8(arg0, (f32)((f64)D_801BBCD0->p->f4 - (f64)sp50 * 40.0), D_801BBCD0->p->f8 + 20.0f,
                      (f32)((f64)D_801BBCD0->p->fC - (f64)func_8001EB64(D_801BBCD0->p->s12) * 40.0),
                      D_801BBCD0->p->f4, D_801BBCD0->p->f8 + 17.0f, D_801BBCD0->p->fC, D_80258B90, 35.0f) == 0) {
        func_8011AAF4(D_802589C0, 0x3A7, (void *)arg0, 2, 1, 0.0f, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f30, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f34, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f38, 0.0f, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f3C, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f40, (*(func_802463EC_StructA **)((u8 *)&D_801BBCD0 + 8))->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800208C4(0x26);
        func_800208C4(0x31);
        func_800058DC((void *)arg0, (void *)func_802453F0);
    }
}



struct func_80246598_Arg0 {
    u8 pad[0x98];
    f32 unk98;
    u8 pad2[4];
    f32 unkA0;
};

struct func_80246598_Sub2 {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[6];
    s16 unk12;
    u8 pad2[8];
    f32 unk1C;
};

struct func_80246598_Sub1 {
    u8 pad[0x30];
    struct func_80246598_Sub2 *unk30;
};

struct func_80246598_Arg1 {
    u8 pad[0x14];
    struct func_80246598_Sub1 *unk14;
};

void func_80246598(void *arg0, s32 arg1)
{
  struct func_80246598_Arg0 *a0 = (struct func_80246598_Arg0 *) arg0;
  struct func_80246598_Sub2 *temp_v0;
  struct func_80246598_Arg0 *new_var;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk8 = (f32) ((((f64) a0->unkA0) * D_80258B98) + (((f64) a0->unk98) + 9.5));
  temp_v0 = ((struct func_80246598_Arg1 *) arg1)->unk14->unk30;
  temp_v0->unk12 = (s16) (((short) (temp_v0->unk12 + 0x16)) & 0x1FFF);
  new_var = a0;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk1C = (f32) (((f64) a0->unkA0) * D_80258BA0);
  new_var->unkA0 = (f32) (((f64) a0->unkA0) + D_80258BA8);
  if (((f64) new_var->unkA0) > 1.0)
  {
    a0->unkA0 = 1.0f;
  }
}



void func_8024666C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_802466A4);
}


struct func_802466A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_802466A4_Obj {
    u8 pad[0x2C];
    struct func_802466A4_Sub *unk2C;
};

struct func_802466A4_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern struct func_802466A4_Vec D_8025294C;

void func_802466A4(void *arg0, void **arg1) {
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk4 = -278.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk8 = -125.0f;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unkC = D_80258BB0;
    (*(struct func_802466A4_Obj **) arg1)->unk2C->unk12 = 0x1000;
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    *(s16 *) ((u8 *) arg0 + 0x90) = 0;
    func_800058DC(arg0, func_80246760);
}


struct func_80246760_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};
struct func_80246760_Vec {
    s32 x;
    s32 y;
    s32 z;
};
extern struct func_80246760_Vec D_80252958;

void func_80246760(struct func_80246760_Obj *arg0, s32 arg1)
{
  u16 temp_v0;
  unsigned int new_var;
  s32 temp;
  s32 flag;
  temp = arg0->unk5C;
  if (func_80010550(arg1, temp) != 0)
  {
    temp_v0 = arg0->unk90;
    new_var = temp_v0;
    flag = ((s32) new_var) >= 2;
    arg0->unk90 = (u16) (new_var + 1);
    temp_v0 = 0x667;
    if (flag == 0)
    {
      func_8013A1B4(arg1, D_80252958, 0xFFFFFF);
      func_80020718(temp_v0);
      func_800058DC(arg0, &func_802467FC);
    }
  }
}


/* Copied exactly from context.h: the in-file build strips #include, so these must appear before use. */
extern struct func_802466A4_Vec D_80252964;

void func_802467FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = *(s32 *) ((u8 *) arg0 + 0x5C);
    if (func_80010550(arg1, temp) != 0) {
        func_8013A1B4((void **) arg1, D_80252964, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80246874);
    }
}


struct func_80246874_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

extern struct func_802466A4_Vec D_8025297C;

void func_80246874(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((struct func_80246874_Obj *) arg0)->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            func_8013A1B4((void **) arg1, D_8025297C, 0xFFFFFF);
            func_800058DC(arg0, func_802469F8);
            return;
        }
        ((struct func_80246874_Obj *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80246920);
    }
}

struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};
struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};
extern struct func_80246B38_StructA *D_801BBCD8;

extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);

struct func_80246920_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

void func_80246920(struct func_80246920_Struct *arg0, volatile s32 arg1)
{
  struct func_80246920_Struct *new_var;
  unsigned int new_var2;
  new_var2 = arg0->unk5C;
  if (func_80011140(arg1, new_var2, D_8025294C, 10) != 0)
  {
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    new_var = arg0;
    if (D_801BBCD8->unk2C->unk38 < 500.0f)
    {
      func_80020718(0x1B5);
    }
    new_var->unk90 = 0;
    func_800058DC(new_var, func_80246760);
  }
}


typedef struct func_802469F8_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_802469F8_Struct;


void func_802469F8(func_802469F8_Struct *arg0, s32 arg1) {
    s32 val;

    val = arg0->unk5C;
    if (func_80010550(arg1, val, arg0) != 0) {
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80246A44);
    }
}

struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};
void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1);


void func_80246A44(func_802469F8_Struct *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_v0;
    s32 condition;

    sp24 = arg0->unk5C;
    condition = arg0->unk90++ >= 0x1E;
    if (condition && (func_80011140(arg1, sp24, D_8025294C, 0x14) != 0)) {
        func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        func_800058DC(arg0, func_80246B38);
    }
}






void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            arg0->unk90 = 0;
            func_80011198(arg1, temp_a1);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246C20);
            return;
        }
        func_8013A1B4((void **)arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
    }
}

struct func_80246CDC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};
void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1);

extern struct func_802466A4_Vec D_80252970;

struct func_80246C20_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

void func_80246C20(struct func_80246C20_Struct *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;

    func_80011140(arg1, t, D_80252970, 0xF);
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4(arg1, D_8025297C, 0xFFFFFF);
        func_800058DC(arg0, func_80246CDC);
    }
}




void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        arg0->unk90 = 0;
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80246D34);
    }
}


struct func_80246D34_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

extern struct func_802466A4_Vec D_80252994;

void func_80246D34(struct func_80246D34_Struct *arg0, s32 arg1) {
    s32 sp2C;

    sp2C = arg0->unk5C;
    if ((arg0->unk90++ >= 0x1E) && (func_80011140(arg1, sp2C, D_80252994, 0xF) != 0)) {
        func_8013A1B4(arg1, D_80252994, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80246E34);
    }
}



typedef struct func_80246E34_Struct {
    u8 pad0[0x5C];
    s32 f5C;
    u8 pad60[0x30];
    u16 f90;
} func_80246E34_Struct;

void func_80246E34(func_80246E34_Struct *arg0, s32 arg1) {
    s32 a3 = arg0->f5C;

    if (arg0->f90++ >= 5) {
        if (func_80010550(arg1, a3) != 0) {
            func_80133980(0x73);
            func_80011198(arg1, a3);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246EB8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80246EB8.s")


extern struct func_802466A4_Vec D_802529A0;
extern f32 D_80258BB4, D_80258BB8, D_80258BBC, D_80258BC0, D_80258BC4;

void func_80246F44(struct func_80246D34_Struct *arg0, struct func_802466A4_Obj **arg1) {
    s32 sp54;
    struct func_802466A4_Sub *s;

    sp54 = arg0->unk5C;
    s = (*arg1)->unk2C;
    if (s->unk12 >= 0x71D) {
        s->unk12 = s->unk12 - 0xB6;
    }
    if (func_80011140((s32)arg1, sp54, D_802529A0, 0x1E) != 0) {
        D_801BBBF0.f1E8 = D_80258BB4;
        D_801BBBF0.f1EC = -87.5f;
        D_801BBBF0.f1F0 = D_80258BB8;
        D_801BBBF0.f1F4 = D_80258BBC;
        D_801BBBF0.f1F8 = D_80258BC0;
        D_801BBBF0.f1FC = D_80258BC4;
        func_8011AAF4(D_80258A00, 0x4D0, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_8013A1B4(arg1, D_802529A0, 0xFFFFFF);
        func_800058DC(arg0, func_802470E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_802470E0.s")

void func_80247184(void *arg0, struct func_802466A4_Obj **arg1);


void func_8024714C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x2D, 0, 4, func_80247184);
}


struct func_80247184_Arg0 {
    u8 pad0[0x92];
    s16 unk92;
};

extern struct func_802466A4_Vec D_802529AC;

void func_80247184(void *arg0, struct func_802466A4_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -300.0f;
    (*arg1)->unk2C->unk8 = -114.0f;
    (*arg1)->unk2C->unkC = 378.0f;
    (*arg1)->unk2C->unk12 = 0;
    func_8013A1B4((void **)arg1, D_802529AC, 0xFFFFFF);
    ((struct func_80247184_Arg0 *)arg0)->unk92 = 0;
    func_800058DC(arg0, (void *)func_8024723C);
}



void func_8024723C(void *arg0, s32 arg1) {
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_80247284);
    }
}



void func_80247284(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_802472D4);
    }
}

struct func_80247380_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x5C - 0x3E];
    s32 unk5C;
    u8 pad2[0x92 - 0x60];
    u16 unk92;
};
extern struct func_802466A4_Vec D_802529B8;
void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1);


void func_802472D4(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    s32 value = arg0->unk5C;
    if (func_80011140(arg1, value, D_802529B8, 10) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->unk92 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80247380);
    }
}




void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    s32 value = arg0->unk5C;

    if (func_80010550(arg1, value) != 0) {
        if (arg0->unk92++ >= 2) {
            func_800058DC(arg0, func_80247498);
        } else {
            arg0->unk3C = 0;
            func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        }
    }
    if ((arg0->unk3C++ == 0x13) && (D_801BBCD8->unk2C->unk38 < 500.0f)) {
        func_80020718(0x1B6);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    }
}

extern struct func_802466A4_Vec D_802529C4;
typedef struct { u8 pad[0x3C]; s16 h3C; u8 pad2[0x1C]; s32 f5C; } func_80247498_Struct;

void func_80247498(func_80247498_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529C4, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529C4, 0xFFFFFF);
        arg0->h3C = 0;
        func_800058DC(arg0, (void *)func_80247568);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244C10/func_80247568.s")

typedef struct { u8 pad[0x5C]; s32 f5C; u8 pad2[0x32]; s16 h92; } func_8024763C_Struct;

void func_8024763C(func_8024763C_Struct *arg0, s32 arg1) {
    s32 t = arg0->f5C;
    if (func_80011140(arg1, t, D_802529B8, 0xA) != 0) {
        func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        arg0->h92 = 0;
        func_800058DC(arg0, (void *)func_80247380);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024770C);
    }
}

struct func_802477B0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2);

typedef struct func_8024770C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024770C_Struct;

extern struct func_802466A4_Vec D_802529D0;

void func_8024770C(func_8024770C_Struct *arg0, s32 arg1)
{
  struct func_802466A4_Vec *g = &D_802529D0;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0xA) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_802477B0);
  }
}




void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2)
{
  s32 temp;
  if (!arg0->unk5C)
  {
  }
  temp = arg0->unk5C;
  func_80010550(arg1, temp, arg2);
}

