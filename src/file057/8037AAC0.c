#include "common.h"

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037AAC0.s {"functions":["func_8037AAC0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037AAC0.s")

#define func_8037ACCC func_8037ACCC__func_8037AC58
extern s32 func_800058DC(void *, void *);
void func_8037ACCC(void *arg0, s32 arg1);

struct func_8037AC58_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
};

extern void func_8037AAC0(void *, s32, s32, u8, u8 *);

void func_8037AC58(struct func_8037AC58_Struct *arg0, s32 arg1) {
    u8 sp27;
    u8 temp_a3;

    temp_a3 = arg0->unk90;
    if (temp_a3 == 0) {
        func_8037AAC0(arg0, 0x7C, 0x6E, 0, &sp27);
    } else {
        func_8037AAC0(arg0, 0x88, 0x6E, temp_a3, &sp27);
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, &func_8037ACCC);
}
#undef func_8037ACCC


extern void func_80005700();

void func_8037ACCC(void *arg0, s32 arg1) {
    if (((s16 *)arg0)[0x58]++ >= 0x1F) {
        func_80005700();
    }
}


struct func_8037AD08_Struct {
    u8 pad0[8];
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};
struct func_8037AD08_Struct0 {
    u16 *unk0;
    s32 *unk4;
};
struct func_8037AD08_Struct2 {
    u8 pad[0xC];
    void *unkC;
};
void func_80146088(void *a0, void *a1, s32 a2);
extern struct func_8037B5A0_Struct0 *D_80172574;
extern struct func_8037B5A0_Struct2 D_80181A84;

void func_8037AD08(arg0, arg1, arg2, arg3, arg4)
    void *arg0; s16 arg1; s16 arg2; s32 arg3; s8 *arg4;
{
    struct func_8037AD08_Struct s;

    s.unk0 = arg1;
    s.unk2 = arg2;
    *(s32 *)((u8 *)&s + 0x50) = arg3;
    s.unk30 = s.unk4 = s.unk28 = 8;
    s.unk32 = s.unk6 = s.unk2A = 8;
    s.unk9 = s.unk8 = 0xFF;
    s.unkA = 0;
    s.unkB = 0xFF;
    s.unkC = s.unkD = s.unkE = 0;
    s.unkF = 0xFF;
    s.unk10 = 0x66;
    s.unk18 = *((struct func_8037AD08_Struct0 *)D_80172574)->unk0;
    arg3 &= 0xFF;
    s.unk1C = ((struct func_8037AD08_Struct0 *)D_80172574)->unk4[(u16)(arg3 + 0x12)];
    s.unk2E = s.unk2C = 0;
    ((struct func_8037AD08_Struct2 *)&D_80181A84)->unkC = &s.unk0;
    func_80146088(arg0, &D_80181A84, (s32)arg4);
}

#define func_8037AD08 func_8037AD08__func_8037ADF8
#define func_8037AED8 func_8037AED8__func_8037ADF8
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_8037ADF8_Struct {
    u8 pad[0xA4];
    s16 unkA4;
    s16 unkA6;
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
} func_8037ADF8_Struct;

extern void func_8037AD08(void *, s16, s16, s32, s8 *);
extern void func_8037AED8();

void func_8037ADF8(func_8037ADF8_Struct *arg0, s32 arg1) {
    s16 pad;
    s8 sp2D;
    u8 *var_v0;

    sp2D = 0;
    if (arg0->unkA8 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (((u32) (*(u32 *)(var_v0 + 0x30) << 11) >> 30) != 0) {
        if (var_v0 == D_801BBBF0 + 0x44C) {
            arg0->unkA4 = 0xDC, arg0->unkA6 = 0xE;
        } else if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) ||
                   (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            arg0->unkA4 = 0x50;
            arg0->unkA6 = 0xAC;
        } else {
            arg0->unkA4 = 0x10E, arg0->unkA6 = 0xB6;
        }
        func_8037AD08(arg0, arg0->unkA4, arg0->unkA6, 0, &sp2D);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037AED8);
    }
}
#undef func_8037AD08
#undef func_8037AED8


extern s32 func_8022B640(s32, void *);
extern u8 *D_8008DA88;

struct func_8037AED8_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};
struct func_8037AED8_Tab {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_8037AED8_Ent *unk30;
};
struct func_8037AED8_Obj {
    u8 pad[0xA4];
    s16 unkA4;
    s16 unkA6;
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

void func_8037AED8(struct func_8037AED8_Obj *arg0, s32 arg1) {
    u8 *v1;
    extern s32 func_80236BA4();

    v1 = arg0->unkA8 == 0 ? D_801BC03C : D_801BC3D8;
    if (((u32)(*(s32 *)(v1 + 0x30) << 11) >> 30) != 0) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 1;
        if (!(arg0->unkB0 % 16)) {
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk0 = func_8022B640(8, arg0) + arg0->unkA4;
            ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unk2 = func_8022B640(4, arg0) + arg0->unkA6;
        }
    } else {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    if ((v1[0x2D0] & 0x10) || (func_80236BA4() == 0)) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk22 = 0;
    }
    ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unkB = ((15 - (arg0->unkB0 % 16)) * 255) / 15;
    arg0->unkB0 = arg0->unkB0 + 1;
    if ((D_801BBBF0[0x1031] >= 10 && D_801BBBF0[0x1031] != 15) ||
        (v1 == D_801BBBF0 + 0x7E8 && ((u32)(*(s32 *)(v1 + 0x30) << 1) >> 30) == 3)) {
        func_80005700(arg0);
    }
}


void func_8037B0B0(void *arg0, s16 arg1, s16 arg2, s8 *arg3) {
    struct func_8037AD08_Struct s;

    s.unk0 = arg1;
    s.unk2 = arg2;
    s.unk30 = s.unk4 = s.unk28 = 0x40;
    s.unk32 = s.unk6 = s.unk2A = 0x10;
    s.unk9 = (s.unk8 = 0xFF, 0x40);
    s.unkA = 0;
    s.unkB = 0xFF;
    s.unkC = 0;
    s.unkD = 0;
    s.unkE = 0;
    s.unkF = 0xFF;
    s.unk10 = 0x66;
    s.unk18 = *((struct func_8037AD08_Struct0 *)D_80172574)->unk0;
    s.unk1C = ((struct func_8037AD08_Struct0 *)D_80172574)->unk4[0x10];
    s.unk2E = s.unk2C = 0;
    ((struct func_8037AD08_Struct2 *)&D_80181A84)->unkC = &s.unk0;
    func_80146088(arg0, &D_80181A84, (s32)arg3);
}

#define func_8037B0B0 func_8037B0B0__func_8037B188
#define func_8037B23C func_8037B23C__func_8037B188
extern void func_8037B23C();
struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};
extern s32 func_80006214(void *);

extern void func_8037B0B0(void *, s16, s16, s8 *);

void func_8037B188(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp25[4];
    u8 *var_t0;
    s32 var_v0;
    s32 var_v1;

    sp25[1] = 0;
    var_v0 = arg0->unkA8;
    if (var_v0 == 0) {
        var_t0 = D_801BC03C;
    } else {
        var_t0 = D_801BC3D8;
    }
    var_v1 = 0xBA;
    if (var_v0 == 0) {
        var_v0 = 0xA0;
        var_v1 = 0x28;
    } else {
        var_v0 = 0x64;
    }
    func_8037B0B0(arg0, (s16)var_v0, (s16)var_v1, &sp25[1]);
    func_80006214(arg0);
    if (*(s16 *)(var_t0 + 6) >= 0x1E) {
        ((struct func_8037AED8_Tab *)D_8008DA88)->unk30->unkB = 0;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037B23C);
}
#undef func_8037B0B0
#undef func_8037B23C

