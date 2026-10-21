#include "common.h"


extern s32 D_801DA610;

void func_801C78C0(void) {
    D_801DA610 = 1;
}



s32 func_801C78D0(void) {
    s32 *p;

    p = &D_801DA610;
    *p = (*p * 0x5D588B65) + 1;
    return *p;
}


f32 func_801C78F8(void) {
    return (f32) (((u32) func_801C78D0() >> 0x18) & 0xFF) / 255.0f;
}


void func_801C7944(void) {
    func_801C78C0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7964.s")


typedef struct func_801C7A74_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} func_801C7A74_Struct;

extern func_801C7A74_Struct D_801E04C0;

void func_801C7A74(func_801C7A74_Struct *arg0) {
    D_801E04C0 = *arg0;
}

extern void *func_80005670(s32, void *);
extern u8 func_8038D8B8[];

extern u8 D_801DA61C[];
extern u8 D_801DA630[];
extern s32 D_801DA614;
extern s32 D_801DA618;

s32 func_801C7AB8(void) {
    if (func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA61C) == 0) {
        return 0;
    }
    if (func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA630) == 0) {
        return 0;
    }
    D_801DA614 = 1;
    D_801DA618 = 1;
    return 1;
}


void func_801C7B24(void) {
    D_801DA614 = 0;
}



void func_801C7B30(s32 arg0) {
    D_801DA618 = arg0;
}

extern s32 D_801DA644;
extern s32 D_801DA648;
extern s32 D_8038D8CC;

extern u8 D_801DA64C[];

s32 func_801C7B3C(void) {
    if (func_80005670(D_8038D8CC, D_801DA64C) == NULL) {
        return 0;
    }
    D_801DA644 = 1;
    D_801DA648 = 1;
    return 1;
}



void func_801C7B88(void) {
    D_801DA644 = 0;
    D_801DA648 = 0;
}



void func_801C7B9C(s32 arg0) {
    D_801DA648 = arg0;
}


typedef struct func_801C7BA8_Struct {
    s32 raw[0x1B];
} func_801C7BA8_Struct;

extern func_801C7BA8_Struct D_801E04E0;

void func_801C7BA8(func_801C7BA8_Struct *arg0) {
    D_801E04E0 = *arg0;
}


extern void func_801C0D04(s32, s32);

void func_801C7BE4(void) {
    func_801C0D04(3, 0x20F1);
}


extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
void func_801C8AB8(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3);
extern f64 D_801DD2C0;
extern u8 D_801E0504[];
extern u8 D_801E0528[];

s32 func_801C7C08(f32 arg0, f32 arg1, u8 *arg2, u8 *arg3) {
    u8 pad[12];
    f32 sp18;
    u64 r;

    if (func_801C0DE4(3, 0x20F1, arg1) != 0) {
        func_801C0EB0(3, 0x20F1);
        return 1;
    }
    if (func_801C0DE4(3, 0x20F1, arg0) != 0) {
        r = func_801C0F18(3, 0x20F1);
        sp18 = (f32)((func_80034C24(r) / D_801DD2C0) - (f64)arg0) / (arg1 - arg0);
        func_801C8AB8((f32 *)&D_801E04E0, (f32 *)arg2, (f32 *)arg3, sp18);
        func_801C8AB8((f32 *)D_801E0504, (f32 *)(arg2 + 0x24), (f32 *)(arg3 + 0x24), sp18);
        func_801C8AB8((f32 *)D_801E0528, (f32 *)(arg2 + 0x48), (f32 *)(arg3 + 0x48), sp18);
    }
    return 0;
}

extern void func_8038C4D8(s32, s32, s32 *);

extern u8 D_801DA660[];

typedef struct func_801C7D0C_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C7D0C_Struct;

s32 func_801C7D0C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8) {
    func_801C7D0C_Struct *temp_v0;

    extern void func_8038C4D8();

    temp_v0 = func_80005670(D_8038D8CC, D_801DA660);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = arg6;
    temp_v0->unkAC = arg7;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg8;
    func_8038C4D8(2, 0);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7DB4.s")

extern s32 D_801DA680;
extern s32 D_801E0550[];

typedef struct func_801C7DE8_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    s8 unkB0;
    s8 unkB1;
    s8 unkB2;
    s8 unkB3;
} func_801C7DE8_Struct;

extern u8 D_801DA684[];

s32 func_801C7DE8(s32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10) {
    func_801C7DE8_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA684);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk94 = arg2;
    temp_v0->unk98 = arg3;
    temp_v0->unk9C = arg4;
    temp_v0->unkA0 = arg5;
    temp_v0->unkA4 = arg6;
    temp_v0->unkA8 = arg7;
    temp_v0->unkAC = arg8;
    temp_v0->unkB0 = D_801DA680;
    temp_v0->unkB1 = arg9;
    temp_v0->unkB2 = arg10;
    temp_v0->unkB3 = 0;
    D_801E0550[D_801DA680] = 1;
    *arg0 = D_801DA680;
    D_801DA680 += 1;
    return 1;
}



