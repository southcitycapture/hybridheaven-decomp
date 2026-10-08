#include "common.h"

extern u8 D_801BBC0D;
extern u8 D_802174D4[];

f32 func_801FD780(u16 arg0) {
    return *(f32 *)(D_802174D4 + ((arg0 * 0xC) + (D_801BBC0D * 4)));
}
