#include "context.h"

struct func_80376CCC_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

void func_80376CCC(struct func_80376CCC_Struct *arg0) {
    if (arg0->unk2D9 < 0x14) {
        arg0->unk2D8 = 0xB;
        return;
    }
    if (arg0->unk2D9 < 0x1E) {
        arg0->unk2D8 = 0xC;
        return;
    }
    arg0->unk2D8 = 0xB;
}
