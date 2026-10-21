#include "context.h"

struct func_801CCDE4_Mid {
    u8 pad[0x1C];
    func_801C8914_Struct unk1C;
    u8 pad2[0x88 - 0x28];
    func_801C8914_Struct unk88;
};
typedef union func_801CCDE4_BF {
    s32 w;
    struct {
        u8 a : 1;
        u8 b : 6;
        u8 c : 1;
        u8 d : 1;
        u8 e : 4;
        u8 f : 3;
    } bf;
} func_801CCDE4_BF;
typedef struct func_801CCDE4_G {
    u8 pad[0x30];
    func_801CCDE4_BF u30;
    func_801CCDE4_BF u34;
    func_801CCDE4_BF w38;
    func_801CCDE4_BF w3C;
    u8 pad3[0x324 - 0x40];
    void *unk324;
} func_801CCDE4_G;
extern u8 func_801E5010[];

void func_801CCDE4(struct func_801CBE90_Top *arg0, s32 arg1) {
    struct func_801CCDE4_Mid *t0;
    func_801CCDE4_G *v0;

    t0 = (struct func_801CCDE4_Mid *)arg0->unk5C;
    if (D_801E4080 == 0) {
        if (func_80126944() == 1) {
            if ((void *)arg0 == (void *)D_801BBBF0.unkDC) {
                v0 = (func_801CCDE4_G *)D_801BC03C;
            } else {
                v0 = (func_801CCDE4_G *)D_801BC3D8;
            }
            v0->u30 = v0->u34;
            v0->w38 = v0->w3C;
            v0->u30.bf.f = 0;
            v0->u30.bf.a = 0;
            v0->u30.bf.c = 0;
            v0->u30.bf.d = 0;
            func_801CBE90(arg0, (void *)arg1);
            t0->unk1C = t0->unk88;
            func_8013A28C((void *)arg1, t0->unk1C);
            func_800058DC(arg0, v0->unk324);
            return;
        }
        func_801CBE90(arg0, (void *)arg1);
        t0->unk1C = t0->unk88;
        func_8013A28C((void *)arg1, t0->unk1C);
        *(s32 *)((u8 *)arg0 + 0x2C) |= 0x80;
        *(u16 *)((u8 *)&D_801BBBF0 + 0xEF0) &= 0xFFEF;
        func_8001F6FC();
        func_800058DC(arg0, func_801E5010);
    }
}
