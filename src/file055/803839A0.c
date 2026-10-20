#include "common.h"

extern void func_800058DC(void *obj, void *fn);

extern void func_80005E44(s32, void *);
extern u8 D_8038DCAC[];
extern void func_803839DC(s32 arg0, s32 arg1);

void func_803839A0(s32 arg0, s32 arg1) {
    func_80005E44(arg0, D_8038DCAC);
    func_800058DC(arg0, func_803839DC);
}


void func_803839DC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_8038DBB0;
extern s32 D_8038DBB8;
extern u8 D_8038DBC0;
extern s32 D_8038DBC8;
extern s32 D_8038DBCC;
extern u8 D_8038DBD4;
extern void *D_8038DDC4;

typedef struct func_803839E8_StructB {
    s16 f0;
    u8 pad[0x26];
    u32 f28;
} func_803839E8_StructB;
typedef struct func_803839E8_StructA {
    u8 pad[0x28];
    s16 f28;
    u8 pad2[2];
    func_803839E8_StructB *f2C;
} func_803839E8_StructA;

extern void func_80006214(s32);
extern s32 func_8001F430(s32);
extern void func_80020744(s32);
extern void func_80032890(s32, void *);
extern u8 D_80164F30[];
void func_80383AD4(s32 arg0, s32 arg1);
void *func_80383E54(void *arg0, void *arg1);
extern s32 D_8038DBB4;
extern s32 D_8038DBC4;

void func_803839E8(s32 arg0, func_803839E8_StructA **arg1) {
    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    D_8038DDC4 = (void *)func_8001F430(0x178);
    (*arg1)->f2C->f28 = (u32)D_8038DDC4 | 0x40000000;
    (*arg1)->f2C->f0 = 0;
    (*arg1)->f28 = 2;
    func_80032890(6, arg1);
    func_80020744(1);
    D_8038DBB0 = 0;
    D_8038DBB4 = 0;
    D_8038DBB8 = 0;
    D_8038DBC0 = 0;
    D_8038DBC4 = 0;
    D_8038DBC8 = 0x14;
    D_8038DBCC = 0;
    D_8038DBD4 = 0;
    func_80383E54(0, D_8038DDC4);
    func_800058DC((void *)arg0, func_80383AD4);
}


extern void func_800057DC(s32, void *);
extern void func_80133AAC(s32);
extern void func_80383BCC(void);
extern void func_80383D08(void);
extern u8 D_80089474[];
extern u8 D_80164E30[];

void func_80383AD4(s32 arg0, s32 arg1) {
    u16 buttons;

    buttons = 0;
    if (D_8038DBC8 == 0) {
        buttons = *(u16 *)(D_80089474 + 4);
    } else {
        D_8038DBC8 -= 1;
    }
    if (buttons & 0x1000) {
        if (D_8038DBB8 < 3) {
            D_8038DBB8 = 3;
            D_8038DBCC = 2;
        } else if (D_8038DBCC == 1) {
            D_8038DBCC = 2;
        } else if (D_8038DBCC == 2) {
            D_8038DBCC = 3;
        }
    }
    func_80383BCC();
    func_80383D08();
    func_80383E54(NULL, D_8038DDC4);
    if (D_8038DBB0 != 0) {
        func_80133AAC(2);
        func_800057DC(arg0, D_80164E30);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383D08.s")


typedef struct func_80383E54_Struct {
    u32 w0;
    u32 w1;
} func_80383E54_Struct;

extern void func_80383F34(void *, void *, void *, u8);
extern u8 D_80385070[];
extern u8 D_80387D30[];
extern u8 D_8038BD30[];
extern u8 D_8038BF30[];
extern u8 D_8038D2BC[];
extern u8 D_8038D73C[];
extern u8 D_8038DAFC[];
extern u8 D_8038DB44[];
extern u8 D_8038DBA4[];
extern s32 D_8038DBBC;
extern s32 D_8038DBD0;
extern s32 D_8038DBD8;
extern void *D_8038DDC0;

void *func_80383E54(void *arg0, void *arg1)
{
  int new_var;
  s32 temp_a0;
  D_8038DDC0 = arg1;
  if (D_8038DBD8 == 1)
  {
    func_80383F34(D_8038DBA4, D_8038BD30, D_8038D73C, 0xFF ^ 0);
  }
  if (D_8038DBBC == 1)
  {
    func_80383F34(D_8038DAFC, D_80385070, D_8038BF30, D_8038DBC0);
    if (!D_8038DDC0)
    {
    }
  }
 do { } while (0);
  if (D_8038DBD0 == 1)
  {
    func_80383F34(D_8038DB44, D_80387D30, D_8038D2BC, D_8038DBD4);
  }
  if (D_8038DBD8)
  {
  }
  temp_a0 = (s32) D_8038DDC0;
  new_var = 0;
  D_8038DDC0 = (void *) (temp_a0 + 8);
  ((s32 *) temp_a0)[1] = 0;
  ((s32 *) temp_a0)[new_var] = 0xDF000000;
  return D_8038DDC0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383F34.s")

