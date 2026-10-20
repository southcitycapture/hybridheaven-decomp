#include "context.h"

s32 func_8038CE74(void) {
    if (D_8038DBA8 < D_8038DBB4) {
        D_8038DBAC++;
        if (D_8038DBB0 < D_8038DBAC) {
            D_8038DBA4 = 2;
            return 0;
        }
        D_8038DBA4 = 0;
    } else {
        func_8038CD6C(D_8038DBAC);
    }
    D_8038DBB4++;
    return 0;
}
