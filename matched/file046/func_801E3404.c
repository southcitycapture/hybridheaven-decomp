#include "context.h"
extern void func_801C2420(s32, u8 *);

extern u8 func_8038DD54[];

s32 func_801E3404(s32 arg0, s32 arg1) {
    func_801C2420(0x466, func_8038DD54 + 0x14);
    return 1;
}
