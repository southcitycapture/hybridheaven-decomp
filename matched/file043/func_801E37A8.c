#include "context.h"

extern s32 func_801E3584();
extern void func_8038D28C(s32 arg0);

s32 func_801E37A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFED260) != 0) {
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 0xFF, 0x99, 0);
        func_801CCEC8(1, 0x1E, 0x1E, 0x1E);
        func_8038D28C(0x651);
        return 6;
    }
    func_801E3584();
    return 5;
}
