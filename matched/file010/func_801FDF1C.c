#include "common.h"
extern s32 (*D_802171F0[])();


struct func_801FDF1C_Struct { u8 pad[0x16]; u8 unk16; u8 unk17; };
struct func_801FDF1C_Obj { u8 pad[0x90]; u8 unk90; u8 pad2[0xB0-0x91]; u16 unkB0; };
extern void func_800058DC();
extern void func_80006214();
extern void func_80116E80();
extern void func_8013C8E0();
extern s32 func_80151BC4();
extern void func_801FDDC8();
extern struct func_801FDF1C_Struct D_8017DD7C;
extern u16 D_8017DDA4;
extern u16 D_801BBC1C;
extern u8 func_801FE0A4[];

void func_801FDF1C(struct func_801FDF1C_Obj *arg0, s32 arg1) {
    u8 sp57;

    sp57 = 0;
    if ((D_8017DDA4 < 0xFFFF) && (func_80151BC4() != 2) && ((D_8017DD7C.unk16 == 0) || ((D_8017DD7C.unk16 != 0) && (D_8017DD7C.unk17 != 0))) && (D_801BBC1C != 0xA)) {
        D_8017DDA4 += 1;
    }
    func_8013C8E0();
    func_8013C8E0();
    func_80116E80(0x80);
    arg0->unk90 = 0xFF;
    func_801FDDC8(arg0, &sp57, 0, 0, 1, 1, 0, 0, 0, 0xFF, 0, 0, 0, 0, 0);
    func_801FDDC8(arg0, &sp57, 0, 0, 0x140, 0x100, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0, 0, 0);
    func_80006214(arg0);
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_801FE0A4);
}
