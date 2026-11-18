#include "common.h"
extern u8 D_801BBBF0[];
typedef struct T_D_700000 { /* size >= 0x24 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 unkB; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ u8 unk10; /* 1 use */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ u8 unk12; /* 1 use */
    /* 0x013 */ u8 unk13; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ u8 unk18; /* 1 use */
    /* 0x019 */ u8 unk19; /* 1 use */
    /* 0x01A */ u8 unk1A; /* 1 use */
    /* 0x01B */ u8 unk1B; /* 1 use */
    /* 0x01C */ u8 unk1C; /* 1 use */
    /* 0x01D */ u8 unk1D; /* 1 use */
    /* 0x01E */ u8 unk1E; /* 1 use */
    /* 0x01F */ u8 unk1F; /* 1 use */
    /* 0x020 */ u8 unk20; /* 1 use */
    /* 0x021 */ u8 unk21; /* 1 use */
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 unk23; /* 1 use */
} T_D_700000;
typedef struct T_func_8038BDC0_ret { /* size >= 0x5C */
    /* 0x000 */ s16 unk0; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ f32 y; /* 4 uses */
    /* 0x00C */ s32 z; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ u16 unk18; /* 2 uses */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ f32 unk1C; /* 21 uses */
    /* 0x020 */ f32 unk20; /* 2 uses */
    /* 0x024 */ f32 unk24; /* 22 uses */
    /* 0x028 */ f32 unk28; /* 20 uses */
    /* 0x02C */ f32 unk2C; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 350 uses */
    /* 0x034 */ f32 unk34; /* 299 uses */
    /* 0x038 */ f32 unk38; /* 347 uses */
    /* 0x03C */ f32 unk3C; /* 226 uses */
    /* 0x040 */ f32 unk40; /* 196 uses */
    /* 0x044 */ f32 unk44; /* 226 uses */
    /* 0x048 */ f32 unk48; /* 5 uses */
    /* 0x04C */ f32 unk4C; /* 5 uses */
    /* 0x050 */ f32 unk50; /* 5 uses */
    /* 0x054 */ f32 unk54; /* 2 uses */
    /* 0x058 */ s32 unk58; /* 2 uses */
} T_func_8038BDC0_ret;
typedef struct T_func_801FA248_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038BDC0_ret *unk2C; /* 1107 uses */
    /* 0x030 */ struct T_func_801FA248_a0_p30 *unk30; /* 9 uses */
} T_func_801FA248_a0;
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 20 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xE8];
    /* 0x0E8 */ struct T_func_801FA248_a0 *unkE8; /* 1116 uses */
    /* 0x0EC */ u8 padEC[0x7C];
    /* 0x168 */ u16 unk168; /* 6 uses */
    /* 0x16A */ u8 pad16A[0xDB6];
    /* 0xF20 */ u8 unkF20; /* 55 uses */
    /* 0xF21 */ u8 unkF21; /* 52 uses */
    /* 0xF22 */ u8 unkF22; /* 52 uses */
    /* 0xF23 */ u8 unkF23; /* 48 uses */
    /* 0xF24 */ u8 unkF24; /* 50 uses */
    /* 0xF25 */ u8 unkF25; /* 52 uses */
    /* 0xF26 */ s8 unkF26; /* 45 uses */
    /* 0xF27 */ s8 unkF27; /* 41 uses */
    /* 0xF28 */ s8 unkF28; /* 41 uses */
    /* 0xF29 */ u8 unkF29; /* 33 uses */
    /* 0xF2A */ u8 unkF2A; /* 36 uses */
    /* 0xF2B */ u8 unkF2B; /* 33 uses */
    /* 0xF2C */ s8 unkF2C; /* 34 uses */
    /* 0xF2D */ s8 unkF2D; /* 34 uses */
    /* 0xF2E */ s8 unkF2E; /* 34 uses */
    /* 0xF2F */ s8 unkF2F; /* 2 uses */
    /* 0xF30 */ s8 unkF30; /* 2 uses */
    /* 0xF31 */ s8 unkF31; /* 2 uses */
    /* 0xF32 */ u8 padF32[0x222];
} T_D_801BBBF0;


typedef struct func_8012798C_StructPos {
    u8 pad[0x30];
    f32 x, y, z, a, b, c;
} func_8012798C_StructPos;
typedef struct func_8012798C_StructObj {
    u8 pad[0x2C];
    func_8012798C_StructPos *pos;
} func_8012798C_StructObj;
extern s16 D_8008934C;
extern void *D_801BCD48;
extern void *D_801BCD4C;
extern void *D_801BCD50;
extern T_D_700000 D_801BCD58;
extern void func_80030388(void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#define S (*(T_D_801BBBF0 *)D_801BBBF0)
#define OBJ ((func_8012798C_StructObj *)S.unkE8)

void func_8012798C(s32 arg0, s32 arg1) {
    s32 pad[3];

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
        D_801BCD58.unk0 = S.unkF20;
        D_801BCD58.unk4 = S.unkF20;
        D_801BCD58.unk1 = S.unkF21;
        D_801BCD58.unk5 = S.unkF21;
        D_801BCD58.unk2 = S.unkF22;
        D_801BCD58.unk6 = S.unkF22;
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
