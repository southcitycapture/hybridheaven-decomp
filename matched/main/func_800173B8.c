#define LPC(a, b) a##b
#define LP(a, b) LPC(a, b)
#define func_800158C0 LP(fA, __LINE__)
#define void s32
#include "context.h"
#undef void
#undef func_800158C0

s32 func_800173B8(s32 arg0, s32 arg1) {
    if (arg0 >= 0x100) {
        return -1;
    }
    D_8008DFC4[arg0].value = arg1;
    return 0;
}
