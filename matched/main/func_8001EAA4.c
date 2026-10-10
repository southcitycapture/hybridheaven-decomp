#include "context.h"

struct func_8001EAA4_Struct {
    u8 pad[0x154];
    s16 unk154;
    s16 unk156;
    s16 unk158;
    u8 pad2[3];
    u8 unk15D;
    u8 pad3[2];
    s32 unk160;
};

void func_8001EAA4(void) {
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk160 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk15D = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk156 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk154 = 0;
    ((struct func_8001EAA4_Struct *)&D_801BBBF0)->unk158 = 0;
}
