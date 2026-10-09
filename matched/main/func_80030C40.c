#include "context.h"

extern void *D_80049940;

s32 func_80030C40(void *arg0) {
    if (arg0 == NULL) {
        arg0 = D_80049940;
    }
    return ((s32 *)arg0)[1];
}
