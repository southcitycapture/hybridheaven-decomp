#include "context.h"
extern s32 D_8008DA88[];
extern u8 func_80006214(s32);
extern void func_80145348(void *, s32, s32);
extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern s32 D_80240884;

void func_8023AB94(s32 arg0) {
    u8 sp47;
    u8 sp46;

    sp46 = func_80006214(arg0);
    func_80146208((void *)arg0, &sp47, 0xE6, 0x2E, 0x70, 8, 8, 8, 0, 0xFF, 0x209, 6);
    func_80145348((void *)arg0, 0x1A, 3);
    func_80146208((void *)arg0, &sp47, 0x66, 0x10A, 0x70, 8, 8, 0, 0, 0xFF, 0x209, 6);
    func_80145348((void *)arg0, 0x1A, 3);
    D_80240884 = D_8008DA88[sp46];
}
