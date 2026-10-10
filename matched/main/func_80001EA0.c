#include "context.h"

struct func_80001EA0_Struct {
    u8 pad0[4];
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u32 unkC;
    u32 unk10;
};

extern void func_800279F0(void *, s32, void *);
extern void func_80029580(void *);
extern struct func_80001EA0_Struct D_8005CDA0;
extern u8 D_8005CDB4[];

s32 func_80001EA0(void) {
    if (D_8005CDA0.unkC == 0xA8000000) {
        return (s32)&D_8005CDA0;
    }
    D_8005CDA0.unk4 = 3;
    D_8005CDA0.unkC = 0xA8000000;
    D_8005CDA0.unk5 = 5;
    D_8005CDA0.unk8 = 0xC;
    D_8005CDA0.unk6 = 0xD;
    D_8005CDA0.unk7 = 2;
    D_8005CDA0.unk9 = 1;
    D_8005CDA0.unk10 = 0;
    func_800279F0(D_8005CDB4, 0x60, &D_8005CDA0);
    func_80029580(&D_8005CDA0);
    return (s32)&D_8005CDA0;
}
