#include "context.h"
extern u8 D_801CF41C[];
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_801C9DF8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C9DF8_Struct;

void func_801C9DF8(func_801C9DF8_Struct *arg0, struct func_801C9AB4_Struct **arg1) {
    s16 v;
    s32 i;

    v = arg1[0]->unk30->unkB;
    if (arg0->unk3C == 0) {
        v -= 6;
        if (v < 0) {
            v = 0;
            func_8012FE50(0x20, 0xC2, 1, 1, 0);
            func_800058DC(arg0, func_801C9DEC);
        }
        func_8001A804(5, D_801CF41C, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, 0xFF - v, 0, 0, 0, 0xFF - v);
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unkB = v;
        }
        return;
    }
    arg0->unk3C = arg0->unk3C - 1;
}
