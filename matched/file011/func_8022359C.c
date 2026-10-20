#include "context.h"
extern u16 func_80011590(s32);
extern void func_803697AC(s32, s32, s32);
extern void func_80222E84();
struct func_8022359C_Struct {
    u8 pad0[0x20];
    u16 unk20;
    u8 pad22[2];
    f32 unk24;
};
void func_8022359C(s32 arg0, s32 arg1) {
    struct func_8022359C_Struct *s0;
    struct func_8021F9C8_Struct *s2;

    s0 = (struct func_8022359C_Struct *)((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == ((struct func_80220F60_Struct *)&D_801BBBF0)->unkDC) {
        s2 = &D_801BC03C;
    } else {
        s2 = &D_801BC3D8;
    }
    if (((struct func_80220F60_Struct *)&D_801BBBF0)->unk1031 != 0xF) {
        if (func_80011590((u16)(u32)(s0->unk24 * 6.0f)) == s0->unk20) {
            func_803697AC(arg0, arg1, 0);
        } else if (func_80011590((u16)(u32)(s0->unk24 * 18.0f)) == s0->unk20) {
            func_803697AC(arg0, arg1, 1);
        }
        if (func_80010550(arg1, (s32)s0) != 0) {
            *(u8 *)((u8 *)s2 + 0x30) = (u8)(*(u8 *)((u8 *)s2 + 0x30) & 0xFFFE);
            func_800058DC(arg0, func_80222E84);
        }
        s2->unk392 = 0;
    }
}
