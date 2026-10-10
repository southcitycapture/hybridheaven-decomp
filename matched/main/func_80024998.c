#include "context.h"

struct func_80024998_Struct {
    u8 pad[0x4E];
    u16 f4E;
    u16 f50;
    u8 pad3[0x2];
    s16 f54;
};

extern u8 D_800481FE[];
extern u8 D_8004817A[];

void func_80024998(void) {
    u8 temp;

    ((struct func_80024998_Struct *) D_800CBDA4)->f4E = *(u16 *) &D_800481FE[-(*D_800CBDA0 * 2)];
    D_800CBDA0 = D_800CBDA0 + 1;
    temp = *D_800CBDA0;
    D_800CBDA0 = D_800CBDA0 + 1;
    ((struct func_80024998_Struct *) D_800CBDA4)->f50 = *(u16 *) &D_8004817A[-(((s32) (temp & 0xF0) >> 2) * 2)];
    ((struct func_80024998_Struct *) D_800CBDA4)->f54 = (s16) ((temp & 0xF) * 4);
}
