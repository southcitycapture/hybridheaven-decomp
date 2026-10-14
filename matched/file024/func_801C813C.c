#include "context.h"

typedef struct func_801C813C_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_801C813C_Struct;

extern u8 D_80089474[];
extern void func_801C5D64(void *arg0, s32 arg1);
extern void func_801C5F04(void *arg0);
extern void func_801C7D5C();

void func_801C813C(func_801C813C_Struct *arg0, s32 arg1) {
    extern void func_800058DC();
    u16 flags;

    flags = *(u16 *)(D_80089474 + 4 + (arg0->unk90 << 5));
    if ((flags & 0x4000) && (func_801C5B38() == 0)) {
        D_801CFDB8[arg0->unk90] = 0;
        func_801C5D64(arg0, 0);
        func_801C5F04(arg0);
        func_800058DC(arg0, &func_801C7D5C);
    }
}
