#include "context.h"
typedef struct {
    u32 b0 : 8;
    u32 b1 : 5;
    u32 lo : 3;
    u32 b2 : 16;
} func_80220FC0_Word;
struct func_80220FC0_Struct {
    u8 pad0[0x30];
    func_80220FC0_Word unk30;
    func_80220FC0_Word unk34;
    func_80220FC0_Word unk38;
    func_80220FC0_Word unk3C;
    u8 pad40[0x324 - 0x40];
    void *unk324;
};
void func_80220FC0(s32 arg0, s32 arg1) {
    struct func_80220FC0_Struct *p;
    s32 dc;
    dc = D_801BBBF0.unkDC;
    if (arg0 == dc) {
        p = (struct func_80220FC0_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80220FC0_Struct *)&D_801BC3D8;
    }
    if (D_801BBBF0.unk1031 != 0xF && *((u8 *)&D_801BBBF0 + 0x1035) == 0) {
        p->unk30 = p->unk34;
        p->unk38 = p->unk3C;
        p->unk30.lo = 0;
        func_800058DC(arg0, p->unk324);
    }
}
