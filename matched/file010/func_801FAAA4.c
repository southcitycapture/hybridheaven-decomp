#include "context.h"

struct func_801FAAA4_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801FAAA4_Struct {
    u8 pad0[0x24];
    struct func_801FAAA4_Struct_Inner *unk24;
    u8 pad1[0x3C - 0x28];
    u16 unk3C;
};

void func_801FAAA4(struct func_801FAAA4_Struct *arg0, s32 arg1) {
    arg0->unk24->unk22 = 0;
    arg0->unk3C = 0;
}
