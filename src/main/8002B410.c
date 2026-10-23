#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002B410.s")


s32 func_8002B484(u16 *arg0, u16 *arg1, u16 *arg2)
{
  u16 value;
  s32 i;
  *arg1 = (*arg2 = 0);
  value = 0;
  for (i = 0; i < 0x1C; i += 2)
  {
    value = *((u16 *) (((s32) arg0) + i));
    *arg1 += value;
    *arg2 += (~value) ^ 0;
  }

  return 0;
}


extern s32 func_8002BF90(void);
extern s32 func_80032D40(void *, s32);
extern s32 func_80033E10(s32, s32, u16, void *, s32);
extern s32 func_80034060(s32, s32, s32, void *);

typedef struct func_8002B580_Struct {
    s32 unk0;
    s32 unk4;
    u64 unk8;
    u64 unk10;
    u16 unk18;
    u8 unk1A;
    u8 unk1B;
    u16 unk1C;
    u16 unk1E;
} func_8002B580_Struct;

typedef struct func_8002B580_Struct2 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 pad1[0x65 - 0xC];
    u8 unk65;
} func_8002B580_Struct2;

s32 func_8002B580(func_8002B580_Struct2 *arg0, func_8002B580_Struct *arg1, func_8002B580_Struct *arg2) {
    s32 ret;
    u8 buf[32];
    u8 readbuf[32];
    s32 i;
    s32 j;
    s32 flag;
    u16 ids[4];

    i = 0;
    arg2->unk0 = -1;
    arg2->unk4 = func_8002BF90();
    arg2->unk8 = arg1->unk8;
    arg2->unk10 = arg1->unk10;
    if (arg0->unk65 != 0) {
        ret = func_80032D40(arg0, 0);
        if (ret != 0) return ret;
    }
    do {
        ret = func_80032D40(arg0, i & 0xFF);
        if (ret != 0) return ret;
        ret = func_80034060(arg0->unk4, arg0->unk8, 0, buf);
        if (ret != 0) return ret;
        buf[0] = i | 0x80;
        for (j = 1; j < 32; j++) {
            buf[j] = ~buf[j];
        }
        ret = func_80033E10(arg0->unk4, arg0->unk8, 0, buf, 0);
        if (ret != 0) return ret;
        ret = func_80034060(arg0->unk4, arg0->unk8, 0, readbuf);
        if (ret != 0) return ret;
        for (j = 0; j < 32; j++) {
            if (readbuf[j] != buf[j]) break;
        }
        if (j != 32) break;
        if (i > 0) {
            ret = func_80032D40(arg0, 0);
            if (ret != 0) return ret;
            ret = func_80034060(arg0->unk4, arg0->unk8, 0, buf);
            if (ret != 0) return ret;
            if (buf[0] != 0x80) break;
        }
        i++;
    } while (i < 0x3E);
    if (arg0->unk65 != 0) {
        ret = func_80032D40(arg0, 0);
        if (ret != 0) return ret;
    }
    flag = (i > 0) ? 1 : 0;
    arg2->unk18 = (arg1->unk18 & 0xFFFE) | flag;
    arg2->unk1A = i;
    arg2->unk1B = arg1->unk1B;
    func_8002B484((u16 *)arg2, &arg2->unk1C, &arg2->unk1E);
    ids[0] = 1;
    ids[1] = 3;
    ids[2] = 4;
    ids[3] = 6;
    for (j = 0; j < 4; j++) {
        ret = func_80033E10(arg0->unk4, arg0->unk8, ids[j], arg2, 1);
        if (ret != 0) return ret;
    }
    ret = func_80034060(arg0->unk4, arg0->unk8, 1, buf);
    if (ret != 0) return ret;
    for (j = 0; j < 32; j++) {
        if (buf[j] != ((u8 *)arg2)[j]) return 11;
    }
    return 0;
}



s32 func_8002B8D0(void *arg0, u16 *arg1) {
    u16 sp58[4];
    u8 pad[4];
    u16 sp52;
    u16 sp50;
    s32 var_s1;
    s32 var_s0_2;
    s32 temp_v0;
    u16 *var_s0;

    if (*((u8 *)arg0 + 0x65) != 0) {
        temp_v0 = func_80032D40(arg0, 0);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    sp58[0] = 1;
    sp58[1] = 3;
    sp58[2] = 4;
    sp58[3] = 6;
    var_s1 = 1;
    var_s0 = &sp58[1];
loop_4:
    temp_v0 = func_80034060(*((s32 *)((u8 *)arg0 + 4)), *((s32 *)((u8 *)arg0 + 8)), *var_s0, arg1);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    func_8002B484(arg1, &sp52, &sp50);
    if (arg1[0xE] == sp52 && arg1[0xF] == sp50) {
        goto L9B0;
    }
    var_s1 += 1;
    var_s0 += 1;
    if (var_s1 != 4) {
        goto loop_4;
    }
L9B0:
    var_s0_2 = 0;
    if (var_s1 == 4) {
        return 0xA;
    }
loop_12:
    if (var_s0_2 != var_s1) {
        temp_v0 = func_80033E10(*((s32 *)((u8 *)arg0 + 4)), *((s32 *)((u8 *)arg0 + 8)), sp58[var_s0_2], arg1, 1);
        if (temp_v0 != 0) {
            return temp_v0;
        }
    }
    var_s0_2 += 1;
    if (var_s0_2 != 4) {
        goto loop_12;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002BA34.s")


typedef struct func_8002BBE0_Struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    u8 pad1[0x65 - 0xC];
    u8 unk65;
} func_8002BBE0_Struct;

s32 func_80031070(void *, void *, s32);

s32 func_8002BBE0(func_8002BBE0_Struct *arg0) {
    s32 sp28[8];
    s32 temp_v0_2;
    s32 var_v0;

    if (arg0->unk65 != 0) {
        var_v0 = func_80032D40(arg0, 0);
        if (var_v0 == 2) {
            var_v0 = func_80032D40(arg0, 0);
        }
        if (var_v0 == 0) {
            goto block_5;
        }
        return var_v0;
    }
block_5:
    temp_v0_2 = func_80034060(arg0->unk4, arg0->unk8, 1, sp28);
    if (temp_v0_2 == 0) {
        goto case_0;
    }
    if (temp_v0_2 != 2) {
        return temp_v0_2;
    }
    var_v0 = func_80034060(arg0->unk4, arg0->unk8, 1, sp28);
    if (var_v0 != 0) {
        return var_v0;
    }
case_0:
    if (func_80031070((u8 *)arg0 + 0xC, sp28, 0x20) != 0) {
        return 2;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002B410/func_8002BCB4.s")

