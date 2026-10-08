#include "context.h"

struct func_8013BDD8_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[6];
    u16 unk36;
    u8 pad2[0x14];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

extern void func_8013B570(void *, u16, s32, s32, s32);

void func_8013BDD8(struct func_8013BDD8_Struct *arg0, s32 arg1) {
    arg0->unk2C = 0;
    arg0->unk4C = 0xA;
    arg0->unk4D = 0x12;
    arg0->unk4E = 0xA;
    func_8013B570(arg0, arg0->unk36, 2, 4, 0);
}