s32 func_801C7EC8(s32 arg0) {
    if (arg0 >= 0x20) {
        return 0;
    }
    if (arg0 >= D_801DA680) {
        return 0;
    }
    D_801E0550[arg0] = 0;
    return 1;
}

extern s32 D_801E05D0[];

void func_801C7F10(void)
{
  s32 *var_v1;
  s32 *var_v0;
  var_v0 = D_801E05D0;
 var_v0 += 0; do { var_v1 = D_801E0550; loop: var_v1 += 4; var_v1[-3] = 0; var_v1[-2] = 0; var_v1[-1] = 0; var_v1[-4] = 0; if (var_v1 != var_v0) { goto loop; } } while (0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7F40.s")


typedef struct func_801C7F74_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    s8 unkB0;
    u8 padB1[2];
    s8 unkB3;
} func_801C7F74_Struct;

extern s32 D_801DA698;
extern u8 D_801DA69C[];

s32 func_801C7F74(s32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_801C7F74_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA69C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk94 = arg2;
    temp_v0->unk98 = arg3;
    temp_v0->unk9C = arg4;
    temp_v0->unkA0 = arg5;
    temp_v0->unkA4 = arg6;
    temp_v0->unkA8 = arg7;
    temp_v0->unkAC = arg8;
    temp_v0->unkB0 = D_801DA698;
    temp_v0->unkB3 = 0;
    D_801E05D0[D_801DA698] = 1;
    *arg0 = D_801DA698;
    D_801DA698 += 1;
    func_8038C4D8(2, 0, &D_801DA698);
    return 1;
}



s32 func_801C8050(s32 arg0) {
    if (arg0 >= 0x20) {
        return 0;
    }
    if (arg0 >= D_801DA698) {
        return 0;
    }
    D_801E05D0[arg0] = 0;
    return 1;
}

extern f32 D_801E0650[];

void func_801C8098(void)
{
  s32 *var_v1;
  s32 *var_v0;
  var_v0 = D_801E0650;
 var_v0 += 0; do { var_v1 = D_801E05D0; loop: var_v1 += 4; var_v1[-3] = 0; var_v1[-2] = 0; var_v1[-1] = 0; var_v1[-4] = 0; if (var_v1 != var_v0) { goto loop; } } while (0);
}


typedef struct func_801C80C8_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    u8 padAC[4];
    u16 unkB0;
    u16 unkB2;
} func_801C80C8_Struct;

extern u8 D_801DA6B0[];

s32 func_801C80C8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u16 arg7) {
    func_801C80C8_Struct *temp_v1;

    temp_v1 = func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA6B0);
    if (temp_v1 == NULL) {
        return 0;
    }
    temp_v1->unk90 = arg0;
    temp_v1->unk94 = arg1;
    temp_v1->unk98 = arg2;
    temp_v1->unk9C = arg3;
    temp_v1->unkA0 = arg4;
    temp_v1->unkA4 = arg5;
    temp_v1->unkA8 = arg6;
    temp_v1->unkB0 = 0;
    temp_v1->unkB2 = arg7;
    return 1;
}


typedef struct func_801C815C_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    u8 padAC[4];
    u16 unkB0;
    u16 unkB2;
} func_801C815C_Struct;

extern u8 D_801DA6C4[];

s32 func_801C815C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u16 arg7) {
    func_801C815C_Struct *temp_v1;

    temp_v1 = func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA6C4);
    if (temp_v1 == NULL) {
        return 0;
    }
    temp_v1->unk90 = arg0;
    temp_v1->unk94 = arg1;
    temp_v1->unk98 = arg2;
    temp_v1->unk9C = arg3;
    temp_v1->unkA0 = arg4;
    temp_v1->unkA4 = arg5;
    temp_v1->unkA8 = arg6;
    temp_v1->unkB0 = 0;
    temp_v1->unkB2 = arg7;
    return 1;
}


typedef struct func_801C81F0_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    u8 padAC[4];
    u16 unkB0;
    u16 unkB2;
} func_801C81F0_Struct;

extern u8 D_801DA6D8[];

s32 func_801C81F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u16 arg7) {
    func_801C81F0_Struct *temp_v1;

    temp_v1 = func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA6D8);
    if (temp_v1 == NULL) {
        return 0;
    }
    temp_v1->unk90 = arg0;
    temp_v1->unk94 = arg1;
    temp_v1->unk98 = arg2;
    temp_v1->unk9C = arg3;
    temp_v1->unkA0 = arg4;
    temp_v1->unkA4 = arg5;
    temp_v1->unkA8 = arg6;
    temp_v1->unkB0 = 0;
    temp_v1->unkB2 = arg7;
    return 1;
}


