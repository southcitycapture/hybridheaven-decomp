#include "common.h"
extern u8 D_801BBBF0[];
extern void (*D_80089470)(void);


typedef struct func_8012798C_StructLight {
    u8 unk0, unk1, unk2, unk3;
    u8 unk4, unk5, unk6, unk7;
    u8 unk8, unk9, unkA, unkB;
    u8 unkC, unkD, unkE, unkF;
    u8 unk10, unk11, unk12, unk13;
    u8 pad14[4];
    u8 unk18, unk19, unk1A, unk1B;
    u8 unk1C, unk1D, unk1E, unk1F;
    u8 unk20, unk21, unk22, unk23;
} func_8012798C_StructLight;

typedef struct func_8012798C_StructPos {
    u8 pad[0x30];
    f32 x, y, z, a, b, c;
} func_8012798C_StructPos;

typedef struct func_8012798C_StructObj {
    u8 pad[0x2C];
    func_8012798C_StructPos *pos;
} func_8012798C_StructObj;

typedef struct func_8012798C_StructGlobals {
    u8 pad0[0xE8];
    void *unkE8;
    u8 padEC[0x7C];
    u16 unk168;
    u8 pad16A[0xDB6];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25;
    s8 unkF26, unkF27, unkF28;
    u8 unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E, unkF2F, unkF30, unkF31;
} func_8012798C_StructGlobals;

typedef struct func_8012798C_StructVector {
    s32 x, y, z;
} func_8012798C_StructVector;

extern s16 D_8008934C;
extern void *D_801BCD48;
extern void *D_801BCD4C;
extern void *D_801BCD50;
extern func_8012798C_StructLight D_801BCD58;
extern void func_80030388(void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#define S (*(func_8012798C_StructGlobals *)D_801BBBF0)
#define OBJ ((func_8012798C_StructObj *)S.unkE8)

void func_8012798C(s32 arg0, s32 arg1) {
    func_8012798C_StructVector color;

    if (OBJ != NULL) {
        D_801BCD58.unk10 = S.unkF26;
        D_801BCD58.unk11 = S.unkF27;
        D_801BCD58.unk12 = S.unkF28;
        D_801BCD58.unk20 = S.unkF2C;
        D_801BCD58.unk3 = 0;
        D_801BCD58.unk7 = 0;
        D_801BCD58.unkB = 0;
        D_801BCD58.unkF = 0;
        D_801BCD58.unk13 = 0;
        D_801BCD58.unk1B = 0;
        D_801BCD58.unk1F = 0;
        D_801BCD58.unk23 = 0;
        color.x = S.unkF20;
        D_801BCD58.unk0 = color.x;
        D_801BCD58.unk4 = color.x;
        color.y = S.unkF21;
        D_801BCD58.unk1 = color.y;
        D_801BCD58.unk5 = color.y;
        color.z = S.unkF22;
        D_801BCD58.unk2 = color.z;
        D_801BCD58.unk6 = color.z;
        D_801BCD58.unk8 = S.unkF23;
        D_801BCD58.unkC = S.unkF23;
        D_801BCD58.unk9 = S.unkF24;
        D_801BCD58.unkD = S.unkF24;
        D_801BCD58.unkA = S.unkF25;
        D_801BCD58.unkE = S.unkF25;
        D_801BCD58.unk18 = S.unkF29;
        D_801BCD58.unk1C = S.unkF29;
        D_801BCD58.unk19 = S.unkF2A;
        D_801BCD58.unk1D = S.unkF2A;
        D_801BCD58.unk1A = S.unkF2B;
        D_801BCD58.unk1E = S.unkF2B;
        D_801BCD58.unk21 = S.unkF2D;
        D_801BCD58.unk22 = S.unkF2E;
        D_801BCD48 = D_801BBBF0 + (D_8008934C << 5) + 0xF50;
        D_801BCD4C = D_801BBBF0 + (D_8008934C << 4) + 0xF90;
        D_801BCD50 = D_801BBBF0 + (D_8008934C << 6) + 0xFB0;
        if (S.unk168 == 1) {
            func_80030388(D_801BCD50, D_801BCD48, D_801BCD4C, 0.0f, 25.0f, -55.0f, 0.0f, 15.0f, 0.0f, 0.0f, 1.0f, 0.0f, 13.0f, 25.0f, 30.0f, 80.0f, 10.0f, 50.0f, 32, 32);
            return;
        }
        if (S.unk168 == 2) {
            func_80030388(D_801BCD50, D_801BCD48, D_801BCD4C, 160.0f, 120.0f, 100.0f, 225.0f, 80.0f, 0.0f, 0.0f, 1.0f, 0.0f, S.unkF2F, S.unkF30, S.unkF31, 30.0f, 20.0f, -40.0f, 32, 32);
            return;
        }
        func_80030388(D_801BCD50, D_801BCD48, D_801BCD4C, OBJ->pos->x, OBJ->pos->y, OBJ->pos->z, OBJ->pos->a, OBJ->pos->b, OBJ->pos->c, 0.0f, 1.0f, 0.0f, S.unkF26, S.unkF27, S.unkF28, S.unkF2C, S.unkF2D, S.unkF2E, 32, 32);
    }
}
