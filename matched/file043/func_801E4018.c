#include "common.h"

extern s32 D_801E96B8;
extern f32 D_801E96BC;
struct func_801E3CCC_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E3CCC_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E3CCC_Struct1 *unk30;
};
struct func_801E3CCC_Struct3 {
    u8 pad0[4];
    struct func_801E3CCC_Struct2 *unk4;
};
extern struct func_801E3CCC_Struct3 *D_8038D8D0;
#define ENTRY(off) (*(struct func_801E3CCC_Struct2 **)((u8 *)D_8038D8D0 + (off)))
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
s32 func_801E4018(s32 arg0, s32 arg1) {
    f64 t;
    f32 k;
    f32 b;
    f32 c;
    s32 i;
    u64 r;

    if (func_801C0DE4(3, 1, 0x40F33334) != 0) {
        func_801C0EB0(3, 1);
        return 7;
    }
    r = func_801C0F18(3, 1);
    t = func_80034C24(r);
    i = 1;
    if (D_801E96B8 + 1 >= 2) {
        k = (f32)(t / 1000000.0) / 7.60000038f;
        do {
            b = (f32)(i - 1) * D_801E96BC + -51.0f;
            c = (f32)(i - 1) * D_801E96BC + -940.0f;
            ENTRY(i * 4)->unk30->unk4 = (c - b) * k + b;
            i++;
        } while (D_801E96B8 >= i);
    }
    return 6;
}
