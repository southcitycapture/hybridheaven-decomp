#include "common.h"

typedef struct func_8024090C_Struct {
    u8 pad0[0x15D];
    u8 unk15D;
    u8 pad1[6];
    u8 unk164;
    u8 pad2[0x1104 - 0x165];
    s32 unk1104;
} func_8024090C_Struct;

extern s32 func_8001E978();
extern s16 D_80089354;
extern func_8024090C_Struct D_801BBBF0;

void func_8024090C(void) {
    D_80089354 = 2;
    D_801BBBF0.unk164 = 0;
    D_801BBBF0.unk15D = 0;
    func_8001E978(D_801BBBF0.unk1104, 0, 0, 0, 0xF, 0, 2, 0);
}
