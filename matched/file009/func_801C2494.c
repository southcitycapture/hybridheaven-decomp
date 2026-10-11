#include "context.h"

typedef struct func_801C2494_Struct2C {
    u8 pad0[0x8];
    s32 unk8;
} func_801C2494_Struct2C;

typedef struct func_801C2494_StructE0 {
    u8 pad0[0x2C];
    func_801C2494_Struct2C *unk2C;
} func_801C2494_StructE0;

typedef struct func_801C2494_StructBBBF0 {
    u8 pad0[0xE0];
    func_801C2494_StructE0 *unkE0;
    u8 pad1[0x196 - 0xE4];
    s16 unk196;
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xF14 - 0x1A4];
    s32 unkF14;
    s32 unkF18;
} func_801C2494_StructBBBF0;

typedef struct func_801C2494_Struct388500 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C2494_Struct388500;

extern void func_801C1B38(void);
extern void func_8012AAE8(void *, s32, s32, s32, f32);
extern s32 func_8012CE9C(s32, void *, func_801C2494_Struct388500, s32);
extern s32 func_8012A7F4(void *, s32, s32, s32);
extern void func_80010550(s32, void *);
extern func_801C2494_Struct388500 D_80388500;

void func_801C2494(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructInner *sp2C;

    sp2C = arg0->unk5C;
    *(s32 *) ((u8 *) arg0 + 0x54) = 1;
    func_8012AAE8(arg0, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk198, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkE0->unk2C->unk8, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk1A0, 1.0f);
    if (func_8012CE9C(arg1, sp2C, D_80388500, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        if (func_8012A7F4(arg0, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkF14, ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unkF18, 0x100) == 0) {
            sp2C->unk78 = 1;
            ((func_801C2494_StructBBBF0 *) &D_801BBBF0)->unk196 = 1;
            func_800058DC(arg0, func_801C1B38);
        }
    }
}
