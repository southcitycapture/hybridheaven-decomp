#include "common.h"
extern void *D_801BBCD8;
extern s32 D_80257150;


struct func_8024286C_Point {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_8024286C_Mid {
    u8 pad0[0x30];
    struct func_8024286C_Point *unk30;
};
struct func_8024286C_Arg0 {
    u8 pad0[0x24];
    struct func_8024286C_Mid *unk24;
};
struct func_8024286C_GPoint {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_8024286C_G {
    u8 pad0[0x2C];
    struct func_8024286C_GPoint *unk2C;
};
extern void func_80127430(f32, f32, f32, s32, f32, f32);

#define POS ((struct func_8024286C_Arg0 *) arg0)->unk24->unk30
#define CAM ((struct func_8024286C_G *) D_801BBCD8)->unk2C

void func_8024286C(void *arg0) {
    f32 dx;
    f32 dy;
    f32 dz;

    dx = POS->unk4 - CAM->unk30;
    dy = POS->unk8 - CAM->unk34;
    dz = POS->unkC - CAM->unk38;
    if (!((dx * dx + dy * dy + dz * dz) > 250000.0f)) {
        switch (D_80257150) {
        case 0:
            func_80127430(POS->unk4, POS->unk8, POS->unkC, 0x319, 1.2f, 1.0f);
            D_80257150 = 1;
            break;
        case 1:
            func_80127430(POS->unk4, POS->unk8, POS->unkC, 0x31A, 1.2f, 1.0f);
            D_80257150 = 2;
            break;
        case 2:
            func_80127430(POS->unk4, POS->unk8, POS->unkC, 0x31B, 1.2f, 1.0f);
            D_80257150 = 3;
            break;
        case 3:
            func_80127430(POS->unk4, POS->unk8, POS->unkC, 0x31C, 1.2f, 1.0f);
            D_80257150 = 4;
            break;
        case 4:
            func_80127430(POS->unk4, POS->unk8, POS->unkC, 0x31D, 1.2f, 1.0f);
            D_80257150 = 0;
            break;
        default:
            D_80257150 = 0;
            break;
        }
    }
}
