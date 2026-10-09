#include "context.h"
extern u8 D_802407E8[];

typedef struct func_80234450_Struct {
    u8 pad[0x8];
    u8 unk8;
    u8 pad2[0x3];
} func_80234450_Struct;

void func_80234450(void) {
    func_80234450_Struct *base;
    s32 var_v0;

    base = (func_80234450_Struct *)D_802407E8;
    for (var_v0 = 0; var_v0 < 5; var_v0 = (var_v0 + 1) & 0xFF) {
        base[var_v0].unk8 = 1;
    }
}
