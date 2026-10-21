#include "context.h"

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
extern f64 D_8021AF18;
extern f64 D_8021AF20;
extern f32 D_8021AF28;
extern f64 D_8021AF30;
extern f64 D_8021AF38;
extern s32 func_801FD168(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_801FD260(s32, void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

s32 func_80214D20(struct func_80214D20_StructA0 *arg0, struct func_80214D20_StructOut **arg1) {
    u8 pad94[4];
    s32 sp90;
    u8 pad80[0x10];
    s32 sp7C;
    f32 fs1;
    f32 fs2;
    s32 i;
    s32 s1;
    s32 s3;
    s32 r;
    s32 m;
    s32 lim;
    s16 j;

    sp90 = arg0->unk3C++;
    i = 0;
    arg0->unk44 = (f32)((f64)arg0->unk44 * D_8021AF18);
    if ((f64)arg0->unk44 < D_8021AF20) {
        fs2 = D_8021AF28;
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
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x66;
    (*arg1)->unk30->unk4D = 0xCD;
    (*arg1)->unk30->unk4E = 0x4C;
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
        s1 = func_8012C6B4(0xC8);
        s3 = func_8012C6B4(0xC8);
        sp7C = func_8012C6B4(0xC8);
        func_80129FB8((f32)(((f64)(s1 - 0x64) / 100.0) + (f64)arg0->unk94), (f32)(((f64)(s3 - 0x64) / 100.0) + (f64)arg0->unk98), (f32)(((f64)(sp7C - 0x64) / 100.0) + (f64)arg0->unk9C), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x34, 0x50, -6, (f32)(((f64)func_8012C6B4(0x28) / D_8021AF30) + D_8021AF38), 9, 0);
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
