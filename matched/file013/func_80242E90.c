#include "context.h"

typedef struct func_80242E90_StructB {
    u8 pad[4];
    f32 x, y, z;
} func_80242E90_StructB;
typedef struct func_80242E90_StructA {
    u8 pad[0x2C];
    func_80242E90_StructB *data;
} func_80242E90_StructA;
typedef struct func_80242E90_StructC {
    u8 pad[0x24];
    func_80242E90_StructA *data;
    u8 pad28[0x80];
    u16 timer;
} func_80242E90_StructC;

extern void func_800208C4(s32);
extern void func_802039B0(void *, s32);

void func_80242E90(func_80242E90_StructC *arg0, s32 arg1) {
    register u8 *temp_v0 = (u8 *)&D_801BBBF0;
    u16 temp_t8;
    s32 temp_v1;

    *(s32 *)(temp_v0 + 0x1058) = (s32)(arg0->data->data->x * 1000.0f);
    *(s32 *)(temp_v0 + 0x105C) = (s32)(arg0->data->data->y * 1000.0f);
    *(s32 *)(temp_v0 + 0x1060) = (s32)(arg0->data->data->z * 1000.0f);
    temp_v1 = arg0->timer;
    if (temp_v1 != 0) {
        temp_t8 = temp_v1 - 1;
        arg0->timer = temp_t8;
        if (!(temp_t8 & 0xFFFF)) {
            func_800208C4(0x63);
        }
    }
    func_802039B0(arg0, arg1);
}
