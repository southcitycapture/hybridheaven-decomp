#include "common.h"
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);


struct func_8024ADE0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x1C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 unk50;
    u8 pad3[3];
    s32 unk54;
    u8 pad4[4];
    s32 unk5C;
};
struct func_8024ADE0_Glob {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
#define GX ((struct func_8024ADE0_Glob *)&D_801BBBF0)
extern u8 D_802592A4[];
extern u8 D_8024AF34[];
extern f32 D_80259310__load_func_8024ADE0;
extern f32 D_80259314__load_func_8024ADE0;
extern f32 D_80259318__load_func_8024ADE0;
extern f32 D_8025931C__load_func_8024ADE0;
extern f32 D_80259320__load_func_8024ADE0;

void func_8024ADE0(struct func_8024ADE0_Struct *arg0, s32 arg1) {
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            GX->unk1E8 = D_80259310__load_func_8024ADE0;
            GX->unk1EC = D_80259314__load_func_8024ADE0;
            GX->unk1F0 = D_80259318__load_func_8024ADE0;
            GX->unk1F4 = -75.0f;
            GX->unk1F8 = D_8025931C__load_func_8024ADE0;
            GX->unk1FC = D_80259320__load_func_8024ADE0;
            D_8011AAF4(D_802592A4, 0x1FE, arg0, 0, 1, 0.0f, GX->unk1E8, GX->unk1EC, GX->unk1F0, 0.0f, GX->unk1F4, GX->unk1F8, GX->unk1FC, 0.0f, 35.0f, -1, -1);
            arg0->unk2C |= 0x3E0;
            arg0->unk4C = 2;
            arg0->unk4D = 0xF;
            arg0->unk4E = 2;
            arg0->unk4F = 0;
            arg0->unk50 = 0;
            arg0->unk54 = 1;
            func_800058DC(arg0, D_8024AF34);
        }
    }
}
