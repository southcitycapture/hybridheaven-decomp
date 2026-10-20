#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013C8F0.s")


typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;

extern func_8013CC10_Struct D_8017DDB0[];
extern func_8013CC10_Struct D_8017DF14[];
extern func_8013CC10_Struct D_8017DF2C[];
extern u8 D_801BBBF0[];

u8 func_8013CC10(void *arg0, u8 arg1, u8 arg2) {
    u8 count = 0;
    u8 *data;
    u8 i;
    u8 j;
    u8 value;

    if (arg0 == D_801BBBF0 + 0x44C) {
        data = D_8017DF14[arg2].data;
    } else {
        data = D_8017DF2C[arg2].data;
    }
    if (arg1 >= 4) {
        for (i = 0; i < 44; i++) {
            value = D_8017DDB0[i].value;
            for (j = 0; j < 5; j++) {
                if (data[j] == D_8017DDB0[i].data[j]) {
                    count++;
                }
            }
            if (count == 5) {
                return value;
            }
            count = 0;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013CD04.s")

extern u8 D_801842A0[];

struct func_8013D09C_Struct {
    u8 pad[0x2D4];
    u8 *unk2D4;
    u8 pad2[1];
    u8 unk2D9;
    u8 pad3[0x375-0x2DA];
    u8 unk375;
    u8 pad4;
    u8 unk377;
    u8 pad5[8];
    u8 *unk380;
};

void func_8013D09C(struct func_8013D09C_Struct *arg0) {
    u8 t;
    if (arg0->unk377 == 0) {
        arg0->unk375 = arg0->unk375 + 1;
        arg0->unk380 = arg0->unk380 + 1;
        t = *arg0->unk380;
        arg0->unk2D9 = t;
        arg0->unk2D4 = D_801842A0 + (arg0->unk2D9 & 0xFF) * 0x1C;
        return;
    }
    arg0->unk375 = arg0->unk375 + 1;
    arg0->unk380 = arg0->unk380 + 1;
    *arg0->unk380 = arg0->unk2D9;
    arg0->unk2D4 = D_801842A0 + arg0->unk2D9 * 0x1C;
}


struct func_8013D134_Struct {
    u8 pad[0x375];
    u8 unk375;
    u8 unk376;
};

void func_8013D134(struct func_8013D134_Struct *arg0) {
    arg0->unk376 = arg0->unk375;
}


extern u8 D_8018E2FC[];
extern u8 D_8018E300[];

u8 *func_8013D140(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0 < 0xE) {
        return D_8018E2FC;
    }
    return D_8018E300;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D268.s")



s32 func_8013D3F8(u8 *arg0)
{
  s32 var_v1;
  u8 temp_v0;
  u8 *new_var;
  u8 temp_v0_2;
  s32 temp_a1;
  u8 *temp_t6;
  u8 *temp_t9;
  u8 *temp_a2;
  u8 *temp_a3;
  temp_v0 = arg0[0x2D8];
  var_v1 = 0;
  if (((((s32) temp_v0) < 9) || (((s32) temp_v0) >= 0xB)) || ((temp_v0_2 = arg0[0x375], ((s32) temp_v0_2) <= 0)))
  {
    return 0;
  }
  temp_a1 = temp_v0_2;
  temp_t6 = arg0 + temp_a1;
  temp_a2 = &D_801842A0[temp_t6[0x377] * 0x1C];
  temp_t9 = temp_v0_2 + (new_var = arg0);
  temp_a3 = &D_801842A0[temp_t9[0x378] * 0x1C];
  if (temp_a2[0x1A] == temp_a3[0x1A])
  {
    var_v1 = 5;
  }
  if (temp_a2[0x9] == temp_a3[0x9])
  {
    var_v1 = (var_v1 + 5) & 0xFF;
  }
  return var_v1;
}

