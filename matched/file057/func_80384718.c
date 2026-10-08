#include "context.h"

typedef struct func_80384718_Struct {
    u8 pad0[0xA9];
    u8 unkA9;
    u8 pad1[0xB0 - 0xAA];
    s16 unkB0;
} func_80384718_Struct;

extern void func_80381F40(void *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, u8 *a7);
extern u8 D_80240730[];
extern void func_803847DC();
extern void func_80384AB4();

void func_80384718(func_80384718_Struct *arg0, s32 arg1) {
    u8 sp2F;

    arg0->unkA9 = 0;
    if (D_80240730[0x20] != 0) {
        func_80381F40(arg0, 0, 0x48, 0xA0, 0xA0, 0xA0, 0x17, &sp2F);
        func_80381F40(arg0, 0x2E, 0x48, 0xFF, 0xFF, 0xFF, 0x19, &sp2F);
        arg0->unkB0 = 0xA;
        func_800058DC(arg0, func_803847DC);
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_80384AB4);
}
