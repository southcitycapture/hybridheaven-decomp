#include "context.h"

extern void func_8038BED4(void);
extern f32 D_801E943C;
extern f32 D_801E9440;
extern f32 D_801E9444;
extern f32 D_801E9448;

s32 func_801E22BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BD50(D_801E943C, D_801E9440, 281.4f);
        D_8038BD88(D_801E9444, D_801E9448, 295.2f);
        func_8038BED4();
        return 0x16;
    }
    return 0x15;
}
