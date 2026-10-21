#include "context.h"

typedef struct func_801CA5AC_Struct {
    u8 pad[4];
    u8 value;
    u8 pad5;
} func_801CA5AC_Struct;

extern func_801CA5AC_Struct D_80183CE0[];
extern s32 D_80184140[];

s32 func_801CA5AC(void) {
    u8 best;
    u8 selected;
    u8 i;
    u8 value;

    best = 0;
    for (i = 0; i < 0x55; i++) {
        value = D_80183CE0[i].value;
        if (value >= best) {
            selected = i;
            best = value;
        }
    }
    return D_80184140[selected];
}
