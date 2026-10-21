#include "context.h"

extern void func_8038D33C(f32 a, f32 b, f32 c, u16 d, f32 e, f32 f);
extern f32 D_8038DD58;
extern f32 D_8038DD5C;

s32 func_8038D660(void) {
    u8 pad[8];
    f32 sp24;
    f32 sp20;
    f32 t;
    f32 z;

    if ((u32)D_8038E158.unk18 >= (u32)D_8038E158.unk2C) {
        t = (f32)(u32)D_8038E158.unk2C / (f32)(u32)D_8038E158.unk18;
        sp20 = (D_8038E158.unkC - D_8038E158.unk0) * t + D_8038E158.unk0;
        sp24 = (D_8038E158.unk10 - D_8038E158.unk4) * t + D_8038E158.unk4;
        z = (D_8038E158.unk14 - D_8038E158.unk8) * t + D_8038E158.unk8;
        if (D_8038E158.unk30 == D_8038E158.unk20) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), D_8038DD58, 1.0f);
        } else if (D_8038E158.unk30 == D_8038E158.unk24) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), D_8038DD5C, 1.0f);
        }
        D_8038E158.unk30++;
        if ((u32)D_8038E158.unk28 < (u32)D_8038E158.unk30) {
            D_8038E158.unk30 = 0;
        }
        D_8038E158.unk2C = (u32)D_8038E158.unk2C + 1;
        return 0;
    }
    return 1;
}
