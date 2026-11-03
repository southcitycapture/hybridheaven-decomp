#include "common.h"
typedef struct T_D_8016379C { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ u16 flags; /* 3 uses */
    /* 0x00A */ u16 unkA; /* 4 uses */
    /* 0x00C */ struct T_func_80007BD0_a1 *unkC; /* 29 uses */
} T_D_8016379C;
extern T_D_8016379C D_8017E484;
typedef struct T_D_8017E494 { /* size >= 0x10 */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ f32 *unk4; /* 1 use */
    /* 0x008 */ f32 *unk8; /* 1 use */
    /* 0x00C */ f32 *unkC; /* 1 use */
} T_D_8017E494;
extern T_D_8017E494 D_8017E494;
typedef struct T_func_80107830_a0 { /* size >= 0xB4; compacted: the 1 of 53 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x63];
    /* 0x063 */ u8 unk63; /* 18 uses */
    /* 0x064 */ u8 pad64[0x50];
} T_func_80107830_a0;
extern struct T_func_80107830_a0 *D_801BBCCC;
extern s32 D_801BEB50;
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern s32 func_801302CC();
void func_8013DA10(s32 arg0, s32 arg1);


typedef struct func_8013D620_StructB {
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
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_8013D620_StructB;

typedef struct func_8013D620_StructA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8013D620_StructB *unk30;
} func_8013D620_StructA;
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern void func_8012C784(s32, s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 D_8017B3E0;

void func_8013D620(s32 arg0, func_8013D620_StructA **arg1) {
    s32 i;
    T_D_8017E494 sp54;
    T_D_8017E494 *p;

    sp54 = D_8017E494;
    if (D_801BBCCC->unk63 != 0) {
        func_80005E44(arg0, &D_8017E484);
        func_80005E44(arg0, &D_8017E484);
        for (i = 0; i < 3; i++) {
            ((T_D_8017E494 *)&D_801BEB50)[i] = sp54;
            func_80005E44(arg0, &D_8017E484);
        }
        func_80006214(arg0);
        arg1[0]->unk22 = 0;
        arg1[0]->unk30->unk30 = (s32)&D_8017B3E0 | 0x40000000;
        arg1[0]->unk30->unk24 |= 0x100;
        arg1[0]->unk30->unk48 = 0;
        arg1[0]->unk30->unk49 = 0xFF;
        arg1[0]->unk30->unk4A = 0;
        arg1[0]->unk30->unk4B = 0x40;
        if (func_801302CC() == 0) {
            arg1[0]->unk30->unk18 = 0.1f;
            arg1[0]->unk30->unk1C = 1.0f;
            arg1[0]->unk30->unk20 = 0.1f;
        } else {
            arg1[0]->unk30->unk18 = 0.075f;
            arg1[0]->unk30->unk1C = 1.0f;
            arg1[0]->unk30->unk20 = 0.075f;
        }
        func_8012C784(arg0, 0, 0);
        arg1[1]->unk22 = 0;
        arg1[1]->unk30->unk30 = (s32)&D_8017B3E0 | 0x40000000;
        arg1[1]->unk30->unk24 |= 0x100;
        arg1[1]->unk30->unk48 = 0xFF;
        arg1[1]->unk30->unk49 = 0;
        arg1[1]->unk30->unk4A = 0;
        arg1[1]->unk30->unk4B = 0xC0;
        arg1[1]->unk30->unk4 = 0.0f;
        arg1[1]->unk30->unk8 = 0.0f;
        arg1[1]->unk30->unkC = 0.0f;
        arg1[1]->unk30->unk10 = 0;
        arg1[1]->unk30->unk12 = 0;
        arg1[1]->unk30->unk14 = 0;
        arg1[1]->unk30->unk18 = 0.3f;
        arg1[1]->unk30->unk1C = 0.3f;
        arg1[1]->unk30->unk20 = 0.3f;
        func_8012C89C(arg0, 1, 0x3F2, 0);
        for (i = 0; i < 3; i++) {
            arg1[i + 2]->unk22 = 0;
            arg1[i + 2]->unk30->unk30 = (s32)&D_8017B3E0 | 0x40000000;
            arg1[i + 2]->unk30->unk24 |= 0x100;
            arg1[i + 2]->unk30->unk48 = 0xFF;
            arg1[i + 2]->unk30->unk49 = 0xFF;
            arg1[i + 2]->unk30->unk4A = 0xFF;
            arg1[i + 2]->unk30->unk4B = 0xC0;
            arg1[i + 2]->unk30->unk4 = 0.0f;
            arg1[i + 2]->unk30->unk8 = 0.0f;
            arg1[i + 2]->unk30->unkC = 0.0f;
            arg1[i + 2]->unk30->unk10 = 0;
            arg1[i + 2]->unk30->unk12 = 0;
            arg1[i + 2]->unk30->unk14 = 0;
            arg1[i + 2]->unk30->unk18 = 0.3f;
            arg1[i + 2]->unk30->unk1C = 0.3f;
            arg1[i + 2]->unk30->unk20 = 0.3f;
            func_8012C89C(arg0, i + 2, 0x3F3, 0);
        }
        func_800058DC(arg0, (void (*)(void))func_8013DA10);
    }
}
