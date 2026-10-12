#include "context.h"
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;

struct func_80249CF8_Obj {
    u8 pad[0x5C];
    s32 unk5C;
};
struct func_80249CF8_Vec {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80249CF8_Mid {
    u8 pad[0x2C];
    struct func_80249CF8_Vec *unk2C;
};
struct func_80249CF8_Bbf0 {
    u8 pad[0xE0];
    struct func_80249CF8_Mid *unkE0;
};

extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_80249DD0();
extern func_8024AA38_Struct D_80253094;
extern u8 D_802532B4[];

void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1) {
    s32 tmp = arg0->unk5C;

    if (func_80010550(arg1, tmp) != 0 && func_800178E8() != 0) {
        func_800179B0(D_802532B4);
        func_8013A1B4(arg1, D_80253094, 0xFFFFFF);
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unk4 = 100.0f;
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unk8 = -200.0f;
        ((struct func_80249CF8_Bbf0 *)&D_801BBBF0)->unkE0->unk2C->unkC = -180.0f;
        func_800058DC(arg0, func_80249DD0);
    }
}
