#include "common.h"
typedef struct func_801237AC_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801237AC_Struct;
extern struct func_801237AC_Struct D_800892B0;
typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;
extern struct func_80124C0C_Struct D_801BBBF0;
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
#define G (*(func_801235D0_Struct *)&D_801BBBF0)
extern void func_800058DC(s32, void *);
extern void func_80133830();

extern f32 func_8002FC20(f32);
extern void func_80017608();
extern void func_8001F6FC();
extern void func_80124ED0(u16);
extern s32 func_80125774();
extern void func_80126794();
extern void func_80129F70();
extern s32 func_8012FF4C(void *);
extern void func_8014AD20();
extern void func_80151B30();
extern void func_801243DC();
typedef struct func_80123BF0_Struct32 {
    u32 w[8];
} func_80123BF0_Struct32;
extern func_80123BF0_Struct32 D_80176090;
extern u8 D_8017DD7C[];
extern f32 D_8018BB08;
extern f32 D_8018BB0C;
extern f32 D_8018BB10;
extern f32 D_8018BB14;
extern f32 D_8018BB18;
extern f32 D_8018BB1C;
extern u8 D_801BBBF6[];
extern u8 D_801BBC18[];
extern u8 D_801BBC30[];
extern u8 D_801BBC68[];
extern func_80123BF0_Struct32 D_801BBC4C;
extern func_80123BF0_Struct32 D_801BBC6C;
extern func_80123BF0_Struct32 D_801BBC8C;
extern func_80123BF0_Struct32 D_801BBCAC;
extern s32 D_801BBDFC;
extern s32 D_801BBE00;
extern s32 D_801BBE04;
extern s32 D_801BBE08;
extern void *D_801BCD48;
extern void *D_801BCD4C;
extern void *D_801BCD50;

#define F(T, o) (*(T *)((u8 *)&D_801BBBF0 + (o)))
typedef struct func_80123BF0_StructA {
    u8 pad[0xF50];
    u8 r32[2][32];
    u8 r16[2][16];
    u8 r64[2][64];
} func_80123BF0_StructA;
typedef struct func_80123BF0_StructL {
    u8 pad[0xBA8];
    f32 a[6][16];
    u8 pad2[0x18];
    f32 b[6][16];
} func_80123BF0_StructL;
#define L ((func_80123BF0_StructL *)&D_801BBBF0)
typedef struct func_80123BF0_StructM {
    u8 pad[0x258];
    s32 c[16];
    u8 pad298[0x2BC - 0x298];
    f32 d[3][3];
    u8 pad2E0[4];
    f32 e[3][3];
    u8 pad308[4];
    f32 f[3];
    u8 pad318[2];
    s16 h[3];
    u8 pad320[0x3BC - 0x320];
    s32 k[30];
} func_80123BF0_StructM;
#define M ((func_80123BF0_StructM *)&D_801BBBF0)
#undef G
#define G(T, o) (*(T *)((u8 *)&D_800892B0 + (o)))

