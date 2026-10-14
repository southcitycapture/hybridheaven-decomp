#include "context.h"

struct func_801C3A1C_StructE0Sub {
    u8 pad0[0x8];
    s32 unk8;
};
struct func_801C3A1C_StructE0 {
    u8 pad0[0x2C];
    struct func_801C3A1C_StructE0Sub *unk2C;
};
typedef struct func_801C3A1C_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_801C3A1C_StructE0 *unkE0;
    u8 pad1[0x198 - 0xE4];
    s32 unk198;
    u8 pad2[0x1A0 - 0x19C];
    s32 unk1A0;
    u8 pad3[0xF14 - 0x1A4];
    s32 unkF14;
    s32 unkF18;
} func_801C3A1C_StructBBBF0;
struct func_801C3A1C_Obj {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    struct func_801C3174_Sub *unk5C;
};

extern void func_8012AAE8(void *a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_8012A7F4(void *a0, s32 a1, s32 a2, s32 a3);
extern struct func_801C3174_Global D_80388500;

void func_801C3A1C(void *arg0, s32 arg1) {
    struct func_801C3174_Sub *sp2C;
    func_801C3A1C_StructBBBF0 *bbbf0;

    sp2C = ((struct func_801C3A1C_Obj *)arg0)->unk5C;
    ((struct func_801C3A1C_Obj *)arg0)->unk54 = 1;
    bbbf0 = (func_801C3A1C_StructBBBF0 *)D_801BBBF0;
    func_8012AAE8(arg0, bbbf0->unk198, bbbf0->unkE0->unk2C->unk8, bbbf0->unk1A0, 1.0f);
    if (func_8012CE9C(arg1, (s32)sp2C, D_80388500, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        if (func_8012A7F4(arg0, ((func_801C3A1C_StructBBBF0 *)D_801BBBF0)->unkF14, ((func_801C3A1C_StructBBBF0 *)D_801BBBF0)->unkF18, 0x100) == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, (void *)func_801C3174);
        }
    }
}