void func_801C8284(void) {
    func_801C78C0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C82A4.s")


void func_801C839C(void) {
    func_801C78C0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C83BC.s")


extern f32 D_801DA6EC;

void func_801C84E0(void) {
    func_801C78C0();
    D_801E0650[0] = 0.0f;
    D_801E0650[1] = 0.0f;
    D_801E0650[2] = 0.0f;
    D_801DA6EC = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C851C.s")


struct func_801C8668_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
};

extern u8 D_801DA6F0[];

s32 func_801C8668(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, u16 arg5) {
    struct func_801C8668_Struct *temp_v0;

    temp_v0 = func_80005670((s32) D_8038D8CC, D_801DA6F0);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = 0.0f;
    temp_v0->unkA0 = 0.0f;
    temp_v0->unkA4 = 0.0f;
    temp_v0->unkA8 = arg3;
    temp_v0->unkAC = arg4;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg5;
    return 1;
}


extern u8 D_801DA704[];

typedef struct func_801C86FC_Struct {
    u8 pad[0x90];
    s16 unk90;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    s16 unkA8;
    u16 unkAA;
} func_801C86FC_Struct;

s32 func_801C86FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    struct func_801C86FC_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA704);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = 0;
    temp_v0->unkAA = arg6;
    return 1;
}


extern s32 D_801DA718;

void func_801C8788(s32 arg0) {
    D_801DA718 = arg0;
}


extern f32 D_801DA71C;
extern f32 D_801DA720;

void func_801C8794(f32 arg0, s32 arg1) {
    D_801DA71C = (4.0f * arg0) / (f32) arg1;
    D_801DA720 = (8.0f * arg0) / (f32) (arg1 * arg1);
}



f32 func_801C87E0(s32 arg0) {
    return ((f32) arg0 * D_801DA71C) - (0.5f * (D_801DA720 * (f32) (arg0 * arg0)));
}


extern u8 D_801DA724[];

struct func_801C8828_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad9C[8];
    u16 unkA4;
    u8 padA6[2];
    u16 unkA8;
    u16 unkAA;
    f32 unkAC;
    f32 unkB0;
};

s32 func_801C8828(f32 arg0, f32 arg1, f32 arg2) {
    struct func_801C8828_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA724);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unkA4 = 0;
    temp_v0->unkA8 = 0;
    temp_v0->unkAA = 0;
    temp_v0->unkAC = 0.0f;
    temp_v0->unkB0 = 0.0f;
    return 1;
}


extern s32 D_801DA738;

typedef struct func_801C88A4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C88A4_Struct;

s32 func_801C88A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8) {
    func_801C88A4_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, &D_801DA738);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = arg6;
    temp_v0->unkAC = arg7;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg8;
    return 1;
}


extern s32 D_801DA74C;

typedef struct func_801C8940_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
} func_801C8940_Struct;

s32 func_801C8940(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8) {
    func_801C8940_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, &D_801DA74C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = arg6;
    temp_v0->unkAC = arg7;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg8;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C89DC.s")


void func_801C8AB8(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    arg0[0] = (arg2[0] - arg1[0]) * arg3 + arg1[0];
    arg0[1] = (arg2[1] - arg1[1]) * arg3 + arg1[1];
    arg0[2] = (arg2[2] - arg1[2]) * arg3 + arg1[2];
    arg0[3] = (arg2[3] - arg1[3]) * arg3 + arg1[3];
    arg0[4] = (arg2[4] - arg1[4]) * arg3 + arg1[4];
    arg0[5] = (arg2[5] - arg1[5]) * arg3 + arg1[5];
    arg0[6] = (arg2[6] - arg1[6]) * arg3 + arg1[6];
    arg0[7] = (arg2[7] - arg1[7]) * arg3 + arg1[7];
    arg0[8] = (arg2[8] - arg1[8]) * arg3 + arg1[8];
}


typedef struct func_801C8B98_Struct {
    u8 pad0[0x30];
    u8 *unk30;
} func_801C8B98_Struct;
typedef struct func_801C8B98_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_801C8B98_Obj;
typedef struct func_801C8B98_K {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801C8B98_K;

extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8038D89C[];
extern u8 D_801D8E60[];
extern void func_801C8D28();
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_80005E44(s32, void *);
extern void func_80005700(s32 arg0);
void func_80006214(s32 arg0);
extern void func_8012CF8C(void *, u8 *, s32, s32);

#define P (*arg1)->unk30
void func_801C8B98(func_801C8B98_Obj *arg0, func_801C8B98_Struct **arg1) {
    u32 kb = (u32)&D_801E04C0;
#define k ((f32 *)kb)
    if (func_80005E44((s32)arg0, D_8038D89C) == 0) {
        func_80005700((s32)arg0);
        return;
    }
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xA8, 0);
    *(f32 *)(P + 4) = arg0->unk90 * ((func_801C8B98_K *)kb)->unkC + ((func_801C8B98_K *)kb)->unk0;
    *(f32 *)(P + 8) = arg0->unk94;
    *(f32 *)(P + 0xC) = arg0->unk98 * ((func_801C8B98_K *)kb)->unkC + ((func_801C8B98_K *)kb)->unk8;
    *(s16 *)(P + 0x12) = 0;
    P[0x48] = 0xFF;
    P[0x49] = 0xFF;
    P[0x4A] = 0xFF;
    P[0x4B] = 0x80;
    *(s32 *)(P + 0x24) = 0x100;
    *(f32 *)(P + 0x18) = k[5];
    *(f32 *)(P + 0x1C) = k[5];
    *(f32 *)(P + 0x20) = k[5];
    *(s32 *)(P + 0x30) = (s32)D_801D8E60 | 0x40000000;
    func_800058DC((s32)arg0, func_801C8D28);
}
#undef k
#undef P

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8D28.s")


struct func_801C8F9C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x4B - 0xC];
    u8 unk4B;
};