#define func_8037B530 func_8037B530__func_8037B23C
void func_8037B530(struct func_8037EB58_Struct *arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_801BCC21;

struct func_8037B23C_StructC {
    u8 pad[9];
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
};
struct func_8037B23C_StructB {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_8037B23C_StructC *unk30;
};

void func_8037B23C(struct func_8037AED8_Obj *arg0, s32 arg1)
{
  u8 *tab;
  f32 f;
  f32 g;
  if (arg0->unkA8 == 0)
  {
    tab = D_801BC03C;
 do { } while (0);
  }
  else
  {
    tab = D_801BC3D8;
  }
  if (D_801BCC21 >= 6)
  {
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk22 = 0;
    return;
  }
  ((struct func_8037B23C_StructB *) D_8008DA88)->unk22 = 1;
  if ((*((s16 *) (tab + 6))) < 0x1E)
  {
    if (func_8001EAD0((arg0->unkB0 << 7) + 0x800) < 0.0f)
    {
      f = -func_8001EAD0((arg0->unkB0 << 7) + 0x800);
    }
    else
    {
      f = func_8001EAD0((arg0->unkB0 << 7) + 0x800);
    }
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unk9 = (u32) (f * 255.0f);
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkA = (u32) (f * 255.0f);
    if (func_8001EB64((arg0->unkB0 << 7) + 0x1000) < 0.0f)
    {
      g = -func_8001EB64((arg0->unkB0 << 7) + 0x1000);
    }
    else
    {
      g = func_8001EB64((arg0->unkB0 << 7) + 0x1000);
    }
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkC = (u32) (g * 255.0f);
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkB = 0xFF;
    arg0->unkB0 = arg0->unkB0 + 1;
    return;
  }
  if ((*((s16 *) (tab + 6))) == 0x1E)
  {
    arg0->unkB0 = 0x14;
    func_800058DC(arg0, func_8037B530);
  }
}
#undef func_8037B530

#define func_8037B23C func_8037B23C__func_8037B530

extern void func_8037B23C();

void func_8037B530(struct func_8037EB58_Struct *arg0, s32 arg1) {
    if ((*(s16 *) ((u8 *) arg0 + 0xB0))-- == 0) {
        func_800058DC(arg0, func_8037B23C);
        return;
    }
    (*(u8 **) (D_8008DA88 + 0x30))[0xB] = (s8) ((s32) (*(s16 *) ((u8 *) arg0 + 0xB0) * 0xFF) / 20);
}
#undef func_8037B23C


struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};

struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};

struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};

struct func_8037B5A0_Struct3 {
    u8 pad0[8];
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};



void func_8037B5A0(void *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  struct func_8037B5A0_Struct3 sp24;
  sp24.unk0 = arg1;
  sp24.unk2 = arg2;
  sp24.unk30 = sp24.unk4 = sp24.unk28 = 0x28;
  sp24.unk32 = sp24.unk6 = sp24.unk2A = 8;
  sp24.unk8 = 0xFF;
  sp24.unk9 = 0xFF;
  sp24.unkA = 0xFF;
  sp24.unkB = 0xFF;
  sp24.unkC = 0xFF;
  sp24.unkD = 0;
  sp24.unkE = 0;
  sp24.unkF = 0xFF;
  sp24.unk10 = 0x66;
  sp24.unk18 = *D_80172574->unk0;
  sp24.unk1C = D_80172574->unk4->unk44;
  sp24.unk2E = 0;
  sp24.unk2C = 0;
  D_80181A84.unkC = &sp24.unk0;
  func_80146088(arg0, &D_80181A84, arg3);
}

#define func_8037B72C func_8037B72C__func_8037B680
extern u16 D_801BBC1C;
struct func_8037AC58_Struct;
void func_8037B72C(struct func_8037AC58_Struct *arg0, s32 arg1);

void func_8037B680(struct func_8037EB58_Struct *arg0, s32 arg1) {
    u8 a;
    u8 b;
    s8 sp1D;

    sp1D = 0;
    if (D_801BBC1C != 0xA && D_801BBC1C != 0xB && arg0->unkA8 != 0) {
        func_80005700();
        return;
    }
    if (arg0->unkA8 == 0) {
        a = 0x92;
        b = 0x20;
    } else {
        a = 0x8B;
        b = 0xC9;
    }
    func_8037B5A0(arg0, a, b, (s32)&sp1D);
    func_80006214(arg0);
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037B72C);
}
#undef func_8037B72C


void func_8037B72C(struct func_8037AC58_Struct *arg0, s32 arg1) {
    f32 v;
    if (arg0->unkB0++ >= 0x41) {
        func_80005700();
        return;
    }
    if (func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800)) < 0.0f) {
        v = -func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    } else {
        v = func_8001EAD0((s16)((arg0->unkB0 << 8) + 0x800));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xA] = (u32)(v * 255.0f);
    (*(u8 **)(D_8008DA88 + 0x30))[9] = (u32)(v * 255.0f);
    if (func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000)) < 0.0f) {
        v = -func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    } else {
        v = func_8001EB64((s16)((arg0->unkB0 << 8) + 0x1000));
    }
    (*(u8 **)(D_8008DA88 + 0x30))[0xC] = (u32)(v * 255.0f);
}


void func_8037B9A4(void *arg0, u8 arg1, s16 arg2, s16 arg3, s32 arg4)
{
    struct func_8037B5A0_Struct3 data;

    data.unk0 = arg2;
    data.unk2 = arg3;
    data.unk30 = data.unk4 = data.unk28 = 0x20;
    data.unk32 = data.unk6 = data.unk2A = 0x10;
    data.unkB = 0x80;
    data.unk10 = 4;
    data.unk18 = *D_80172574->unk0;
    data.unk1C = ((s32 *)D_80172574->unk4)[(u16)(arg1 + 7)];
    data.unk2E = 0;
    data.unk2C = 0;
    D_80181A84.unkC = &data.unk0;
    func_80146088(arg0, &D_80181A84, arg4);
}

#define func_8037B9A4 func_8037B9A4__func_8037BA70
#define func_8037BB28 func_8037BB28__func_8037BA70

struct func_8037BA70_StructObj {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xA4 - 0x91];
    void *unkA4;
};

extern void func_8037B9A4(void *, u8, s16, s16, s8 *);
extern void func_8037BB28(u8 *, u8 *);

void func_8037BA70(struct func_8037BA70_StructObj *arg0, s32 arg1) {
    s32 var_v0;
    s8 sp2B;
    s32 var_v1;

    sp2B = 0;
    if (D_801BBBF0[0x1030] == 0) {
        if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) ||
            (var_v1 = 0xB4, (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB))) {
            var_v0 = 0x46;
            var_v1 = 0xA0;
        } else {
            var_v0 = 0x104;
        }
        arg0->unkA4 = D_801BC3D8;
    } else {
        var_v0 = 0xD6;
        var_v1 = 0x38;
        arg0->unkA4 = D_801BC03C;
    }
    func_8037B9A4(arg0, arg0->unk90, (s16)var_v0, (s16)var_v1, &sp2B);
    func_80006214(arg0);
    func_800058DC(arg0, func_8037BB28);
}
#undef func_8037B9A4
#undef func_8037BB28


extern s32 func_80236BA4(s32, void *);

