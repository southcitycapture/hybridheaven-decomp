#include "common.h"

typedef struct func_801C0608_StructInner {
    u8 pad[0x4C];
    s8 unk4C;
} func_801C0608_StructInner;

typedef struct func_801C0608_StructOuter {
    u8 pad[0x2C];
    func_801C0608_StructInner *unk2C;
} func_801C0608_StructOuter;

typedef struct func_801C0608_StructArg0 {
    u8 pad[0x90];
    f32 unk90;
} func_801C0608_StructArg0;

extern void func_8001B204();
extern u8 D_801CE930[];

void func_801C0608(func_801C0608_StructArg0 *arg0, func_801C0608_StructOuter **arg1) {
    func_8001B204(0, 0x80, 0x78, D_801CE930);
    arg0->unk90 = (f32) ((f64) arg0->unk90 + 0.5);
    (*arg1)->unk2C->unk4C = (s8) ((s32) arg0->unk90 % 128);
}
