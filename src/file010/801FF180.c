#include "common.h"

extern void (*D_8021793C[])();
extern void (*D_80217948[])();
typedef struct func_801FF438_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801FF438_Struct;
extern void *func_8012C4D0(s32, func_801FF438_Struct, s32);
extern s32 D_801BBC2C;

extern func_801FF438_Struct D_80217710;

struct func_801FF180_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
    u16 unkA2;
    s32 unkA4;
    u16 unkA8;
};

struct func_801FF180_Struct *func_801FF180(f32 arg0, f32 arg1, f32 arg2, s16 arg3, s32 arg4, u8 arg5, u16 arg6)
{
    struct func_801FF180_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80217710, 7);
    if (temp_v0 != NULL) {
        temp_v0->unk9E = 0;
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk40 = 0.0f;
        temp_v0->unk44 = 0.0f;
        temp_v0->unk48 = 0.0f;
        temp_v0->unk9F = arg5;
        temp_v0->unkA0 = arg6;
        temp_v0->unkA4 = arg4;
        temp_v0->unkA8 = 0;
        temp_v0->unkA2 = 0;
        temp_v0->unk2C = 0;
        return temp_v0;
    }
    return NULL;
}


extern func_801FF438_Struct D_80217738;

struct func_801FF260_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
    u16 unkA2;
    s32 unkA4;
    u16 unkA8;
};

struct func_801FF260_Struct *func_801FF260(f32 arg0, f32 arg1, f32 arg2, s16 arg3, s32 arg4, u8 arg5, u16 arg6)
{
  struct func_801FF260_Struct *temp_v0;
  temp_v0 = func_8012C4D0(D_801BBC2C, D_80217738, 7);
  if (temp_v0 != 0)
  {
    temp_v0->unk9E = 0;
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unk40 = 0.0f;
    temp_v0->unk44 = 0.0f;
    temp_v0->unk48 = 0.0f;
    temp_v0->unk9F = arg5;
    temp_v0->unkA0 = arg6;
    temp_v0->unkA2 = 0;
    temp_v0->unkA4 = arg4;
    temp_v0->unkA8 = 2;
    temp_v0->unkA2 = 0;
    temp_v0->unk2C = 0;
    return temp_v0;
  }
  return 0;
}



struct func_801FF348_Struct {
    u8 pad0[0x9E];
    u8 unk9E;
    u8 pad9F;
    u16 unkA0;
    u16 unkA2;
    u8 *unkA4;
    u16 unkA8;
};


s32 func_801FF348(struct func_801FF348_Struct *arg0) {
    void (*temp_v1)();
    u8 *temp_v0;

    if (!(arg0->unkA8 & 2)) {
        return 0;
    }
    if (arg0->unk9E != 0) {
        return 0;
    }
    arg0->unk9E = 1;
    temp_v0 = arg0->unkA4;
    arg0->unkA2 = 0;
    *temp_v0 |= 0xC;
    temp_v1 = D_80217948[arg0->unkA0];
    if (temp_v1 != NULL) {
        temp_v1();
    }
    return 1;
}


struct func_801FF3D0_Struct {
    u8 pad0[0x9E];
    u8 unk9E;
    u8 pad9F;
    u16 unkA0;
    u16 unkA2;
    u8 *unkA4;
    u16 unkA8;
};

s32 func_801FF3D0(struct func_801FF3D0_Struct *arg0) {
    u8 *temp_v1;

    if (!(arg0->unkA8 & 2)) {
        return 0;
    }
    if (arg0->unk9E != 2) {
        return 0;
    }
    arg0->unk9E = 3;
    arg0->unkA2 = 0;
    temp_v1 = arg0->unkA4;
    *temp_v1 |= 4;
    temp_v1 = arg0->unkA4;
    *temp_v1 &= 0xFFF7;
    return 1;
}



extern void func_80005700();
extern func_801FF438_Struct D_80217724;

s32 func_801FF438(u8 *arg0, s32 arg1) {
    s32 pad;
    u16 sp2A;

    if (arg0 != NULL) {
        sp2A = arg0[0x9F];
        func_80005700();
        ((u8 *) func_8012C4D0(D_801BBC2C, D_80217724, 3))[0x9F] = sp2A;
        return 1;
    }
    return 0;
}


typedef struct func_801FF4C8_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u8 pad1[0xA8 - 0xA0];
    u16 unkA8;
} func_801FF4C8_Struct;

extern u16 D_8021774C[];
extern void func_801FF52C();
extern void func_801FF588();
void func_800058DC(void *self, void *fn);

void func_801FF4C8(func_801FF4C8_Struct *arg0, s32 arg1) {
    if (D_8021774C[arg0->unk9F] == 0) {
        func_800058DC(arg0, func_801FF588);
        return;
    }
    arg0->unkA8 = arg0->unkA8 | 4;
    func_800058DC(arg0, func_801FF52C);
}


s32 func_80126A0C(void *arg0, u16 arg1, s32 arg2);

void func_801FF52C(void *arg0, s32 arg1) {
    if (func_80126A0C(arg0, D_8021774C[((u8 *) arg0)[0x9F]], 0) != 0) {
        *(u16 *) ((u8 *) arg0 + 0xA8) = *(u16 *) ((u8 *) arg0 + 0xA8) & 0xFFFB;
        func_800058DC(arg0, &func_801FF588);
    }
}


