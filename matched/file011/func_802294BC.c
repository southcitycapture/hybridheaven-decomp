#include "context.h"

typedef struct func_802294BC_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad1[0x334 - 0x2DA];
    s32 unk334;
    u8 pad2[0x38F - 0x338];
    u8 unk38F;
} func_802294BC_Struct;

s32 func_8022B640(u8, void *);                      /* extern */

void func_802294BC(func_802294BC_Struct *arg0) {
    s32 idx;

    arg0->unk2D8 = 8;
    idx = func_8022B640(arg0->unk38F, arg0);
    arg0->unk2D9 = *(u8 *)(arg0->unk334 + idx + 0x7F);
}
