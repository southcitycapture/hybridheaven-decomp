#include "common.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4();
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


struct func_80214D20_StructIn {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x38];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80214D20_StructOut {
    u8 pad0[0x30];
    struct func_80214D20_StructIn *unk30;
};
struct func_80214D20_StructA0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
    u8 pad48[0x91 - 0x48];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
};
struct func_80214D20_StructRandom {
    s32 x;
    s32 y;
    s32 z;
    s32 size;
};
struct func_80214D20_StructPalette {
    u32 red;
    u32 green;
    u16 blue;
};
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

s32 func_80214D20(struct func_80214D20_StructA0 *arg0, struct func_80214D20_StructOut **arg1) {
    u32 white;
    s32 sp90;
    struct func_80214D20_StructPalette color;
    struct func_80214D20_StructRandom random;
    f32 fs2;
    s32 i;
    s32 r;
    s32 m;
    s32 lim;
    s16 j;

    sp90 = arg0->unk3C++;
    i = 0;
    arg0->unk44 = (f32)((f64)arg0->unk44 * (0.8));
    if ((f64)arg0->unk44 < (0.1)) {
        fs2 = (0.2f);
        lim = 0x2000;
        do {
            j = i;
            r = func_801FD168(arg0->unk94, arg0->unk98, arg0->unk9C, (f32)((f64)func_8001EAD0(j) * 4.0), fs2, (f32)((f64)func_8001EB64(j) * 4.0), 0, 0, 0, 0x1D, 0, 0);
            if (r != 0) {
                func_801FD260(r, arg0);
            }
            i += 0x400;
        } while (i != lim);
        return 0;
    }
    white = 0xFF;
    color.red = 0x66;
    color.green = 0xCD;
    color.blue = 0x4C;
    (*arg1)->unk30->unk48 = white;
    (*arg1)->unk30->unk49 = white;
    (*arg1)->unk30->unk4A = white;
    (*arg1)->unk30->unk4C = color.red;
    (*arg1)->unk30->unk4D = color.green;
    (*arg1)->unk30->unk4E = color.blue;
    m = sp90 % 2;
    if (m == 0) {
        (*arg1)->unk30->unk48 = (u32)((f64)(u32)(*arg1)->unk30->unk48 * 0.5);
        (*arg1)->unk30->unk49 = (u32)((f64)(u32)(*arg1)->unk30->unk49 * 0.5);
        (*arg1)->unk30->unk4A = (u32)((f64)(u32)(*arg1)->unk30->unk4A * 0.5);
        (*arg1)->unk30->unk4C = (u32)((f64)(u32)(*arg1)->unk30->unk4C * 0.5);
        (*arg1)->unk30->unk4D = (u32)((f64)(u32)(*arg1)->unk30->unk4D * 0.5);
        (*arg1)->unk30->unk4E = (u32)((f64)(u32)(*arg1)->unk30->unk4E * 0.5);
    }
    if (m == 0) {
        random.x = func_8012C6B4(0xC8);
        random.y = func_8012C6B4(0xC8);
        random.z = func_8012C6B4(0xC8);
        random.size = func_8012C6B4(0x28);
        func_80129FB8((f32)(((f64)(random.x - 0x64) / 100.0) + (f64)arg0->unk94), (f32)(((f64)(random.y - 0x64) / 100.0) + (f64)arg0->unk98), (f32)(((f64)(random.z - 0x64) / 100.0) + (f64)arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x34, 0x50, -6, (f32)(((f64)random.size / (1e+03)) + (0.15)), 9, 0);
    }
    if (!(sp90 % 4)) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x14);
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.3f, arg0->unkA2, 1.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 40.0f)) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1E);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
