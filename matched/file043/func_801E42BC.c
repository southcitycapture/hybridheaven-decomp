#include "common.h"

typedef struct func_801E4428_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E4428_StructFl;
typedef struct func_801E4428_StructLow {
    u8 pad0[0x2C];
    struct func_801E4428_StructFl *unk2C;
} func_801E4428_StructLow;
typedef struct func_801E4428_StructMid {
    u8 pad0[0x24];
    struct func_801E4428_StructLow *unk24;
} func_801E4428_StructMid;
typedef struct func_801E4428_StructTop {
    u8 pad0[0x8];
    struct func_801E4428_StructMid *unk8;
} func_801E4428_StructTop;
extern struct func_801E4428_StructTop *D_801DAB14;
#define FUNC_801E42BC_NEXT(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E42BC_CHAIN() FUNC_801E42BC_NEXT(FUNC_801E42BC_NEXT((u8 *)D_801DAB14, 0x8), 0x24)
extern void func_801CC470(s32, s32, s32, s32, f32);
s32 func_801E42BC(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FUNC_801E42BC_CHAIN();
    if (temp_v0 != NULL) {
        *(f32 *)(FUNC_801E42BC_NEXT(temp_v0, 0x2C) + 0x4) = 7.19999981f;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0xC) = 164.0f;
        *(s16 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x12) = 0x1127;
        func_801CC470(0, 0x03480012, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