struct func_801C8F9C_Outer {
    u8 pad0[0x30];
    struct func_801C8F9C_Inner *unk30;
};


void func_801C8F9C(void *arg0, void **arg1) {
    struct func_801C8F9C_Inner *temp_v1;
    s32 temp_v0;

    temp_v1 = ((struct func_801C8F9C_Outer *) *arg1)->unk30;
    temp_v0 = temp_v1->unk4B;
    temp_v0 -= 8;
    if (temp_v0 < 0) {
        temp_v1->unk8 = ((f32 *) &D_801E04C0)[4] * ((f32 *) &D_801E04C0)[1];
        ((struct func_801C8F9C_Outer *) *arg1)->unk30->unk4B = 0x80;
        func_800058DC(arg0, func_801C8D28);
        return;
    }
    temp_v1->unk4B = temp_v0;
}


extern u8 D_801DA778[];
extern void func_801C904C(s32 arg0, s32 arg1);

void func_801C900C(s32 arg0, s32 arg1) {
    if (func_80005E44(arg0, D_801DA778) != 0) {
        func_800058DC(arg0, func_801C904C);
    }
}



void func_801C904C(s32 arg0, s32 arg1) {
    if (D_801DA614 == 0) {
        func_80005700(arg0);
    }
}


struct func_801C907C_Inner {
    u8 pad[0x30];
    s32 unk30;
};

struct func_801C907C_Outer {
    u8 pad[0x30];
    struct func_801C907C_Inner *unk30;
};

extern s32 D_801DA788;
extern s32 D_801D94A8;
extern s32 D_801D9528;
extern s32 D_801D95A8;
s32 func_80001060(void);
s32 func_801302CC(void);
extern void func_801C9140(s32 arg0, void **arg1);

void func_801C907C(s32 arg0, struct func_801C907C_Outer **arg1) {
    func_80005E44(arg0, &D_801DA788);
    func_80006214(arg0);
    if (func_80001060() != 0) {
        if (func_801302CC() != 0) {
            (*arg1)->unk30->unk30 = (s32) &D_801D95A8 | 0x40000000;
        } else {
            (*arg1)->unk30->unk30 = (s32) &D_801D9528 | 0x40000000;
        }
    } else {
        (*arg1)->unk30->unk30 = (s32) &D_801D94A8 | 0x40000000;
    }
    func_800058DC(arg0, func_801C9140);
}



void func_801C9140(s32 arg0, void **arg1) {
    if (D_801DA618 != 0) {
        ((u8 *)*arg1)[0x22] = 1;
    } else {
        ((u8 *)*arg1)[0x22] = 0;
    }
    if (D_801DA614 == 0) {
        func_80005700(arg0);
    }
}

typedef struct func_801C9C48_Struct30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C9C48_Struct30;
typedef struct func_801C9C48_Struct1 {
    u8 pad0[0x30];
    func_801C9C48_Struct30 *unk30;
} func_801C9C48_Struct1;

extern u8 D_801DA798[];
extern u8 D_801DA7A8[];
extern u8 D_801D9FE8[];
extern void func_801C95AC();
void func_801C9194(s32 arg0, func_801C9C48_Struct1 **arg1);

void func_801C9194(s32 arg0, func_801C9C48_Struct1 **arg1) {
    u32 v;
    f32 *q;
    func_801C9C48_Struct30 *p;

    func_80005E44(arg0, D_801DA798);
    func_80005E44(arg0, D_801DA798);
    func_80005E44(arg0, D_801DA7A8);
    func_80006214(arg0);
    func_8012C89C((void *)arg0, 0, 0x447, 0);
    func_8012C89C((void *)arg0, 1, 0x447, 0);
    func_8012C89C((void *)arg0, 2, 0x447, 1);
#define INIT(i, a, b, pre) \
    arg1[i]->unk30->unk4 = 0.0f; \
    arg1[i]->unk30->unk8 = 0.0f; \
    pre; \
    arg1[i]->unk30->unkC = 0.0f; \
    arg1[i]->unk30->unk10 = 0; \
    arg1[i]->unk30->unk12 = 0; \
    arg1[i]->unk30->unk14 = 0; \
    arg1[i]->unk30->unk48 = a; \
    arg1[i]->unk30->unk49 = b; \
    arg1[i]->unk30->unk4A = 0; \
    arg1[i]->unk30->unk4B = 0x7F; \
    arg1[i]->unk30->unk4C = 0xFF; \
    arg1[i]->unk30->unk4D = 0x50; \
    arg1[i]->unk30->unk4E = 8; \
    arg1[i]->unk30->unk4F = 0x7F; \
    arg1[i]->unk30->unk24 |= 0x300; \
    arg1[i]->unk30->unk18 = 1.0f; \
    arg1[i]->unk30->unk1C = 1.0f; \
    arg1[i]->unk30->unk20 = 1.0f; \
    arg1[i]->unk30->unk30 = v;
    INIT(0, 0x30, 0, v = (u32)D_801D9FE8 | 0x40000000)
    INIT(1, 0x30, 0, (void)0)
    INIT(2, 0x48, 8, (void)0)
#define Q(n) ((f32 *)&D_801E04E0)[n]
    Q(8) = 0.0f; Q(7) = 0.0f; Q(6) = 0.0f;
    Q(5) = 0.0f; Q(4) = 0.0f; Q(3) = 0.0f;
    Q(0x11) = 0.0f; Q(0x10) = 0.0f; Q(0xF) = 0.0f;
    Q(0xE) = 0.0f; Q(0xD) = 0.0f; Q(0xC) = 0.0f;
    Q(0x1A) = 0.0f; Q(0x19) = 0.0f; Q(0x18) = 0.0f;
    Q(0x17) = 0.0f; Q(0x16) = 0.0f; Q(0x15) = 0.0f;
    Q(2) = 1.0f; Q(1) = 1.0f; Q(0) = 1.0f;
    Q(0xB) = 1.0f; Q(0xA) = 1.0f; Q(9) = 1.0f;
    Q(0x14) = 1.0f; Q(0x13) = 1.0f; Q(0x12) = 1.0f;
    func_800058DC(arg0, (void (*)(void))func_801C95AC);
}


