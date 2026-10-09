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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7944.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7B3C.s")


extern s32 D_801DA644;
extern s32 D_801DA648;

void func_801C7B88(void) {
    D_801DA644 = 0;
    D_801DA648 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7BA8.s")


extern void func_801C0D04(s32, s32);

void func_801C7BE4(void) {
    func_801C0D04(3, 0x20F1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7DE8.s")


extern s32 D_801DA680;
extern s32 D_801E0550[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C7F10.s")

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

extern void *func_80005670(s32, void *);
extern void func_8038C4D8(s32, s32, s32 *);
extern s32 D_801DA698;
extern u8 D_801DA69C[];
extern s32 D_801E05D0[];
extern s32 D_8038D8CC;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8098.s")


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
extern u8 func_8038D8B8[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C815C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C81F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C82A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C839C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C83BC.s")


extern f32 D_801DA6EC;
extern f32 D_801E0650[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8788.s")


extern f32 D_801DA71C;
extern f32 D_801DA720;

void func_801C8794(f32 arg0, s32 arg1) {
    D_801DA71C = (4.0f * arg0) / (f32) arg1;
    D_801DA720 = (8.0f * arg0) / (f32) (arg1 * arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C87E0.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C89DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C8F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C900C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C904C.s")


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
void func_80005E44(s32 arg0, s32 *arg1);
void func_80006214(s32 arg0);
s32 func_80001060(void);
s32 func_801302CC(void);
void func_800058DC(s32 arg0, void (*arg1)(void));
void func_801C9140(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9194.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C95AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C98B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801C9FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA628.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CA9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CAC78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CAE5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB22C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB5E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CB85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CBA44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CBC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CBE3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C78C0/func_801CBFE8.s")

