#include "context.h"

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D20AC(void);
extern void func_8038D28C(s32);
extern s32 D_801F3E38;

s32 func_801E6110(s32 arg0, s32 arg1) {
    if (D_801F3E38 == 0) {
        goto state0;
    }
    if (D_801F3E38 == 1) {
        goto state1;
    }
    return 0x20;
state0:
    func_801CC4D8(1, 0x01680003, 0, 0, 15.0f);
    D_801F3E38 = 1;
    goto done;
state1:
    if (func_801D20AC() == 0) {
        func_8038D28C(0x663);
        func_801CC470(1, 0x01680003, 0, 0x100, 1.0f);
        return 0x21;
    }
done:
    return 0x20;
}
