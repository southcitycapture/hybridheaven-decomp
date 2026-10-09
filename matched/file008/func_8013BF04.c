#include "context.h"

struct func_8013BF04_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3E - 0x38];
    u8 unk3E;
    u8 pad2[0x4D - 0x3F];
    u8 unk4D;
    u8 pad3[0x4F - 0x4E];
    u8 unk4F;
};

extern void func_8013BF54(void);

void func_8013BF04(struct func_8013BF04_Struct *arg0, s32 arg1) {
    arg0->unk4D = 0x12;
    arg0->unk3E = 5;
    arg0->unk4F = 1;
    func_8013B570(arg0, arg0->unk36, 2, 0, (s32)func_8013BF54);
}
