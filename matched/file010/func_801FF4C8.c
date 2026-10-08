#include "common.h"

typedef struct func_801FF4C8_Struct {
    u8 pad0[0x9F];
    u8 unk9F;
    u8 pad1[0xA8 - 0xA0];
    u16 unkA8;
} func_801FF4C8_Struct;

extern u16 D_8021774C[];
void func_801FF52C(void);
void func_801FF588(void);
void func_800058DC(void *self, void *fn);

void func_801FF4C8(func_801FF4C8_Struct *arg0, s32 arg1) {
    if (D_8021774C[arg0->unk9F] == 0) {
        func_800058DC(arg0, func_801FF588);
        return;
    }
    arg0->unkA8 = arg0->unkA8 | 4;
    func_800058DC(arg0, func_801FF52C);
}
