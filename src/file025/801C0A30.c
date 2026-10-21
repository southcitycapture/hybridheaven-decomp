#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0A68.s")


extern u64 func_801C0C08(void);
extern u64 D_801D8D80;

u64 func_801C0AE4(void) {
    u64 temp;

    temp = func_801C0C08() - D_801D8D80;
    return temp;
}


u64 func_80026F58(u64 a, u64 b);
extern u64 func_80026E58(u64, u64);                        /* extern */

void func_801C0B2C(void) {
    u64 temp;

    temp = func_801C0C08();
    temp = func_80026F58(temp - D_801D8D80, 0x40);
    func_80026E58(temp, 0xBB8);
}



s32 func_801C0B8C(u64 arg0) {
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;

    temp_ret = func_801C0C08();
    temp_ret_2 = func_80026F58(temp_ret - D_801D8D80, 0x40);
    temp_ret_3 = func_80026E58(temp_ret_2, 0xBB8);
    return arg0 <= temp_ret_3;
}


u64 func_80031190();                                /* extern */
extern u64 D_801D8D88;

u64 func_801C0C08(void) {
    u64 temp_ret;

    temp_ret = func_80031190();
    return temp_ret - D_801D8D88;
}

extern u32 D_801D8DA8;

void func_801C0C44(void) {
    D_801D8DA8 = 0;
}



void func_801C0C50(void) {
    D_801D8DA8 += 1;
}



s32 func_801C0C68(u32 arg0) {
    return D_801D8DA8 >= arg0;
}


typedef struct func_801C0C7C_Struct {
    s32 a0, a4;
    u64 a8;
} func_801C0C7C_Struct;

extern s32 D_801DE830;
extern func_801C0C7C_Struct D_801DE838[];
extern func_801C0C7C_Struct D_801DEA38[];

void func_801C0C7C(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        D_801DE838[i].a0 = -1;
        D_801DE838[i].a4 = -1;
        D_801DE838[i].a8 = 0;
    }
    D_801DE830 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0EB0.s")


void func_801C0F18(s32 arg0, s32 arg1) {
    u8 pad[8];
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) {
            break;
        }
    }
    func_80026E58(func_80026F58(func_80031190() - D_801DE838[i].a8, 64), 3000);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C0FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C1000.s")

struct func_801C1134_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_801C1134_Struct D_801DEA40[];
extern struct func_801C1134_Struct D_801DEBC0[];

s32 func_801C1088(u32 arg0, s32 arg1, u32 arg2)
{
  struct func_801C1134_Struct *p;
 p = D_801DEA40; do { if ((arg0 == p->unk0) && (arg1 == p->unk4)) {
      break;
    }
    p++;
  }
  while (p != D_801DEBC0);
  arg0 = D_801D8DA8 - p->unk8;
  return arg0 >= arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C10D8.s")




s32 func_801C1134(s32 arg0, s32 arg1)
{
  struct func_801C1134_Struct *var_v1;
  struct func_801C1134_Struct *var_v0;
  var_v0 = D_801DEBC0;
 var_v1 = D_801DEA40; do { if (arg0 == var_v1->unk0) {
      if (arg1 == var_v1->unk4)
      {
        break;
      }
    }
    var_v1++;
  }
  while (var_v1 != D_801DEBC0);
  return D_801D8DA8 - var_v1->unk8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C117C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C11B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C11F4.s")


extern s32 D_801D8D90;

s32 func_801C1228(void) {
    return D_801D8D90;
}


s32 func_801C1284();
s32 func_801C133C();

s32 func_801C1234(void) {
    s32 sp1C;

    sp1C = 0;
    if (func_801C1228() != 0) {
        if (func_801C1284() != 0) {
            sp1C = 1;
        } else {
            sp1C = func_801C133C();
        }
    }
    return sp1C;
}

extern s32 func_8001B204();
extern u16 D_80089474[];
extern s32 D_801D8D94;
extern s32 D_801D8D98;
extern u8 D_801DCE70[];
extern u8 D_801DCE90[];

s32 func_801C1284() {
    if (D_801D8D90 != 0) {
        D_801D8D94 = D_801D8D98;
        if (D_80089474[1] & 0x1000) {
            D_801D8D98 = 1;
            func_8001B204(7, 0x14, 0x28, D_801DCE70);
        } else {
            D_801D8D98 = 0;
            func_8001B204(7, 0x14, 0x28, D_801DCE90);
        }
        return (D_801D8D98 == 1) && (D_801D8D94 == 0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C0A30/func_801C133C.s")

