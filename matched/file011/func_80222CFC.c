#include "context.h"
struct func_80222CFC_Struct {
    u8 pad0[0x1C];
    s32 unk1C;
    u16 unk20;
    u8 pad22[2];
    f32 unk24;
};
struct func_80222CFC_Bits {
    u8 pad0[0x30];
    struct {
        u8 a : 1;
        u8 b : 2;
        u8 pad : 4;
        u8 c : 1;
    } f;
};

extern void func_80222E84();
extern u16 func_80011590(s32);
extern void func_803697AC(s32, s32, s32);

void func_80222CFC(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    struct func_80222CFC_Struct *s0;
    struct func_80222CFC_Bits *v0;
    u16 sp26;
    s32 r;

    s0 = (struct func_80222CFC_Struct *)arg0->unk5C;
    if ((s32)arg0 == ((struct func_8021F9C8_Dev *)&D_801BBBF0)->unkDC) {
        v0 = (struct func_80222CFC_Bits *)&D_801BC03C;
    } else {
        v0 = (struct func_80222CFC_Bits *)&D_801BC3D8;
    }
    if (((struct func_8021F9C8_Dev *)&D_801BBBF0)->unk1031 != 0xF) {
        func_802237B0((s32)arg0, 1);
        v0->f.b = 1;
        v0->f.c = 1;
        v0->f.a = 1;
        sp26 = func_80010550(arg1, (s32)s0);
        if (s0->unk1C == 0x0190006F) {
            if (s0->unk20 == func_80011590((u32)(s0->unk24 * 6.0f) & 0xFFFF)) {
                func_803697AC((s32)arg0, arg1, 2);
            }
        }
        if (sp26 != 0) {
            func_800058DC((s32)arg0, (void *)func_80222E84);
        }
    }
}
