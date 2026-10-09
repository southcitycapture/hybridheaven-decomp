#include "context.h"

extern void func_8038D28C(s32 arg0);
extern void func_8038BED4(void);

s32 func_801E1C00(s32 arg0, s32 arg1) {
    func_8038D28C(0x71);
    func_8038BED4();
    return 1;
}
