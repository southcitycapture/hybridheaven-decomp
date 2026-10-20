#include "context.h"

extern f32 func_8001EB64(s16);
extern u8 D_801BBDA0[];
extern f64 D_8025D840;
extern f64 D_8025D848;
extern f64 D_8025D850;
extern f64 D_8025D858;

typedef struct func_802538A4_Struct {
    u8 pad[0x96];
    u16 unk96;
} func_802538A4_Struct;

void func_802538A4(func_802538A4_Struct *arg0, s32 arg1) {
    s32 sp1C;
    u16 temp_v0;

    sp1C = arg0->unk96;
    temp_v0 = sp1C;
    arg0->unk96 = temp_v0 + 1;
    D_801BBDA0[0x56] = (u32)(((f64)func_8001EB64((s16)(temp_v0 * 0x64) & 0x1FFF) * D_8025D840) + D_8025D848);
    D_801BBDA0[0x59] = (u32)(((f64)func_8001EB64((s16)(sp1C * 0x6E) & 0x1FFF) * D_8025D850) + D_8025D858);
}
