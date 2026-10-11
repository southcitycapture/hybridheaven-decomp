#include "context.h"

typedef struct func_8014AAB4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8014AAB4_Struct;

extern s32 D_80181AA0[];
extern s32 D_801BED10;
extern u8 D_801BED14;
extern u8 D_801BED15;

void func_8014AAB4(func_8014AAB4_Struct *arg0, s32 arg1) {
    void (*temp_v0)();

    if (--arg0->unk3C == 0) {
        temp_v0 = (void (*)())D_80181AA0[D_801BED14];
        if (temp_v0 != NULL) {
            temp_v0();
        }
        temp_v0 = (void (*)())D_80181AA0[D_801BED15];
        if (temp_v0 != NULL) {
            temp_v0(arg0);
        }
        func_800058DC(arg0, (void *)D_801BED10);
    }
}