void func_80123BF0(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *q;
    s32 i;

    F(u8, 0x17E) = 4;
    G(s16, 0x92) = 0;
    G(s16, 0x94) = 0;
    G(s16, 0x96) = 0;
    G(s16, 0x98) = 0;
    F(s32, 0x112C) = 0;
    F(s16, 0x3A4) = 0;
    F(s32, 0xE0) = 0;
    F(s16, 0x104) = 1;
    F(s16, 0x5E) = 0;
    F(s16, 0x60) = 0;
    F(s8, 0x108) = 1;
    F(u16, 0x2E) = F(u16, 4);
    F(s32, 0x22C) = 0x46;
    F(f32, 0x100) = 10.0f;
    D_801BBC4C = D_80176090;
    D_801BBC8C = D_80176090;
    D_801BBC6C = D_80176090;
    D_801BBCAC = D_80176090;
    if (func_8012FF4C(&D_800892B0) != 0x18) {
        F(f32, 0x198) = 0.0f;
        F(f32, 0x19C) = 0.0f;
        F(f32, 0x1A0) = 0.0f;
    }
    F(s16, 0x32) = 0x1000;
    F(s32, 0xDC) = 0;
    F(u8, 0x230) = 0;
    F(u8, 0xF5) = 0;
    if (D_8017DD7C[0x16] == 0) {
        u16 v = F(u16, 4);
        if (v < 0x14) {
            F(u8, 0xF4) = 1;
        } else {
            F(u8, 0xF4) = 0;
        }
        switch (v) {
        case 0x64:
            F(u8, 0xF4) = 1;
            break;
        case 0x65:
        case 0x66:
            F(u8, 0xF4) = 0;
            break;
        }
    } else if (*(u16 *)(D_8017DD7C + 0x10) == 0x29) {
        F(u8, 0xF4) = 0;
    } else {
        F(u8, 0xF4) = 1;
    }
    if (F(u16, 0x2C) == 0xB) {
        F(u8, 0xF4) = 0;
    }
    F(u8, 0xF20) = 0x80;
    F(u8, 0xF21) = 0x80;
    F(u8, 0xF22) = 0x80;
    F(u8, 0xF23) = 0xFF;
    F(u8, 0xF24) = 0xFF;
    F(u8, 0xF25) = 0xFF;
    F(s8, 0xF26) = (s32)((13.0f / func_8002FC20(D_8018BB08)) * 100.0f);
    F(s8, 0xF27) = (s32)((25.0f / func_8002FC20(D_8018BB0C)) * 100.0f);
    F(s8, 0xF28) = (s32)((30.0f / func_8002FC20(D_8018BB10)) * 100.0f);
    F(u8, 0xF29) = 0;
    F(u8, 0xF2A) = 0;
    F(u8, 0xF2B) = 0;
    F(s8, 0xF2C) = (s32)((-13.0f / func_8002FC20(D_8018BB14)) * 100.0f);
    F(s8, 0xF2D) = (s32)((25.0f / func_8002FC20(D_8018BB18)) * 100.0f);
    F(s8, 0xF2E) = (s32)((-30.0f / func_8002FC20(D_8018BB1C)) * 100.0f);
    F(u8, 0x164) = 0;
    D_801BCD48 = ((func_80123BF0_StructA *)&D_801BBBF0)->r32[G(s16, 0x9C)];
    D_801BCD4C = ((func_80123BF0_StructA *)&D_801BBBF0)->r16[G(s16, 0x9C)];
    D_801BCD50 = ((func_80123BF0_StructA *)&D_801BBBF0)->r64[G(s16, 0x9C)];
    F(u8, 0xF32) = 0;
    F(u8, 0xF33) = 0;
    F(u8, 0xF34) = 0;
    F(u8, 0xF35) = 0xB9;
    F(s16, 0x244) = 0;
    F(f32, 0x238) = 0.0f;
    F(f32, 0x240) = 0.0f;
    F(f32, 0x23C) = 18.0f;
    i = 0;
loop1:
    L->a[0][i] = 0.0f;
    L->a[1][i] = 0.0f;
    L->a[2][i] = 0.0f;
    L->a[3][i] = 0.0f;
    L->a[4][i] = 0.0f;
    L->a[5][i] = 0.0f;
    i++;
    if (i < 10) goto loop1;
    F(s32, 0xD28) = 0;
    F(s32, 0xD2C) = 0;
    i = 0;
loop2:
    L->b[0][i] = 0.0f;
    L->b[1][i] = 0.0f;
    L->b[2][i] = 0.0f;
    L->b[3][i] = 0.0f;
    L->b[4][i] = 0.0f;
    L->b[5][i] = 0.0f;
    i++;
    if (i < 10) goto loop2;
    F(f32, 0xED8) = F(f32, 0xEDC) = F(f32, 0xEE0) = 0.0f;
    F(f32, 0xEE4) = F(f32, 0xEE8) = F(f32, 0xEEC) = 0.0f;
    F(s32, 0xEC0) = 0;
    F(s32, 0xEC4) = 0;
    F(s16, 0xEF0) = 0;
    F(u8, 0xEF4) = 0;
    F(u8, 0xEF5) = 0;
    F(s32, 0xEF8) = 0;
    F(u8, 0xBA2) = 0;
    F(u8, 0xBA3) = 1;
    F(u8, 0xBA4) = 0;
    F(s32, 0x24) = 0;
    F(u8, 0x28) = 0;
    if (G(u16, 0x226) & 0x2000) {
        F(u8, 0xFC) = 1;
    } else {
        F(u8, 0xFC) = 0;
    }
    F(s32, 0x248) = 0;
    F(s32, 0x24C) = 0;
    F(s32, 0x250) = 0;
    F(u8, 0x254) = 0;
    F(u8, 0x255) = 0;
    F(u8, 0x256) = 0;
    i = 0;
loop3:
    M->c[i] = 0;
    i++;
    if (i < 16) goto loop3;
    F(u8, 0x298) = 0;
    F(u8, 0x299) = 1;
    F(s8, 0x29A) = -1;
    F(u8, 0x2AD) = 0;
    F(u8, 0x2AE) = 0;
    F(u8, 0x2B4) = 0;
    F(u8, 0x2B5) = 0;
    F(s32, 0x2B0) = 0;
    F(f32, 0x29C) = 5.0f;
    F(f32, 0x2A0) = 1800.0f;
    for (i = 0; i < 3; i++) {
    M->d[0][i] = 0.0f;
    M->d[1][i] = 0.0f;
    M->d[2][i] = 0.0f;
    M->e[0][i] = 0.0f;
    M->e[1][i] = 0.0f;
    M->e[2][i] = 0.0f;
    M->f[i] = 35.0f;
    M->h[i] = 0;
    }
    F(u8, 0xF45) = F(u8, 0xF32);
    F(u8, 0xF46) = F(u8, 0xF33);
    F(u8, 0xF47) = F(u8, 0xF34);
    F(u8, 0xF48) = F(u8, 0xF35);
    F(u8, 0xF36) = F(u8, 0xF20);
    F(u8, 0xF37) = F(u8, 0xF21);
    F(u8, 0xF38) = F(u8, 0xF22);
    F(u8, 0xF39) = F(u8, 0xF23);
    F(u8, 0xF3A) = F(u8, 0xF24);
    F(f32, 0x320) = 0.0f;
    F(f32, 0x324) = 0.0f;
    F(f32, 0x334) = 0.0f;
    F(f32, 0x338) = 0.0f;
    F(f32, 0x33C) = 0.0f;
    F(u8, 0x72A) = 0;
    F(u8, 0x734) = 0;
    F(u8, 0xAC6) = 0;
    F(u8, 0xAD0) = 0;
    F(u8, 0xF3B) = F(u8, 0xF25);
    F(s8, 0xF3C) = F(s8, 0xF26);
    F(s8, 0xF3D) = F(s8, 0xF27);
    F(s8, 0xF3E) = F(s8, 0xF28);
    F(u8, 0xF3F) = F(u8, 0xF29);
    F(u8, 0xF40) = F(u8, 0xF2A);
    F(u8, 0xF41) = F(u8, 0xF2B);
    F(s8, 0xF42) = F(s8, 0xF2C);
    F(s8, 0xF43) = F(s8, 0xF2D);
    F(s8, 0xF44) = F(s8, 0xF2E);
    F(f32, 0x2A4) = F(f32, 0x29C);
    F(f32, 0x2A8) = F(f32, 0x2A0);
    func_80133830();
    F(s16, 0x1A4) = 0;
    F(s32, 0x1A8) = 0;
    F(s16, 0x1B2) = 0;
    F(s32, 0x1E4) = 0;
    F(s16, 0x190) = 0;
    F(s16, 0x18E) = 0;
    F(s32, 0xF8) = 0;
    F(s16, 0x21C) = 0;
    F(s32, 0x220) = 0;
    F(s16, 0x224) = 0;
    F(s16, 0x226) = 0;
    F(s16, 0x228) = 0;
    F(s16, 0x3B8) = 0;
    F(u8, 0x434) = 0;
    F(u8, 0x435) = 0;
    F(s16, 0x1B0) = 0;
    i = 0;
loop5:
    ((func_80123BF0_StructM *)((s32 *)&D_801BBBF0 + i))->k[0] = 0;
    i++;
    if ((s32 *)&D_801BBBF0 + i < (s32 *)&D_801BBBF0 + 30) goto loop5;
    F(s32, 0x1AC) = 0;
    func_8014AD20();
    func_80129F70();
    D_801BBDFC = 0;
    D_801BBE00 = 0;
    D_801BBE04 = 0;
    D_801BBE08 = 0;
    func_80151B30();
    func_8001F6FC();
    func_80017608();
    func_80126794();
    F(s16, 0x18C) = 0;
    F(u8, 0x1035) = 0;
    F(u8, 0x1036) = 0;
    F(s32, 0x1048) = 0;
    if (F(u8, 0x180) == 1) {
        if (func_80125774(0x3000) == 0) {
        }
    } else if (F(u8, 0x180) == 2) {
        func_80124ED0(F(u16, 0x2C));
        if (func_80125774(-1) == 0) {
        }
    } else {
        func_80124ED0(F(u16, 0x2C));
    }
    func_800058DC(arg0, func_801243DC);
}
