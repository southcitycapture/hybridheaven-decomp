#include "context.h"
extern u8 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

typedef struct func_801E5084_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E5084_StructD;

typedef struct func_801E5084_StructC {
    u8 pad0[0x2C];
    func_801E5084_StructD *unk2C;
} func_801E5084_StructC;

typedef struct func_801E5084_StructB {
    u8 pad0[0x24];
    func_801E5084_StructC *unk24;
} func_801E5084_StructB;

typedef struct func_801E5084_StructA {
    u8 pad0[8];
    func_801E5084_StructB *unk8;
} func_801E5084_StructA;

extern f32 D_801F586C;

s32 func_801E5084(s32 arg0, s32 arg1) {
    func_801E5084_StructA **pa;

    if (func_801C0B8C(0x53EC60) != 0) {
        pa = &D_801DAB14;
        (*pa)->unk8->unk24->unk2C->unk4 = 5.0f;
        (*pa)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pa)->unk8->unk24->unk2C->unkC = D_801F586C;
        (*pa)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x0348000D, 0, 0x1100, 5.0f);
        return 5;
    }
    return 4;
}
