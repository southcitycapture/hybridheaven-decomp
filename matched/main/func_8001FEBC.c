#include "common.h"
extern u32 func_80033C60(void);


extern u32 D_8004795C;

void func_8001FEBC(s32 arg0) {
    u32 *flag = &D_8004795C;

    if ((func_80033C60() >> 2) == 0) {
        if (*flag == 0) {
            *flag = 0;
        }
    }
}
