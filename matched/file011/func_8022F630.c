#include "context.h"

struct func_8022F630_Struct {
    u8 pad[0x2C4];
    s16 values[1];
};

s32 func_8022F630(struct func_8022F630_Struct *arg0, u8 arg1) {
    if (arg1 == 0) {
        return (arg0->values[0] * 6) & 0xFFFF;
    }
    return (arg0->values[arg1] * 10) & 0xFFFF;
}
