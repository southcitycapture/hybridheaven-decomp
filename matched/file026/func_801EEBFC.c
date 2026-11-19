#include "common.h"
struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};
struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};
struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};
extern struct func_801EC5B4_Struct0 *D_801DAB14;
s32 func_801C0B8C(u64 time);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);


extern f32 D_801FC8F8;

#define LW(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define FUNC_801EEBFC_NODE LW(LW(LW(LW(LW(D_801DAB14, 8), 8), 8), 8), 0x24)

s32 func_801EEBFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x06670C5A) != 0) {
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 4) = -202.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 8) = 0.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 12) = D_801FC8F8;
        *(s16 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 18) = 0x800;
        func_801CC470(3, 0x02A80006, 0, 0x100, 3.0f);
        return 0x14;
    }
    return 0x13;
}