void func_8037BB28(u8 *arg0, u8 *arg1) {
    u8 *var_v0;
    u8 *temp_v0;
    s32 temp_v1;
    s32 temp_a0;

    arg1 = arg0;
    if (arg0[0x90] == 0) {
        var_v0 = *(u8 **)(arg0 + 0xA4) + 0x9E;
    } else {
        var_v0 = *(u8 **)(arg1 + 0xA4) + 0xA0;
    }
    if ((*(u16 *)var_v0 == 0) || (temp_v0 = *(u8 **)(D_8008DA88 + 0x30), temp_a0 = temp_v0[0xB]-- == 0, temp_a0 != 0) || (((s32) D_801BCC21 >= 0xA) && (D_801BCC21 != 0xF)) || (func_80236BA4(temp_a0, arg1) == 0)) {
        func_80005700(arg1);
    }
}

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037BBCC.s {"functions":["func_8037BBCC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037BBCC.s")

#define func_8037BEA4 func_8037BEA4__func_8037BD64

struct func_8037BD64_StructInner {
    u8 pad[0x95];
    u8 unk95;
    u8 pad96[0xAF - 0x96];
    u8 unkAF;
};
struct func_8037BD64_Struct {
    u8 pad[0xC];
    struct func_8037BD64_StructInner *unkC;
    u8 pad10[0xAB - 0x10];
    u8 unkAB;
    u8 unkAC;
    u8 unkAD;
    u8 padAE[2];
    s16 unkB0;
};
extern s32 func_8037BBCC(void *, s32, s16, s32, u8, s8 *);
void func_8037BEA4(void *arg0, void *arg1);

void func_8037BD64(struct func_8037BD64_Struct *arg0, s32 arg1) {
    s8 sp3F;
    u8 var_s1;
    u8 var_s4;

    var_s4 = 0;
    sp3F = 0;
    var_s1 = 0;
    do {
        if (arg0->unkAC & (1 << var_s1)) {
            func_8037BBCC(arg0, 0x28, (s16) ((arg0->unkC->unk95 * 0x18) + 0x4C), 0x20, 6, &sp3F);
            func_8037BBCC(arg0, 0x28, (s16) ((arg0->unkC->unk95 * 0x18) + 0x4C), 0x20, var_s1, &sp3F);
            var_s4++;
            arg0->unkC->unk95++;
        }
        var_s1++;
    } while (var_s1 < 6);
    arg0->unkAB = func_80006214(arg0);
    arg0->unkAD = var_s4;
    arg0->unkC->unkAF = 1;
    arg0->unkB0 = 0x3C;
    func_800058DC(arg0, func_8037BEA4);
}
#undef func_8037BEA4


typedef struct func_8037BEA4_Struct {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0xAD - 0x10];
    u8 unkAD;
    u8 padAE[0xB0 - 0xAE];
    s16 unkB0;
} func_8037BEA4_Struct;

typedef struct func_8037BEA4_Outer {
    u8 pad[0x30];
    u8 *unk30;
} func_8037BEA4_Outer;

typedef struct func_8037BEA4_Entry {
    func_8037BEA4_Outer *unk0;
    func_8037BEA4_Outer *unk4;
} func_8037BEA4_Entry;

void func_8037BEA4(void *arg0, void *arg1) {
    func_8037BEA4_Struct *self;
    func_8037BEA4_Entry *tbl;
    s32 count;
    s32 idx;
    s32 off;
    s32 val;
    s16 hp;

    void *t = arg1;
    void **pp = &arg1;
    self = arg0;
    hp = self->unkB0;
    self->unkB0 = hp - 1;
    if (hp <= 0 || func_80236BA4((s32) arg0, t) == 0) {
        self->unkC[0xAF] = 0;
        func_80005700(arg0);
        return;
    }
    if (self->unkB0 < 0x28) {
        count = 0;
        idx = 0;
        if (self->unkAD > 0) {
            do {
                off = idx << 1;
                off = off << 2;
                count = (count + 1) & 0xFF;
                val = ((s32) (self->unkB0 * 0xFF) / 40) & 0xFF;
                tbl = (func_8037BEA4_Entry *) ((u8 *) &D_8008DA88 + off);
                tbl->unk4->unk30[0xB] = val;
                tbl->unk0->unk30[0xB] = val;
                idx = count;
            } while (count < self->unkAD);
        }
    }
}

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037BFB8.s {"functions":["func_8037BFB8"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037BFB8.s")



void func_8037C50C(void) {
    u8 *p = D_801BBBF0;

    p[0x71C] |= 0x10;
    p[0xAB8] |= 0x10;
}



void func_8037C530(void) {
    D_801BBBF0[0x71C] = D_801BBBF0[0x71C] & 0xEF;
    D_801BBBF0[0xAB8] = D_801BBBF0[0xAB8] & 0xEF;
}


struct func_8037C554_Struct1 {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x9E - 0x34];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[4];
    u8 unkA6;
    u8 padA7[0x2B8 - 0xA7];
    s16 unk2B8[6];
};
struct func_8037C554_StructA {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x84];
    struct func_8037C554_Struct1 *unk94;
    u8 pad98;
    u8 unk99;
    u8 pad9A[0xAB - 0x9A];
    u8 unkAB;
};
extern void func_8037BFB8(void *, s16, s16, u8, s32, u8 *);
#define func_8037C778 func_8037C778__decl707
extern u8 func_8037C778[];

void func_8037C554(struct func_8037C554_StructA *arg0, s32 arg1) {
    struct func_8037C554_Struct1 *s2;
    u8 sp5B;
    u8 var_a0;
    u8 *temp_v1;

    s2 = arg0->unk94;
    sp5B = 0;
    temp_v1 = (u8 *)s2 - 0x44C;
    if ((s2->unk2B8[0] < 0) || (s2->unk2B8[1] < 0) || (s2->unk2B8[2] < 0) || (s2->unk2B8[3] < 0) || (s2->unk2B8[4] < 0) || (s2->unk2B8[5] < 0) || (s2->unk9E != 0) || (s2->unkA0 != 0) || (s2->unkA6 & 0x20) || (((s2->unk30 << 0xB) >> 0x1E) != 0)) {
        u16 var_v0;
        u16 var_v1;
#define var_s0 arg1

        var_s0 = 0;
        if (temp_v1 == D_801BBBF0) {
            var_a0 = 1;
        } else {
            var_a0 = 2;
        }
        arg0->unkC[0x9B] |= var_a0;
        if (temp_v1 == D_801BBBF0) {
            var_v0 = 0xDC;
            var_v1 = 0x16;
        } else {
            var_v1 = 0xB4;
            if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) || (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
                var_v0 = 0x50;
            } else {
                var_v0 = 0x10E;
                var_v1 = 0xBE;
            }
        }
        do {
            if (s2->unk9E != 0) {
                arg0->unk99 = 2;
            } else if ((s2->unkA0 != 0) || (s2->unkA6 & 0x20)) {
                arg0->unk99 = 3;
            } else if (s2->unk2B8[var_s0] < 0) {
                arg0->unk99 = 1;
            } else {
                arg0->unk99 = 0;
            }
            func_8037BFB8(arg0, var_v0, var_v1, var_s0, arg0->unk99, &sp5B);
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < 6);
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037C778);
    }
}
#undef func_8037C778

#define func_8037D088 func_8037D088__func_8037C778
#define func_8037D088_StructA func_8037D088_StructA__func_8037C778
struct func_8037D088_StructA {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x94 - 0x10];
    u8 *unk94;
    u8 pad98[0xB0 - 0x98];
    s16 unkB0;
};
void func_8037D088(struct func_8037D088_StructA *arg0, s32 arg1);


