#include "context.h"

struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};

struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};

struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};

extern struct func_80246B38_StructA *D_801BBCD8;
extern void func_80246C20(void);
extern void func_80020718(s32);

void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        if (func_80133A24(0x73) != 0) {
            func_801339D0(0x73);
            arg0->unk90 = 0;
            func_80011198(arg1, temp_a1);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246C20);
            return;
        }
        func_8013A1B4((void **)arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
    }
}
