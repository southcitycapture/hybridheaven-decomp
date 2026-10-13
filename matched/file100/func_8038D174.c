#include "common.h"

extern s32 func_8038CD6C(s32 arg0);
extern s32 D_8038DBEC;

s32 func_8038D174(void) {
    D_8038DBEC = 0;
    func_8038CD6C(0);
    return 1;
}
