#include "common.h"
extern u8 D_8005CE70[];

extern s32 func_80026450();

void func_800027D8(u8 arg0, s32 arg1) {
    func_80026450(&D_8005CE70[arg0 * 0x68], arg1);
}
