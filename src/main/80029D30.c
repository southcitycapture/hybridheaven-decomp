#include "common.h"



void func_80029D30(void *arg0, s32 arg1) {
    u32 *hi;
    u32 *lo;
    f32 (*row)[4];
    s32 i;
    s32 b;
    u32 a;
    s32 j;

    hi = (u32 *)arg1;
    lo = (u32 *)(arg1 + 0x20);
    i = 0;
    row = arg0;
    do {
        for (j = 0; j < 2; j++) {
            a = (s32)((*row)[j * 2] * 65536.0f);
            b = (s32)((*row)[j * 2 + 1] * 65536.0f);
            *hi++ = (a & 0xFFFF0000) | ((b >> 16) & 0xFFFF);
            *lo++ = ((a << 16) & 0xFFFF0000) | (b & 0xFFFF);
        }
        i++;
        row++;
    } while (i != 4);
}


void func_80029E30(void *arg0)
{
  f32 *var_v1;
  s32 var_v0;
  int new_var;
 var_v0 = 0; new_var = 2; var_v1 = arg0; loop: if (var_v0 == 0) { var_v1[0] = 1.0f;
  }
  else
  {
    var_v1[0] = 0.0f;
  }

  if (var_v0 == 1)
  {
    var_v1[1] = 1.0f;
  }
  else
  {
    var_v1[1] = 0.0f;
  }
  if (var_v0 == new_var)
  {
    var_v1[new_var] = 1.0f;
  }
  else
  {
    var_v1[2] = 0.0f;
  }
  if (var_v0 == 3)
  {
    var_v1[3] = 1.0f;
  }
  else
  {
    var_v1[3] = 0.0f;
  }
  var_v0 += 1;
  var_v1 += 4;
  if (var_v0 != 4)
  {
    goto loop;
  }
}


extern void func_80029D30(void *p, s32 arg1);

void func_80029EB8(s32 arg0) {
    s32 sp18[16];

    func_80029E30(sp18);
    func_80029D30(sp18, arg0);
}


void func_80029EE8(f32 mf[4][4], s32 *m) {
    s32 i, j;
    u32 e1, e2;
    u32 *ai, *af;
    s32 q1, q2;

    ai = (u32 *)m;
    af = (u32 *)m + 8;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 2; j++) {
            e1 = (*ai & 0xffff0000) | ((*af >> 16) & 0xffff);
            e2 = ((*(ai++) << 16) & 0xffff0000) | (*(af++) & 0xffff);
            q1 = *((s32 *)&e1);
            q2 = *((s32 *)&e2);
            mf[i][j * 2] = ((f32)(q1) * (1.0f / (f32)0x00010000));
            mf[i][j * 2 + 1] = ((f32)(q2) * (1.0f / (f32)0x00010000));
        }
}

