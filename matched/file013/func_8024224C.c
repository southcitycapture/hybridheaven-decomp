#include "context.h"

extern void func_802422EC();

struct func_8024224C_Sub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x49 - 0x14];
    u8 unk49;
};

struct func_8024224C_Node {
    u8 pad0[0x30];
    struct func_8024224C_Sub *unk30;
};

struct func_8024224C_Pair {
    struct func_8024224C_Node *unk0;
    struct func_8024224C_Node *unk4;
};

struct func_8024224C_Obj {
    u8 pad0[0x94];
    s16 unk94;
};

void func_8024224C(struct func_8024224C_Obj *arg0, struct func_8024224C_Pair *arg1) {
    struct func_8024224C_Sub *temp_v0;
    struct func_8024224C_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk49 = temp_v0->unk49 - 0xE;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk10 = temp_v1->unk10 + 0x1FF;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk10 = temp_v0->unk10 + 0x1FF;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x1FF;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk12 = temp_v0->unk12 + 0x1FF;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 0x1F;
        func_800058DC(arg0, func_802422EC);
    }
}
