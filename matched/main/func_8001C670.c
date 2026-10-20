#include "context.h"
struct func_8001C670_Struct {
    u8 data[0x5C];
};
extern struct func_8001C670_Struct D_80044648;

u8 func_8001C670(u8 arg0) {
    u8 r;
    struct func_8001C670_Struct buf;
    buf = D_80044648;
    if (arg0 < 0x5C) {
        r = buf.data[arg0];
    } else {
        r = 0;
    }
    return r;
}
