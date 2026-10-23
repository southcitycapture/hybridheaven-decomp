#include "context.h"

typedef struct func_8001DF40_StructRecord {
    u8 flag;
    u8 pad1;
    s16 x;
    s16 y;
    u8 pad[0x50];
} func_8001DF40_StructRecord;

typedef struct func_8001DF40_StructObject {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    s16 *coords;
} func_8001DF40_StructObject;

extern u8 D_80037744;

void func_8001DF40(s32 arg0, func_8001DF40_StructObject **arg1) {
    s32 i;

    for (i = 0; i < 40; i++) {
        if (D_80037744 != 0) {
            arg1[i]->flag = ((func_8001DF40_StructRecord *)D_80090E50)[i].flag;
        } else {
            arg1[i]->flag = 0;
        }
        arg1[i]->coords[0] = ((func_8001DF40_StructRecord *)D_80090E50)[i].x;
        arg1[i]->coords[1] = ((func_8001DF40_StructRecord *)D_80090E50)[i].y;
    }
}