struct func_8037C778_StructC { u8 pad[8]; u8 unk8; u8 unk9; u8 unkA; };
struct func_8037C778_StructB { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; struct func_8037C778_StructC *unk30; };
struct func_8037C778_StructP {
    u8 pad[0x30]; u32 unk30; u8 pad34[0x9E - 0x34]; u16 unk9E; u16 unkA0; u8 padA2[4]; u8 unkA6;
    u8 padA7[0x2B8 - 0xA7]; s16 unk2B8[6]; u8 pad2C4[0x2D0 - 0x2C4]; u8 unk2D0;
};
struct func_8037C778_StructA { u8 pad[0x94]; struct func_8037C778_StructP *unk94; u8 pad98[0xB0 - 0x98]; s16 unkB0; };
struct func_8037C778_StructD { u8 pad[0x30]; u16 unk30; u8 pad32[0x7E8 - 0x32]; struct func_8037C778_StructP unk7E8; u8 padX[0x1031 - 0x7E8 - sizeof(struct func_8037C778_StructP)]; u8 unk1031; };

#define T ((struct func_8037C778_StructB **)&D_8008DA88)
#define D ((struct func_8037C778_StructD *)D_801BBBF0)
#define S(x) (func_8001EAD0((s16)(D->unk30 << 7)) * (x))

void func_8037C778(struct func_8037C778_StructA *arg0, s32 arg1) {
    struct func_8037C778_StructP *p;
    u8 i;
    f32 v;
    u32 c;
extern s32 func_80236BA4();
    p = arg0->unk94;
    if ((p->unk2D0 & 0x10) || func_80236BA4() == 0) {
        for (i = 0; i < 6;) {
            T[i++]->unk22 = 0;
        }
        return;
    }
    for (i = 0; i < 6;) {
        T[i++]->unk22 = 1;
    }
    if ((p->unk2B8[0] >= 0 && p->unk2B8[1] >= 0 && p->unk2B8[2] >= 0 && p->unk2B8[3] >= 0 &&
         p->unk2B8[4] >= 0 && p->unk2B8[5] >= 0 && p->unk9E == 0 && p->unkA0 == 0 &&
         !(p->unkA6 & 0x20) && ((p->unk30 << 11) >> 30) == 0) ||
        (D->unk1031 >= 0xA && D->unk1031 != 0xF) ||
        (i = 0, (p == &D->unk7E8) && (((p->unk30 << 1) >> 30) == 3))) {
        arg0->unkB0 = 8;
        func_800058DC(arg0, (void *)func_8037D088);
        return;
    }
    do {
        if (p->unk2B8[i] < 0) {
            if (p->unk9E != 0) {
                if (S(128.0f) < 0.0f) v = -S(128.0f); else v = S(128.0f);
                T[i]->unk30->unk8 = (u32)(255.0f - v);
                T[i]->unk30->unk9 = 0;
                if (S(255.0f) < 0.0f) T[i]->unk30->unkA = (u32)-S(255.0f);
                else T[i]->unk30->unkA = (u32)S(255.0f);
            } else if (p->unkA0 != 0 || (p->unkA6 & 0x20) != 0) {
                if (S(255.0f) < 0.0f) v = -S(255.0f); else v = S(255.0f);
                T[i]->unk30->unk8 = (u32)(255.0f - v);
                T[i]->unk30->unk9 = 0;
                if (S(255.0f) < 0.0f) T[i]->unk30->unkA = (u32)-S(255.0f);
                else T[i]->unk30->unkA = (u32)S(255.0f);
            } else {
                T[i]->unk30->unk8 = 0xFF;
                if (S(255.0f) < 0.0f) v = -S(255.0f); else v = S(255.0f);
                c = (u32)v;
                T[i]->unk30->unkA = c;
                T[i]->unk30->unk9 = c;
            }
        } else if (p->unk9E != 0) {
            T[i]->unk30->unk8 = 0x80;
            T[i]->unk30->unk9 = 0;
            T[i]->unk30->unkA = 0xFF;
        } else if (p->unkA0 != 0 || (p->unkA6 & 0x20) != 0) {
            T[i]->unk30->unk8 = 0;
            T[i]->unk30->unk9 = 0;
            T[i]->unk30->unkA = 0xFF;
        } else {
            T[i]->unk30->unkA = 0xFF;
            T[i]->unk30->unk8 = T[i]->unk30->unk9 = T[i]->unk30->unkA;
        }
        i++;
    } while (i < 6);
}
#undef T
#undef D
#undef S
#undef func_8037D088
#undef func_8037D088_StructA

#define func_8037C554 func_8037C554__func_8037D088

struct func_8037D088_StructC {
    u8 pad[0xB];
    s8 unkB;
};
struct func_8037D088_StructB {
    u8 pad[0x30];
    struct func_8037D088_StructC *unk30;
};
struct func_8037D088_StructA {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x94 - 0x10];
    u8 *unk94;
    u8 pad98[0xB0 - 0x98];
    s16 unkB0;
};
extern void func_80006088(s32);
extern void func_8037C554();

