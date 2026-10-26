#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
typedef struct func_80022B6C_Struct {
    u16 unk0;
    u16 unk2;
} func_80022B6C_Struct;
extern func_80022B6C_Struct D_800CBAC4[];
extern u16 D_800CBAC8[];
extern s32 D_800CBB48;
extern void (*D_80047E0C[])(void);


void func_80022C8C(void) {
    s32 value;
    s32 i;
    u16 *p;

    value = (D_800CBB48 &= 0x7FFF);
    for (i = 0; i < 1; i++) {
        if (value == D_800CBAC8[i]) {
            return;
        }
    }
    for (i = 0; i < 1; i++) {
        if (D_800CBAC8[i] == 0) {
            D_800CBAC8[i] = value;
            D_800CBAC4[i].unk2 = 0xFFFF;
            D_800CBAC4[i].unk0 = 0x400;
            return;
        }
    }
}
