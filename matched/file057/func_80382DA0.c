#include "common.h"
extern s32 D_80006214(void *);
extern u8 D_8008DA88[];
typedef struct func_80383210_StructGlobal {
    u8 pad0[0x21];
    u8 unk21;
    u8 unk22;
} func_80383210_StructGlobal;
extern func_80383210_StructGlobal D_80240730;
void *func_800058DC(void *, void *);
extern void func_801460C8(void *, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80381F40(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 *a7);
typedef struct func_80383210_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
    u8 pad9D[0xA9 - 0x9D];
    u8 unkA9;
    u8 padAA[0xB0 - 0xAA];
    s16 unkB0;
} func_80383210_Struct;
void func_80383210(func_80383210_Struct *arg0, void *arg1);
extern void func_803832F4();
extern void func_803833A8();

extern s32 func_8037BBCC(void *, s16, s16, s32, s32, s8 *);
extern void func_80382B2C(void *, s32, s32, s32, s8 *);
extern s8 D_801BCC20;

struct func_80382DA0_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
    u8 pad9D[0xC];
    u8 unkA9;
    u8 padAA;
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
};

struct func_80382DA0_StructColor {
    u8 pad0[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_80382DA0_StructEntry {
    u8 pad0[0x30];
    struct func_80382DA0_StructColor *unk30;
};

void func_80382DA0(struct func_80382DA0_Struct *arg0, s32 arg1) {
    s8 sp77;
    s32 i;

    if ((D_80240730.unk21 == 0) && (D_80240730.unk22 == 0)) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_803833A8);
        return;
    }
    func_801460C8(arg0, &sp77, 0x24, 0x38, 0xF0, 0x8C, 0xB, 0x20, 0x20, 0x20, 0x80, 2, 0x20, 0x20, 0x20, 0x40);
    i = 0;
    do {
        func_80382B2C(arg0, 0xF2, 0x5A, i & 0xFF, &sp77);
        i = (i + 1) & 0xFF;
    } while (i < 6);
    D_801BCC20 = 0;
    i = 0;
    arg1 = 0;
    do {
        func_8037BBCC(arg0, (s16)(((arg1 / 2) * 0x44) + 0x28), (s16)(((arg1 % 2) * 0x18) + 0x48), 0x20, 6, &sp77);
        func_8037BBCC(arg0, (s16)(((arg1 / 2) * 0x44) + 0x28), (s16)(((arg1 % 2) * 0x18) + 0x48), 0x20, i, &sp77);
        arg1 = (i = (i + 1) & 0xFF);
    } while (i < 6);
    D_801BCC20 = 1;
    i = 0;
    arg1 = 0;
    do {
        func_8037BBCC(arg0, (s16)(((arg1 / 2) * 0x44) + 0x28), (s16)(((arg1 % 2) * 0x18) + 0x90), 0x20, 6, &sp77);
        func_8037BBCC(arg0, (s16)(((arg1 / 2) * 0x44) + 0x28), (s16)(((arg1 % 2) * 0x18) + 0x90), 0x20, i, &sp77);
        arg1 = (i = (i + 1) & 0xFF);
    } while (i < 6);
    func_80381F40(arg0, 0x28, 0x3C, 0xFF, 0x80, 0, 8, (u8 *)&sp77);
    func_80381F40(arg0, 0x28, 0x84, 0, 0x80, 0xFF, 9, (u8 *)&sp77);
    func_80382B2C(arg0, 0xF2, 0x5C, 6, &sp77);
    func_80382B2C(arg0, 0xF2, 0x9C, 7, &sp77);
    arg0->unkAB = D_80006214(arg0);
    for (i = 7; i < 0x1F; i = (i + 1) & 0xFF) {
        ((struct func_80382DA0_StructEntry **)D_8008DA88)[i]->unk30->unk8 /= 4;
        ((struct func_80382DA0_StructEntry **)D_8008DA88)[i]->unk30->unk9 /= 4;
        ((struct func_80382DA0_StructEntry **)D_8008DA88)[i]->unk30->unkA /= 4;
    }
    arg0->unkA9 = 0;
    arg0->unk9C = 0;
    arg0->unkB0 = 0xA;
    if (D_80240730.unk21 == 0) {
        func_800058DC(arg0, func_803832F4);
        return;
    }
    func_800058DC(arg0, func_80383210);
}
