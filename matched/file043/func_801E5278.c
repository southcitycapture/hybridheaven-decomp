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
extern void func_801CC470(s32, s32, s32, s32, f32);
struct func_801E5278_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_801E5278_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5278_Struct4 *unk2C;
};
struct func_801E5278_Struct2 {
    u8 pad0[0x24];
    struct func_801E5278_Struct3 *unk24;
};
struct func_801E5278_Struct1 {
    u8 pad0[0x8];
    struct func_801E5278_Struct2 *unk8;
};
struct func_801E5278_Struct0 {
    u8 pad0[0x8];
    struct func_801E5278_Struct1 *unk8;
};
s32 func_801E5278(s32 arg0, s32 arg1) {
    struct func_801E5278_Struct3 *temp_v0;

    temp_v0 = ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -8.0f;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 151.600006f;
        ((struct func_801E5278_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xC2D;
        func_801CC470(1, 0x03480012, 0, 0x11, 1.0f);
        return 2;
    }
    return 1;
}
