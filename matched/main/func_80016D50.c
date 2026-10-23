#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_800158C0 LP(fA, __LINE__)
#include "context.h"
#undef func_800158C0
s32 func_80016D50(s32 arg0) {
    s32 x = 0;

    while (arg0 > D_80044084) {
        arg0 -= D_80044084;
        x |= (D_8004408C & ((1 << D_80044084) - 1)) << arg0;
        D_8004408C = *(*(u8 **)&D_8008DFB8)++;
        D_80044084 = 8;
    }
    D_80044084 -= arg0;
    return (((u32) D_8004408C >> D_80044084) & ((1 << arg0) - 1)) | x;
}
