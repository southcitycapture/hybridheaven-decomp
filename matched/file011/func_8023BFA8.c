#include "context.h"

extern s32 func_8023A3C4(s32);
extern s8 func_8023A398(void *, s32);

struct func_8023BFA8_Struct {
    u8 pad0[0x98];
    struct func_8023BFA8_Struct2 *unk98;
};

struct func_8023BFA8_Struct2 {
    u8 pad0[0x2D9];
    u8 unk2D9;
};

void func_8023BFA8(void *arg0, s32 arg1) {
    struct func_8023BFA8_Struct2 *sp1C;

    sp1C = ((struct func_8023BFA8_Struct *)arg0)->unk98;
    sp1C->unk2D9 = func_8023A398(arg0, func_8023A3C4((D_80240880.unk6B + (D_80240880.unk6A * 0xA)) & 0xFF) & 0xFF);
    func_80376BE4(sp1C);
    func_800058DC(arg0, &func_8023A09C);
}
