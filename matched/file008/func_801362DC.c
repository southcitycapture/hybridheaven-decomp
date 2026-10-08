#include "common.h"

typedef struct func_801362DC_StructBBBF0 {
    u8 pad0[0xF00];
    s16 unkF00;
    u8 pad1[0x6];
    f32 unkF08;
    u8 pad2[0x4];
    s32 unkF10;
} func_801362DC_StructBBBF0;

extern func_801362DC_StructBBBF0 D_801BBBF0;
extern void func_80136354();
s32 func_800178E8();
void func_800058DC(void *arg0, void *arg1);

void func_801362DC(u8 *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        D_801BBBF0.unkF10 = 0x02A80003;
        D_801BBBF0.unkF00 = 0x1000;
        D_801BBBF0.unkF08 = 3.0f;
        *(s16 *)(arg0 + 0x90) = 0x40;
        func_800058DC(arg0, func_80136354);
    }
}
