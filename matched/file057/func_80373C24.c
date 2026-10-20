#include "context.h"

struct func_80373C24_Struct {
    u16 unk0;
    u16 unk2;
    u8 pad4[4];
    f32 unk8;
};

u16 func_80373C24(struct func_80373C24_Struct *arg0) {
    f64 one = 2.0 - 1.0;
    return (u32)((f64)((f32)(*(u16 *)(func_80373BF0(arg0->unk0, arg0->unk2) + 0x1E) & ~0x8000) * arg0->unk8) * one) - 1;
}
