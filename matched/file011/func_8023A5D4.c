#include "context.h"
extern struct func_8023A2BC_Struct D_80240880;
extern void func_80146208(void *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern u8 func_80006214(s32);
extern s32 D_8008DA88[];

void func_8023A5D4(s32 arg0) {
    u8 sp47;
    u8 sp46;

    sp46 = func_80006214(arg0);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 8), D_80240880.unk16 - 0x12, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 0);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 + 2), D_80240880.unk16 - 8, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 2);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 8), D_80240880.unk16 + 2, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 1);
    func_80146208((void *) arg0, &sp47, 6, (s16) (D_80240880.unk14 - 0x12), D_80240880.unk16 - 8, 0x10, 0x10, 0, 0, 0xFF, 0x20B, 3);
    *(s32 *) ((u8 *) &D_80240880 + 8) = D_8008DA88[sp46];
}
