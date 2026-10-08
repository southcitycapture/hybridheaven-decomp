#include "common.h"

struct func_802420C4_Sub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x48 - 0x14];
    u8 unk48;
};

struct func_802420C4_Node {
    u8 pad0[0x30];
    struct func_802420C4_Sub *unk30;
};

struct func_802420C4_Pair {
    struct func_802420C4_Node *unk0;
    struct func_802420C4_Node *unk4;
};

struct func_802420C4_Obj {
    u8 pad0[0x94];
    s16 unk94;
};

extern void func_800058DC(void *, void *);
extern void func_80242164(void);

void func_802420C4(struct func_802420C4_Obj *arg0, struct func_802420C4_Pair *arg1) {
    struct func_802420C4_Sub *temp_v0;
    struct func_802420C4_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk48 += 0xF;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk10 += 0x7F;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk10 += 0x7F;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk12 += 0x7F;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk12 += 0x7F;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_80242164);
    }
}
