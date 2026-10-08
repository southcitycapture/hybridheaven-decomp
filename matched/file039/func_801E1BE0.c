#include "common.h"

extern void func_8038BEC8(f32);
extern void D_8038C158(void);
extern void func_8038D28C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        func_8038D28C(0x6B);
        func_8038D28C(0x255);
        return 1;
    }
    return 0;
}
