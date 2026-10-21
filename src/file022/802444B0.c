#include "common.h"


extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_80252770;
extern f64 D_80252778;
extern f64 D_80252780;
extern f64 D_80252788;
extern f64 D_80252790;
extern f64 D_80252798;
extern f64 D_802527A0;
extern f64 D_802527A8;
extern f64 D_802527B0;
extern f64 D_802527B8;
extern f64 D_802527C0;
extern f64 D_802527C8;
extern f64 D_802527D0;
extern f64 D_802527D8;
extern f64 D_802527E0;
extern f64 D_802527E8;
extern f64 D_802527F0;
extern f64 D_802527F8;
extern f64 D_80252800;
extern f64 D_80252808;
extern f64 D_80252810;
extern f64 D_80252818;
extern f64 D_80252820;
extern f32 D_80252828;
extern f32 D_8025282C;
extern f32 D_80252830;
extern f64 D_80252838;
extern f32 D_80252840;
extern f64 D_80252848;
extern f64 D_80252850;
extern f64 D_80252858;
extern f32 D_80252860;
extern f64 D_80252868;

void func_802444B0(u16 temp_a0) {
    s32 unused;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 temp_s0;
    s32 sp80;

    if ((temp_a0 >= 0x3C1) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_80252770), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252778 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252780), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xDC, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 2.0), 0xA, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + 50.0f), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252788 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + 200.0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) ((f64) (sp88 - 0x1F4) / 10.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252790 + ((f64) (temp_a0 - 0x294) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252798), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 0, 0);
    }
    if ((temp_a0 < 0x3C0) && (temp_a0 >= 0x385) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527A0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527A8 + ((f64) (temp_a0 - 0x348) / 5.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_802527B0), 0.0f, 2.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x371) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527B8), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527C0 + ((f64) (temp_a0 - 0x2E4) / 20.0)), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_802527C8), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -4, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 1.0), 9, 0);
    }
    if ((temp_a0 >= 0x213) && !(temp_a0 & 1)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + D_802527D0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527D8), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 5.0) + D_802527E0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_802527E8), (f32) (((f64) (sp90 - 0x1F4) / 5.0) + 84.0), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_802527F0), 0xA, 0);
    }
    if ((temp_a0 >= 0x97) && !(temp_a0 & 3)) {
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + D_802527F8), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252800), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252808), 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 8, 0);
        sp88 = func_8012C6B4(0x3E8);
        sp8C = func_8012C6B4(0x3E8);
        sp90 = func_8012C6B4(0x3E8);
        func_80129FB8((f32) (((f64) (sp88 - 0x1F4) / 10.0) + -32.0), (f32) (((f64) (sp8C - 0x1F4) / 50.0) + D_80252810), (f32) (((f64) (sp90 - 0x1F4) / 10.0) + D_80252818), 0.0f, 0.0f, 0.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xA0, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252820), 0xA, 0);
    }
    if ((temp_a0 >= 0x213) && (temp_a0 < 0x33E)) {
        if (!((temp_a0 + 0x28) & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(D_80252828, D_8025282C, 98.0f, -6.0f, 1.0f, 1.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
        if (!(temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-181.0f, -700.0f, 0.0f, -6.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
    }
    if (temp_a0 >= 0x1F5) {
        if ((temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-185.0f, -740.0f, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
        }
    } else if ((temp_a0 >= 0x12D) && (temp_a0 < 0x1F4)) {
        if ((temp_a0 & 0x40) && !(temp_a0 & 3)) {
            func_80129FB8(-185.0f, D_80252830, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252838), 3, 0);
        }
    } else if ((temp_a0 >= 0x97) && (temp_a0 < 0xF0)) {
        if (!(temp_a0 & 3)) {
            func_80129FB8(-185.0f, D_80252840, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0x4B, 0x4B, 0x4B, 0x32, 0x32, 0x32, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + 0.5), 0xB, 0);
            sp80 = func_8012C6B4(0x3E8);
            temp_s0 = func_8012C6B4(0x3E8);
            sp88 = func_8012C6B4(0x3E8);
            sp8C = func_8012C6B4(0x14);
            sp90 = func_8012C6B4(0x28);
            func_80129FB8((f32) (((f64) (sp80 - 0x1F4) / 50.0) + -52.0), (f32) (((f64) (temp_s0 - 0x1F4) / 50.0) + D_80252848), (f32) (((f64) (sp88 - 0x1F4) / 50.0) + D_80252850), 0.0f, 0.0f, 0.0f, 0.0f, sp8C + 0xEB, sp90 + 0xC8, 0, 0xFF, 0, 0, 0xC8, -2, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252858), 9, 0);
        }
        if (!(temp_a0 & 1)) {
            func_80129FB8(-185.0f, D_80252860, -106.0f, -8.0f, 1.0f, -8.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xE6, 0, (f32) (((f64) func_8012C6B4(0x14) / 100.0) + D_80252868), 3, 0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802444B0/func_8024569C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802444B0/func_80245B04.s")

