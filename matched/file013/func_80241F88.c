#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80241FEC(void);

struct func_80241F88_Sub {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_80241F88_Node {
    u8 pad0[0x30];
    struct func_80241F88_Sub *unk30;
};

struct func_80241F88_Pair {
    struct func_80241F88_Node *unk0;
    struct func_80241F88_Node *unk4;
};

struct func_80241F88_Obj {
    u8 pad0[0x94];
    s16 unk94;
};

void func_80241F88(struct func_80241F88_Obj *arg0, struct func_80241F88_Pair *arg1) {
    struct func_80241F88_Sub *temp_v0;
    struct func_80241F88_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk12 = temp_v0->unk12 + 0x7F;
    temp_v1 = arg1->unk4->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x7F;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 7;
        func_800058DC(arg0, func_80241FEC);
    }
}
