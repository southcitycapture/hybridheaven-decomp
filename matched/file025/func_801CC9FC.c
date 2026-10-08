#include "context.h"

extern void func_801C2608(s32, void *);
extern void func_801C26C4(s32, void *);
extern s32 D_801DAAC4;
extern u8 D_801E0A48[];
extern u8 D_801E0B38[];

void func_801CC9FC(void) {
    D_801DAAC0 = 0;
    D_801DAAC4 = 0;
    func_801C2608(0xA, D_801E0A48);
    func_801C26C4(0xA, D_801E0B38);
}
