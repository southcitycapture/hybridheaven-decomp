#include "context.h"
extern s32 D_801CE330(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
void func_80371D04();
extern f32 D_8038B414;
extern f32 D_8038B418;
extern f32 D_8038B41C;
typedef struct func_80371AF8_StructSub { u8 pad[2]; s16 unk2; u8 pad4[0x2C]; u32 unk30; u8 pad34[0x2C4]; u8 unk2F8; } func_80371AF8_StructSub;
void func_80371AF8(func_80371A40_Sub *arg0, s32 arg1) {
    u8 *cnt;
    func_80371AF8_StructSub *sub;
    f32 x, y, z;
    sub = arg0->unk68;
    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    cnt = &arg0->unk79;
    if (sub->unk2F8 != 0 || ++*cnt >= 5) {
        *(u16 *)((u8 *)arg0 + 0x4C) = 0;
        if (sub->unk2 <= 0 || ((sub->unk30 << 1) >> 30) != 0) {
            D_801CE330(arg0, 0, x, y, z, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 10, 10, D_8038B414, 0);
        }
        D_801CE330(arg0, 0xD, x, y, z, 0xFF, 0, 0, 0xFF, 0xFF, 0xE0, 0, 0xFF, 1, 0x18, D_8038B418, 1);
        D_801CE330(arg0, 0x11, x, y, z, 0xFF, 0xE0, 0, 0xFF, 0xFF, 0xE0, 0, 0, 0x14, 0x1E, D_8038B41C, 1);
        sub->unk2F8 = 0;
        func_800058DC(arg0, (void *)func_80371D04);
    }
}
