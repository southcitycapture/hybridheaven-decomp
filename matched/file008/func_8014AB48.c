#include "context.h"

struct func_8014AB48_Struct {
    u8 pad0[0xEF0];
    u16 unkEF0;
    u8 pad1[0x1035 - 0xEF2];
    u8 unk1035;
};

extern void func_800023A8(s32);
extern void func_80005700(s32);
extern void func_8001F6FC();
extern void func_80020744(s32);
extern s32 func_80126944();
extern s32 func_80148044();
extern void func_801FBB20();

void func_8014AB48(s32 arg0, s32 arg1) {
    struct func_8014AB48_Struct *dev;

    func_80147D60(0x1C);
    dev = (struct func_8014AB48_Struct *) D_801BBBF0;
    dev->unk1035 = 0;
    dev->unkEF0 &= 0xFFEF;
    if (func_80126944() == 0) {
        func_800023A8(0);
    }
    D_801BBD58 = 0;
    func_8001F6FC();
    func_80020744(4);
    if (func_80148044() == 0) {
        func_801FBB20();
    }
    func_80005700(arg0);
}
