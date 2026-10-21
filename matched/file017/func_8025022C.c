#include "context.h"

typedef struct func_8025022C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8025022C_Struct;

extern void func_802502F0();
extern void func_80251574();
extern void func_801C4058(void *, s32, f32, s32);
extern void func_80020718(s32);
extern void func_800058DC();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_8025022C(func_8025022C_Struct *arg0, s32 arg1)
{
    u16 temp_s1 = arg0->unk3C;
    arg0->unk3C = temp_s1 + 1;
    func_80251574((void *)arg0, arg1);
    if (temp_s1 >= 0x3C) {
        if (temp_s1 == 0x3C) {
            func_80020718(0x184);
        }
        func_801C4058(arg0, 0x3F19999A, 0.0f, 0x16);
        if ((temp_s1 % 10) == 0) {
            func_80380F94(125.0f, 0.0f, -142.0f, 0.0f, 0.0f, 0.0f, 0xA);
        }
    }
    if (temp_s1 >= 0x5A) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802502F0);
    }
}
