#include "context.h"

struct func_80025CDC_Struct {
    u8 pad0[0xE];
    u8 unkE;
    u8 unkF;
    u8 pad10[0x11];
    u8 unk21;
    u8 unk22;
};

extern void func_80026950(s32, void *, s32, s32);
extern s32 D_800498F0;
extern u8 D_800CBBE0[];

void func_80025CDC(void) {
    if (((struct func_80025CDC_Struct *) D_800CBDA4)->unkE != 0) {
        ((struct func_80025CDC_Struct *) D_800CBDA4)->unkF = 1;
        func_80026950(D_800498F0, D_800CBBE0 + D_800CBAB4 * 0x1C, 0, 0x1388);
    }
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk21 = *D_800CBDA0;
    D_800CBDA0 += 1;
    ((struct func_80025CDC_Struct *) D_800CBDA4)->unk22 = 1;
}
