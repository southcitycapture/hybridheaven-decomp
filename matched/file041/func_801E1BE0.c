#include "context.h"
extern void func_8038D28C();
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void func_8038BEC8(f32);
extern void D_8038C158(void);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x26C);
        D_8038C158();
        return 1;
    }
    return 0;
}
