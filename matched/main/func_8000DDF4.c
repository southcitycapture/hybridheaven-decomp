#include "context.h"

extern s32 func_80005E44(s32, s32);
extern s32 func_80005FAC(s32, s32, s32);

typedef struct func_8000DDF4_StructEntry {
    u16 index;
    u8 pad[2];
    s32 value;
} func_8000DDF4_StructEntry;

u16 func_8000DDF4(s32 arg0, func_8000DDF4_StructEntry *arg1) {
    s32 objects[100];
    u16 count;
    u16 i;
    u16 result;
    s32 temp;

    result = 0;
    count = arg1->index;
    temp = func_80005E44(arg0, arg1->value);
    arg1++;
    objects[0] = temp;
    if (temp != 0) {
        for (i = 1; i < count; i++, arg1++) {
            temp = func_80005FAC(arg0, objects[arg1->index], arg1->value);
            objects[i] = temp;
            if (temp == 0) {
                result = 1;
                break;
            }
        }
    } else {
        result = 1;
    }
    return result;
}
