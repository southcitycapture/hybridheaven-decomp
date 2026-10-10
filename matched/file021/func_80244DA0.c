#include "context.h"

struct func_80244E28_Arg0;
struct func_80244E28_Outer;
void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1);

typedef struct func_80244DA0_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_80244DA0_Inner;

typedef struct func_80244DA0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8];
    func_80244DA0_Inner *unk38;
    u8 pad2[0x8];
    f32 unk44;
    u8 pad3[0x48];
    u16 unk90;
} func_80244DA0_Struct;

void func_80244DA0(func_80244DA0_Struct *arg0, s32 arg1) {
    if (func_80133A24(arg0->unk38->unk14 >> 16) != 0) {
        arg0->unk2C = 0x60;
        arg0->unk44 = (f32) (arg0->unk38->unk14 & 0xFFFF);
        arg0->unk90 = 0x20;
        func_800058DC((s32) arg0, (void *) func_80244E28);
    }
}
