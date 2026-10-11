#include "context.h"

struct func_8037D088_StructC {
    u8 pad[0xB];
    s8 unkB;
};
struct func_8037D088_StructB {
    u8 pad[0x30];
    struct func_8037D088_StructC *unk30;
};
struct func_8037D088_StructA {
    u8 pad[0xC];
    u8 *unkC;
    u8 pad10[0x94 - 0x10];
    u8 *unk94;
    u8 pad98[0xB0 - 0x98];
    s16 unkB0;
};
extern void func_80006088(s32);
extern void func_8037C554();

void func_8037D088(struct func_8037D088_StructA *arg0, s32 arg1) {
    u8 *temp_v1;
    u8 i;
    s32 v;
    struct func_8037D088_StructB **tbl;

    temp_v1 = arg0->unk94;
    i = 0;
    if (arg0->unkB0 < 0) {
        if ((D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) ||
            (temp_v1 == D_801BBBF0 + 0x7E8 && ((*(u32 *)(temp_v1 + 0x30) << 1) >> 30) == 3)) {
            v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
            arg0->unkC[0x9B] ^= v;
            func_80005700(arg0, D_801BBBF0);
            return;
        }
        func_80006088(((s32 *)&D_8008DA88)[5]);
        func_80006088(((s32 *)&D_8008DA88)[4]);
        func_80006088(((s32 *)&D_8008DA88)[3]);
        func_80006088(((s32 *)&D_8008DA88)[2]);
        func_80006088(((s32 *)&D_8008DA88)[1]);
        func_80006088(((s32 *)&D_8008DA88)[0]);
        v = (temp_v1 == D_801BBBF0 + 0x44C) ? 1 : 2;
        arg0->unkC[0x9B] ^= v;
        func_800058DC(arg0, func_8037C554);
        return;
    }
    tbl = (struct func_8037D088_StructB **)&D_8008DA88;
    do {
        tbl[i]->unk30->unkB = (arg0->unkB0 * 0xFF) / 8;
        i++;
    } while (i < 6);
    arg0->unkB0 -= 1;
}
