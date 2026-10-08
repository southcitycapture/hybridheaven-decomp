#include "context.h"

typedef struct func_80136840_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_80136840_Struct;

extern void func_80136898();

void func_80136840(func_80136840_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800179B0(D_80217FB0);
        func_80020744(0x3DC);
        func_800058DC(arg0, func_80136898);
    }
}
