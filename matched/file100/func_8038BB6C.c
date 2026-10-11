#include "context.h"
extern s32 D_8038D870;

extern void func_801C2608(s32, void *);
extern void func_801C26C4(s32, void *);
extern s32 D_8038D874;
extern u8 D_8038DD90[];
extern u8 D_8038DF70[];

void func_8038BB6C(void) {
    D_8038D870 = 0;
    D_8038D874 = 0;
    func_801C2608(0x14, D_8038DD90);
    func_801C26C4(0x14, D_8038DF70);
}
