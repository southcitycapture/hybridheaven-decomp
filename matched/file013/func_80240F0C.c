#include "context.h"

struct func_80240F0C_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8C - 0x30];
    void (*unk8C)(void);
    f32 unk90;
};

struct func_80240F0C_Node {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_80240F0C_Pair {
    struct func_80240F0C_Node *unk0;
    struct func_80240F0C_Node *unk4;
};

extern s8 D_801BBD76;
extern void func_80240F4C(void);

void func_80240F0C(struct func_80240F0C_Self *arg0, struct func_80240F0C_Pair *arg1) {
    D_801BBD76 = 1;
    arg0->unk2C = 0x8000;
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg0->unk8C = func_80240F4C;
    arg0->unk90 = 5.0f;
}
