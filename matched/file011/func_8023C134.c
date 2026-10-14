#include "context.h"
struct func_8023C1A4_StructB {
    u8 padB[0xB];
    u8 unkB;
};
struct func_8023C1A4_StructA {
    u8 padA[0x30];
    struct func_8023C1A4_StructB *unk30;
};
struct func_8023C1A4_Struct {
    u8 pad0[0x24];
    struct func_8023C1A4_StructA *unk24;
};
void func_8023C1A4(struct func_8023C1A4_Struct *arg0, s32 arg1);

struct func_8023C134_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
};

void func_8023C134(struct func_8023C134_Struct *arg0, s32 arg1) {
    func_801453CC(arg0->unk24, 0x400, 4, 1, 3, 3, 0x21);
    if (arg0->unk3C-- > 0) {
    } else {
        func_800058DC(arg0, func_8023C1A4);
    }
}
