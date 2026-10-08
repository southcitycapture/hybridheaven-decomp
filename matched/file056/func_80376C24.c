#include "common.h"

struct func_80376C24_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
};

extern void func_800058DC(void *, void *);
extern void func_80010550(s32, s32);
extern void func_80011198(s32, s32);
extern void func_80011258(s32, s32);
extern s32 func_8014C0A8(u16);
extern u16 D_801BBBF8;
extern void func_80376CA8(void);

void func_80376C24(struct func_80376C24_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    if (func_8014C0A8(D_801BBBF8) == 0) {
        arg0->unk2C &= ~0x80;
        func_80011258(arg1, temp_a1 + 0x22);
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80376CA8);
    }
}
