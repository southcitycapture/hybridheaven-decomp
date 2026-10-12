#include "context.h"
extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);

typedef struct func_801E4C54_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4C54_Struct;


s32 func_801E4C54(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