typedef struct func_801C95AC_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C95AC_Inner;

typedef struct func_801C95AC_Obj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801C95AC_Inner *unk30;
} func_801C95AC_Obj;

typedef struct func_801C95AC_Struct {
    func_801C95AC_Obj *o[3];
} func_801C95AC_Struct;

void func_801C95AC(s32 arg0, func_801C95AC_Struct *arg1)
{
  f32 *d;
  f32 k;
  f32 k2;
  func_801C95AC_Obj **new_var2;
  int new_var;
  func_80006214(arg0);
  if (D_801DA648 != 0)
  {
    arg1->o[0]->unk22 = 1;
    arg1->o[1]->unk22 = 1;
    arg1->o[2]->unk22 = 1;
  }
  else
  {
    arg1->o[0]->unk22 = 0;
    arg1->o[1]->unk22 = 0;
    arg1->o[2]->unk22 = 0;
  }
  d = (f32 *) (&D_801E04E0);
  arg1->o[0]->unk30->unk4 = d[0x18 / 4];
  arg1->o[0]->unk30->unk8 = d[0x1C / 4];
  arg1->o[0]->unk30->unkC = d[0x20 / 4];
  k = 90.0f;
  k2 = 2048.0f;
  arg1->o[0]->unk30->unk10 = (s16) ((s32) ((d[0xC / 4] * k2) / k));
  new_var = 0;
  arg1->o[new_var]->unk30->unk12 = (s16) ((s32) ((d[0x10 / 4] * k2) / k));
  arg1->o[0]->unk30->unk14 = (s16) ((s32) ((d[0x14 / 4] * k2) / k));
  arg1->o[0]->unk30->unk18 = d[0];
  arg1->o[0]->unk30->unk1C = d[1];
  (new_var2 = arg1->o)[0]->unk30->unk20 = d[2];
  new_var2[1]->unk30->unk4 = d[0x3C / 4];
  new_var2[1]->unk30->unk8 = d[0x40 / 4];
  new_var2[1]->unk30->unkC = d[0x44 / 4];
  new_var2[1]->unk30->unk10 = (s16) ((s32) ((d[0x30 / 4] * k2) / k));
  new_var2[1]->unk30->unk12 = (s16) ((s32) ((d[0x34 / 4] * k2) / k));
  new_var2[1]->unk30->unk14 = (s16) ((s32) ((d[0x38 / 4] * k2) / k));
  new_var2[1]->unk30->unk18 = d[0x24 / 4];
  new_var2[1]->unk30->unk1C = d[0x28 / 4];
  new_var2[1]->unk30->unk20 = d[0x2C / 4];
  new_var2[2]->unk30->unk4 = d[0x60 / 4];
  new_var2[2]->unk30->unk8 = d[0x64 / 4];
  new_var2[2]->unk30->unkC = d[0x68 / 4];
  new_var2[2]->unk30->unk10 = (s16) ((s32) ((d[0x54 / 4] * k2) / k));
  new_var2[2]->unk30->unk12 = (s16) ((s32) ((d[0x58 / 4] * k2) / k));
  new_var2[2]->unk30->unk14 = (s16) ((s32) ((d[0x5C / 4] * k2) / k));
  new_var2[2]->unk30->unk18 = d[0x48 / 4];
  new_var2[2]->unk30->unk1C = d[0x4C / 4];
  new_var2[2]->unk30->unk20 = d[0x50 / 4];
  if (D_801DA644 == 0)
  {
    func_80005700(arg0);
  }
}


typedef struct func_801C98B0_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C98B0_Inner;

typedef struct func_801C98B0_Outer {
    u8 pad[0x30];
    func_801C98B0_Inner *unk30;
} func_801C98B0_Outer;

typedef struct func_801C98B0_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
} func_801C98B0_Arg;

extern u8 D_801DA7B8[];
extern u8 D_801D9908[];
extern f32 D_801DD2DC;
extern void func_801C9ACC();

