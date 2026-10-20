#include "context.h"
extern struct func_8001EA48_Struct D_801BBBF0;
void func_80006214(s32);
struct func_8001E87C_Sub {
    u8 pad[0xB];
    s8 unkB;
    u8 pad2[4];
    s16 unk10;
};
struct func_8001E87C_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_8001E87C_Sub *unk30;
};
struct func_8001EA48_Struct {
    u8 pad[0x156];
    s16 unk156;
    u8 pad2[0x15D - 0x158];
    u8 unk15D;
};

struct func_8001E66C_StructState {
    u8 pad[0x154];
    u16 unk154;
    u8 pad2[2];
    u16 unk158;
    u8 pad3[3];
    u8 unk15D;
};

extern void func_800058DC(s32, void (*)(void));
extern void func_8001E768(void *arg0, struct func_8001E87C_Struct **arg1);
extern u8 D_80044914;
extern s16 D_8008934C;
#define STATE (*(struct func_8001E66C_StructState *)&D_801BBBF0)

void func_8001E66C(s32 arg0, struct func_8001E87C_Struct **arg1) {
    s32 temp_a0;
    u8 temp_t0;
    struct func_8001E87C_Sub *temp_v1;

    func_80006214(arg0);
    temp_v1 = (*arg1)->unk30;
    temp_a0 = ++STATE.unk158;
    if (temp_a0 < (s32) STATE.unk154) {
        temp_v1->unkB = (s32) (temp_a0 * 0xFF) / (s32) STATE.unk154;
        return;
    }
    *(u8 *)&temp_v1->unkB = 0xFF;
    temp_v1->unk10 = 0;
    if (STATE.unk154 == STATE.unk158) {
        D_80044914 = (u8) D_8008934C;
    }
    if (D_80044914 != D_8008934C) {
        STATE.unk158 = 0;
        STATE.unk15D &= 0xF;
        STATE.unk15D |= 0x80;
        func_800058DC(arg0, func_8001E768);
    }
}
