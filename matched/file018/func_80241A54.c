#include "context.h"
extern struct func_80242178_Struct D_801BBBF0;
void func_800058DC(s32, void *);

typedef struct func_80241A54_Struct1 {
    u8 pad[0x30];
    u8 *unk30;
} func_80241A54_Struct1;

extern void func_80241AD4(void);

void func_80241A54(void *arg0, func_80241A54_Struct1 **arg1) {
    u8 *temp_v0;
    s32 temp_v0_2;
    s32 tmp;

    temp_v0 = (*arg1)->unk30;
    temp_v0[0x4B] = (u8) (temp_v0[0x4B] + 2);
    tmp = ((u8 *) &D_801BBBF0)[0xF21];
    if (tmp < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF20] = (u8) (((u8 *) &D_801BBBF0)[0xF20] + 1);
    }
    if (((u8 *) &D_801BBBF0)[0xF22] < 0xFF) {
        ((u8 *) &D_801BBBF0)[0xF21] = (u8) (tmp + 1);
    }
    temp_v0_2 = ((u8 *) arg0)[0x94];
    ((u8 *) arg0)[0x94] = (u8) (temp_v0_2 - 1);
    if (temp_v0_2 == 0) {
        func_800058DC((s32) arg0, func_80241AD4);
    }
}
