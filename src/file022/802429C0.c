#include "common.h"


void *func_80005670(s32 arg0, u8 *arg1);
extern u8 D_802503B4[];

s32 func_802429C0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s8 arg4) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_802503B4);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x90) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x94) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x98) = arg3;
        *(s8 *)((u8 *)temp_v0 + 0xA0) = arg4;
        return 1;
    }
    return 0;
}


extern f64 D_80252620;

f32 func_80242A20(f32 arg0) {
    f32 var_fv1;

    var_fv1 = (f32) ((f64) arg0 + D_80252620);
    if ((f64) var_fv1 < -10.0) {
        var_fv1 = -10.0f;
    }
    return var_fv1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80242A68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80242AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80242B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80242C38.s")


extern s32 func_8012C6B4();
extern f64 D_80252698;
extern f64 D_802526A0;

void func_802432FC(s32 arg0, u16 arg1) {
    u32 var_v0;

    if ((arg1 >= 0xDC) && (arg1 < 0xE9)) {
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            func_802429C0(arg0, 181.0f, -760.0f, (f32) (0x30 - (((arg1 - 0xDC) & 0xFFFF) * 8)), -1);
        }
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            var_v0 = (arg1 - 0xDC) & 0xFFFF;
            func_802429C0(arg0, (f32) (((f64) var_v0 * D_80252698) + D_802526A0), -760.0f, (f32) (((s32) var_v0 * 7) - 0x84), -1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_8024341C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80243880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file022/802429C0/func_80244218.s")


extern void func_80005700(void *, void *);

struct func_80244444_Struct {
    u8 pad[0xA0];
    s8 unkA0;
};

struct func_80244444_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80244444_Outer {
    u8 pad[0x30];
    struct func_80244444_Inner *unk30;
};

void func_80244444(struct func_80244444_Struct *arg0, struct func_80244444_Outer **arg1) {
    s32 var_v0;
    s8 temp_v1;
    struct func_80244444_Inner *temp_a0;

    temp_v1 = arg0->unkA0;
    if (temp_v1 != 0) {
        temp_a0 = (*arg1)->unk30;
        var_v0 = temp_a0->unk4B;
        var_v0 += temp_v1;
        if (var_v0 < 0) {
            func_80005700(arg0, arg1);
            return;
        }
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
        }
        temp_a0->unk4B = (u8) var_v0;
    }
}