void func_801C98B0(func_801C98B0_Arg *arg0, func_801C98B0_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DA7B8);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = (s32)D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0x78;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF4;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    arg0->unk90 = D_801DD2DC;
    arg0->unk94 = -0.5f;
    func_800058DC((s32)arg0, func_801C9ACC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9ACC.s")




typedef struct func_801C9C48_Struct0 {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u8 padB0[2];
    u8 unkB2;
} func_801C9C48_Struct0;

extern u8 D_801D8FA0[];
extern u8 D_801DA818[];
extern u8 func_801C9E80[];

void func_801C9C48(func_801C9C48_Struct0 *arg0, func_801C9C48_Struct1 **arg1) {
    func_80005E44((s32)arg0, D_801DA818);
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    switch (arg0->unkB2) {
    case 0:
        func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 0);
        break;
    case 1:
        func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x43C, 3);
        break;
    }
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk30 = (u32)D_801D8FA0 | 0x40000000;
    func_800058DC((s32)arg0, (void (*)(void))func_801C9E80);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9E80.s")


extern u8 D_801DA840[];
struct func_801CA1EC_Inner;
void func_801CA1EC(u8 *arg0, struct func_801CA1EC_Inner **arg1);

struct func_801C9FF0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    u8 *unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801C9FF0_Outer {
    u8 pad0[0x30];
    struct func_801C9FF0_Inner *unk30;
};
struct func_801C9FF0_Arg {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
};

void func_801C9FF0(struct func_801C9FF0_Arg *arg0, struct func_801C9FF0_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DA840);
    func_80006214((s32)arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s16)(s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s16)(s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s16)(s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0x78;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF4;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk30 = (u8 *)((s32)D_801D8FA0 | 0x40000000);
    func_800058DC((s32)arg0, (void (*)(void))func_801CA1EC);
}


struct func_801CA1EC_Inner {
    u8 pad0[0x30];
    u8 *unk30;
};

extern s32 D_801DA850[];

void func_801CA1EC(u8 *arg0, struct func_801CA1EC_Inner **arg1)
{
  s32 temp_v0;
  u8 idx;
  u32 slot;
  temp_v0 = arg0[0xB3];
  arg0[0xB3] = temp_v0 + 1;
  slot = temp_v0 % 40U;
  temp_v0 = 0x2DD;
  func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, temp_v0, D_801DA850[slot]);
  idx = arg0[0xB0];
  if (D_801E05D0[idx] == 0)
  {
    func_80005700(arg0);
  }
}


