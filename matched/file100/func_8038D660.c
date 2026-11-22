#include "common.h"

struct func_8038D5F4_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};
extern struct func_8038D5F4_Struct D_8038E158;
extern void func_8038D33C(f32 a, f32 b, f32 c, u16 d, f32 e, f32 f);
struct func_8038D660_Interpolation {
    f32 x;
    f32 y;
    f32 fraction;
    u16 angle;
};
s32 func_8038D660(void) {
    struct func_8038D660_Interpolation interpolation;
    f32 z;

    if ((u32)D_8038E158.unk18 >= (u32)D_8038E158.unk2C) {
        interpolation.fraction = (f32)(u32)D_8038E158.unk2C / (f32)(u32)D_8038E158.unk18;
        interpolation.x = (D_8038E158.unkC - D_8038E158.unk0) * interpolation.fraction + D_8038E158.unk0;
        interpolation.y = (D_8038E158.unk10 - D_8038E158.unk4) * interpolation.fraction + D_8038E158.unk4;
        z = (D_8038E158.unk14 - D_8038E158.unk8) * interpolation.fraction + D_8038E158.unk8;
        if (D_8038E158.unk30 == D_8038E158.unk20) {
            func_8038D33C(interpolation.x, interpolation.y, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), 1.20000005f, 1.0f);
        } else if (D_8038E158.unk30 == D_8038E158.unk24) {
            interpolation.angle = *(u16 *)((u8 *)&D_8038E158 + 0x1E);
            func_8038D33C(interpolation.x, interpolation.y, z, interpolation.angle, 1.20000005f, 1.0f);
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