void func_8037D088(struct func_8037D088_StructA *arg0, s32 arg1) {
    u8 *temp_v1;
    u8 i;
    s32 v;
    struct func_8037D088_StructB **tbl;

    temp_v1 = arg0->unk94;
    i = 0;
    if (arg0->unkB0 < 0) {
        if ((D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) ||
            (temp_v1 == D_801BBBF0 + 0x7E8 && ((*(u32 *)(temp_v1 + 0x30) << 1) >> 30) == 3)) {
            v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
            arg0->unkC[0x9B] ^= v;
            func_80005700(arg0, D_801BBBF0);
            return;
        }
        func_80006088(((s32 *)&D_8008DA88)[5]);
        func_80006088(((s32 *)&D_8008DA88)[4]);
        func_80006088(((s32 *)&D_8008DA88)[3]);
        func_80006088(((s32 *)&D_8008DA88)[2]);
        func_80006088(((s32 *)&D_8008DA88)[1]);
        func_80006088(((s32 *)&D_8008DA88)[0]);
        v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
        arg0->unkC[0x9B] ^= v;
        func_800058DC(arg0, func_8037C554);
        return;
    }
    tbl = (struct func_8037D088_StructB **)&D_8008DA88;
    do {
        tbl[i]->unk30->unkB = (arg0->unkB0 * 0xFF) / 8;
        i++;
    } while (i < 6);
    arg0->unkB0 -= 1;
}
#undef func_8037C554

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037D218.s {"functions":["func_8037D218"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037D218.s")

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037D320.s {"functions":["func_8037D320"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037D320.s")


void func_8037D5B4(arg0, arg1)
    u8 *arg0;
    u8 arg1;
{
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    u8 t;

    a = !arg1 ? arg0 + 0x98 : arg0 + 0x99;
    b = !arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    c = arg1 ? arg0 + 0x98 : arg0 + 0x99;
    d = arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    if (arg0[0x93] == 0x13) {
        *a = 4;
        *b = 0;
    } else {
        *a = 4;
        *b = 0;
    }
    if (arg0[0x95] != 0 || (t = arg0[0x91]) == 0 || t == 1 || t == 2 || t == 0xA || t == 9) {
        if (arg0[0x91] != 0x13) {
            *c = 4;
            *d = 0;
            return;
        }
    }
    *c = 4;
    *d = 0;
}


extern void func_8001B204();
extern u8 D_8038BC0C[];
extern u8 D_8038BC10[];

void func_8037D68C(s32 arg0, s32 arg1)
{
  if (((D_801BBBF0[0x1031] == 0xB) || (((s32) D_801BBBF0[0x1035]) > 0)) || (func_80236BA4(arg0, (void *) arg1) == 0))
  {
    *((u8 *) ((*((s32 *) (arg0 + 0xC))) + 0xAE)) = 1;
    func_8001B204(0xD, 0, 0x64, D_8038BC0C);
    if (arg1)
    {
    }
    func_8001B204(0xE, 0, 0x64, D_8038BC10);
    func_80005700((void *) arg0);
  }
}

#define func_8037D218 func_8037D218__func_8037D724
#define func_8037D93C func_8037D93C__func_8037D724

struct func_8037D724_StructC {
    u8 pad[0x98];
    u8 unk98;
    u8 pad99[0xAE - 0x99];
    u8 unkAE;
};
struct func_8037D724_Struct {
    u8 pad0[0xC];
    struct func_8037D724_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 pad96;
    u8 unk97;
    u8 pad98[0xA9 - 0x98];
    u8 unkA9;
    u8 unkAA;
    u8 unkAB;
    u8 unkAC;
    u8 unkAD;
    u8 padAE[2];
    s16 unkB0;
};
struct func_8037D724_StructT {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA;
    u8 unk2DB;
    u8 pad2DC;
    u8 unk2DD;
    u8 pad2DE[0x375 - 0x2DE];
    u8 unk375;
};
extern void func_8037D218(void *, s16, s16, u8, u8 *);
void func_8037D93C(void *arg0, s32 arg1);

void func_8037D724(struct func_8037D724_Struct *arg0, s32 arg1) {
    struct func_8037D724_StructT *a;
    struct func_8037D724_StructT *b;
    u8 sp37;
    s16 sp34;
    s16 sp32;
    s16 var_a2;
    s16 sp2E;
    u8 v;
    u8 t;
    s32 pad[2];

    var_a2 = D_801BBBF0[0x1030];
    if (var_a2 == 0) {
        a = (struct func_8037D724_StructT *)D_801BC3D8;
    } else {
        a = (struct func_8037D724_StructT *)D_801BC03C;
    }
    if (var_a2 == 0) {
        b = (struct func_8037D724_StructT *)D_801BC03C;
    } else {
        b = (struct func_8037D724_StructT *)D_801BC3D8;
    }
    sp37 = 0;
    arg0->unk90 = var_a2;
    arg0->unk91 = a->unk2D8;
    arg0->unk92 = a->unk2D9;
    arg0->unk93 = b->unk2D8;
    arg0->unk94 = b->unk2D9;
    arg0->unk95 = b->unk2DD;
    arg0->unkC->unkAE = 0;
    arg0->unkAC = a->unk2DB;
    arg0->unkAD = arg0->unkC->unk98;
    arg0->unkB0 = 0;
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        sp2E = 0xC6;
    } else {
        sp2E = 0xAA;
    }
    if (b->unk2D8 == 0xA) {
        if ((s32)b == (s32)D_801BBBF0 + 0x44C) {
            t = b->unk375;
            sp34 = t * 8 - 0x14;
            sp32 = 0x3C;
            var_a2 = t * 4 + 0x3C;
        } else {
            sp34 = -0x14;
            t = b->unk375;
            sp32 = 0x3C - t * 8;
            var_a2 = 0x3C;
            sp2E -= t * 4;
        }
        arg0->unk97 = t;
        if (arg0->unk90 == 0) {
            if (arg0->unk97 == 0) {
                arg0->unkA9 = 0xD;
            } else {
                arg0->unkA9 = arg0->unk97;
            }
            arg0->unkAA = 0xE;
        } else {
            v = arg0->unk97;
            arg0->unkA9 = 0xD;
            if (v == 0) {
                arg0->unkAA = 0xE;
            } else {
                arg0->unkAA = v;
            }
        }
    } else {
        sp34 = -0x14;
        sp32 = 0x3C;
        var_a2 = 0x3C;
        arg0->unk97 = 0;
        arg0->unkA9 = 0xD;
        arg0->unkAA = 0xE;
    }
    func_8037D218(arg0, sp34, var_a2, arg0->unk90, &sp37);
    func_8037D218(arg0, sp32, sp2E, arg0->unk90 ^ 1, &sp37);
    arg0->unkAB = func_80006214(arg0);
    func_800058DC(arg0, func_8037D93C);
}
#undef func_8037D218
#undef func_8037D93C

#define func_8037D5B4 func_8037D5B4__func_8037D93C
#define func_8037DAE0 func_8037DAE0__func_8037D93C

struct func_8037D93C_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x93 - 0x91];
    u8 unk93;
    u8 pad94[0x98 - 0x94];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xA0 - 0x9C];
    u16 unkA0;
    u16 unkA2;
    u8 padA4[0xA9 - 0xA4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[0xB0 - 0xAB];
    s16 unkB0;
};

struct func_8037D93C_Entry {
    s16 unk0;
    s16 unk2;
};

struct func_8037D93C_Table {
    u8 pad[0x30];
    struct func_8037D93C_Entry *unk30;
};

extern void func_8037D5B4();
extern s32 func_8037D320(void *, u8);
extern void func_8037DC64();
extern void func_8037DAE0();
extern u8 D_8038BC14[];
extern u8 D_8038BC1C[];

void func_8037D93C(void *arg0, s32 arg1) {
    struct func_8037D93C_Struct *obj = arg0;
    struct func_8037D93C_Entry *entry;
    s32 temp;

    func_8037D5B4(obj, obj->unk90);
    temp = func_8037D320(obj, obj->unk90);

    entry = ((struct func_8037D93C_Table *) *(u8 **) &D_8008DA88)->unk30;
    func_8001B204(obj->unkA9, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9A + 3), D_8038BC14,
        (obj->unkB0 * 0xFF) / 4, obj->unk98, temp);

    temp = func_8037D320(obj, (obj->unk90 ^ 1) & 0xFF);

    entry = ((struct func_8037D93C_Table *) ((u8 **) &D_8008DA88)[1])->unk30;
    func_8001B204(obj->unkAA, (s16) (entry->unk0 + 0x468), (s16) (entry->unk2 - obj->unk9B + 3), D_8038BC1C,
        (obj->unkB0 * 0xFF) / 4, obj->unk99, temp);

    obj->unkB0 = obj->unkB0 + 1;
    if (obj->unkB0 >= 5) {
        obj->unkA0 = *(u16 *) &D_801BBBF0[0x4E6];
        obj->unkA2 = *(u16 *) &D_801BBBF0[0x882];
        if (obj->unk93 == 0xA) {
            obj->unkB0 = 0xA;
            func_800058DC(obj, func_8037DC64);
            return;
        }
        obj->unkB0 = 0x20;
        func_800058DC(obj, func_8037DAE0);
    }
}
#undef func_8037D5B4
#undef func_8037DAE0

#define func_8037DD2C func_8037DD2C__func_8037DAE0

struct func_8037DAE0_Ent { s16 unk0; s16 unk2; };
struct func_8037DAE0_Tab { u8 pad[0x30]; struct func_8037DAE0_Ent *unk30; };
struct func_8037DAE0_G { struct func_8037DAE0_Tab *unk0; struct func_8037DAE0_Tab *unk4; };
struct func_8037DAE0_Arg {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[4];
    u16 unkA0;
    u16 unkA2;
    u8 padA4[5];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};
