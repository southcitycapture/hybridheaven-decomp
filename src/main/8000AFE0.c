#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000AFE0.s")


struct func_8000B1E8_Sub {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_8000B1E8_Outer {
    u8 pad[0x2C];
    struct func_8000B1E8_Sub *unk2C;
    struct func_8000B1E8_Sub *unk30;
};

extern void func_8000AFE0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);

void func_8000B1E8(s32 arg0, struct func_8000B1E8_Outer *arg1) {
    struct func_8000B1E8_Sub *var_v0;

    if (arg1->unk2C != NULL) {
        var_v0 = arg1->unk2C;
    } else {
        var_v0 = arg1->unk30;
    }
    func_8000AFE0(arg0, var_v0->unk4, var_v0->unk8, var_v0->unkC, var_v0->unk10, var_v0->unk12, var_v0->unk14, var_v0->unk18, var_v0->unk1C, var_v0->unk20);
}


void func_8000B258(s32 arg0, void *arg1) {
#define a ((f32 (*)[4])arg0)
#define b ((f32 (*)[4])arg1)
    f32 t[4][4];

    t[0][0] = b[0][0]*a[0][0] + b[1][0]*a[0][1] + b[2][0]*a[0][2];
    t[0][1] = b[0][1]*a[0][0] + b[1][1]*a[0][1] + b[2][1]*a[0][2];
    t[0][2] = b[0][2]*a[0][0] + b[1][2]*a[0][1] + b[2][2]*a[0][2];
    t[1][0] = b[0][0]*a[1][0] + b[1][0]*a[1][1] + b[2][0]*a[1][2];
    t[1][1] = b[0][1]*a[1][0] + b[1][1]*a[1][1] + b[2][1]*a[1][2];
    t[1][2] = b[0][2]*a[1][0] + b[1][2]*a[1][1] + b[2][2]*a[1][2];
    t[2][0] = b[0][0]*a[2][0] + b[1][0]*a[2][1] + b[2][0]*a[2][2];
    t[2][1] = b[0][1]*a[2][0] + b[1][1]*a[2][1] + b[2][1]*a[2][2];
    t[2][2] = b[0][2]*a[2][0] + b[1][2]*a[2][1] + b[2][2]*a[2][2];
    t[3][0] = b[0][0]*a[3][0] + b[1][0]*a[3][1] + b[2][0]*a[3][2] + b[3][0]*a[3][3];
    t[3][1] = b[0][1]*a[3][0] + b[1][1]*a[3][1] + b[2][1]*a[3][2] + b[3][1]*a[3][3];
    t[3][2] = b[0][2]*a[3][0] + b[1][2]*a[3][1] + b[2][2]*a[3][2] + b[3][2]*a[3][3];
    a[0][0] = t[0][0];
    a[0][1] = t[0][1];
    a[0][2] = t[0][2];
    a[1][0] = t[1][0];
    a[1][1] = t[1][1];
    a[1][2] = t[1][2];
    a[2][0] = t[2][0];
    a[2][1] = t[2][1];
    a[2][2] = t[2][2];
    a[3][0] = t[3][0];
    a[3][1] = t[3][1];
    a[3][2] = t[3][2];
    a[0][3] = 0.0f;
    a[1][3] = 0.0f;
    a[2][3] = 0.0f;
    a[3][3] = 1.0f;
}
#undef a
#undef b


extern void func_8000B67C(s32, void *);

