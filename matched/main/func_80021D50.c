#include "context.h"

extern u8 D_801B595C;
extern u8 D_801B62A4;
typedef struct func_80021D50_Struct {
    u8 pad0[4];
    u8 value;
    u8 pad5[0xD8 - 5];
} func_80021D50_Struct;

s32 func_80021D50(s32 arg0) {
    u8 i;
    u8 sel;
    u8 result;
    u8 min;

    arg0 = *(u32 *)&arg0 & 0xFF;
    result = 5;
    if (arg0 == 1) {
        min = D_801B595C;
        for (i = 6; i < 16; i++) {
            if (((func_80021D50_Struct *)&D_801B5520)[i].value <= min) {
                result = i;
                min = ((func_80021D50_Struct *)&D_801B5520)[i].value;
            }
        }
    } else {
        result = 14;
        if (arg0 == 0) {
            result = 16;
            min = D_801B62A4;
            for (i = 17; i < 20; i++) {
                if (((func_80021D50_Struct *)&D_801B5520)[i].value <= min) {
                    result = i;
                    min = ((func_80021D50_Struct *)&D_801B5520)[i].value;
                }
            }
        } else {
            min = 0xFF;
            for (i = 14; i >= 5; i -= 2) {
                sel = i;
                if (((func_80021D50_Struct *)&D_801B5520)[i].value < ((func_80021D50_Struct *)&D_801B5520)[i + 1].value) {
                    sel++;
                }
                if (((func_80021D50_Struct *)&D_801B5520)[sel].value <= min) {
                    result = i;
                    min = ((func_80021D50_Struct *)&D_801B5520)[sel].value;
                }
            }
        }
    }
    return result;
}
