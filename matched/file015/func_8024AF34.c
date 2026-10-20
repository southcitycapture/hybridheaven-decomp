#include "context.h"
struct func_8024B024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x1E];
    s32 unk5C;
};
void func_8024B024(struct func_8024B024_Struct *arg0, s32 arg1);
struct func_8024AF34_V { s32 a, b, c; };
struct func_8024AF34_B { u8 pad[0x12]; s16 unk12; };
struct func_8024AF34_A { u8 pad[0x2C]; struct func_8024AF34_B *unk2C; };
struct func_8024AF34_P { u8 pad[0x3C]; s16 unk3C; u8 pad2[0x1E]; s32 unk5C; };
extern s32 func_80011140(void *, s32, struct func_8024AF34_V, s32);
extern struct func_8024AF34_V D_80253488;
extern struct func_8024AF34_V D_80253494;

void func_8024AF34(arg0, arg1)
struct func_8024AF34_P *arg0;
struct func_8024AF34_A **arg1;
{
    s32 t = arg0->unk5C;
    (*arg1)->unk2C->unk12 += 0xB6;
    if (func_80011140(arg1, t, D_80253488, 0x14) != 0) {
        if ((*arg1)->unk2C->unk12 >= 0x2400) {
            func_8013A1B4(arg1, D_80253494, 0xFFFFFF);
            (*arg1)->unk2C->unk12 = 0x400;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024B024);
        }
    }
}
