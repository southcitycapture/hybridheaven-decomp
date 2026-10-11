#include "context.h"

extern s32 D_801DBAD4;
extern s32 D_801DBAD8;
extern s32 D_801DBADC;

s32 func_801D7540(void) {
    if (D_801DBAD8 != 0) {
        return 0;
    }
    if (D_801DBAD4 != 0) {
        return 0;
    }
    return D_801DBADC;
}
