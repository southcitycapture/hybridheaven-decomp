#include "context.h"

struct func_80022BE0_Struct {
    u16 unk0;
    u16 unk2;
};

extern struct func_80022BE0_Struct D_800CBAC0;

void func_80022BE0(void) {
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFF;
    }
    D_800CBAC0.unk0 = 0x199;
}
