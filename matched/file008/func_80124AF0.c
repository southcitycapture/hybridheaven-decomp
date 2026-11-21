#include "common.h"
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
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801451C0_a0 *mid; /* 369 uses */
    /* 0x028 */ u8 pad28[0x8C];
} T_func_80107830_a0;
typedef struct T_func_8010E680_a0 { /* size >= 0xB4; compacted: the 1 of 45 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801FA248_a0 *unk24; /* 23 uses */
    /* 0x028 */ u8 pad28[0x8C];
} T_func_8010E680_a0;
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 14 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x1D];
    /* 0x01D */ u8 unk1D; /* 13 uses */
    /* 0x01E */ u8 pad1E[0xC];
    /* 0x02A */ u16 unk2A; /* 3 uses */
    /* 0x02C */ u8 pad2C[0x4];
    /* 0x030 */ u16 unk30; /* 44 uses */
    /* 0x032 */ u8 pad32[0x22];
    /* 0x054 */ struct T_func_8010E680_a0 *unk54; /* 17 uses */
    /* 0x058 */ u8 pad58[0x84];
    /* 0x0DC */ struct T_func_80107830_a0 *inner; /* 406 uses */
    /* 0x0E0 */ struct T_func_801451C0_a0 *unkE0; /* 1028 uses */
    /* 0x0E4 */ struct T_func_8010E680_a0 *unkE4; /* 10 uses */
    /* 0x0E8 */ struct T_func_801FA248_a0 *unkE8; /* 1116 uses */
    /* 0x0EC */ u8 padEC[0x7C];
    /* 0x168 */ u16 unk168; /* 6 uses */
    /* 0x16A */ u8 pad16A[0x10];
    /* 0x17A */ u16 unk17A; /* 4 uses */
    /* 0x17C */ u8 pad17C[0x1];
    /* 0x17D */ u8 unk17D; /* 4 uses */
    /* 0x17E */ u8 unk17E; /* 8 uses */
    /* 0x17F */ u8 pad17F[0x3];
    /* 0x182 */ u8 unk182; /* 12 uses */
    /* 0x183 */ u8 pad183[0xD6D];
    /* 0xEF0 */ u16 unkEF0; /* 297 uses */
    /* 0xEF2 */ u8 padEF2[0x262];
} T_D_801BBBF0;
extern void func_800058DC(s32, void *);
void func_80124C0C(s32 arg0, s32 arg1);
extern void func_80124C54();


extern u8 B_801BBBF0[];
#define S ((T_D_801BBBF0 *)B_801BBBF0)
extern u8 func_80151B8C();
extern void func_80151BD0(u8, s32);
extern void func_8014B9FC();
extern s32 func_8012FBC4(s32);
extern s16 D_80089358;

void func_80124AF0(s32 arg0, s32 arg1) {
    S->unk17E = 6;
    S->unkEF0 |= 0x10;
    if (S->unk182 == 0) {
        S->unkEF0 &= ~0x10;
        S->unkE0 = S->inner->mid;
        if (S->unkE0 != 0) {
            s32 r;
            s32 result = func_80151B8C();
            func_80151BD0(r = result, result);
            if (r == 2 || 4 == r) {
                S->unk2A = 0;
                S->unk30 = 0;
                D_80089358 = 0;
                S->unk17A = S->unk1D + 1;
                S->unk1D = 0;
            }
            func_8014B9FC();
#undef S
#define S ((T_D_801BBBF0 *)&D_801BBBF0)
            S->unkE4 = S->unk54;
            S->unkE8 = S->unkE4->unk24;
            if (func_8012FBC4(arg0) != 0) {
                func_800058DC(arg0, (void *)func_80124C0C);
            } else {
                S->unk17D = 0;
                S->unk168 = 0;
                func_800058DC(arg0, (void *)func_80124C54);
            }
        }
    }
}
