#include "context.h"
void func_80384ED0(struct func_803833A8_Struct *arg0, s32 arg1);

typedef struct func_80384E4C_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_80384E4C_Struct;

extern void func_80006088(s32);
extern u8 D_8038CB2C[];
extern u32 D_8008DA88[];

void func_80384E4C(func_80384E4C_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_8001B204(0, 0, 0, D_8038CB2C);
        func_80006088(D_8008DA88[2]);
        func_80006088(D_8008DA88[1]);
        func_80006088(D_8008DA88[0]);
        arg0->unkB0 = 5;
        func_800058DC(arg0, (void *) func_80384ED0);
    }
}
