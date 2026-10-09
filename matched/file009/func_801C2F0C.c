#include "context.h"

struct func_801C2F0C_Struct20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct func_801C2F0C_StructBBBF0 {
    u8 pad0[0x1B4];
    u16 unk1B4;
    u8 pad1[0x1E0 - 0x1B6];
    f32 unk1E0;
};

extern void func_801C3B5C();
extern void func_801C3BAC(u16);
extern s32 func_801C3BBC();
extern struct func_801C2F0C_StructBBBF0 D_801BBBF0;
extern u8 D_801BBDA0[];
extern f32 D_801E0B18;

s32 func_801C2F0C(u16 arg0, void *arg1) {
    struct func_801C2F0C_Struct20 *src;

    if ((func_801C3B20() >= 2) && (func_801C3B3C() == 2)) {
        if (arg1 != NULL) {
            src = arg1;
            *(struct func_801C2F0C_Struct20 *) (D_801BBDA0 + 8) = *src;
        }
        D_801BBBF0.unk1B4 = 0;
        if (func_801C3BBC() != 0) {
            D_801BBBF0.unk1B4 = D_801BBBF0.unk1B4 | 1;
        }
        D_801BBBF0.unk1E0 = D_801E0B18;
        func_801C3BAC(arg0);
        func_801C3B5C();
        func_801C3BBC();
        return 1;
    }
    return 0;
}
