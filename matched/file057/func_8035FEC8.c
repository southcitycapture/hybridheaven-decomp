#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_8035AFEC LP(fA, __LINE__)
#define func_8035FEC8 func_8035FEC8_decl
#include "context.h"
#undef func_8035FEC8
#undef func_8035AFEC

u8 *func_8035FEC8(u8 arg0, u8 *arg1) {
    while (*arg1 != 0x57) {
        if (arg0 == *arg1) {
            return arg1;
        }
        arg1 += 0x20;
    }
    return NULL;
}