typedef struct func_801CA274_StructC {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801CA274_StructC;

typedef struct func_801CA274_StructB {
    u8 pad[0x30];
    func_801CA274_StructC *unk30;
} func_801CA274_StructB;

typedef struct func_801CA274_StructD {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA274_StructD;

typedef struct func_801CA274_StructE {
    u8 pad[0x2C];
    func_801CA274_StructD *unk2C;
} func_801CA274_StructE;

typedef struct func_801CA274_StructA {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
} func_801CA274_StructA;

extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern u8 D_801DA8F0[];
extern func_801CA274_StructE *D_801BBCD8;
extern u8 func_801CA510[];

void func_801CA274(func_801CA274_StructA *arg0, func_801CA274_StructB **arg1)
{
  u8 pad[4];
  f32 sp28;
  f32 sp24;
  short new_var;
  f32 r;
  func_801CA274_StructD *t;
  func_80005E44((s32) arg0, D_801DA8F0);
  func_80006214((s32) arg0);
  (*arg1)->unk30->unk30 = 0;
  (*arg1)->unk30->unk28 = D_801D9908;
  (*arg1)->unk30->unk0 = 0;
  (*arg1)->unk30->unk2C = 0;
  func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x2DD, 0);
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk18 = arg0->unk9C;
  (*arg1)->unk30->unk1C = arg0->unkA0;
  (*arg1)->unk30->unk20 = arg0->unkA4;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk48 = 0xFF;
  (*arg1)->unk30->unk49 = 0xFF;
  (*arg1)->unk30->unk4A = 0xFF;
  (*arg1)->unk30->unk4B = (u32) (arg0->unkA8 * 255.0f);
  (*arg1)->unk30->unk4C = 0;
  (*arg1)->unk30->unk4D = 0xFF;
  (*arg1)->unk30->unk4E = 0xFF;
  (*arg1)->unk30->unk4F = 0xFF;
  t = D_801BBCD8->unk2C;
  sp28 = t->unk3C - t->unk30;
  sp24 = t->unk44 - t->unk38;
  new_var = func_8001EF38(sp28, sp24) + 0x1000;
  (*arg1)->unk30->unk12 = new_var & 0x1FFF;
  r = func_8002FC20((sp28 * sp28) + (sp24 * sp24));
  t = D_801BBCD8->unk2C;
  (*arg1)->unk30->unk10 = func_8001EF38(t->unk40 - t->unk34, r) & 0x1FFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CA510);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA510.s")


typedef struct func_801CA628_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CA628_Inner;
typedef struct func_801CA628_Outer {
    u8 pad[0x30];
    func_801CA628_Inner *unk30;
} func_801CA628_Outer;
typedef struct func_801CA628_Cam {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801CA628_Cam;
typedef struct func_801CA628_Root {
    u8 pad[0x2C];
    func_801CA628_Cam *unk2C;
} func_801CA628_Root;
extern u8 D_801DA950[];
extern u8 func_801CA8C4[];

void func_801CA628(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1) {
    func_801CA628_Cam *c;
    f32 sp28;
    f32 sp24;

    func_80005E44((s32)arg0, D_801DA950);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unkA0;
    (*arg1)->unk30->unk20 = arg0->unkA4;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = (u32)(arg0->unkA8 * 255.0f);
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    c = D_801BBCD8->unk2C;
    sp28 = c->unk3C - c->unk30;
    sp24 = c->unk44 - c->unk38;
    (*arg1)->unk30->unk12 = (s16)(func_8001EF38(sp28, sp24) + 0x1000) & 0x1FFF;
    (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20(sp28 * sp28 + sp24 * sp24)) & 0x1FFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CA8C4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA8C4.s")


typedef struct func_801CA9DC_C {
    s16 unk0;
    u8 pad2[0xE];
    s16 unk10;
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
} func_801CA9DC_C;
typedef struct func_801CA9DC_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x24];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801CA9DC_B;
typedef struct func_801CA9DC_A {
    u8 pad[0x30];
    func_801CA9DC_B *unk30;
} func_801CA9DC_A;
typedef struct func_801CA9DC_Struct {
    func_801CA9DC_A *unk0;
} func_801CA9DC_Struct;
typedef struct func_801CA9DC_P {
    u8 pad[0x90];
    f32 unk90, unk94, unk98, unk9C, unkA0, unkA4, unkA8;
} func_801CA9DC_P;
typedef struct func_801CA9DC_V {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801CA9DC_V;
typedef struct func_801CA9DC_G {
    u8 pad[0x2C];
    func_801CA9DC_V *unk2C;
} func_801CA9DC_G;

extern u8 D_801D9B60[];
extern u8 D_801DA9B0[];
extern void func_801CAC78();

void func_801CA9DC(func_801CA9DC_P *arg0, func_801CA9DC_Struct *arg1)
{
  u8 pad[4];
  f32 sp28;
  f32 sp24;
  func_80005E44((s32) arg0, D_801DA9B0);
  func_80006214((s32) arg0);
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x30)) = 0;
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x28)) = (s32) D_801D9B60;
  *((s16 *) arg1->unk0->unk30) = 0;
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x2C)) = 0;
  func_8012CF8C(arg0, ((u8 *) arg1->unk0->unk30) + 0x40, 0x471, 0);
  arg1->unk0->unk30->unk4 = arg0->unk90;
  arg1->unk0->unk30->unk8 = arg0->unk94;
  arg1->unk0->unk30->unkC = arg0->unk98;
  arg1->unk0->unk30->unk18 = arg0->unk9C;
  arg1->unk0->unk30->unk1C = arg0->unkA0;
  arg1->unk0->unk30->unk20 = arg0->unkA4;
  sp28 = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  sp24 = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x12)) = (((short) func_8001EF38(sp28, sp24)) + 0x1000) & 0x1FFF;
  if (0)
  {
  }
  *((s16 *) (((u8 *) arg1->unk0->unk30) + 0x10)) = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((sp28 * sp28) + (sp24 * sp24))) & 0x1FFF;
  *((s32 *) (((u8 *) arg1->unk0->unk30) + 0x24)) |= 0x300;
  arg1->unk0->unk30->unk48 = 0xFF;
  arg1->unk0->unk30->unk49 = 0xFF;
  arg1->unk0->unk30->unk4A = 0xFF;
  arg1->unk0->unk30->unk4B = (u32) (arg0->unkA8 * 255.0f);
  arg1->unk0->unk30->unk4C = 0xFF;
  arg1->unk0->unk30->unk4D = 0xFF;
  arg1->unk0->unk30->unk4E = 0xFF;
  arg1->unk0->unk30->unk4F = 0xFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CAC78);
}


typedef struct func_801CAC78_Obj {
    u8 pad[0xB0];
    u16 unkB0;
    u16 unkB2;
} func_801CAC78_Obj;
typedef struct func_801CAC78_Sub {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CAC78_Sub;
typedef struct func_801CAC78_Hold {
    u8 pad[0x30];
    func_801CAC78_Sub *unk30;
} func_801CAC78_Hold;
extern s32 D_801DA9C0[];

void func_801CAC78(func_801CAC78_Obj *arg0, func_801CAC78_Hold **arg1)
{
  u8 pad[8];
  f32 dx;
  f32 dz;
  f32 r;
  f32 new_var;
  r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x471, D_801DA9C0[((u32) (8.0f * r)) & 7]);
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  new_var = dx;
  if ((!(*arg1)->unk30) && (!(*arg1)->unk30))
  {
  }
  (*arg1)->unk30->unk12 = (s16) ((func_8001EF38(new_var, dz) + 0x1000) & 0x1FFF);
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((new_var * dx) + (dz * dz))) & 0x1FFF;
  arg0->unkB0++;
  if (arg0->unkB0 >= arg0->unkB2)
  {
    func_80005700((s32) arg0);
  }
}


