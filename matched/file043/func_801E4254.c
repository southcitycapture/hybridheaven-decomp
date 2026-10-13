#include "context.h"
typedef struct func_801E4428_StructTop {
    u8 pad0[0x8];
    struct func_801E4428_StructMid *unk8;
} func_801E4428_StructTop;
typedef struct func_801E4428_StructMid {
    u8 pad0[0x24];
    struct func_801E4428_StructLow *unk24;
} func_801E4428_StructMid;
typedef struct func_801E4428_StructLow {
    u8 pad0[0x2C];
    struct func_801E4428_StructFl *unk2C;
} func_801E4428_StructLow;
typedef struct func_801E4428_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E4428_StructFl;
typedef struct func_801E53D4_StructA {
    u8 pad0[0x8];
    struct func_801E4428_StructTop *unk8;
} func_801E53D4_StructA;
typedef struct func_801E53D4_StructG {
    func_801E53D4_StructA *unk0;
    u8 pad0[0x20];
} func_801E53D4_StructG;
extern func_801E53D4_StructG func_801DAAF0[];

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801CC530(void);
extern u8 func_801DAC30[];
extern u8 D_801DAD14[];

s32 func_801E4254(s32 arg0, s32 arg1) {
    func_80005670(*(void **)((u8 *)func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 8), D_801DAD14);
    func_801CC530();
    return 2;
}
