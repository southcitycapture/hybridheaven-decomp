#include "common.h"
struct func_801E8E80_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E8E80_Struct3 {
    u8 pad0[0x2C];
    struct func_801E8E80_Struct4 *unk2C;
};
struct func_801E8E80_Struct2 {
    u8 pad0[0x24];
    struct func_801E8E80_Struct3 *unk24;
};
struct func_801E8E80_Struct1 {
    u8 pad0[8];
    struct func_801E8E80_Struct2 *unk8;
};
struct func_801E8E80_Struct0 {
    u8 pad0[8];
    struct func_801E8E80_Struct1 *unk8;
};
extern struct func_801E8E80_Struct0 *D_801DAB14;
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);


extern f32 D_801EA0D4;
extern f64 D_801EA5D8;
extern f32 D_801EA5E0;
extern f32 D_801EA5E4;

s32 func_801E90F8(s32 arg0, s32 arg1) {
    f32 k;
    f32 temp;
    u64 r;
    f64 d;

    r = func_801C0F18(4, 1);
    d = func_80034C24(r);
    k = D_801EA0D4;
    temp = (f32)(d / D_801EA5D8) / k;
    D_801DAB14->unk8->unk8->unk24->unk2C->unk4 = temp * -7.0f + D_801EA5E0;
    D_801DAB14->unk8->unk8->unk24->unk2C->unkC = temp * -6.0f + D_801EA5E4;
    goto L;
L:
    if (func_801C0DE4(4, 1, k) != 0) {
        func_801C0EB0(4, 1);
        func_801CC4D8(1, 0x0320001A, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}
