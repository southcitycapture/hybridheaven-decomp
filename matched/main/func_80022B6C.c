#include "context.h"

typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;

extern u16 D_80047E3A[];
extern func_80022B6C_Struct D_800CBABC;
extern func_80022B6C_Struct D_800CBAC0;
extern s32 D_800CBB48;

void func_80022B6C(void) {
    if (D_800CBB48 != 0xA) {
        if (D_800CBABC.unk2 == 0) {
            D_800CBABC.unk2 = 0xFFFFU;
        }
        D_800CBABC.unk0 = D_80047E3A[D_800CBB48];
        return;
    }
    if (D_800CBAC0.unk2 == 0) {
        D_800CBAC0.unk2 = 0xFFFFU;
    }
    D_800CBAC0.unk0 = D_80047E3A[D_800CBB48];
}
