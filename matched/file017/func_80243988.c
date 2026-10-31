#include "common.h"
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)


typedef struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80243988_Struct;

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 pad12;
    s16 unk14;
} func_80243988_Sub;

typedef struct {
    u8 pad0[0x30];
    func_80243988_Sub *unk30;
} func_80243988_Obj;
extern void func_80005700(func_80243988_Struct *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_8025C778;
extern f64 D_8025C780;

void func_80243988(func_80243988_Struct *arg0, func_80243988_Obj **arg1) {
    s32 pad[2];
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    f32 temp_fv0;
    s32 temp_v1;
    s32 rot;
    s32 rot2;
    func_80243988_Sub *temp_v0;

    temp_v1 = arg0->unk3C++;
    arg0->unk90 += arg0->unk40;
    arg0->unk94 += arg0->unk44;
    arg0->unk98 += arg0->unk48;
    arg0->unk44 -= D_8025C778;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk10 = (s32)(s16)(s32)((arg0->unk40 * 10.0f) + temp_v0->unk10) & 0x1FFF;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk14 = (s32)(s16)(s32)((arg0->unk48 * 10.0f) + temp_v0->unk14) & 0x1FFF;
    if ((u32)(temp_v1 % 2) <= 0) {
        sp5C = func_8012C6B4(0xC8);
        sp60 = func_8012C6B4(0xC8);
        sp64 = func_8012C6B4(0xC8);
        func_80129FB8((sp5C - 0x64) / 10.0 + arg0->unk90, (sp60 - 0x64) / 10.0 + arg0->unk94,
                      (sp64 - 0x64) / 10.0 + arg0->unk98, 0.0f, 0.0f, 0.0f, 0.0f,
                      0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x64, -6,
                      func_8012C6B4(0x28) / 100.0 + D_8025C780, 5, 0);
    }
    if (arg0->unk94 < -400.0f) {
        func_80005700(arg0);
    }
}
