#include "context.h"
void func_800058DC(void *, void (*)());
s32 func_80133A24(s32);

struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern struct func_80242C60_Cfg D_80258D8C;
extern s32 D_80258DF8[];
extern void func_80242D98();
s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);
void func_80010550(s32, void *);

struct func_80242C60_Body {
    u8 pad0[0x12];
    u16 unk12;
    u8 pad1[0x24 - 0x14];
    s32 unk24;
    u8 pad2[0x30 - 0x28];
    s32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_80242C60_Node {
    u8 pad0[0x2C];
    struct func_80242C60_Body *unk2C;
};

struct func_80242C60_Sub {
    u8 pad0[0xC];
    u16 unkC;
};

struct func_80242C60_Arg0 {
    u8 pad0[0x24];
    struct func_80242C60_Node *unk24;
    u8 pad1[0x5C - 0x28];
    struct func_80242C60_Sub *unk5C;
};

void func_80242C60(struct func_80242C60_Arg0 *arg0, s32 arg1) {
    struct func_80242C60_Body *temp_a0;
    struct func_80242C60_Sub *temp_s0;
    struct func_80242C60_Node **var_v0;
    s32 var_a1;

    temp_s0 = arg0->unk5C;
    arg0->unk24->unk2C->unk12 = 0x1000;
    if (func_8012CE9C(arg1, temp_s0, D_80258D8C, 0x14) == 0) {
        func_80010550(arg1, temp_s0);
        if (func_80133A24(0x140) != 0) {
            var_a1 = 1;
            var_v0 = (struct func_80242C60_Node **) arg1 + 1;
            if (temp_s0->unkC >= 2) {
                do {
                    var_a1 += 1;
                    var_v0 += 1;
                    temp_a0 = var_v0[-1]->unk2C;
                    temp_a0->unk24 |= 0x100;
                    var_v0[-1]->unk2C->unk30 = (s32) D_80258DF8 | 0x40000000;
                    var_v0[-1]->unk2C->unk48 = 0xFF;
                    var_v0[-1]->unk2C->unk49 = 0xFF;
                    var_v0[-1]->unk2C->unk4A = 0xFF;
                    var_v0[-1]->unk2C->unk4B = 0xFF;
                } while (var_a1 < (s32) temp_s0->unkC);
            }
            func_800058DC(arg0, func_80242D98);
        }
    }
}
