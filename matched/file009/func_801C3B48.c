#include "context.h"

struct func_801C3B48_Struct {
    u8 pad[0xE];
    s16 unkE;
};
extern struct func_801C3B48_Struct D_801BBD86;

s32 func_801C3B48(s32 arg0) {
    s32 *p = &arg0;
    D_801BBD86.unkE = *p;
    return 1;
}
