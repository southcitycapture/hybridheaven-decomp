#include "context.h"

typedef struct func_80244ED8_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80244ED8_Struct2;

typedef struct func_80244ED8_Struct1 {
    u8 pad0[0x30];
    func_80244ED8_Struct2 *unk30;
} func_80244ED8_Struct1;

extern s32 func_8001EF38(f32, f32);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern s32 func_801FD68C(void *);
extern f32 func_801FD780(u8);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f64 D_8024F068;
extern f64 D_8024F070;
extern f64 D_8024F078;
extern f64 D_8024F080;
extern f64 D_8024F088;

s32 func_80244ED8(func_80243204_Struct *arg0, func_80244ED8_Struct1 **arg1) {
    s32 sp34;
    f32 y;

    arg0->unk44 = arg0->unk44 + D_8024F068;
    y = ((f32 *)D_801BBCD0->unk2C)[3];
    if (arg0->unk9C < y && arg0->unk48 < D_8024F070) {
        arg0->unk48 = arg0->unk48 + D_8024F078;
    } else if (y < arg0->unk9C && D_8024F080 < arg0->unk48) {
        arg0->unk48 = arg0->unk48 - D_8024F088;
    }
    if (arg0->unk98 < -20.0f) {
        func_80380F94(arg0->unk94, -20.0f, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x17);
        func_801FD644(arg0->unk94, -20.0f, arg0->unk9C, 12.0f, 0x800, 1.0f, 1.0f, func_801FD780(arg0->pad5) * 80.0f);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x317);
        return 0;
    }
    func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x16);
    sp34 = func_801FD68C(arg0);
    if (sp34 != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1E);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x3C8);
        func_801FDB3C(sp34);
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 2.0f, 0x800, 1.0f, 1.0f, func_801FD780(arg0->pad5) * 80.0f) != 0) {
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x17);
        func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x317);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = (s16)-func_8001EF38(arg0->unk44, arg0->unk40) & 0x1FFF;
    (*arg1)->unk30->unk12 = 0x800;
    (*arg1)->unk30->unk14 = 0;
    return 1;
}