void func_8000B578(s32 arg0, s32 *arg1) {
    s32 sp18[0x40 / 4];

    func_8000B67C(arg1[7], sp18);
    func_8000B258(arg0, sp18);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000B5AC.s")


void func_8000B67C(s32 arg0, void *arg1) {
    u8 pad[8];
    u32 e1, e2;
    u32 *a;
    u32 *b;
    f32 *o;
    s32 i;

    a = (u32 *)arg0;
    b = a + 8;
    for (i = 0, o = (f32 *)arg1; i != 4; i += 2) {
        e1 = (a[0] & 0xFFFF0000) | ((b[0] >> 16) & 0xFFFF);
        e2 = ((a[0] << 16) & 0xFFFF0000) | (b[0] & 0xFFFF);
        o[0] = (f32)*(s32 *)&e1 * 0.000015258789f;
        o[1] = (f32)*(s32 *)&e2 * 0.000015258789f;
        e1 = (a[1] & 0xFFFF0000) | ((b[1] >> 16) & 0xFFFF);
        e2 = ((a[1] << 16) & 0xFFFF0000) | (b[1] & 0xFFFF);
        o[2] = (f32)*(s32 *)&e1 * 0.000015258789f;
        o[3] = (f32)*(s32 *)&e2 * 0.000015258789f;
        e1 = (a[2] & 0xFFFF0000) | ((b[2] >> 16) & 0xFFFF);
        e2 = ((a[2] << 16) & 0xFFFF0000) | (b[2] & 0xFFFF);
        o[4] = (f32)*(s32 *)&e1 * 0.000015258789f;
        o[5] = (f32)*(s32 *)&e2 * 0.000015258789f;
        e1 = (a[3] & 0xFFFF0000) | ((b[3] >> 16) & 0xFFFF);
        e2 = ((a[3] << 16) & 0xFFFF0000) | (b[3] & 0xFFFF);
        o[6] = (f32)*(s32 *)&e1 * 0.000015258789f;
        o[7] = (f32)*(s32 *)&e2 * 0.000015258789f;
        a += 4;
        b += 4;
        o += 8;
    }
}

s32 func_8001EF38(f32, f32);
extern void *D_80089460;

struct func_8000B83C_StructA {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
};

struct func_8000B83C_StructB {
    u8 pad[0x2C];
    void *unk2C;
    void *unk30;
};

struct func_8000B83C_StructC {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_8000B83C_StructD {
    u8 pad[0x2C];
    struct func_8000B83C_StructC *unk2C;
};

f32 func_8002FC20(f32, f32);

void func_8000B83C(struct func_8000B83C_StructB *arg0)
{
  f32 sp24;
  f32 sp20;
  struct func_8000B83C_StructA *sp1C;
  s16 new_var;
  void *temp_v0;
  temp_v0 = arg0->unk2C;
  if (temp_v0 != 0)
  {
    sp1C = temp_v0;
  }
  else
  {
    sp1C = arg0->unk30;
  }
  sp24 = ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk3C - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk30;
  sp20 = ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk44 - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk38;
  sp1C->unk12 = (s16) (((new_var = func_8001EF38(sp24, sp20) ^ 0) + 0x1000) & 0x1FFF);
  sp1C->unk10 = func_8001EF38(((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk40 - ((struct func_8000B83C_StructD *) D_80089460)->unk2C->unk34, func_8002FC20((sp24 * sp24) + (sp20 * sp20), sp20));
}


typedef struct func_8000B8F0_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x18];
    void *unk2C;
    void *unk30;
} func_8000B8F0_Struct;

typedef struct func_8000B8F0_StructB {
    u8 pad0[0x2C];
    void *unk2C;
} func_8000B8F0_StructB;

typedef struct func_8000B8F0_StructC {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    u8 pad1[0x4];
    f32 unk44;
} func_8000B8F0_StructC;


void func_8000B8F0(func_8000B8F0_Struct *arg0)
{
  void *temp_v0;
  func_8000B8F0_StructC *temp_v0_2;
  void *var_v1;
  void *sp1C;
  temp_v0 = arg0->unk2C;
  if (temp_v0 != 0)
  {
    var_v1 = temp_v0;
  }
  else
  {
    var_v1 = arg0->unk30;
  }
  temp_v0_2 = ((func_8000B8F0_StructB *) D_80089460)->unk2C;
  sp1C = var_v1;
  ((func_8000B8F0_Struct *) sp1C)->unk12 = (s16) ((((short) func_8001EF38(temp_v0_2->unk3C - temp_v0_2->unk30, temp_v0_2->unk44 - temp_v0_2->unk38)) + 0x1000) & 0x1FFF);
  ((func_8000B8F0_Struct *) sp1C)->unk10 = 0;
}


extern void *func_8000C3B0();

struct func_8000B960_C {
    s32 a, b, c;
};
struct func_8000B960_E {
    u8 a, b;
};
struct func_8000B960_A {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[9];
    struct func_8000B960_D *unk2C;
};
struct func_8000B960_D {
    u16 unk0;
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
    s32 unk24;
    s32 unk28;
    u16 unk2C;
    u8 pad2E[2];
    void *unk30;
    s32 unk34;
    u8 pad38[2];
    u8 unk3A;
    u8 pad3B[5];
    s32 unk40;
    s32 unk44;
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 pad4C[4];
    f32 unk50;
    s32 unk54;
    s16 unk58;
    u8 pad5A[2];
    struct func_8000B960_C unk5C;
    struct func_8000B960_E unk68;
    u8 pad6A[2];
    s16 unk6C;
    u8 pad6E[2];
    f32 unk70;
    s16 unk74;
    u8 pad76[0x22];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
};
struct func_8000B960_B {
    f32 unk0, unk4, unk8;
    s16 unkC, unkE, unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[2];
    struct func_8000B960_C unk24;
    f32 unk30, unk34, unk38;
    struct func_8000B960_E unk3C;
};

void func_8000B960(struct func_8000B960_A *arg0, struct func_8000B960_B *arg1) {
    struct func_8000B960_D *v;
    f32 t;

    t = 0.0f;
    arg0->unk22 = 1;
    v = arg0->unk2C;
    v->unk4 = arg1->unk0;
    v->unk8 = arg1->unk4;
    v->unkC = arg1->unk8;
    v->unk10 = arg1->unkC;
    v->unk12 = arg1->unkE;
    v->unk14 = arg1->unk10;
    v->unk24 = arg1->unk14;
    v->unk0 = arg1->unk18;
    v->unk28 = arg1->unk1C;
    v->unk30 = func_8000C3B0((void *)arg0);
    v->unk34 = 0;
    v->unk3A = 0;
    v->unk2C = arg1->unk20;
    if (arg1->unk34 != 0.0f) {
        v->unk18 = arg1->unk30;
        v->unk1C = arg1->unk34;
        v->unk20 = arg1->unk38;
    } else {
        if (arg1->unk30 != 0.0f) {
            v->unk18 = v->unk1C = v->unk20 = arg1->unk30;
        } else {
            v->unk18 = v->unk1C = v->unk20 = 1.0f;
        }
    }
    v->unk50 = 0.0f;
    v->unk54 = 0;
    v->unk58 = 0;
    v->unk40 = 0;
    v->unk44 = 0;
    v->unk5C = arg1->unk24;
    v->unk68.a = arg1->unk3C.a;
    v->unk68.b = arg1->unk3C.b;
    v->unk6C = 0;
    v->unk70 = 0.0f;
    v->unk74 = 0;
    v->unk98 = 0.0f;
    v->unk9C = 0.0f;
    v->unkA0 = 0.0f;
    v->unkA4 = 0.0f;
    v->unkA8 = 0.0f;
    v->unkAC = 0.0f;
    v->unk48 = 0;
    v->unk49 = 0;
    v->unk4A = 0;
    v->unk4B = 0xFF;
}


struct func_8000BAD8_A {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_8000BAD8_B *unk30;
};
struct func_8000BAD8_B {
    u16 unk0;
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
    s32 unk24;
    s32 unk28;
    u16 unk2C;
    u8 pad2E[2];
    void *unk30;
    s32 unk34;
    u8 pad38[2];
    u8 unk3A;
    u8 pad3B[5];
    s32 unk40;
    u8 pad44[4];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_8000BAD8_C {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

void func_8000BAD8(struct func_8000BAD8_A *arg0, struct func_8000BAD8_C *arg1)
{
  struct func_8000BAD8_B *v;
  f32 t;
  f32 z = 0.0f;
  arg0->unk22 = 1;
  v = arg0->unk30;
  v->unk4 = arg1->unk0;
  v->unk8 = arg1->unk4;
  v->unkC = arg1->unk8;
  v->unk10 = arg1->unkC;
  v->unk12 = arg1->unkE;
  v->unk14 = arg1->unk10;
  v->unk24 = arg1->unk14;
  v->unk0 = arg1->unk18;
  v->unk2C = arg1->unk20;
  v->unk28 = arg1->unk1C;
  v->unk30 = func_8000C3B0();
  v->unk34 = 0;
  v->unk3A = 0;
  if (arg1->unk34 != z)
  {
    v->unk18 = arg1->unk30;
    v->unk1C = arg1->unk34;
    v->unk20 = arg1->unk38;
  }
  else
  {
    ;
    if (arg1->unk30 != z)
    {
      v->unk20 = (t = arg1->unk30);
      v->unk1C = t;
      v->unk18 = t;
    }
    else
    {
      t = 1.0f;
      v->unk20 = t;
      v->unk1C = t;
      v->unk18 = t;
    }
  }
  v->unk40 = 0;
  v->unk48 = 0;
  v->unk49 = 0;
  v->unk4A = 0;
  v->unk4B = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BBF4.s")


struct func_8000BC5C_Struct {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[4];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

void func_8000BC5C(struct func_8000BC5C_Struct *arg0) {
    arg0->unk6 = 0;
    arg0->unkC = 0xFF;
    arg0->unkD = 0xFF;
    arg0->unkE = 0xFF;
    arg0->unkF = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000BC78.s")


extern u8 D_8017AD28[];
extern u8 D_8017AE10[];
extern u8 D_8017AE98[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_8017B330[];
extern u8 D_8017B388[];
extern u8 D_8017B4A0[];

struct func_8000C3B0_Sub {
    u8 pad[0x24];
    u32 unk24;
};
struct func_8000C3B0_Struct {
    u8 pad[0x2C];
    struct func_8000C3B0_Sub *unk2C;
    struct func_8000C3B0_Sub *unk30;
};

void *func_8000C3B0(struct func_8000C3B0_Struct *arg0) {
    struct func_8000C3B0_Sub *s;
    u32 f;

    if (arg0->unk2C != NULL) {
        s = arg0->unk2C;
    } else {
        s = arg0->unk30;
    }
    f = s->unk24;
    switch (f & 0xFF) {
    case 20:
        return D_8017AD28;
    case 1:
        return D_8017AE98;
    case 19:
        s->unk24 = f | 0x400;
        return D_8017AF38;
    case 21:
        s->unk24 = f | 0x400;
        return D_8017AF90;
    case 2:
        return D_8017AE10;
    case 14:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B330 | 0x40000000);
    case 15:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B388 | 0x40000000);
    case 18:
        s->unk24 = f | 0x100;
        return (void *)((u32)D_8017B4A0 | 0x40000000);
    case 8:
        return NULL;
    default:
        return NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000AFE0/func_8000C768.s")

