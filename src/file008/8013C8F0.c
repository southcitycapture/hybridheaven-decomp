#include "common.h"

#define D_8017DEE4 D_8017DEE4__func_8013C8F0
#define D_8017DEEC D_8017DEEC__func_8013C8F0
#define D_8017DEF8 D_8017DEF8__func_8013C8F0
#define D_8017DF04 D_8017DF04__func_8013C8F0
#define D_8017DF14 D_8017DF14__func_8013C8F0
#define D_8017DF2C D_8017DF2C__func_8013C8F0
#define D_801842A0 D_801842A0__func_8013C8F0
#define D_801BBBF0 D_801BBBF0__func_8013C8F0
#define func_8013CC10_Struct func_8013CC10_Struct__func_8013C8F0
typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;
extern func_8013CC10_Struct D_8017DF14[];
extern func_8013CC10_Struct D_8017DF2C[];
extern u8 D_801842A0[];
extern u8 D_801BBBF0[];


extern u8 D_8017DEE4[][4];
extern u8 D_8017DEEC[][5];
extern u8 D_8017DEF8[][6];
extern u8 D_8017DF04[][7];

typedef struct func_8013C8F0_Struct {
    u8 pad[6];
    s16 unk6;
    u8 pad2[0x2BC - 8];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_8013C8F0_Struct;

typedef struct func_8013C8F0_Entry {
    u8 pad[9];
    u8 kind;
    u8 pad2[0x12];
} func_8013C8F0_Entry;

s32 func_8013C8F0(func_8013C8F0_Struct *arg0, u8 arg1) {
    u8 count;
    u8 i;
    u8 j;
    u8 *ptr;
    u8 *owner;
    s32 k;
    s32 selection;
    register s32 three = 3;

    if (arg1 < 2) {
        count = arg0->unk6 / 100;
        selection = count;
        if (selection == 2) goto c2;
        if (selection == three) goto c3;
        if (selection == 4) goto c4;
        if (selection != 5) goto done;
        goto c5;
c2:
        ptr = &D_8017DEE4[arg1][1];
        if (1) goto done;
c3:
        ptr = &D_8017DEEC[arg1][1];
        if (1) goto done;
c4:
        ptr = &D_8017DEF8[arg1][1];
        if (1) goto done;
c5:
        ptr = &D_8017DF04[arg1][1];
        if (1) goto done;
    } else {
        owner = (u8 *)arg0 - 0x44C;
        if (owner == D_801BBBF0) {
            k = arg1 * 7;
            count = ((u8 *)D_8017DF14)[k - 14];
        } else {
            k = arg1 * 7;
            count = ((u8 *)D_8017DF2C)[k - 14];
        }
        if (owner == D_801BBBF0) {
            ptr = k - 13 + (u8 *)D_8017DF14;
            if (1) goto done;
        } else {
            ptr = k - 13 + (u8 *)D_8017DF2C;
            if (1) goto done;
        }
    }
done:
    if (arg1 == three) {
    }
    if (arg0->unk2BC < 0) {
        for (i = 0; i < count; i++) {
            if (D_801842A0[ptr[i] * 0x1C + 9] == 0) {
                return 0;
            }
        }
    } else if (arg0->unk2BE < 0) {
        for (j = 0; j < count; j++) {
            if (D_801842A0[ptr[j] * 0x1C + 9] == 1) {
                return 0;
            }
        }
    } else if (arg0->unk2C0 < 0) {
        for (i = 0; i < count; i++) {
            if (D_801842A0[ptr[i] * 0x1C + 9] == 2) {
                return 0;
            }
        }
    } else if (arg0->unk2C2 < 0) {
        for (i = 0; i < count; i++) {
            if (three == D_801842A0[ptr[i] * 0x1C + 9]) {
                return 0;
            }
        }
    }
    if (arg1 < 2) {
        return 1;
    }
    if (arg0->unk6 >= count * 100) {
        return 1;
    }
    return 0;
}
#undef D_8017DEE4
#undef D_8017DEEC
#undef D_8017DEF8
#undef D_8017DF04
#undef D_8017DF14
#undef D_8017DF2C
#undef D_801842A0
#undef D_801BBBF0
#undef func_8013CC10_Struct


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

#define D_8017DEE5 D_8017DEE5__func_8013D268
#define D_8017DEED D_8017DEED__func_8013D268
#define D_8017DEF9 D_8017DEF9__func_8013D268
#define D_8017DF05 D_8017DF05__func_8013D268
#define D_8017DF14 D_8017DF14__func_8013D268
#define D_80184140 D_80184140__func_8013D268
#define func_8013CC10_Struct func_8013CC10_Struct__func_8013D268
typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;
extern func_8013CC10_Struct D_8017DF14[];


extern u8 D_8017DEE5[];
extern u8 D_8017DEED[];
extern u8 D_8017DEF9[];
extern u8 D_8017DF05[];
extern s32 D_80184140[];

s32 func_8013D268(u8 a, u8 b, u8 c) {
    if (a >= 6) return 0;
    if (a < 2) return 0;
    if (c >= a) return 0;
    if (b < 2) {
        if (a == 2) goto l2;
        if (a == 3) goto l3;
        if (a == 4) goto l4;
        if (a != 5) goto d;
        goto l5;
l2:     return D_80184140[D_8017DEE5[(u32)b * 4 + (u32)c]];
l3:     return D_80184140[D_8017DEED[(u32)b * 5 + (u32)c]];
l4:     return D_80184140[D_8017DEF9[(u32)b * 6 + (u32)c]];
l5:     return D_80184140[D_8017DF05[(u32)b * 7 + (u32)c]];
d:      return 0;
    }
    if (c >= D_8017DF14[b - 2].value) return 0;
    return D_80184140[D_8017DF14[b - 2].data[c]];
}
#undef D_8017DEE5
#undef D_8017DEED
#undef D_8017DEF9
#undef D_8017DF05
#undef D_8017DF14
#undef D_80184140
#undef func_8013CC10_Struct



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