struct func_801FF588_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u16 unkA0;
    u8 padA2[0xA8 - 0xA2];
    u16 unkA8;
};

void func_801FF588(struct func_801FF588_Struct *arg0, s32 arg1) {
    extern void (*D_802177A8[])();
    extern void (*D_802177B8[])();
    extern void func_801FF628();
    extern void func_801FF73C(s32, s32);
    void (*temp_v0)();
    void (*temp_v0_2)(void *, s32);

    temp_v0 = D_802177A8[arg0->unkA0];
    if (temp_v0 != NULL) {
        temp_v0();
    }
    temp_v0_2 = D_802177B8[arg0->unk9F];
    if (temp_v0_2 != NULL) {
        temp_v0_2(arg0, arg1);
    }
    if (arg0->unkA8 & 1) {
        func_800058DC(arg0, func_801FF73C);
        return;
    }
    func_800058DC(arg0, func_801FF628);
}


typedef struct func_801FF628_StructQ {
    u8 pad0[8];
    f32 unk8;
} func_801FF628_StructQ;

typedef struct func_801FF628_StructP {
    u8 pad0[0x2C];
    func_801FF628_StructQ *unk2C;
} func_801FF628_StructP;

typedef struct func_801FF628_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
    u8 padA2[6];
    u16 unkA8;
} func_801FF628_StructA;

extern s32 func_801C3D20(f32, f32, s32);
extern func_801FF628_StructP *D_801BBCD0;
extern void *D_80217870[];
extern void *D_80217880[];

void func_801FF628(func_801FF628_StructA *arg0, s32 arg1)
{
  void *temp_v0;
  void *temp_v0_2;
  f32 temp_fv0;
  f32 temp_fv1;
  temp_v0 = D_80217870[arg0->unkA0];
  if (temp_v0 != 0)
  {
    ((void (*)(void)) temp_v0)();
  }
  if (!(arg0->unkA8 & 2))
  {
    temp_v0_2 = D_80217880[arg0->unk9F];
    if (temp_v0_2 != 0)
    {
      ((void (*)(func_801FF628_StructA *, s32)) temp_v0_2)(arg0, arg1);
    }
  }
  if (arg0->unk74 != 0)
  {
 do { if (func_801C3D20(arg0->unk90, arg0->unk98, 0x41A00000) != 0) { temp_fv1 = D_801BBCD0->unk2C->unk8; temp_fv0 = arg0->unk94; if (((temp_fv0 - 5.0f) <= temp_fv1) && (temp_fv1 < (temp_fv0 + 40.0f))) { arg0->unk2C = arg0->unk2C | 0x800; return; } } } while (0);
    arg0->unk2C = arg0->unk2C & (~0x800);
  }
}


void func_801FF73C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_801FF774();

typedef struct func_801FF748_Struct {
    u8 pad0[0xA2];
    s16 unkA2;
} func_801FF748_Struct;

void func_801FF748(func_801FF748_Struct *arg0, s32 arg1) {
    arg0->unkA2 = 0;
    func_800058DC(arg0, func_801FF774);
}


struct func_801FF774_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u8 pad1[2];
    s16 unkA2;
};
extern s32 func_80126E88();

void func_801FF774(struct func_801FF774_Struct *arg0, s32 arg1) {
    if (arg0->unkA2++ >= 4 && func_80126E88(D_8021774C[arg0->unk9F], arg0) != 0) {
        func_80005700(arg0);
    }
}


typedef struct func_801FF7DC_Struct {
    u8 pad[0xA0];
    u16 unkA0;
} func_801FF7DC_Struct;

extern s32 func_801C3D90();
extern void func_801FF83C();

void func_801FF7DC(func_801FF7DC_Struct *arg0, s32 arg1) {
    void (*temp_v0)(void *, s32);

    if (func_801C3D90(arg0, arg1) != 0) {
        temp_v0 = (void (*)(void *, s32)) D_8021793C[arg0->unkA0];
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
        func_800058DC(arg0, func_801FF83C);
    }
}


typedef struct func_801FF83C_StructQ {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
} func_801FF83C_StructQ;
typedef struct func_801FF83C_StructP {
    u8 pad[0x2C];
    func_801FF83C_StructQ *unk2C;
} func_801FF83C_StructP;
extern func_801FF83C_StructP *D_801BBCD8;
extern f32 func_8002FC20(f32);
extern s32 func_80126944();

