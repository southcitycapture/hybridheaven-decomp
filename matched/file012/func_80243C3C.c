#include "context.h"

struct func_80243CA4_Struct;
void func_80243CA4(struct func_80243CA4_Struct *arg0, s32 arg1);
struct func_80243C3C_B { u8 pad[0xA5]; u8 unkA5; };
struct func_80243C3C_C { u8 pad[0xC]; s16 unkC; };
struct func_80243C3C_Struct {
    u8 pad0[0x2C];
    struct func_80243C3C_B *unk2C;
    u8 pad30[4];
    struct func_80243C3C_C *unk34;
    u8 pad38[0x42 - 0x38];
    u8 unk42;
};

void func_80243C3C(arg0, arg1)
struct func_80243C3C_Struct *arg0;
u8 arg1;
{
    struct func_80243C3C_B *b = arg0->unk2C;
    struct func_80243C3C_C *c = arg0->unk34;

    arg1 = b->unkA5;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x10) {
        arg0->unk42 = 0;
        if (arg1 == 1) {
            func_800058DC((s32)arg0, (void *)func_80243CA4);
        } else {
            c->unkC = 0x400;
        }
    }
}
