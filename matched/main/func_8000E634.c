#include "context.h"

struct func_8000E634_Struct {
    s32 unk0;
    u8 pad4[4];
    f32 unk8;
};
extern void func_8000E5D4(s32);
extern u16 D_800631EA;

u16 func_8000E634(struct func_8000E634_Struct *arg0) {
    f64 k = 2.0 - 1.0;
    func_8000E5D4(arg0->unk0);
    return (u32)(((f64)((f32)(u32)(D_800631EA & 0xFFFF7FFF & 0xFFFF) * arg0->unk8) * k) + 0.5) - 1;
}
