#include "common.h"

#define func_80244998 func_80244998__func_80244930

extern s32 func_80126CC0(s32 arg0, void *arg1);
extern s32 func_8015105C(s32 arg0);
extern void func_800058DC(s32 arg0, void *arg1, s32 arg2);
extern void func_80126EAC(void);
extern void func_80244998(arg0, arg1);
extern s32 D_8025A290;
extern s8 D_801BBBF0[];

void func_80244930(s32 arg0, s32 arg1) {
    s8 *p;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        D_8025A290 = func_8015105C(0x57);
        p = D_801BBBF0;
        p[0xBA2] = 1;
        p[0xBA4] = 1;
        func_800058DC(arg0, func_80244998, 1);
    }
}
#undef func_80244998

#define func_80244A04 func_80244A04__func_80244998

extern s32 func_801517CC(s32);
extern void func_801512CC();
extern void func_80151430();
extern void func_80244A04(void *arg0, void *arg1);

void func_80244998(arg0, arg1)
s32 arg0;
s32 arg1;
{
    if (func_801517CC(D_8025A290) != 0) {
        func_801512CC(D_8025A290, 0xC3160000, 0xC3EB0000, 0x43A28000);
        func_80151430(D_8025A290, 0x400);
        {
            extern void func_800058DC();
            func_800058DC(arg0, func_80244A04);
        }
    }
}
#undef func_80244A04

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/D_80258760.s")

#define func_80244AC0 func_80244AC0__func_80244A04

extern s32 func_801270C0(s32);
extern unsigned short func_801268CC(s32);
extern void func_80020744(s32);
extern void func_80126968();
extern void func_80244AC0();

void func_80244A04(void *arg0, void *arg1)
{
  extern void func_800058DC();
  if (func_801270C0(D_8025A290) != 0)
  {
    *((s16 *) (D_801BBBF0 + 0x3A4)) = 0;
    func_801268CC(0);
    func_80020744(7);
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0x4)) = -95.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0x8)) = -470.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0xC)) = 375.0f;
    *((s16 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + ((0, 0xE0))))) + 0x2C))) + 0x12)) = 0x1400;
    *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
    func_80126968();
    func_800058DC(arg0, &func_80244AC0);
  }
}
#undef func_80244AC0

#define func_80244B4C func_80244B4C__func_80244AC0
extern void func_8001E978(u8 *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
void func_80244B4C(s32 arg0, s32 arg1);
struct func_80244AC0_S { u8 pad[0x3C]; u16 f; };

void func_80244AC0(struct func_80244AC0_S *arg0, s32 arg1) {
    if ((s32)(arg0->f++) >= 4) {
        D_80089354 = 2;
        D_801BBBF0[0x164] = 0;
        D_801BBBF0[0x15D] = 0;
        func_8001E978((u8 *)arg0, 0, 0, 0, 0xF, 0, 2, 0);
        {
            extern void func_800058DC();
            func_800058DC(arg0, func_80244B4C);
        }
    }
}
#undef func_80244B4C

#define func_80244B94 func_80244B94__func_80244B4C
extern s32 func_80126944(void);
void func_80244B94(s32 arg0, s32 arg1);

void func_80244B4C(s32 arg0, s32 arg1) {
    extern void func_800058DC();

    if (func_80126944() != 0) {
        D_801BBBF0[0xBA2] = 0;
        D_801BBBF0[0xBA4] = 0;
        func_800058DC(arg0, &func_80244B94);
    }
}
#undef func_80244B94

#define func_80244BF0 func_80244BF0__func_80244B94

extern void func_800208C4(s32 arg0);
extern void func_80244BF0(s32 arg0, s32 arg1);

void func_80244B94(s32 arg0, s32 arg1) {
    extern void func_800058DC();

    if (func_80126944() == 0) {
        func_800208C4(0x26);
        func_800208C4(0x27);
        func_800208C4(0x28);
        func_800208C4(0x29);
        func_800058DC(arg0, func_80244BF0);
    }
}
#undef func_80244BF0


void func_80244BF0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80244930/_pad_16.s")

