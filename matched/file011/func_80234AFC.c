#ifndef ARG0_80235394
void func_80020744(s32);
#endif
#include "context.h"

typedef struct func_80234AFC_Item {
    u8 unk0;
    u8 pad[3];
    s32 ***unk4;
} func_80234AFC_Item;
typedef struct func_80234AFC_Ent {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    u8 unk8;
    u8 pad[3];
} func_80234AFC_Ent;
typedef struct func_80234AFC_Obj {
    u8 pad[0xA1];
    s8 unkA1;
    s8 unkA2;
    s8 unkA3;
    u8 pad2[0xC];
    u8 *unkB0;
} func_80234AFC_Obj;
typedef struct func_80234AFC_Tgt {
    u8 pad[0x22];
    u8 unk22;
} func_80234AFC_Tgt;

#define FUNC_80234AFC_E ((func_80234AFC_Ent *)D_802407E8 + i)

void func_80234AFC(func_80234AFC_Obj *arg0, func_80234AFC_Tgt **arg1) {
    s8 h;
    s8 r;
    s8 sp7D;
    u8 i;
    u8 k;
    s16 x;
    s16 y;
    func_80234AFC_Item *base;
    func_80234AFC_Item *it;

    sp7D = 0;
    base = (func_80234AFC_Item *)(arg0->unkB0 + 4);
    for (i = 0; i < arg0->unkA3; i++) {
        k = arg0->unkA1 * 5 + i - 5;
        it = (func_80234AFC_Item *)((u8 *)base + (k << 3));
        FUNC_80234AFC_E->unk4 = (s32)**it->unk4;
        FUNC_80234AFC_E->unk8 = it->unk0;
        h = func_8023A1D4((u8 *)**it->unk4) / 2;
        x = arg0->unkA2 * -0x118 + 0xA0;
        y = arg0->unkA3 * -9 + i * 0x12 + 0x85;
        r = func_80006214(arg0);
        FUNC_80234AFC_E->unk0 = x;
        FUNC_80234AFC_E->unk2 = y;
        func_80146208((s32)arg0, &sp7D, 0x26, (s16)(x * 1), y, h * 8, 0x10, 0, 0, 0xFF, 0x220, 3);
        arg1[r]->unk22 = 0;
    }
}
#undef FUNC_80234AFC_E