extern u8 D_8038BC24[];
extern u8 D_8038BC2C[];
extern s32 D_8037D320(void *, u8, s32);
struct func_8037DD2C_Arg;
void func_8037DD2C(struct func_8037DD2C_Arg *arg0, s32 arg1);

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define GT ((struct func_8037DAE0_G *)&D_8008DA88)

void func_8037DAE0(struct func_8037DAE0_Arg *arg0, s32 arg1) {
    s32 x;
    s32 v;

    if (arg0->unkB0-- < 0) {
        func_800058DC(arg0, (void *)func_8037DD2C);
        return;
    }
    arg1 = arg0->unk90;
    if (arg1 != 0 && arg0->unkA0 != 0) {
        x = (arg0->unkB0 << 4) - 0x101;
        v = ABS(x);
        func_8001B204(arg0->unkA9, (s16)(GT->unk0->unk30->unk0 + 0x468), (s16)(GT->unk0->unk30->unk2 - arg0->unk9A + 3), D_8038BC24, v, arg0->unk98, D_8037D320(arg0, arg1, arg1));
        arg1 = arg0->unk90;
    }
    if (arg1 == 0 && arg0->unkA2 != 0) {
        x = (arg0->unkB0 << 4) - 0x101;
        v = ABS(x);
        func_8001B204(arg0->unkAA, (s16)(GT->unk4->unk30->unk0 + 0x468), (s16)(GT->unk4->unk30->unk2 - arg0->unk9B + 3), D_8038BC2C, v, arg0->unk99, D_8037D320(arg0, arg1 ^ 1, arg1));
    }
}
#undef func_8037DD2C

#define D_801BCC20 D_801BCC20__func_8037DC64
#define func_8037E1C4 func_8037E1C4__func_8037DC64

extern u8 D_801BCC20;
extern void func_8037E1C4();

struct func_8037DC64_Struct {
    u8 pad[0x97];
    u8 unk97;
    u8 pad98[0xA4 - 0x98];
    u8 unkA4;
    u8 padA5[0xB0 - 0xA5];
    s16 unkB0;
};

struct func_8037DC64_Tbl {
    u8 pad[0x376];
    u8 unk376;
};

void func_8037DC64(struct func_8037DC64_Struct *arg0, s32 arg1) {
    struct func_8037DC64_Tbl *p;

    if (D_801BCC20 == 0) {
        p = (struct func_8037DC64_Tbl *)D_801BC03C;
    } else {
        p = (struct func_8037DC64_Tbl *)D_801BC3D8;
    }
    if (arg0->unkB0-- < 0) {
        if (arg0->unk97 == (u8)p->unk376) {
            arg0->unkB0 = arg0->unkA4 = 0x14;
        } else {
            arg0->unkB0 = arg0->unkA4 = 0x10;
        }
        func_800058DC(arg0, func_8037E1C4);
    }
}
#undef D_801BCC20
#undef func_8037E1C4


typedef struct func_8037DCEC_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
} func_8037DCEC_Inner;

typedef struct func_8037DCEC_Outer {
    u8 pad[0x30];
    func_8037DCEC_Inner *unk30;
} func_8037DCEC_Outer;

void func_8037DCEC(s32 arg0, func_8037DCEC_Outer *arg1, u8 arg2) {
    u8 temp_v1;
    func_8037DCEC_Inner *temp_v0;

    arg1->unk30->unkE = arg2;
    temp_v0 = arg1->unk30;
    temp_v1 = temp_v0->unkE;
    temp_v0->unkD = temp_v1;
    arg1->unk30->unkC = temp_v1;
    arg1->unk30->unk9 = temp_v1;
    arg1->unk30->unkA = temp_v1;
    arg1->unk30->unk8 = temp_v1;
}

#define func_8037E1C4 func_8037E1C4__func_8037DD2C

struct func_8037DD2C_Struct1 { s16 unk0; s16 unk2; u8 pad[0x1E]; u8 unk22; u8 pad2[0xD]; func_8037DCEC_Inner *unk30; };
struct func_8037DD2C_Struct0 { struct func_8037DD2C_Struct1 *unk0; struct func_8037DD2C_Struct1 *unk4; };
struct func_8037DD2C_Arg { u8 pad[0x90]; u8 unk90; u8 pad91[5]; u8 unk96; u8 pad97[0xA4-0x97]; s16 unkA4; s16 unkA6; u8 padA8[8]; s16 unkB0; };
extern u8 D_8038BC34[];
extern void func_8037E1C4();
#define func_8037DEE4 func_8037DEE4__decl1207
extern u8 func_8037DEE4[];
#define G ((struct func_8037DD2C_Struct0 *)&D_8008DA88)

void func_8037DD2C(struct func_8037DD2C_Arg *arg0, s32 arg1) {
    s32 v;
    func_8037DCEC((s32)arg0, (void *)G->unk0, 0xFF);
    if (arg0->unk96 == 0) {
        func_8037DCEC((s32)arg0, (void *)G->unk4, 0xFF);
    }
    if (arg0->unkB0++ > 0) {
        arg0->unkB0 = 0;
        if (arg0->unk96 == 0) {
            if (arg0->unk90 == 0) {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk9 = 0xFF;
                G->unk0->unk30->unkD = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk8 = 0xFF;
                G->unk4->unk30->unkC = 0xFF;
            } else {
                func_8037DCEC((s32)arg0, (void *)G->unk0, 0);
                G->unk0->unk30->unk8 = 0xFF;
                G->unk0->unk30->unkC = 0xFF;
                func_8037DCEC((s32)arg0, (void *)G->unk4, 0);
                G->unk4->unk30->unk9 = 0xFF;
                G->unk4->unk30->unkD = 0xFF;
            }
            arg0->unkB0 = *(u8 *)&arg0->unkA4 = 8;
            func_800058DC(arg0, (void *)func_8037E1C4);
            return;
        }
        func_8001B204(0xD, 0, 0x64, D_8038BC34);
        G->unk0->unk22 = 0;
        arg0->unkA4 = ((s16 *)G->unk4->unk30)[0];
        arg0->unkA6 = ((s16 *)G->unk4->unk30)[1];
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037DEE4);
    }
}
#undef func_8037DEE4
#undef func_8037E1C4

#define D_8038BC38 D_8038BC38__func_8037DEE4
#define D_8038BC7C D_8038BC7C__func_8037DEE4
#define D_8038BC80 D_8038BC80__func_8037DEE4
#define D_8038BC84 D_8038BC84__func_8037DEE4
#define func_8037E0A4 func_8037E0A4__func_8037DEE4


struct func_8037DEE4_Arg {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x99 - 0x91];
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xA4 - 0x9C];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
};

struct func_8037DEE4_Ent {
    s16 unk0;
    s16 unk2;
};
struct func_8037DEE4_Tab {
    u8 pad[0x30];
    struct func_8037DEE4_Ent *unk30;
};
struct func_8037DEE4_Glob {
    u8 pad[4];
    struct func_8037DEE4_Tab *unk4;
};

extern u8 D_8038BC38[];
extern f32 D_8038BC7C;
extern f32 D_8038BC80;
extern f32 D_8038BC84;
extern void func_8037E0A4();

#define GG ((struct func_8037DEE4_Glob *)&D_8008DA88)

