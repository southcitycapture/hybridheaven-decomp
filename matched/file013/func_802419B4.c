#include "common.h"
typedef struct func_80241AF0_StructBBBF0 {
    u8 pad0[0x192];
    s16 unk192;
    s16 unk194;
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1[0xF00 - 0x1A4];
    s16 unkF00;
    u8 pad2[0xF04 - 0xF02];
    f32 unkF04;
    f32 unkF08;
    s16 unkF0C;
    u8 pad3[0xF10 - 0xF0E];
    s32 unkF10;
} func_80241AF0_StructBBBF0;
extern struct func_80241AF0_StructBBBF0 D_801BBBF0;
extern void func_800058DC(void *arg0, void *arg1);
void func_80241AF0(u8 *arg0, s32 arg1);


struct func_802419B4_Struct {
    u8 pad[0x94];
    s16 unk94;
};

void func_802419B4(struct func_802419B4_Struct *arg0, s32 arg1) {
    s16 temp;

    temp = arg0->unk94;
    arg0->unk94 = temp - 1;
    if (temp != 0) {
        return;
    } else {
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unk192 = 4;
        D_801BBBF0.unkF10 = 0x03480010;
        D_801BBBF0.unkF0C = 0;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 4.0f;
        arg0->unk94 = 0x14;
        func_800058DC(arg0, func_80241AF0);
        return;
    }
}
