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
extern void func_801C0D04(s32 a0, s32 a1);
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);

extern u64 func_801C0F18(s32 a0, s32 a1);
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 a0, s32 a1, f32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern s32 func_801D2C5C(s32 a0, s32 a1);
extern f32 D_801EA0D0;
extern f64 D_801EA5C0;
extern f32 D_801EA5C8;
extern f32 D_801EA5CC;
extern f32 D_801EA5D0;
extern f32 D_801EA5D4;

s32 func_801E8F98(s32 arg0, s32 arg1) {
    f32 t;
    f32 k;
    f64 d;

    d = func_80034C24(func_801C0F18(4, 1));
    t = (f32)(d / D_801EA5C0) / D_801EA0D0;
    k = D_801EA0D0;
    D_801DAB14->unk8->unk8->unk24->unk2C->unk4 = D_801EA5CC + t * D_801EA5C8;
    D_801DAB14->unk8->unk8->unk24->unk2C->unkC = t * -44.5f + D_801EA5D0;
    if (func_801C0DE4(4, 1, k) != 0) {
        func_801C0EB0(4, 1);
        func_801C0D04(4, 1);
        return 5;
    }
    if (func_801D2C5C(0x0320001B, 0) != 0 || func_801D2C5C(0x0320001B, 0) != 0) {
        struct func_801E8E80_Struct4 *p = D_801DAB14->unk8->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, *(s32 *)&p->unkC, 0x4A1, D_801EA5D4, 1.0f);
    }
    return 4;
}
