#include "common.h"


typedef struct func_801235D0_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x13];
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    s8 unk1B;
    s8 unk1C;
    u8 unk1D;
    u8 pad1E[2];
    s32 unk20;
    u8 pad24[0x140];
    u8 unk164;
    u8 unk165;
    u8 unk166;
    u8 pad167[0x11];
    s16 unk178;
    s16 unk17A;
    u8 pad17C[2];
    u8 unk17E;
    u8 pad17F[0x12D];
    u8 unk2AC;
    u8 pad2AD[0xF5];
    s16 unk3A2;
    u8 pad3A4[0xB4E];
    s16 unkEF2;
} func_801235D0_Struct;

typedef struct func_801235D0_Struct2 {
    u8 pad0[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[0xC];
    s16 unkA6;
    u8 padA8[0x11C];
    u16 unk1C4;
    u8 pad1C6[0x40D6];
    s32 unk429C;
    u8 unk42A0;
    u8 pad42A1[0x5F];
    u8 unk4300;
} func_801235D0_Struct2;

#define G (*(func_801235D0_Struct *)&D_801BBBF0)
#define H (*(func_801235D0_Struct2 *)&D_800892B0)

struct func_801237AC_Struct;
struct func_80124C0C_Struct;
extern struct func_801237AC_Struct D_800892B0;
extern struct func_80124C0C_Struct D_801BBBF0;
extern s32 D_8008D5D4;
extern u8 D_8038F800[];
extern u8 func_801BF1A0[];
extern s32 func_80004484(s32);
extern void func_80005444(s32, s32, s32, s32, s32);
extern s32 func_80005624(void *);
extern void func_80016DF0(void);
extern void func_80016E40(s32);
extern void func_8001F204(void *, s32);
extern void func_80020744(s32);
extern u8 D_80164E6C[];
extern s32 func_8000106C();
extern void func_800023EC();
extern void func_8001F160(void *, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8012FFCC(s32);
extern void func_80133830();
extern void func_80133950();
extern void func_80133A70();
extern void func_8014AC60();

void func_801235D0(s32 arg0, s32 arg1) {
    G.unk20 = 0;
    func_8001F160(&G, 0x1158);
    if (H.unk1C4 == 0) {
        func_8012FE50(0x24, 0x76, 1, 1, 0);
    } else if (H.unk4300 != 0) {
        func_8012FE50(7, 0x104, 0, 0, 0);
    } else if (func_8000106C() != 0) {
        func_8012FE50(0x21, 0x77, 1, 1, 0);
    } else {
        func_8012FE50(0x11, 0x73, 1, 0, 0);
    }
    H.unk429C = 0;
    H.unk42A0 = 0;
    G.unk164 = 0;
    G.unk165 = 0;
    G.unk166 = 0;
    G.unk17E = 0;
    G.unk3A2 = 0;
    func_80020744(1);
    H.unkA6 = 0;
    func_800023EC();
    G.unk2 = 1;
    func_80133830();
    func_80133950();
    func_80133A70();
    G.unk178 = 0;
    G.unk2AC = 0;
    G.unk1D = 0;
    H.unk92 = 0;
    H.unk94 = 0;
    H.unk96 = 0;
    H.unk98 = 0;
    G.unk17 = 0;
    G.unk18 = 1;
    G.unk1A = 0;
    G.unk19 = 1;
    G.unk1B = 1;
    G.unk1C = 1;
    func_80016DF0();
    G.unk20 = 0;
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80005444(0x64, 0xC8, 0x190, 0xC8, 0x64);
    func_80016E40(0xC000);
    func_80004484(0x37);
    func_8014AC60();
    G.unkEF2 = 0;
    func_8012FFCC(0);
    G.unk17A = 0;
    D_8008D5D4 = func_80005624(D_80164E6C);
}


typedef struct func_801237AC_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801237AC_Struct;

extern u8 D_80164E44[];
extern s32 D_801BBC10;
extern s8 D_801BBD6E;

void func_801237AC(s32 arg0, s32 arg1) {
    D_801BBD6E = 1;
    func_80016DF0();
    D_801BBC10 = 0;
    func_8001F204(func_801BF1A0, D_8038F800 - func_801BF1A0);
    func_80005444(0x64, 0xC8, 0x190, 0xC8, 0x64);
    func_80016E40(0x4000);
    func_80004484(0x63);
    D_800892B0.unk92 = 0;
    D_800892B0.unk94 = 0;
    D_800892B0.unk96 = 0;
    D_800892B0.unk98 = 0;
    D_8008D5D4 = func_80005624(D_80164E44);
}

typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;

extern void func_80002364(s32, s32, s32, s32);
extern s32 func_80005670();
extern void func_800058DC(s32, void *);
extern u8 D_80044220[];
extern u8 D_80044434[];
extern u8 D_800447F0[];
extern u8 D_80163704[];
extern void func_8038B7E0(void);

void func_80123850(s32 arg0, s32 arg1) {
    s8 var_v0;

    D_801BBBF0.unk17E = 2;
    for (var_v0 = 0; var_v0 < 0x10; var_v0++) {
        *(s32 *)((u8 *)&D_801BBBF0 + 0x258 + var_v0 * 4) = 0;
    }
    *(s16 *)((u8 *)&D_801BBBF0 + 0x6) = 0;
    *(s8 *)((u8 *)&D_801BBBF0 + 0x2AD) = 1;
    *(s8 *)((u8 *)&D_801BBBF0 + 0x2AE) = -1;
    *(s16 *)((u8 *)&D_801BBBF0 + 0x36) = 0;
    func_80005670(arg0, D_80163704);
    func_80005670(arg0, D_80044434);
    func_80005670(arg0, D_800447F0);
    func_80005670(arg0, D_80044220);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_80020744(1);
    func_800058DC(arg0, func_8038B7E0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80123934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80123BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_801243DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80124AF0.s")




extern void func_80124C54();

void func_80124C0C(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 7;
    if (D_801BBBF0.unk164 == 0) {
        D_801BBBF0.unk168 = 0;
        D_801BBBF0.unk17D = 0;
        func_800058DC(arg0, func_80124C54);
    }
}

extern u16 D_801BBC20;

extern s32 func_8012FD1C(s32);
extern u8 D_801BBD6D;
void func_801300E8(void);
void func_8012E81C(void);
void func_8012C6B4(s32);
void func_80124D48(s32);
void func_80124CEC(s32 arg0, s32 arg1);

void func_80124C54(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 8;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x2C) != 0x10) {
        func_8012E81C();
    }
    func_801300E8();
    func_8012C6B4(D_801BBC20 + 0x4D2);
    if (D_801BBBF0.unk17D != 0) {
        if (func_8012FD1C(arg0) != 0) {
            func_800058DC(arg0, (void *)func_80124CEC);
            return;
        }
        func_80124D48(arg0);
    }
}


extern u8 D_801BBD54;

void func_80124CEC(s32 arg0, s32 arg1) {
    func_801300E8();
    D_801BBD6E = 9;
    func_8012E81C();
    func_8012C6B4(D_801BBC20 + 0x4D2);
    if (D_801BBD54 == 0) {
        func_80124D48(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801235D0/func_80124D48.s")

