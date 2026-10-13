#include "context.h"

struct func_80025A00_Struct {
    u8 pad0[0x34];
    s16 unk34;
    u8 pad1[0x42 - 0x36];
    s16 unk42;
    u8 pad2[0x64 - 0x44];
    u8 unk64;
    u8 pad3[0x68 - 0x65];
    s32 unk68;
};

void func_80025A00(void) {
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk64 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk68 = (s32) D_800CBDA0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk42 = 0;
    ((struct func_80025A00_Struct *) D_800CBDA4)->unk34 = ((struct func_80025A00_Struct *) D_800CBDA4)->unk42;
}
