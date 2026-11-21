#include "common.h"


struct func_801CB5A0_Struct30 {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};

struct func_801CB5A0_Struct {
    u8 pad[0x28];
    s16 unk28;
    u8 pad2[6];
    struct func_801CB5A0_Struct30 *unk30;
};

struct func_801CB5A0_StructArg0 {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[0x1B];
    s32 unkAC;
};

extern void func_80116E80(s32);
extern void func_80126930(s32);
extern void func_80146208(void *, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80006214(void *);
extern u8 D_80044434[];
extern void func_801CB788();
extern void func_800058DC(void *, void *);
extern void func_80005670(void *, void *);

void func_801CB5A0(void *arg0, struct func_801CB5A0_Struct **arg1) {
    u8 sp5F;
    u8 i;
    struct func_801CB5A0_Struct30 *q;
    u8 c;

    func_80126930(0);
    func_80005670(arg0, D_80044434);
    func_80116E80(0x80);
    func_80116E80(0x100);
    ((struct func_801CB5A0_StructArg0 *) arg0)->unk90 = 0;
    ((struct func_801CB5A0_StructArg0 *) arg0)->unkAC = 0;
    for (i = 0; i < 8; i++) {
        func_80146208(arg0, &sp5F, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x20, 0x40, 0, 0, 0, 0x228, i);
    }
    func_80146208(arg0, &sp5F, 0x66, (s16) ((i << 5) + 0x18), 0x56, 0x10, 0x40, 0, 0, 0, 0x228, i);
    func_80006214(arg0);
    for (i = 0; i < 9; i++) {
        arg1[i]->unk28 = 0x100;
        arg1[i]->unk30->unkD = 0;
        q = arg1[i]->unk30;
        c = q->unkD;
        q->unkC = c;
        arg1[i]->unk30->unk9 = c;
        arg1[i]->unk30->unk8 = c;
        arg1[i]->unk30->unkE = 0x80;
        q = arg1[i]->unk30;
        q->unkA = q->unkE;
        arg1[i]->unk30->unkF = 0xFF;
        q = arg1[i]->unk30;
        q->unkB = q->unkF;
    }
    func_800058DC(arg0, &func_801CB788);
}

#define D_80089474 D_80089474__func_801CB788
#define D_8017DD93 D_8017DD93__func_801CB788
#define D_8017DD9E D_8017DD9E__func_801CB788
#define D_8017DDA0 D_8017DDA0__func_801CB788
#define D_801BBC0D D_801BBC0D__func_801CB788
#define D_801BBC8E D_801BBC8E__func_801CB788
#define D_801CF978 D_801CF978__func_801CB788
#define D_801CF9A0 D_801CF9A0__func_801CB788
#define D_801CF9BC D_801CF9BC__func_801CB788
#define D_801CF9D4 D_801CF9D4__func_801CB788
#define D_801CF9F4 D_801CF9F4__func_801CB788
#define D_801CFA28 D_801CFA28__func_801CB788
#define D_801CFA4C D_801CFA4C__func_801CB788
#define D_801CFA6C D_801CFA6C__func_801CB788
#define D_801CFA70 D_801CFA70__func_801CB788
#define D_801CFA74 D_801CFA74__func_801CB788
#define D_801CFA78 D_801CFA78__func_801CB788
#define D_801CFA7C D_801CFA7C__func_801CB788
#define func_8001B204 func_8001B204__func_801CB788
#define func_801CB5A0_StructArg0 func_801CB5A0_StructArg0__func_801CB788
#define func_801CBB88 func_801CBB88__func_801CB788
#define func_801CBBEC func_801CBBEC__func_801CB788
#define func_801CBCE8_Struct func_801CBCE8_Struct__func_801CB788
#define func_8037D508 func_8037D508__func_801CB788
extern u8 D_8017DD93;
struct func_801CB5A0_StructArg0 {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[0x1B];
    s32 unkAC;
};
void func_801CBB88(void *arg0, void **arg1);
void func_801CBBEC(void *arg0, void *arg1);
struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};
extern s32 func_8001B204(s32, s32, s32, void *, ...);
extern void func_8037D508(void);
struct func_801CB788_StructInput {
    u8 pad[4];
    u16 buttons;
};
extern struct func_801CB788_StructInput D_80089474;
extern u8 D_8017DD9E;
extern u32 D_8017DDA0;
extern u8 D_801BBC0D;
extern u16 D_801BBC8E[];
extern u8 D_801CF978[];
extern u8 D_801CF9A0[];
extern u8 D_801CF9BC[];
extern u8 D_801CF9D4[];
extern u8 D_801CF9F4[];
extern u8 D_801CFA28[];
extern u8 D_801CFA4C[];
extern u8 D_801CFA6C[];
extern u8 D_801CFA70[];
extern u8 D_801CFA74[];
extern u8 D_801CFA78[];
extern u8 D_801CFA7C[];

