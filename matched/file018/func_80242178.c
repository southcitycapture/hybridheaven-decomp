#include "common.h"

struct func_80242178_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern void func_8001F74C();
extern void func_80203830(s32, void *);
extern void func_8020394C();
extern void func_800058DC(s32, void *);
extern u8 D_80257618[];
extern struct func_80242178_Struct D_801BBBF0;
extern void func_802421D8();

void func_80242178(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_80257618);
    D_801BBBF0.unk1088 = arg0;
    D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
    func_8020394C();
    func_800058DC(arg0, func_802421D8);
}
