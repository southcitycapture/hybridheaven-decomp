#include "context.h"
struct func_8001C734_Struct {
    u8 data[0x4B];
};
extern struct func_8001C734_Struct D_800446AC;
u8 func_8001C734(u8 arg0) {
    struct func_8001C734_Struct sp;
    u8 r;
    sp = D_800446AC;
    if (arg0 < 0x4B) {
        r = sp.data[arg0];
    } else {
        r = 0;
    }
    return r;
}
