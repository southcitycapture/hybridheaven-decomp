#include "common.h"

extern void func_801C78C0(void);
extern f32 D_801DA6EC;
extern f32 D_801E0650[];

void func_801C84E0(void) {
    func_801C78C0();
    D_801E0650[0] = 0.0f;
    D_801E0650[1] = 0.0f;
    D_801E0650[2] = 0.0f;
    D_801DA6EC = 0.0f;
}
