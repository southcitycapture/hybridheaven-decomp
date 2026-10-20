#include "context.h"

typedef struct func_80152C04_Struct {
    u16 id;
    u8 pad[2];
    s32 value;
    u8 pad2[4];
} func_80152C04_Struct;

s32 func_80152C04(u16 arg0) {
    u8 i;

    i = 0;
    while (arg0 != ((func_80152C04_Struct *)&D_80183AD0)[i].id && i < 0x2C) {
        i++;
    }
    return ((func_80152C04_Struct *)&D_80183AD0)[i].value;
}
