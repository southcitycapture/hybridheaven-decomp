#include "common.h"

extern void func_803763D4(void);
extern void func_803764CC(void *);
extern void func_803765D4(void);
extern void func_80376708(void);
extern void func_803767F4(void);
extern void func_80376900(void *);
extern u8 D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;

void func_80376B2C(void *arg0) {
    u8 *var_v0;
    u32 temp_v1;

    if ((u32) arg0 == (u32) &D_801BBBF0 + 0x44C) {
        var_v0 = &D_801BC3D8;
    } else {
        var_v0 = &D_801BC03C;
    }
    temp_v1 = *(u32 *) ((u8 *) arg0 + 0x38);
    if ((temp_v1 >> 0x1F) == 0) {
        if (((u32) (*(u32 *) (var_v0 + 0x30) << 0xB) >> 0x1E) != 0) {
            func_803767F4();
            func_80376900(arg0);
            return;
        }
        func_803763D4();
        func_803764CC(arg0);
        return;
    }
    if (((u32) (temp_v1 * 8) >> 0x1F) == 1) {
        func_80376708();
        return;
    }
    func_803765D4();
}