void func_801FF83C(func_801FF628_StructA *arg0) {
    extern void (*D_80217954[])();
    void (*temp_v0)();
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    func_801FF83C_StructQ *temp_v0_2;

    temp_v0 = D_80217954[arg0->unkA0];
    if (temp_v0 != NULL) {
        temp_v0();
    }
    if (arg0->unk74 != 0) {
        if ((((func_801C3D20(arg0->unk90, arg0->unk98, 0x42480000) != 0) && (temp_fv0 = arg0->unk94, temp_fv1 = D_801BBCD0->unk2C->unk8, ((temp_fv0 - 5.0f) <= temp_fv1)) && (temp_fv1 < (temp_fv0 + 40.0f))) || ((temp_v0_2 = D_801BBCD8->unk2C, temp_fv0_2 = temp_v0_2->unk38 - arg0->unk98, temp_fv1_2 = temp_v0_2->unk30 - arg0->unk90, (func_8002FC20((temp_fv0_2 * temp_fv0_2) + (temp_fv1_2 * temp_fv1_2)) <= 20.0f)) && (temp_fv0_3 = arg0->unk94, temp_fv1_3 = D_801BBCD8->unk2C->unk34, ((temp_fv0_3 - 2.0f) <= temp_fv1_3)) && (temp_fv1_3 < (temp_fv0_3 + 30.0f)))) && (func_80126944() == 0)) {
            arg0->unk2C |= 0x800;
            return;
        }
        arg0->unk2C &= ~0x800;
    }
}


struct func_801FF9C0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_801FF9C0_StructO {
    u8 pad0[0x30];
    struct func_801FF9C0_StructX *unk30;
};

struct func_801FF9C0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AD28[];
extern f32 D_8021955C;

