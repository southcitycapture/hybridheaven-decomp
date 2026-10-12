#include "context.h"

void func_800166D4(s32 arg0, s32 arg1) {
    if ((arg0 >= 0) && (arg0 < D_8008DC94) && (arg1 >= 0) && (D_8008DC98 >= arg1)) {
        *(u16 *)(D_8008DFAC + (D_8008DC94 * arg1 * 2) + (arg0 * 2)) = 0;
    }
}
