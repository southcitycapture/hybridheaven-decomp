#include "context.h"
extern s32 D_801DA644;
extern s32 D_801DA648;
extern s32 D_8038D8CC;
extern void *func_80005670(s32, void *);

extern u8 D_801DA64C[];

s32 func_801C7B3C(void) {
    if (func_80005670(D_8038D8CC, D_801DA64C) == NULL) {
        return 0;
    }
    D_801DA644 = 1;
    D_801DA648 = 1;
    return 1;
}
