#include "context.h"

typedef struct func_80020DAC_Struct {
    u32 unk0;
    u8 pad4[0xB4 - 0x4];
    s16 unkB4;
    u8 padB6[0xD8 - 0xB6];
} func_80020DAC_Struct;

s32 func_80020DAC(u16 arg0) {
    s32 i;
    s32 value;

    for (i = 0; i < 16; i++) {
        if (arg0 == (((func_80020DAC_Struct *)&D_801B5520)[i].unk0 & 0x7FFF)) {
            value = ((func_80020DAC_Struct *)D_800CBDA4)[i].unkB4;
            if (value == 0) {
                value++;
            }
            return value;
        }
    }
    return 0;
}