void func_8037DEE4(struct func_8037DEE4_Arg *arg0, s32 arg1) {
    f32 var_fv1;
    struct func_8037DEE4_Ent *temp_v1;
    s32 var_a0;
    s32 var_v1;

    if ((D_801BBC1C == 0xA) || (var_v1 = 0x11, (D_801BBC1C == 0xB))) {
        var_fv1 = D_8038BC7C;
        var_v1 = 0x10;
        var_a0 = 0x1E;
    } else {
        var_fv1 = D_8038BC80;
        var_a0 = 0x20;
    }
    if (var_a0 < arg0->unkB0) {
        arg0->unkB0 = 8;
        func_800058DC(arg0, func_8037E0A4);
        return;
    }
    if (var_v1 < arg0->unkB0) {
        arg0->unkB0++;
        return;
    }
    GG->unk4->unk30->unk0 = (((f32)arg0->unkB0 * (D_8038BC84 * (f32)arg0->unkB0)) / 2) + (f32) (arg0->unkA4 + (arg0->unkB0 * -0xE));
    GG->unk4->unk30->unk2 = (((f32)arg0->unkB0 * (var_fv1 * (f32)arg0->unkB0)) / 2) + (f32) arg0->unkA6;
    var_a0 = func_8037D320(arg0, arg0->unk90 ^ 1);
    temp_v1 = GG->unk4->unk30;
    func_8001B204(0xE, (s16) (temp_v1->unk0 + 0x468), (s16) ((temp_v1->unk2 - arg0->unk9B) + 3), D_8038BC38, arg0->unk99, var_a0);
    arg0->unkB0++;
}
#undef GG
#undef D_8038BC38
#undef D_8038BC7C
#undef D_8038BC80
#undef D_8038BC84
#undef func_8037E0A4


struct func_8037E0A4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 pad91[0x99 - 0x91];
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[0xB0 - 0x9C];
    s16 unkB0;
};

struct func_8037E0A4_Ent {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E0A4_Tab {
    u8 pad[0x30];
    struct func_8037E0A4_Ent *unk30;
};

struct func_8037E0A4_Glob {
    u8 pad[4];
    struct func_8037E0A4_Tab *unk4;
};

extern u8 D_8038BC40[];
extern u8 D_8038BC44[];

void func_8037E0A4(struct func_8037E0A4_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 - 1;
    if (arg0->unkB0 < 0) {
        func_8001B204(0xE, 0, 0x64, D_8038BC40);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
        return;
    }
    func_8001B204(0xE, (s16) (((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk0 + 0x468), (s16) ((((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unk2 - arg0->unk9B) + 3), D_8038BC44, (s32) (arg0->unkB0 * 0xFF) / 8, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));
    ((struct func_8037E0A4_Glob *) &D_8008DA88)->unk4->unk30->unkB = (s8) ((s32) (arg0->unkB0 * 0xFF) / 8);
}


struct func_8037E1C4_Entry {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E1C4_Table {
    u8 pad[0x30];
    struct func_8037E1C4_Entry *unk30;
};

struct func_8037E1C4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[8];
    u8 unkA4;
    u8 padA5[4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};

extern u8 D_8038BC4C[];
extern u8 D_8038BC54[];
extern u8 D_8038BC5C[];
extern u8 D_8038BC60[];

void func_8037E1C4(struct func_8037E1C4_Obj *arg0, s32 arg1) {

    ((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);
    ((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);

    func_8001B204(arg0->unkA9, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk2 - arg0->unk9A) + 3), D_8038BC4C,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk98, func_8037D320(arg0, arg0->unk90));

    func_8001B204(arg0->unkAA, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk2 - arg0->unk9B) + 3), D_8038BC54,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));

    arg0->unkB0 = (s16)(arg0->unkB0 - 1);
    if (arg0->unkB0 < 0) {
        func_8001B204(arg0->unkA9, 0, 0x64, D_8038BC5C);
        func_8001B204(arg0->unkAA, 0, 0x64, D_8038BC60);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
    }
}

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037E438.s {"functions":["func_8037E438"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037E438.s")

#define func_8037E7E4 func_8037E7E4__func_8037E780

extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);

extern void func_8037E7E4();

void func_8037E780(void *arg0, s32 arg1) {
    s8 sp2F;

    sp2F = 0;
    func_8037E438(arg0, 0x32, 0x50, ((u8 *)arg0)[0xA8], 8, &sp2F, 0);
    func_80006214(arg0);
    *(s16 *)((u8 *)arg0 + 0xB0) = 0;
    func_800058DC(arg0, func_8037E7E4);
}
#undef func_8037E7E4

#define func_8037E9B8 func_8037E9B8__func_8037E7E4

struct func_8037E7E4_StructA {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};
struct func_8037E7E4_StructB {
    u8 pad[0x30];
    u8 *unk30;
};
extern void func_8037E9B8();

void func_8037E7E4(struct func_8037E7E4_StructA *arg0, s32 arg1) {
    s8 sp3F;

    sp3F = 0;
    if (arg0->unkB0 < 8) {
        ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xC] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xD] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xE] = (u32)((func_8001EAD0(arg0->unkB0 << 9) < 0.0f ? -func_8001EAD0(arg0->unkB0 << 9) : func_8001EAD0(arg0->unkB0 << 9)) * 255.0f);
        arg0->unkB0++;
        return;
    }
    ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xC] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xD] = ((struct func_8037E7E4_StructB *)D_8008DA88)->unk30[0xE] = 0;
    func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 9, &sp3F, 0);
    func_80006214(arg0);
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037E9B8);
}
#undef func_8037E9B8

#define func_8037EB58 func_8037EB58__func_8037E9B8

struct func_8037EB58_Struct;
void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1);

struct func_8037E9B8_Struct {
    u8 pad[0xB0];
    s16 unkB0;
};

void func_8037E9B8(struct func_8037E9B8_Struct *arg0, s32 arg1) {
    f32 v;
    u8 t;
    u8 t2;
    func_8037DCEC_Inner *p;

    if (arg0->unkB0 < 8) {
        if (func_8001EAD0(arg0->unkB0 << 9) < 0.0f) {
            v = -func_8001EAD0(arg0->unkB0 << 9);
        } else {
            v = func_8001EAD0(arg0->unkB0 << 9);
        }
        t = (u32)(v * 255.0f);
        G->unk4->unk30->unkE = t;
        G->unk4->unk30->unkD = t;
        G->unk4->unk30->unkC = t;
        arg0->unkB0 = arg0->unkB0 + 1;
        return;
    }
    G->unk4->unk30->unkE = 0;
    p = G->unk4->unk30;
    t2 = p->unkE;
    p->unkD = t2;
    G->unk4->unk30->unkC = t2;
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037EB58);
}
#undef func_8037EB58



#define func_8037EBD0 func_8037EBD0__decl1525
extern s32 func_8037EBD0;

void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp37;
    u8 temp_a3;

    sp37 = 0;
    if (arg0->unkB0++ >= 9) {
        temp_a3 = arg0->unkA8;
        func_8037E438(arg0, 0x32, 0x50, temp_a3, temp_a3, &sp37, 0);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, &func_8037EBD0);
    }
}
#undef func_8037EBD0

