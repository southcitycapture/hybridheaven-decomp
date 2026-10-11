#include "context.h"

extern s32 D_8038DBC8;
extern s32 D_8038DBCC;
extern s32 D_8038DBD0;

s32 func_8038CFE8(void) {
    if (D_8038DBD0 < D_8038DBCC) {
        D_8038DBC8 = 2;
    }
    D_8038DBCC += 1;
    return 0;
}
