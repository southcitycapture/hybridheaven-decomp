#include "context.h"

struct func_80226A2C_StructState {
    u8 pad[0x1E];
    u8 start;
    u8 end;
};

struct func_80226A2C_StructEntry {
    u8 pad[0x22];
    u8 value;
};

extern struct func_8022811C_Glob D_801BEC68;

#define STATE ((struct func_80226A2C_StructState *)&D_801BEC68)

void func_80226A2C(s32 arg0) {
    u8 i;

    for (i = STATE->start; i < STATE->end; i++) {
        ((struct func_80226A2C_StructEntry **)arg0)[i]->value = func_802269CC();
    }
}