extern u8 D_801D9F00[];
extern u8 D_801DA9E0[];
extern f32 D_801DD2F8;
extern u8 func_801CB048[];

void func_801CAE5C(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1)
{
  u8 pad[4];
  f32 dx;
  f32 dz;
  f32 k;
  func_80005E44((s32) arg0, D_801DA9E0);
  func_80006214((s32) arg0);
  func_8012C89C(arg0, 0, 0x373, 1);
  k = D_801DD2F8;
  (*arg1)->unk30->unk30 = ((s32) D_801D9F00) | 0x40000000;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unkA0;
  (*arg1)->unk30->unkC = arg0->unk94;
  (*arg1)->unk30->unk18 = k;
  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk48 = 0xFF;
  (*arg1)->unk30->unk49 = 0xFF;
  (*arg1)->unk30->unk4A = 0x64;
  (*arg1)->unk30->unk4B = 0x7F;
  (*arg1)->unk30->unk4C = 0xFF;
  (*arg1)->unk30->unk4D = 0x46;
  (*arg1)->unk30->unk4E = 0;
  (*arg1)->unk30->unk4F = 0xFF;
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  (*arg1)->unk30->unk12 = (((((((((((((func_8001EF38(dx, dz) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((dx * dx) + (dz * dz))) & 0x1FFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CB048);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB048.s")


typedef struct func_801CB22C_StructB {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CB22C_StructB;

typedef struct func_801CB22C_StructA {
    u8 pad[0x30];
    func_801CB22C_StructB *unk30;
} func_801CB22C_StructA;

typedef struct func_801CB22C_StructP {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
} func_801CB22C_StructP;

extern u8 D_801DA9F0[];
extern f32 D_801DD2FC;
extern u8 func_801CB450[];

void func_801CB22C(func_801CB22C_StructP *arg0, func_801CB22C_StructA **arg1) {
    f32 k;

    func_80005E44((s32)arg0, D_801DA9F0);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9B60;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x372, 0);
    k = D_801DD2FC;
    (*arg1)->unk30->unk4 =arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = arg0->unk9C * k;
    (*arg1)->unk30->unk1C = arg0->unkA0 * k;
    (*arg1)->unk30->unk20 = arg0->unkA4 * k;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = (u32)(arg0->unkA8 * 255.0f);
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CB450);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB5E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB85C.s")


typedef struct func_801CBA44_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CBA44_Inner;

typedef struct func_801CBA44_Outer {
    u8 pad[0x30];
    func_801CBA44_Inner *unk30;
} func_801CBA44_Outer;

typedef struct func_801CBA44_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
} func_801CBA44_Arg;

extern u8 D_801DAA10[];
extern void func_801CBC50();

void func_801CBA44(func_801CBA44_Arg *arg0, func_801CBA44_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DAA10);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = (s32)D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x472, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (s32)((arg0->unk9C * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk12 = (s32)((arg0->unkA0 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk14 = (s32)((arg0->unkA4 * 2048.0f) / 90.0f);
    (*arg1)->unk30->unk18 = arg0->unkA8;
    (*arg1)->unk30->unk1C = arg0->unkAC;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0x7F;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0x7F;
    (*arg1)->unk30->unk30 = 0;
    func_800058DC((s32)arg0, func_801CBC50);
}


typedef struct func_801CBC50_Inner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CBC50_Inner;
typedef struct func_801CBC50_Outer {
    u8 pad[0x30];
    func_801CBC50_Inner *unk30;
} func_801CBC50_Outer;
extern s32 D_801DAA20[];

void func_801CBC50(func_801C7D0C_Struct *arg0, func_801CBC50_Outer **arg1)
{
  u8 pad[8];
  f32 dx;
  f32 dz;
  f32 r;
  r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x472, D_801DAA20[((u32) (12.0f * r)) % 12U]);
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  if (((*arg1)->unk30 && (*arg1)->unk30) && (*arg1)->unk30)
  {
  }
  (*arg1)->unk30->unk12 = (func_8001EF38(dx, dz) + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((dx * dx) + (dz * dz))) & 0x1FFF;
  arg0->unkB0 = arg0->unkB0 + 1;
  if (arg0->unkB0 >= arg0->unkB2)
  {
    func_80005700((s32) arg0);
  }
}


struct func_801CBE3C_Inner {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801CBE3C_Outer {
    u8 pad[0x30];
    struct func_801CBE3C_Inner *unk30;
};
struct func_801CBE3C_Arg {
    u8 pad[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
};
extern u8 D_801DAA50[];
extern u8 func_801CBFE8[];

void func_801CBE3C(struct func_801CBE3C_Arg *arg0, struct func_801CBE3C_Outer **arg1) {
    func_80005E44((s32)arg0, D_801DAA50);
    func_80006214((s32)arg0);
    *(u32 *)((u8 *)(*arg1)->unk30 + 0x30) = 0;
    (*arg1)->unk30->unk28 = D_801D9908;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = arg0->unkA0;
    (*arg1)->unk30->unk1C = arg0->unkA4;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0x78;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xF4;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4F = 0xFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CBFE8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CBFE8.s")

