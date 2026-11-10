#include "common.h"


extern u8 D_8017DC44;
extern u8 D_8017DC4A;
extern u8 D_8017DC92;
extern u8 D_8017DC93;
extern u8 D_8017DC94;
extern u8 D_8017DC95;

u8 func_80378D84(u8 arg0) {
    switch (arg0) {
    case 0:
        return D_8017DC44 + 1;
    case 1:
        return D_8017DC4A + 1;
    case 2:
        return D_8017DC92 + 1;
    case 3:
        return D_8017DC93 + 1;
    case 4:
        return D_8017DC95 + 1;
    case 5:
        return D_8017DC94 + 1;
    default:
        return D_8017DC44 + 1;
    }
}
