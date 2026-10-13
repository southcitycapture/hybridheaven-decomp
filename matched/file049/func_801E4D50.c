#include "context.h"
extern struct func_801E4434_Struct *func_801BF6B0(s32);
extern s32 func_801C1B1C();

typedef struct func_801E4D50_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4D50_Struct;


s32 func_801E4D50(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}
