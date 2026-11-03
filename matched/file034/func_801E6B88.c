#include "common.h"
struct func_801E58F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E58F0_StructB {
    u8 pad0[0x2C];
    struct func_801E58F0_StructC *unk2C;
};
struct func_801E58F0_StructA {
    u8 pad0[8];
    struct func_801E58F0_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E58F0_StructB *unk24;
};
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
s32 func_801D0408(void);


typedef struct func_801E6B88_Struct {
    u8 pad0[4];
    f32 unk4;
    struct func_801E6B88_Struct *unk8;
    f32 unkC;
    u8 pad10[0x14];
    struct func_801E6B88_Struct *unk24;
    u8 pad28[4];
    struct func_801E6B88_Struct *unk2C;
} func_801E6B88_Struct;

extern f32 D_801E96F4;
extern f32 D_801E96F8;
extern f32 D_801E96FC;

s32 func_801E6B88(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C1088(4, 2, 0x37) != 0 && func_801D0408() != 0) {
        func_801C10D8(4, 2);
        return 0x11;
    }
    t = (f32)func_801C1134(4, 2) / 55.0f;
    ((func_801E6B88_Struct *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E96F4 * t + D_801E96F8;
    ((func_801E6B88_Struct *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 3.5f * t + D_801E96FC;
    return 0x10;
}
