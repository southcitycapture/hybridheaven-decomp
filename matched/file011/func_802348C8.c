#include "common.h"

struct func_802348C8_StructPart {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_802348C8_StructNode {
    u8 pad0[0x30];
    struct func_802348C8_StructPart *unk30;
};

struct func_802348C8_StructArg {
    struct func_802348C8_StructNode *unk0;
    struct func_802348C8_StructNode *unk4;
};

void func_802348C8(struct func_802348C8_StructArg *arg0, s16 arg1, s16 arg2) {
    struct func_802348C8_StructPart *temp_v0;
    struct func_802348C8_StructPart *temp_v1;

    temp_v0 = arg0->unk0->unk30;
    temp_v0->unk0 = (arg1 - (temp_v0->unk4 / 2)) + 0xA0;
    temp_v1 = arg0->unk4->unk30;
    temp_v1->unk0 = (arg2 - (temp_v1->unk4 / 2)) + 0xA0;
}
