#include "context.h"

extern void func_80006214(s32 arg0);
extern u8 D_8008DA88[];
extern s32 D_801E12C0;

void func_801D04F8(void) {
    func_80006214(D_801E12C0);
    *(u8 *)(*(u8 **)(D_8008DA88 + 0x4C) + 0x22) = 0;
}
