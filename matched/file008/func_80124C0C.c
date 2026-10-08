#include "common.h"

typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;

extern func_80124C0C_Struct D_801BBBF0;

void func_800058DC(s32 arg0, void *arg1);
void func_80124C54(void);

void func_80124C0C(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 7;
    if (D_801BBBF0.unk164 == 0) {
        D_801BBBF0.unk168 = 0;
        D_801BBBF0.unk17D = 0;
        func_800058DC(arg0, func_80124C54);
    }
}
