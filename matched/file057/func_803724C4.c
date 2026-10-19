#include "context.h"
struct func_803724C4_Struct {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[8];
    f32 unk80;
};
extern void func_801CE3F8(void *a0, s32 a1, f32 a2, s32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern f32 D_8038B430;
extern f32 D_8038B434;
extern f32 D_8038B438;
extern f32 D_8038B43C;

void func_803724C4(struct func_803724C4_Struct *arg0, s32 arg1) {
    f32 sp84 = arg0->unk6C;
    f32 sp70 = arg0->unk70;
    f32 sp7C = arg0->unk74;
    f32 sp78 = arg0->unk80;
    func_801CE1C8(arg0, 0x2C, sp84, sp70, sp7C, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x80, 0, 0xFF, 0x80, 0, 0, 0xFF, 0x80, 0, 1, 0xA, D_8038B430, D_8038B434, D_8038B438, 0.0f, 5);
    func_801CE3F8(arg0, 0x2E, sp84, *(s32 *)&sp78, sp7C, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0x80, 0x20, 1, 0xC, D_8038B43C, 1);
    func_800058DC(arg0, func_8037118C);
}