void func_801FF9C0(struct func_801FF9C0_StructA *arg0, struct func_801FF9C0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FF9C0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021955C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFAB0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFAB0_StructO {
    u8 pad0[0x30];
    struct func_801FFAB0_StructX *unk30;
};

struct func_801FFAB0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219560;

void func_801FFAB0(struct func_801FFAB0_StructA *arg0, struct func_801FFAB0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFAB0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219560;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFBA0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFBA0_StructO {
    u8 pad0[0x30];
    struct func_801FFBA0_StructX *unk30;
};

struct func_801FFBA0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219564;

void func_801FFBA0(struct func_801FFBA0_StructA *arg0, struct func_801FFBA0_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFBA0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219564;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFC90_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFC90_StructO {
    u8 pad0[0x30];
    struct func_801FFC90_StructX *unk30;
};

struct func_801FFC90_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219568;

void func_801FFC90(struct func_801FFC90_StructA *arg0, struct func_801FFC90_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFC90_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x20F, 3);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219568;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFD80_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_801FFD80_StructO {
    u8 pad0[0x30];
    struct func_801FFD80_StructX *unk30;
};

struct func_801FFD80_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_8021956C;

void func_801FFD80(struct func_801FFD80_StructA *arg0, struct func_801FFD80_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFD80_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x210, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021956C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFE70_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFE70_StructO {
    u8 pad0[0x30];
    struct func_801FFE70_StructX *unk30;
};

struct func_801FFE70_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219570;

void func_801FFE70(struct func_801FFE70_StructA *arg0, struct func_801FFE70_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFE70_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x210, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219570;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_801FFF60_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_801FFF60_StructO {
    u8 pad0[0x30];
    struct func_801FFF60_StructX *unk30;
};

struct func_801FFF60_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219574;

void func_801FFF60(struct func_801FFF60_StructA *arg0, struct func_801FFF60_StructO **arg1) {
    f32 temp_fv0;
    struct func_801FFF60_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x210, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219574;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200050_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200050_StructO {
    u8 pad0[0x30];
    struct func_80200050_StructX *unk30;
};

struct func_80200050_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219578;

void func_80200050(struct func_80200050_StructA *arg0, struct func_80200050_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200050_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x210, 3);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219578;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200140_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_80200140_StructO {
    u8 pad0[0x30];
    struct func_80200140_StructX *unk30;
};

struct func_80200140_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_8021957C;

void func_80200140(struct func_80200140_StructA *arg0, struct func_80200140_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200140_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x211, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021957C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200230_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200230_StructO {
    u8 pad0[0x30];
    struct func_80200230_StructX *unk30;
};

struct func_80200230_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219580;

void func_80200230(struct func_80200230_StructA *arg0, struct func_80200230_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200230_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x211, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219580;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200320_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200320_StructO {
    u8 pad0[0x30];
    struct func_80200320_StructX *unk30;
};

struct func_80200320_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219584;

void func_80200320(struct func_80200320_StructA *arg0, struct func_80200320_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200320_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x211, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219584;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200410_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200410_StructO {
    u8 pad0[0x30];
    struct func_80200410_StructX *unk30;
};

struct func_80200410_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219588;

void func_80200410(struct func_80200410_StructA *arg0, struct func_80200410_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200410_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x211, 3);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219588;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200500_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_80200500_StructO {
    u8 pad0[0x30];
    struct func_80200500_StructX *unk30;
};

struct func_80200500_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_8021958C;

void func_80200500(struct func_80200500_StructA *arg0, struct func_80200500_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200500_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x212, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021958C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802005F0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802005F0_StructO {
    u8 pad0[0x30];
    struct func_802005F0_StructX *unk30;
};

struct func_802005F0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219590;

void func_802005F0(struct func_802005F0_StructA *arg0, struct func_802005F0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802005F0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x212, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219590;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802006E0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802006E0_StructO {
    u8 pad0[0x30];
    struct func_802006E0_StructX *unk30;
};

struct func_802006E0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219594;

void func_802006E0(struct func_802006E0_StructA *arg0, struct func_802006E0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802006E0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x212, 4);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219594;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802007D0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_802007D0_StructO {
    u8 pad0[0x30];
    struct func_802007D0_StructX *unk30;
};

struct func_802007D0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_80219598;

void func_802007D0(struct func_802007D0_StructA *arg0, struct func_802007D0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802007D0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x213, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_80219598;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802008C0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802008C0_StructO {
    u8 pad0[0x30];
    struct func_802008C0_StructX *unk30;
};

struct func_802008C0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_8021959C;

void func_802008C0(struct func_802008C0_StructA *arg0, struct func_802008C0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802008C0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x213, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_8021959C;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802009B0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802009B0_StructO {
    u8 pad0[0x30];
    struct func_802009B0_StructX *unk30;
};

struct func_802009B0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195A0;

void func_802009B0(struct func_802009B0_StructA *arg0, struct func_802009B0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802009B0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x213, 4);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195A0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200AA0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200AA0_StructO {
    u8 pad0[0x30];
    struct func_80200AA0_StructX *unk30;
};

struct func_80200AA0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195A4;

void func_80200AA0(struct func_80200AA0_StructA *arg0, struct func_80200AA0_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200AA0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x213, 6);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195A4;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200B90_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_80200B90_StructO {
    u8 pad0[0x30];
    struct func_80200B90_StructX *unk30;
};

struct func_80200B90_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195A8;

void func_80200B90(struct func_80200B90_StructA *arg0, struct func_80200B90_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200B90_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x214, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195A8;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200C80_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_80200C80_StructO {
    u8 pad0[0x30];
    struct func_80200C80_StructX *unk30;
};

struct func_80200C80_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195AC;

void func_80200C80(struct func_80200C80_StructA *arg0, struct func_80200C80_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200C80_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x215, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195AC;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200D70_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200D70_StructO {
    u8 pad0[0x30];
    struct func_80200D70_StructX *unk30;
};

struct func_80200D70_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195B0;

void func_80200D70(struct func_80200D70_StructA *arg0, struct func_80200D70_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200D70_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x214, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195B0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200E60_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200E60_StructO {
    u8 pad0[0x30];
    struct func_80200E60_StructX *unk30;
};

struct func_80200E60_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195B4;

void func_80200E60(struct func_80200E60_StructA *arg0, struct func_80200E60_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200E60_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x215, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195B4;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80200F50_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80200F50_StructO {
    u8 pad0[0x30];
    struct func_80200F50_StructX *unk30;
};

struct func_80200F50_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195B8;

void func_80200F50(struct func_80200F50_StructA *arg0, struct func_80200F50_StructO **arg1) {
    f32 temp_fv0;
    struct func_80200F50_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x214, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195B8;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201040_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201040_StructO {
    u8 pad0[0x30];
    struct func_80201040_StructX *unk30;
};

struct func_80201040_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195BC;

void func_80201040(struct func_80201040_StructA *arg0, struct func_80201040_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201040_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x215, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195BC;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201130_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201130_StructO {
    u8 pad0[0x30];
    struct func_80201130_StructX *unk30;
};

struct func_80201130_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195C0;

void func_80201130(struct func_80201130_StructA *arg0, struct func_80201130_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201130_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x214, 3);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195C0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201220_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201220_StructO {
    u8 pad0[0x30];
    struct func_80201220_StructX *unk30;
};

struct func_80201220_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195C4;

void func_80201220(struct func_80201220_StructA *arg0, struct func_80201220_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201220_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x215, 3);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195C4;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201310_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201310_StructO {
    u8 pad0[0x30];
    struct func_80201310_StructX *unk30;
};

struct func_80201310_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195C8;

void func_80201310(struct func_80201310_StructA *arg0, struct func_80201310_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201310_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x214, 4);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195C8;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201400_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201400_StructO {
    u8 pad0[0x30];
    struct func_80201400_StructX *unk30;
};

struct func_80201400_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195CC;

void func_80201400(struct func_80201400_StructA *arg0, struct func_80201400_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201400_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x215, 4);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195CC;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802014F0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_802014F0_StructO {
    u8 pad0[0x30];
    struct func_802014F0_StructX *unk30;
};

struct func_802014F0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195D0;

void func_802014F0(struct func_802014F0_StructA *arg0, struct func_802014F0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802014F0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x216, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195D0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802015E0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802015E0_StructO {
    u8 pad0[0x30];
    struct func_802015E0_StructX *unk30;
};

struct func_802015E0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195D4;

void func_802015E0(struct func_802015E0_StructA *arg0, struct func_802015E0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802015E0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x216, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195D4;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802016D0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802016D0_StructO {
    u8 pad0[0x30];
    struct func_802016D0_StructX *unk30;
};

struct func_802016D0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195D8;

void func_802016D0(struct func_802016D0_StructA *arg0, struct func_802016D0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802016D0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x216, 4);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195D8;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802017C0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_802017C0_StructO {
    u8 pad0[0x30];
    struct func_802017C0_StructX *unk30;
};

struct func_802017C0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195DC;

void func_802017C0(struct func_802017C0_StructA *arg0, struct func_802017C0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802017C0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x217, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195DC;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802018B0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_802018B0_StructO {
    u8 pad0[0x30];
    struct func_802018B0_StructX *unk30;
};

struct func_802018B0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195E0;

void func_802018B0(struct func_802018B0_StructA *arg0, struct func_802018B0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802018B0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x217, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195E0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_802019A0_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_802019A0_StructO {
    u8 pad0[0x30];
    struct func_802019A0_StructX *unk30;
};

struct func_802019A0_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195E4;

void func_802019A0(struct func_802019A0_StructA *arg0, struct func_802019A0_StructO **arg1) {
    f32 temp_fv0;
    struct func_802019A0_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x218, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195E4;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201A90_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201A90_StructO {
    u8 pad0[0x30];
    struct func_80201A90_StructX *unk30;
};

struct func_80201A90_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195E8;

void func_80201A90(struct func_80201A90_StructA *arg0, struct func_80201A90_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201A90_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x218, 1);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195E8;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201B80_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[12];
    void *unk30;
};

struct func_80201B80_StructO {
    u8 pad0[0x30];
    struct func_80201B80_StructX *unk30;
};

struct func_80201B80_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195EC;

void func_80201B80(struct func_80201B80_StructA *arg0, struct func_80201B80_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201B80_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x218, 2);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195EC;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


struct func_80201C70_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_80201C70_StructO {
    u8 pad0[0x30];
    struct func_80201C70_StructX *unk30;
};

struct func_80201C70_StructA {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 padA0[10];
    u16 unkA8;
};

extern f32 D_802195F0;

void func_80201C70(struct func_80201C70_StructA *arg0, struct func_80201C70_StructO **arg1) {
    f32 temp_fv0;
    struct func_80201C70_StructX *temp_v0;

    if (!(arg0->unkA8 & 1)) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x21B, 0);
        (*arg1)->unk30->unk30 = D_8017AD28;
        (*arg1)->unk30->unk20 = D_802195F0;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        (*arg1)->unk30->unk4 = arg0->unk90;
        (*arg1)->unk30->unk8 = arg0->unk94 + 2.0f;
        (*arg1)->unk30->unkC = arg0->unk98;
        (*arg1)->unk30->unk12 = arg0->unk9C;
    }
}


extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern f32 D_801BBF74;

typedef struct func_80201D60_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80201D60_Struct;

void func_80201D60(func_80201D60_Struct *arg0, s32 arg1) {
    if (func_8010843C(arg0->unk90, arg0->unk94, arg0->unk98, arg0->unk90, arg0->unk94 - 1000.0f, arg0->unk98) != 0) {
        arg0->unk94 = D_801BBF74;
    }
}


void func_80201DC0(u8 *arg0, s32 arg1) {
    *(u16 *)(arg0 + 0xA8) = *(u16 *)(arg0 + 0xA8) | 1;
}


void func_80201DD4(void *arg0, s32 arg1) {
    u16 *flags = (u16 *) ((u8 *) arg0 + 0xA8);

    *flags = *flags | 8;
}


struct func_80201DE8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_80201DE8_StructC {
    u8 pad0[0x30];
    struct func_80201DE8_StructB *unk30;
};

struct func_80201DE8_StructA {
    u8 pad0[0x24];
    struct func_80201DE8_StructC *unk24;
    u8 pad28[0x90 - 0x28];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

void func_80201DE8(struct func_80201DE8_StructA *arg0, s32 arg1) {
    arg0->unk24->unk30->unk4 = arg0->unk90;
    arg0->unk24->unk30->unk8 = (f32) ((f64) arg0->unk94 + 1.5);
    arg0->unk24->unk30->unkC = arg0->unk98;
}


void func_80201E38(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct func_802026C4_StructD {
    u8 pad0[0xF32];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_802026C4_StructD;
extern func_802026C4_StructD D_801BBBF0;

typedef struct func_80201E44_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad9C[0xA8 - 0x9C];
    u16 unkA8;
} func_80201E44_Struct;

extern s32 func_801FD5BC(f32, f32, f32);
extern f64 D_802195F8;
extern f64 D_80219600;

void func_80201E44(func_80201E44_Struct *arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0)
  {
    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    return;
  }
  if (arg0->unkA8 & 8)
  {
    ;
    arg0->unk94 = arg0->unk94 + arg0->unk44;
    arg0->unk44 = ((f64) arg0->unk44) - D_802195F8;
    if ((func_8010843C(arg0->unk90, arg0->unk94 - (2.0 * arg0->unk44), arg0->unk98, arg0->unk90, arg0->unk94 - D_80219600, arg0->unk98) != 0) && ((*(((u8 *) (&D_801BBBF0)) + 0x35A)) != 0x16))
    {
      arg0->unk94 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x384));
      arg0->unk44 = 0.0f;
    }
  }
  if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0)
  {
    arg0->unkA8 = arg0->unkA8 & 0xFFF7;
    arg0->unk44 = 0.0f;
  }
}


struct func_80201F74_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80201F74_StructO {
    u8 pad0[0x30];
    struct func_80201F74_StructX *unk30;
};
struct func_80201F74_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[4];
    u8 *unkA4;
};
extern f64 D_80219608;
extern s32 func_8000C3B0(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C97C(s32, s32);
extern void func_80020718();

void func_80201F74(struct func_80201F74_StructA *arg0, struct func_80201F74_StructO **arg1) {
    struct func_80201F74_StructX *v;
    f32 k;

    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCD, 0);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    v = arg1[0]->unk30;
    v->unk1C = v->unk20;
    arg1[0]->unk30->unk18 = v->unk20;
    arg1[0]->unk30->unk4 = arg0->unk90;
    arg1[0]->unk30->unk8 = arg0->unk94;
    arg1[0]->unk30->unkC = arg0->unk98;
    arg1[0]->unk30->unk12 = arg0->unk9C;
    v = arg1[0]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[0]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[0]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[0]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCD, 1);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    v = arg1[1]->unk30;
    v->unk1C = v->unk20;
    arg1[1]->unk30->unk18 = v->unk20;
    arg1[1]->unk30->unk4 = func_8001EAD0(arg0->unk9C + 0x800) * 3.0f + arg0->unk90;
    arg1[1]->unk30->unk8 = arg0->unk94 + 3.0f;
    arg1[1]->unk30->unkC = func_8001EB64(arg0->unk9C + 0x800) * 3.0f + arg0->unk98;
    arg1[1]->unk30->unk12 = (s16)(arg0->unk9C + 0x800) & 0x1FFF;
    v = arg1[1]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[1]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[1]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[1]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 2, 0xCD, 1);
    arg1[2]->unk30->unk24 = 0x13;
    arg1[2]->unk30->unk30 = func_8000C3B0(arg1[2]);
    arg1[2]->unk30->unk20 = 1.0f;
    v = arg1[2]->unk30;
    v->unk1C = v->unk20;
    arg1[2]->unk30->unk18 = v->unk20;
    arg1[2]->unk30->unk4 = func_8001EAD0(arg0->unk9C - 0x800) * 3.0f + arg0->unk90;
    arg1[2]->unk30->unk8 = arg0->unk94 + 3.0f;
    arg1[2]->unk30->unkC = func_8001EB64(arg0->unk9C - 0x800) * 3.0f + arg0->unk98;
    arg1[2]->unk30->unk12 = (s16)(arg0->unk9C - 0x800) & 0x1FFF;
    v = arg1[2]->unk30;
    v->unk24 = v->unk24 | 0x400;
    arg1[2]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[2]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[2]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[2]->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCD, 2);
    if (*arg0->unkA4 & 8) {
        f64 d = D_80219608;
        arg0->unk9E = 2;
        arg1[1]->unk30->unk8 = (f64)(arg0->unk94 + 3.0f) + d;
        arg1[1]->unk30->unk10 = 0xE38;
        arg1[2]->unk30->unk8 = (f64)(arg0->unk94 + 3.0f) + d;
        arg1[2]->unk30->unk10 = 0xE38;
    }
}


typedef struct func_80202408_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80202408_B;

typedef struct func_80202408_A {
    u8 pad0[0x30];
    func_80202408_B *unk30;
} func_80202408_A;

typedef struct func_80202408_C {
    func_80202408_A *unk0;
    func_80202408_A *unk4;
} func_80202408_C;

typedef struct func_80202408_P {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x90 - 0x78];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[4];
    u8 *unkA4;
} func_80202408_P;

void func_80202408(func_80202408_P *arg0, func_80202408_C *arg1) {
    func_80202408_B *v;
    f32 f;
    func_80005E44(arg0, D_80164F40);
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCD, 3);
    arg1->unk0->unk30->unk24 = 0x13;
    arg1->unk0->unk30->unk30 = func_8000C3B0(arg1->unk0);
    arg1->unk0->unk30->unk20 = 1.0f;
    v = arg1->unk0->unk30;
    f = v->unk20;
    v->unk1C = f;
    arg1->unk0->unk30->unk18 = f;
    arg1->unk0->unk30->unk4 = arg0->unk90;
    arg1->unk0->unk30->unk8 = arg0->unk94;
    arg1->unk0->unk30->unkC = arg0->unk98;
    arg1->unk0->unk30->unk12 = arg0->unk9C;
    v = arg1->unk0->unk30;
    v->unk24 |= 0x400;
    arg1->unk0->unk30->unk4C = D_801BBBF0.unkF32;
    arg1->unk0->unk30->unk4D = D_801BBBF0.unkF33;
    arg1->unk0->unk30->unk4E = D_801BBBF0.unkF34;
    arg1->unk0->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCD, 4);
    arg1->unk4->unk30->unk24 = 0x13;
    arg1->unk4->unk30->unk30 = func_8000C3B0(arg1->unk4);
    arg1->unk4->unk30->unk20 = 1.0f;
    v = arg1->unk4->unk30;
    f = v->unk20;
    v->unk1C = f;
    arg1->unk4->unk30->unk18 = f;
    arg1->unk4->unk30->unk4 = arg0->unk90;
    arg1->unk4->unk30->unk8 = arg0->unk94;
    arg1->unk4->unk30->unkC = arg0->unk98;
    arg1->unk4->unk30->unk12 = arg0->unk9C;
    v = arg1->unk4->unk30;
    v->unk24 |= 0x400;
    arg1->unk4->unk30->unk4C = D_801BBBF0.unkF32;
    arg1->unk4->unk30->unk4D = D_801BBBF0.unkF33;
    arg1->unk4->unk30->unk4E = D_801BBBF0.unkF34;
    arg1->unk4->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCD, 5);
    if (*arg0->unkA4 & 8) {
        arg0->unk9E = 2;
        arg1->unk4->unk30->unk8 = arg0->unk94 + 8.0f;
        arg0->unk74 = func_8012C97C(0xCD, 6);
    }
}


typedef struct func_802026C4_StructX {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802026C4_StructX;

typedef struct func_802026C4_StructO {
    u8 pad0[0x30];
    func_802026C4_StructX *unk30;
} func_802026C4_StructO;

typedef struct func_802026C4_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_802026C4_StructA;

typedef struct func_802026C4_StructS {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_802026C4_StructS;


extern void func_8012CF8C(void *, void *, s32, s32);

void func_802026C4(func_802026C4_StructA *arg0, func_802026C4_StructO **arg1) {
    func_802026C4_StructS s;

    s = *(func_802026C4_StructS *)D_80164F40;
    s.unk4 = 0x80000C00;
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80005E44(arg0, &s);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCE, 4);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk4 = arg0->unk90;
    arg1[0]->unk30->unk8 = arg0->unk94;
    arg1[0]->unk30->unkC = arg0->unk98;
    arg1[0]->unk30->unk12 = arg0->unk9C;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[0]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[0]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[0]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 1, 0xCE, 5);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk4 = arg0->unk90;
    arg1[1]->unk30->unk8 = arg0->unk94;
    arg1[1]->unk30->unkC = arg0->unk98;
    arg1[1]->unk30->unk12 = arg0->unk9C;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[1]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[1]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[1]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 2, 0xCE, 6);
    func_8012CF8C(arg0, (u8 *)arg1[2]->unk30 + 0x40, 0xCE, 9);
    arg1[2]->unk30->unk24 = 0x13;
    arg1[2]->unk30->unk30 = func_8000C3B0(arg1[2]);
    arg1[2]->unk30->unk20 = 1.0f;
    arg1[2]->unk30->unk18 = arg1[2]->unk30->unk1C = arg1[2]->unk30->unk20;
    arg1[2]->unk30->unk4 = arg0->unk90 - 2.0 * func_8001EAD0(arg0->unk9C);
    arg1[2]->unk30->unk8 = arg0->unk94;
    arg1[2]->unk30->unkC = arg0->unk98 - 2.0 * func_8001EB64(arg0->unk9C);
    arg1[2]->unk30->unk12 = arg0->unk9C;
    arg1[2]->unk30->unk24 |= 0x400;
    arg1[2]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[2]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[2]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[2]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 3, 0xCE, 7);
    arg1[3]->unk30->unk24 = 0x13;
    arg1[3]->unk30->unk30 = func_8000C3B0(arg1[3]);
    arg1[3]->unk30->unk20 = 1.0f;
    arg1[3]->unk30->unk18 = arg1[3]->unk30->unk1C = arg1[3]->unk30->unk20;
    arg1[3]->unk30->unk4 = arg0->unk90;
    arg1[3]->unk30->unk8 = arg0->unk94;
    arg1[3]->unk30->unkC = arg0->unk98;
    arg1[3]->unk30->unk12 = arg0->unk9C;
    arg1[3]->unk30->unk24 |= 0x400;
    arg1[3]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[3]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[3]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[3]->unk30->unk4F = D_801BBBF0.unkF35;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xCE, 8);
}


extern f32 D_80219610;

struct func_80202BCC_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
    u8 pad1[0xAC - 0xA4];
    f32 unkAC;
};

void func_80202BCC(struct func_80202BCC_Struct *arg0) {
    arg0->unkAC = D_80219610;
    arg0->unkA2 = 0;
}


struct func_80202BE0_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
};

void func_80202BE0(struct func_80202BE0_Struct *arg0) {
    arg0->unkA2 = 0;
}


struct func_80202BE8_Struct {
    u8 pad0[0xA2];
    u16 unkA2;
};

void func_80202BE8(struct func_80202BE8_Struct *arg0) {
    arg0->unkA2 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FF180/func_80202BF0.s")


extern f64 D_80219648;
extern f64 D_80219650;

struct func_80203254_StructM { u8 pad0[8]; f32 unk8; };
struct func_80203254_StructO { u8 pad0[0x30]; struct func_80203254_StructM *unk30; };
struct func_80203254_StructP { u8 pad0[4]; struct func_80203254_StructO *unk4; };
struct func_80203254_Struct {
    u8 pad0[0x74];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F_;
    u16 padA0;
    s16 unkA2;
    u8 *unkA4;
};

void func_80203254(struct func_80203254_Struct *arg0, struct func_80203254_StructP *arg1)
{
  f32 fv;
  f32 v;
  s16 t;
  s32 f;
  struct func_80203254_StructM *m;
  u8 s;
  s = arg0->unk9E;
 do { if (s != 1) { if (s != 3) { v = arg0->unk94; do { goto done; } while (0); } goto three; } { if ((arg0->unkA2++) == 0) { func_80020718(0x114); } m = arg1->unk4->unk30; fv = m->unk8 + D_80219648; m->unk8 = fv; v = arg0->unk94; if ((v + 8.0f) <= fv) { arg0->unk9E = 2; arg0->unk74 = func_8012C97C(0xCD, 6); *arg0->unkA4 |= 8; *arg0->unkA4 &= 0xFFFB; v = arg0->unk94; } goto done; } three: { if ((arg0->unkA2++) == 0) { func_80020718(0x115); } m = arg1->unk4->unk30; fv = m->unk8 - D_80219650; m->unk8 = fv; v = arg0->unk94; if (fv <= v) { arg1->unk4->unk30->unk8 = v; arg0->unk9E = 0; arg0->unk74 = func_8012C97C(0xCD, 5); *arg0->unkA4 &= 0xFFF3; v = arg0->unk94; } } done: arg0->unk7C = v; arg0->unk84 = 0; arg0->unk88 = 0; arg0->unk78 = arg0->unk90; } while (0);
  arg0->unk80 = arg0->unk98;
  arg0->unk86 = arg0->unk9C;
}


typedef struct func_802033F8_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_802033F8_StructB;

typedef struct func_802033F8_StructA {
    u8 pad0[0x30];
    func_802033F8_StructB *unk30;
} func_802033F8_StructA;

typedef struct func_802033F8_StructC {
    u8 pad0[4];
    func_802033F8_StructA *unk4;
    func_802033F8_StructA *unk8;
    func_802033F8_StructA *unkC;
} func_802033F8_StructC;

typedef struct func_802033F8_Struct {
    u8 pad0[0x74];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 pad9F;
    u8 padA0[2];
    s16 unkA2;
    u8 *unkA4;
} func_802033F8_Struct;


void func_802033F8(func_802033F8_Struct *arg0, func_802033F8_StructC *arg1) {
    s32 v;
    f64 d;

    if (arg0->unk9E != 1) {
        if (arg0->unk9E != 3) goto end;
        goto c3;
    }
    {
        v = arg0->unkA2++;
        if (v == 0) {
            func_80020718(0x1C2);
        }
        if (v < 2) {
            d = func_8001EAD0(arg0->unk9C);
            arg1->unk8->unk30->unk4 = (f64)arg1->unk8->unk30->unk4 + d;
            d = func_8001EB64(arg0->unk9C);
            arg1->unk8->unk30->unkC = (f64)arg1->unk8->unk30->unkC + d;
        } else if (v >= 4) {
            if (v < 8) {
                arg1->unk4->unk30->unk8 += 0.5;
                arg1->unk8->unk30->unk8 += 0.5;
                arg1->unkC->unk30->unk8 += 0.5;
            } else if (v >= 0xA) {
                if (v < 0x1E) {
                    arg1->unk4->unk30->unk12 -= 0xCC;
                    arg1->unk8->unk30->unk12 -= 0xCC;
                    arg1->unkC->unk30->unk12 += 0xCC;
                } else if (v == 0x1E) {
                    arg0->unk9E = 2;
                    arg0->unk74 = 0;
                    *arg0->unkA4 |= 8;
                    *arg0->unkA4 &= 0xFFFB;
                }
            }
        }
    }
    goto end;
c3:
    {
        v = arg0->unkA2++;
        if (v == 0) {
            func_80020718(0x1C1);
            arg0->unk74 = func_8012C97C(0xCE, 8);
        }
        if (v < 0x14) {
            arg1->unk4->unk30->unk12 += 0xCC;
            arg1->unk8->unk30->unk12 += 0xCC;
            arg1->unkC->unk30->unk12 -= 0xCC;
        } else if (v >= 0x16) {
            if (v < 0x1A) {
                arg1->unk4->unk30->unk8 -= 0.5;
                arg1->unk8->unk30->unk8 -= 0.5;
                arg1->unkC->unk30->unk8 -= 0.5;
            } else if (v >= 0x1C) {
                if (v < 0x1E) {
                    arg1->unk8->unk30->unk4 = (f64)arg1->unk8->unk30->unk4 - (f64)func_8001EAD0(arg0->unk9C);
                    arg1->unk8->unk30->unkC = (f64)arg1->unk8->unk30->unkC - (f64)func_8001EB64(arg0->unk9C);
                } else if (v == 0x1E) {
                    arg1->unk4->unk30->unk12 = arg0->unk9C;
                    arg1->unk8->unk30->unk12 = arg0->unk9C;
                    arg1->unkC->unk30->unk12 = arg0->unk9C;
                    arg1->unk4->unk30->unk8 = arg0->unk94;
                    arg1->unk8->unk30->unk8 = arg0->unk94;
                    arg1->unkC->unk30->unk8 = arg0->unk94;
                    arg1->unk8->unk30->unk4 = arg0->unk90 - 2.0 * func_8001EAD0(arg0->unk9C);
                    arg1->unk8->unk30->unkC = arg0->unk98 - 2.0 * func_8001EB64(arg0->unk9C);
                    arg0->unk9E = 0;
                    *arg0->unkA4 &= 0xFFF3;
                }
            }
        }
    }
end:
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk90;
    arg0->unk7C = arg0->unk94;
    arg0->unk80 = arg0->unk98;
    arg0->unk86 = arg0->unk9C;
}