#define D_8017DD7C D_8017DD7C__func_8037EBD0
#define D_8017DD7D D_8017DD7D__func_8037EBD0
#define D_8037E438 D_8037E438__func_8037EBD0
#define func_8037EEC4 func_8037EEC4__func_8037EBD0
#define func_8037EEC4_Inner func_8037EEC4_Inner__func_8037EBD0
#define func_8037EEC4_Obj func_8037EEC4_Obj__func_8037EBD0
#define func_8037EEC4_Struct func_8037EEC4_Struct__func_8037EBD0
#define func_8037F170 func_8037F170__func_8037EBD0
#define TBL ((func_8037EEC4_Obj **)&D_8008DA88)
extern u8 D_8017DD7C;
extern u8 D_8017DD7D;
typedef struct func_8037EEC4_Inner { u8 pad[0xC]; u8 c; u8 d; u8 e; } func_8037EEC4_Inner;
typedef struct func_8037EEC4_Obj { u8 pad[0x30]; func_8037EEC4_Inner *p; } func_8037EEC4_Obj;
#define TBL ((func_8037EEC4_Obj **)&D_8008DA88)
typedef struct func_8037EEC4_Struct {
    u8 pad90[0x90];
    u8 unk90;
    u8 pad91[0xA8 - 0x91];
    u8 unkA8;
    u8 padA9[2];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
} func_8037EEC4_Struct;
void func_8037EEC4(func_8037EEC4_Struct *arg0, s32 arg1);
extern void func_8037F170();


struct func_8037EBD0_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x17];
    u8 unkA8;
    u8 padA9[2];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
};

extern s32 D_8037E438(void *, s32, s32, u8, u8, s8 *, s32);

void func_8037EBD0(struct func_8037EBD0_Struct *arg0, s32 arg1) {
    u8 *digits;
    u8 color;
    s8 sp52;

    digits = arg0->unkA8 == 0 ? &D_8017DD7C : &D_8017DD7D;
    sp52 = 0;
    if (arg0->unkB0 < 8) {
        color = (u32)((func_8001EAD0((s16)(arg0->unkB0 << 9)) < 0.0f ? -func_8001EAD0((s16)(arg0->unkB0 << 9)) : func_8001EAD0((s16)(arg0->unkB0 << 9))) * 255.0f);
        TBL[2]->p->e = color;
        TBL[2]->p->d = color;
        TBL[2]->p->c = color;
        arg0->unkB0++;
        return;
    }
    TBL[2]->p->c = TBL[2]->p->d = TBL[2]->p->e = 0;
    if (*digits / 10 != 0) {
        arg1 = 0;
        if (*digits / 10 > 0) {
            do {
                D_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 10, &sp52, arg1);
                arg1 = (arg1 + 1) & 0xFF;
            } while (arg1 < *digits / 10);
        }
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037EEC4);
    } else {
        func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 11, &sp52, arg0->unk90++);
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037F170);
    }
    arg0->unkB0 = 0;
}
#undef TBL
#undef D_8017DD7C
#undef D_8017DD7D
#undef D_8037E438
#undef func_8037EEC4
#undef func_8037EEC4_Inner
#undef func_8037EEC4_Obj
#undef func_8037EEC4_Struct
#undef func_8037F170

#define func_8037F3D4 func_8037F3D4__func_8037EEC4

extern u8 D_8017DD7C;
extern u8 D_8017DD7D;
extern void func_8037F170();
void func_8037F3D4(s32 arg0, s32 arg1);

typedef struct func_8037EEC4_Inner { u8 pad[0xC]; u8 c; u8 d; u8 e; } func_8037EEC4_Inner;
typedef struct func_8037EEC4_Obj { u8 pad[0x30]; func_8037EEC4_Inner *p; } func_8037EEC4_Obj;
typedef struct func_8037EEC4_Struct {
    u8 pad90[0x90];
    u8 unk90;
    u8 pad91[0xA8 - 0x91];
    u8 unkA8;
    u8 padA9[2];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
} func_8037EEC4_Struct;

#define TBL ((func_8037EEC4_Obj **)&D_8008DA88)

void func_8037EEC4(func_8037EEC4_Struct *arg0, s32 arg1) {
    u8 *a1;
    u8 i;
    s8 s;
    f32 f;
    u8 v;

    if (arg0->unkA8 == 0) {
        a1 = &D_8017DD7C;
    } else {
        a1 = &D_8017DD7D;
    }
    s = 0;
    if (arg0->unkB0 < 8) {
        for (i = 3; i < arg0->unkAB; i++) {
            if (func_8001EAD0(arg0->unkB0 << 9) < 0.0f) {
                f = -func_8001EAD0(arg0->unkB0 << 9);
            } else {
                f = func_8001EAD0(arg0->unkB0 << 9);
            }
            v = (u32)(f * 255.0f);
            TBL[i]->p->e = v;
            TBL[i]->p->d = v;
            TBL[i]->p->c = v;
        }
        arg0->unkB0++;
        return;
    }
    for (i = 3; i < arg0->unkAB; i++) {
        TBL[i]->p->e = 0;
        TBL[i]->p->c = TBL[i]->p->d = TBL[i]->p->e;
    }
    if (*a1 % 10 != 0) {
        func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 0xB, (s8 *)&s, arg0->unk90++);
        arg0->unkAB = func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037F170);
        return;
    }
    func_800058DC(arg0, func_8037F3D4);
}
#undef func_8037F3D4

/* hh-block asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037F170.s {"functions":["func_8037F170"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037AAC0/_mrg_keep_text_func_8037F170.s")


void func_8037F3D4(s32 arg0, s32 arg1) {
    if (D_801BCC21 == 0xE) {
        func_80005700(arg0);
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8037AAC0[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x54, 0x45, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x57, 0x45, 0x41, 0x50,
    0x4F, 0x4E, 0x20, 0x49, 0x54, 0x45, 0x4D, 0x00, 0x47, 0x55, 0x41, 0x52, 0x44, 0x00, 0x00, 0x00,
    0x53, 0x54, 0x45, 0x50, 0x00, 0x00, 0x00, 0x00, 0x43, 0x4F, 0x55, 0x4E, 0x54, 0x45, 0x52, 0x00,
    0x52, 0x45, 0x56, 0x45, 0x52, 0x53, 0x41, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x45, 0x53, 0x43, 0x41,
    0x50, 0x45, 0x00, 0x00, 0x54, 0x41, 0x4B, 0x45, 0x20, 0x46, 0x41, 0x4C, 0x4C, 0x00, 0x00, 0x00,
    0x53, 0x50, 0x45, 0x43, 0x49, 0x41, 0x4C, 0x00, 0x4E, 0x4F, 0x54, 0x48, 0x49, 0x4E, 0x47, 0x00,
    0x20, 0x46, 0x41, 0x49, 0x4C, 0x45, 0x44, 0x00, 0xA3, 0xD3, 0xA3, 0xD0, 0xA3, 0xC5, 0xA3, 0xC3,
    0xA3, 0xC9, 0xA3, 0xC1, 0xA3, 0xCC, 0x00, 0x00, 0xA3, 0xD2, 0xA3, 0xCF, 0xA3, 0xCC, 0xA3, 0xCC,
    0x00, 0x00, 0x00, 0x00, 0xA3, 0xD2, 0xA3, 0xCF, 0xA3, 0xCC, 0xA3, 0xCC, 0x20, 0xA3, 0xC6, 0xA3,
    0xC1, 0xA3, 0xC9, 0xA3, 0xCC, 0xA3, 0xC5, 0xA3, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D,
    0x25, 0x73, 0x00, 0x00, 0x25, 0x61, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x37, 0xC0, 0x0C, 0x80, 0x37, 0xC0, 0x18, 0x80, 0x37, 0xC0, 0x2C,
    0x80, 0x37, 0xC0, 0x3C, 0x80, 0x37, 0xC0, 0x50, 0x80, 0x37, 0xC0, 0x60, 0xBF, 0x66, 0x66, 0x66,
    0xBF, 0x75, 0xC2, 0x8F, 0x3F, 0x8C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
