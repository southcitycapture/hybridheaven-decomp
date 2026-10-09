#include "context.h"
extern struct func_801E58E4_P *D_8038D8D0;
s32 func_801C1000(s32 a, s32 b);

typedef struct func_801E44AC_Struct {
    u8 pad0[8];
    u8 *unk8;
} func_801E44AC_Struct;

s32 func_801E44AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2285E3C) != 0) {
        func_801C1000(3, 1);
        ((func_801E44AC_Struct *) D_8038D8D0)->unk8[0x22] = 1;
        return 2;
    }
    return 1;
}
