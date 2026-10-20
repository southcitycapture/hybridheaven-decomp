#include "context.h"


s32 func_80016A24(s8 *);                            /* extern */
extern s32 D_8008DC94;
extern s32 D_8008DC98;
extern s32 D_8008DC9C;

void func_80015B50(struct func_80015B50_Struct *arg0) {
    u8 sp2C[4];
    s32 sp28;

    func_80016D50(8);
    func_80016D50(8);
    func_80016D50(8);
    D_8008DC9C = 0x80000000;
    sp2C[0] = func_80016D50(8) & 0xFF;
    if (sp2C[0] != 0x1A) {
        sp2C[1] = func_80016D50(8);
        sp2C[2] = func_80016D50(8);
        sp2C[3] = func_80016D50(8);
        D_8008DC9C = func_80016A24(sp2C);
        if (func_80016D50(8) != 0x1A) {
            do {
            } while (func_80016D50(8) != 0x1A);
        }
    }
    if (func_80016D50(8) != 0) {
        do {
        } while (func_80016D50(8) != 0);
    }
    func_80016D50(8);
    sp28 = func_80016D50(4);
    func_80016D50(4);
    arg0->unk8 = func_80016D50(0x10);
    D_8008DC94 = func_80016D50(0x10);
    D_8008DC98 = func_80016D50(0x10);
    arg0->unk0 = D_8008DC94;
    arg0->unk4 = D_8008DC98;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk14 = D_8008DC9C;

    if (sp28 == 4) {
        arg0->unk10 = 2;
        arg0->unkC = (((D_8008DC94 + 1) & ~1) * D_8008DC98 * arg0->unk8) / 8;
        return;
    }
    if ((arg0->unk8 == 0xF) || (arg0->unk8 == 0x10)) {
        arg0->unk10 = 0;
        arg0->unkC = D_8008DC94 * D_8008DC98 * 2;
        return;
    }
    arg0->unk10 = 1;
    arg0->unkC = ((((D_8008DC94 * D_8008DC98 * arg0->unk8) / 8) + ((D_8008DC94 * D_8008DC98 & 1) * 2) + ((arg0->unk8 == 4) << 5) + ((arg0->unk8 == 8) << 9) + 7) & ~7);
}
