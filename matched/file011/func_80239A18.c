#include "context.h"

typedef struct func_80239A18_Struct {
    u8 pad0[0x98];
    struct func_80239A18_Struct2 *unk98;
    u8 pad1[0x9];
    s8 unkA5;
    u8 pad2[0xA];
    void *unkB0;
} func_80239A18_Struct;

typedef struct func_80239A18_Struct2 {
    u8 pad0[0x2D4];
    void *unk2D4;
    u8 unk2D8;
    s8 unk2D9;
} func_80239A18_Struct2;

extern void func_8023A09C(void);

void func_80239A18(func_80239A18_Struct *arg0, s32 arg1) {
    func_80239A18_Struct2 *temp_v0;

    temp_v0 = arg0->unk98;
    temp_v0->unk2D4 = arg0->unkB0;
    temp_v0->unk2D9 = arg0->unkA5;
    temp_v0->unk2D8 = 0xE;
    func_800058DC(arg0, func_8023A09C);
}
