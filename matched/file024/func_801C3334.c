#include "context.h"

extern void func_801C33C8();
extern s32 D_801CC8A4;

typedef struct func_801C3334_StructInner {
    u8 pad[0x28];
    s16 unk28;
} func_801C3334_StructInner;

extern void func_80116E80(s32);
extern void func_80146178(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80006214(s32);

void func_801C3334(s32 arg0, func_801C3334_StructInner **arg1) {
    u8 sp3F;

    func_80116E80(0x800);
    func_80146178(arg0, &sp3F, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0);
    func_80006214(arg0);
    (*arg1)->unk28 = 0x800;
    D_801CC8A4 = arg0;
    func_800058DC(arg0, (void *)func_801C33C8);
}