void func_801CB788(struct func_801CB5A0_StructArg0 *arg0, struct func_801CBCE8_Struct **arg1) {
    u32 ticks;
    s32 h;
    u8 a, b, c;
    s32 pad1;
    {
    u8 m;
    u8 hours;
    ticks = D_8017DDA0;
    hours = (u8)(ticks / 108000U);
    if ((s32)((ticks / 108000U) & 0xFF) > 0) {
        ticks -= hours * 108000;
    }
    m = (u8)(ticks / 1800U);
    if ((s32)((ticks / 1800U) & 0xFF) > 0) {
        ticks -= m * 1800;
    }
    if (hours >= 100) {
        hours = 99;
    }
    func_8001B204(0, 0x50, 0x46, D_801CF978, 2);
    if (D_801BBC0D == 0) {
        func_8001B204(4, 0x50, 0x64, D_801CF9A0, 2, 2, 0);
    } else if (D_801BBC0D == 1) {
        func_8001B204(4, 0x50, 0x64, D_801CF9BC, 2, 4, 0);
    } else {
        func_8001B204(4, 0x50, 0x64, D_801CF9D4, 2, 1, 0);
    }
    func_8001B204(1, 0x50, 0x74, D_801CF9F4, 2, 2, hours, 0, 2, m, 0, 2, (ticks / 30U) & 0xFF);
    func_8001B204(2, 0x50, 0x84, D_801CFA28, 2, 2, (s32) D_8017DD9E);
    }
    if (D_8017DD93 != 0) {
        if (arg0->unk90 == 0) { a = 1; } else { a = 0; }
        if (arg0->unk90 == 0) { b = 0; } else { b = 3; }
        if (arg0->unk90 == 0) { c = 0; } else { c = 1; }
        func_8001B204(3, 0x68, 0xC8, D_801CFA4C, a, b, c,
                      arg0->unk90 == 0 ? 3 : 0);
        if (D_801BBC8E[5] & 0x200) {
            arg0->unk90 = 0;
        } else if (D_801BBC8E[5] & 0x100) {
            arg0->unk90 = 1;
        }
        if (D_80089474.buttons & 0x8000) {
            if (arg0->unk90 == 0) {
                func_800058DC(arg0, func_801CBBEC);
                return;
            }
            func_8001B204(0, 0, 0, D_801CFA6C);
            func_8001B204(1, 0, 0, D_801CFA70);
            func_8001B204(2, 0, 0, D_801CFA74);
            func_8001B204(3, 0, 0, D_801CFA78);
            func_8001B204(4, 0, 0, D_801CFA7C);
            pad1 = 0;
            do {
                arg1[pad1]->unk22 = 0;
                pad1 = (pad1 + 1) & 0xFF;
            } while (pad1 < 9);
            func_8037D508();
            func_800058DC(arg0, func_801CBB88);
        }
    } else {
        if ((301 <= arg0->unkAC++) || (D_80089474.buttons & 0x4000)) func_800058DC(arg0, func_801CBBEC);
    }
}
#undef D_80089474
#undef D_8017DD93
#undef D_8017DD9E
#undef D_8017DDA0
#undef D_801BBC0D
#undef D_801BBC8E
#undef D_801CF978
#undef D_801CF9A0
#undef D_801CF9BC
#undef D_801CF9D4
#undef D_801CF9F4
#undef D_801CFA28
#undef D_801CFA4C
#undef D_801CFA6C
#undef D_801CFA70
#undef D_801CFA74
#undef D_801CFA78
#undef D_801CFA7C
#undef func_8001B204
#undef func_801CB5A0_StructArg0
#undef func_801CBB88
#undef func_801CBBEC
#undef func_801CBCE8_Struct
#undef func_8037D508


extern s32 func_8037D598(void);

void func_801CBB88(void *arg0, void **arg1) {
    s32 i;

    if (func_8037D598() != 0) {
        i = 0;
        do {
            ((u8 *)arg1[i])[0x22] = 1;
            i = (i + 1) & 0xFF;
        } while (i < 9);
        func_800058DC(arg0, func_801CB788);
    }
}


extern u8 D_8017DD93;
extern u8 D_80044090[];
extern void func_801CBC48(s32 arg0, s32 arg1);
extern void func_801CBD54();

void func_801CBBEC(void *arg0, void *arg1) {
    if (D_8017DD93 != 0) {
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CBC48);
        return;
    }
    func_800058DC(arg0, func_801CBD54);
}

extern u8 D_801BBBF0[];
extern void func_80142570(void);
extern void func_801CBCE8();

extern void func_8013EA94(void);
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_801CFAAC[];

void func_801CBC48(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    func_8001A804(8, D_801CFAAC, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
    D_801BBBF0[0] = 1;
    func_800058DC(arg0, func_801CBCE8);
}


extern s32 func_8013EB2C(void);

struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};

#define func_801CBCE8_Struct func_801CBCE8_Struct__func_801CBCE8
#define func_801CBD54 func_801CBD54__func_801CBCE8
extern void func_801CBD54();

struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};

void func_801CBCE8(s32 arg0, struct func_801CBCE8_Struct **arg1)
{
  u8 i;
  if (func_8013EB2C() != 0)
  {
    func_80142570();
    i = 0;
    do
    {
      arg1[i]->unk22 = 0;
      i++;
    }
    while (i < 9);
    func_800058DC((void *) arg0, func_801CBD54);
  }
}
#undef func_801CBCE8_Struct
#undef func_801CBD54


extern void func_80005700(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s8 D_8017DD7C;

void func_801CBD54(s32 arg0, s32 arg1)
{
  u32 count;
  s8 *ptr;
 do { count = 0; ptr = &D_8017DD7C; do { count = (count + 1) & 0xFF; *ptr = 0; ptr++; } while (count < 0x28U); func_8012FE50(0xE, 0x73, 1, 1, 0); } while (0);
  func_80005700(arg0);
 do { } while (0);
}

