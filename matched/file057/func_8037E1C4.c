#include "context.h"

struct func_8037E1C4_Entry {
    s16 unk0;
    s16 unk2;
    u8 pad4[7];
    u8 unkB;
};

struct func_8037E1C4_Table {
    u8 pad[0x30];
    struct func_8037E1C4_Entry *unk30;
};

struct func_8037E1C4_Obj {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 pad91[7];
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    u8 pad9C[8];
    u8 unkA4;
    u8 padA5[4];
    u8 unkA9;
    u8 unkAA;
    u8 padAB[5];
    s16 unkB0;
};

extern void func_8001B204();
s32 func_8037D320(void *, u8);
extern void func_80005700();
extern u8 D_8038BC4C[];
extern u8 D_8038BC54[];
extern u8 D_8038BC5C[];
extern u8 D_8038BC60[];

void func_8037E1C4(struct func_8037E1C4_Obj *arg0, s32 arg1) {

    ((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);
    ((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unkB = (s8)((s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4);

    func_8001B204(arg0->unkA9, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[0]->unk30->unk2 - arg0->unk9A) + 3), D_8038BC4C,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk98, func_8037D320(arg0, arg0->unk90));

    func_8001B204(arg0->unkAA, (s16)(((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk0 + 0x468),
        (s16)((((struct func_8037E1C4_Table **)&D_8008DA88)[1]->unk30->unk2 - arg0->unk9B) + 3), D_8038BC54,
        (s32)(arg0->unkB0 * 0xFF) / (s32)arg0->unkA4, arg0->unk99, func_8037D320(arg0, (arg0->unk90 ^ 1) & 0xFF));

    arg0->unkB0 = (s16)(arg0->unkB0 - 1);
    if (arg0->unkB0 < 0) {
        func_8001B204(arg0->unkA9, 0, 0x64, D_8038BC5C);
        func_8001B204(arg0->unkAA, 0, 0x64, D_8038BC60);
        arg0->unkC[0xAE] = 1;
        func_80005700(arg0);
    }
}
