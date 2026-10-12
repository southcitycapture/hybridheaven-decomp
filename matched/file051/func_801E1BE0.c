#include "context.h"

typedef struct func_801E1BE0_StructB {
    u8 pad0[0x34];
    f32 unk34;
} func_801E1BE0_StructB;
typedef struct func_801E1BE0_StructA {
    u8 pad0[0x2C];
    func_801E1BE0_StructB *unk2C;
} func_801E1BE0_StructA;

extern func_801E1BE0_StructA *D_801BBCD8;
extern f32 D_801E7144;
extern f32 D_801E7148;
extern f32 D_801E714C;
extern f32 D_801E7150;
extern f32 D_801E77F0;
extern f32 D_801E77F4;

void func_801E1BE0(void) {
    D_801E7144 = D_801BBCD8->unk2C->unk34;
    D_801E7148 = 0.0f;
    D_801E714C = D_801E77F0;
    D_801E7150 = D_801E77F4;
}
