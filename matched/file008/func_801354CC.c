#include "context.h"

typedef struct func_801354CC_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_801354CC_Inner;

typedef struct func_801354CC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x38 - 0x30];
    func_801354CC_Inner *unk38;
} func_801354CC_Struct;

s32 func_80133A24(u32, void *);                     /* extern */

void func_801354CC(func_801354CC_Struct *arg0, s32 arg1) {
    if (func_80133A24((u32) arg0->unk38->unk14 >> 0x10, arg0) != 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
        return;
    }
    arg0->unk2C = 0;
}
