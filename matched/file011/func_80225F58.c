#include "context.h"
struct func_80225F58_B { u8 pad[0x2C]; s32 unk2C; };
struct func_80225F58_A { u8 pad[0x24]; struct func_80225F58_B *unk24; u8 pad2[0x4C-0x28]; u8 unk4C; u8 pad3; u8 unk4E; };
extern s32 func_80225930(s32, s16, s16);
extern u8 func_80225CB4(struct func_80225F58_A *, f32);

s32 func_80225F58(struct func_80225F58_A *arg0, f32 arg1) {
    s32 sp2C;
    u8 sp2B;

    sp2C = arg0->unk24->unk2C;
    sp2B = arg0->unk4E;
    arg0->unk4E = func_80225CB4(arg0, arg1);
    arg0->unk4C = func_80225BF0((void *)arg0);
    if (func_80225930(sp2C, sp2B, arg0->unk4E) != 0) {
        return 2;
    }
    if (func_80225930(sp2C, -sp2B, (s16)-arg0->unk4E) != 0) {
        return 1;
    }
    return 0;
}
