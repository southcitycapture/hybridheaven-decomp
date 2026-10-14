#include "common.h"

extern u8 D_801BCD90[];

void func_80133740(s32 arg0)
{
  u8 *temp_v0;
  u8 temp_t3;
  u8 temp_t1;
  s32 temp_t4;
  temp_v0 = &D_801BCD90[(arg0 / 8) & 0xFF];
  temp_t3 = arg0 % 8;
  temp_t1 = temp_t3;
  temp_t4 = 1 << temp_t1;
  temp_t1 = temp_t4;
  *temp_v0 |= temp_t1;
}



void func_80133790(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_801BCD90[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}


s32 func_801337E4(s32 arg0)
{
  return (D_801BCD90[(arg0 / 8) & 0xFF] & ((unsigned char) (1 << ((arg0 % 8) & 0xFF)))) & 0xFF;
  if ((arg0 && arg0) && arg0)
  {
    if (!arg0)
    {
    }
  }
}


extern u8 D_801BCDF4[];

void func_80133830(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_801BCD90[var_v1 - 3] = 0;
        D_801BCD90[var_v1 - 2] = 0;
        D_801BCD90[var_v1 - 1] = 0;
        D_801BCD90[var_v1 - 4] = 0;
    } while (D_801BCDF4 != &D_801BCD90[var_v1]);
}

extern u8 D_801BCDF8[];

void func_80133860(s32 arg0)
{
  u8 *temp_v0;
  u8 temp_t3;
  u8 temp_t1;
  s32 temp_t4;
  temp_v0 = &D_801BCDF8[(arg0 / 8) & 0xFF];
  temp_t3 = arg0 % 8;
  temp_t1 = temp_t3;
  temp_t4 = 1 << temp_t1;
  temp_t1 = temp_t4;
  *temp_v0 |= temp_t1;
}



void func_801338B0(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_801BCDF8[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}


s32 func_80133904(s32 arg0)
{
  return (D_801BCDF8[(arg0 / 8) & 0xFF] & ((unsigned char) (1 << ((arg0 % 8) & 0xFF)))) & 0xFF;
  if ((arg0 && arg0) && arg0)
  {
    if (!arg0)
    {
    }
  }
}


extern u8 D_801BCE5C[];

void func_80133950(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_801BCDF8[var_v1 - 3] = 0;
        D_801BCDF8[var_v1 - 2] = 0;
        D_801BCDF8[var_v1 - 1] = 0;
        D_801BCDF8[var_v1 - 4] = 0;
    } while (D_801BCE5C != &D_801BCDF8[var_v1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133980.s")


extern u8 D_8008DC20[];

void func_801339D0(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_8008DC20[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133A24.s")


extern u8 D_8008DC84[];

void func_80133A70(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_8008DC20[var_v1 - 3] = 0;
        D_8008DC20[var_v1 - 2] = 0;
        D_8008DC20[var_v1 - 1] = 0;
        D_8008DC20[var_v1 - 4] = 0;
    } while (D_8008DC84 != &D_8008DC20[var_v1]);
}


extern s32 D_8017AA90;

s32 func_80133AA0(void) {
    return D_8017AA90;
}



void func_80133AAC(s32 arg0) {
    D_8017AA90 = arg0;
}

