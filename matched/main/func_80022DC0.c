#include "context.h"

typedef struct func_80022DC0_Struct {
    u32 unk0;
    u8 pad4;
    u8 unk5;
    u8 pad6[0xE - 0x6];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x1A - 0x10];
    u16 unk1A;
    u8 pad1C[0xD8 - 0x1C];
} func_80022DC0_Struct;

extern void func_80022528(void);
extern void func_80022694(void);
extern void func_80022D20(u16);
extern void func_80023174(void);
extern void func_80034EE0(s32, void *);
extern u32 D_801B61C8;
extern u16 D_800CBAB2;
extern u8 D_800CBAB4;
extern u8 D_800CBAB5;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];

#define CUR ((func_80022DC0_Struct *)D_800CBDA4)

void func_80022DC0(void) {
    s32 i;
    u16 *p;

    if (D_800CBBD8[0] == 2 && (D_801B61C8 & 0x7FFF) < 0x607) {
        D_800CBBD8[0] = 0;
    }
    if (D_800CBAB6 != 0 && !(D_800CBAB2 & 3)) {
        D_800CBAB7 += D_800CBAB6;
        if (D_800CBAB7 < 0x80) {
            if (D_800CBAB6 < 0) {
                D_800CBAB7 = 0x7F;
            } else {
                D_800CBAB7 = 0;
            }
            D_800CBAB6 = 0;
        }
    }
    if (D_800CBAC0.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBAC0.unk2 -= D_800CBAC0.unk0;
        if (D_800CBAC0.unk2 < 0x1000) {
            func_80022528();
        }
    }
    if (D_800CBABC.unk2 != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        D_800CBABC.unk2 -= D_800CBABC.unk0;
        if (D_800CBABC.unk2 < 0x1000) {
            func_80022694();
        }
    }
    if (D_800CBAB5 == 0 && !(D_800CBAB2 & 3)) {
        p = D_800CBAC8;
        i = 0;
        do {
            if (*p != 0) {
                D_800CBAC4[i].unk2 -= D_800CBAC4[i].unk0;
                if (D_800CBAC4[i].unk2 < 0x1000) {
                    func_80022D20(i);
                }
            }
            i++;
            p++;
        } while (i != 1);
    }
    if (*(u8 *)&D_800CBACC != 0 && D_800CBAB5 == 0 && !(D_800CBAB2 & 7)) {
        (*(u8 *)&D_800CBACC)--;
        D_800CBACA++;
    }
    if (D_800CBACD != 0 && !(D_800CBAB2 & 3)) {
        D_800CBACE += D_800CBACD;
        if (D_800CBACE < 0xB1) {
            if (D_800CBACD < 0) {
                D_800CBACE = 0xB0;
            } else {
                D_800CBACE = 0;
            }
            D_800CBACD = 0;
        }
    }
    for (D_800CBAB4 = 0; D_800CBAB4 < 20; D_800CBAB4++) {
        D_800CBDA4 = &((func_80022DC0_Struct *)&D_801B5520)[D_800CBAB4];
        if (CUR->unkF != 0) {
            CUR->unkF--;
            if (CUR->unkF == 0 && CUR->unkE != 0) {
                CUR->unkE = 0;
                func_80034EE0(D_800498F0, &D_800CBBE0[D_800CBAB4 * 0x1C]);
            }
        }
        if (CUR->unk0 != 0) {
            if (CUR->unk5 != 0) {
                CUR->unk5--;
            } else if ((CUR->unk0 & 0x7FFF) < 0x100) {
                if (D_800CBAB5 == 0) {
                    CUR->unk1A += D_800CBACA;
                    func_80023174();
                }
            } else {
                func_80023174();
            }
        }
    }
}
