#include "context.h"

typedef struct func_801268F4_Struct {
    u8 pad[0x18E];
    u16 unk18E;
    u16 unk190;
    u16 unk192;
    u16 unk194;
    u16 unk196;
} func_801268F4_Struct;

s32 func_801268F4(s32 arg0) {
    if (((func_801268F4_Struct *)&D_801BBBF0)->unk18E == 0) {
        ((func_801268F4_Struct *)&D_801BBBF0)->unk18E = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk190 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk192 = 1;
        ((func_801268F4_Struct *)&D_801BBBF0)->unk196 = 0;
        return 1;
    }
    return 0;
}
