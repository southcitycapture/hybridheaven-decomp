#include "context.h"

struct func_80243CF4_B { u8 pad[0xA5]; u8 unkA5; };
struct func_80243CF4_C { u8 pad[0xC]; s16 unkC; };
struct func_80243CF4_Struct {
    u8 pad0[0x2C];
    struct func_80243CF4_B *unk2C;
    u8 pad30[4];
    struct func_80243CF4_C *unk34;
    u8 pad38[0x3E - 0x38];
    u16 unk3E;
    u8 pad40[2];
    u8 unk42;
};

void func_80243CF4(struct func_80243CF4_Struct *arg0, s32 arg1)
{
    struct func_80243CF4_B *b = arg0->unk2C;
    struct func_80243CF4_C *c = arg0->unk34;
    u16 w = arg0->unk3E;
    u8 v = b->unkA5;
    u8 *p = &arg0->unk42;
    *p = *p + 1;
    if (*p > 0x14) {
        *p = 0;
        if (w == v) {
            func_800058DC((s32)arg0, (void *)func_80243DDC);
        } else if (w > v) {
            *p = 10;
            c->unkC = 0x400;
        } else {
            *p = 10;
            c->unkC = 0x800;
        }
    }
}
