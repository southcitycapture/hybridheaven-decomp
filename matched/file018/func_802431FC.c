#include "context.h"

struct func_802431FC_Inner { u8 pad0[0x78]; u16 unk78; };
struct func_802431FC_Cam { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; };
struct func_802431FC_Obj2 { u8 pad0[0x2C]; struct func_802431FC_Cam *unk2C; };
struct func_802431FC_Struct {
    u8 pad0[0x24];
    struct func_802431FC_Obj2 *unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x5C - 0x34];
    struct func_802431FC_Inner *unk5C;
    u8 pad60[0x94 - 0x60];
    s16 unk94;
};
extern f32 D_8025BF64;
extern struct func_80242C60_Cfg D_80258DB0;
extern s32 D_80242714(void *);
extern void D_80243B94();
extern void func_80243C54();
extern s32 func_8012A564(void *, s32);
extern s32 func_8012A94C(void *, s32);
extern void func_8024339C();

void func_802431FC(struct func_802431FC_Struct *arg0, s32 arg1) {
    struct func_802431FC_Inner *sp2C = arg0->unk5C;
    struct func_802431FC_Inner **pp = &sp2C;
    struct func_802431FC_Cam *c;
    s32 flags;
    s32 done;

    if (func_80242620() == 0 && D_80242714(arg0) == 0 && func_8012CE9C(arg1, sp2C, D_80258DB0, 10) == 0) {
        func_80010550(arg1, *pp);
        done = arg0->unk94-- == 0;
        if (done) {
            (*pp)->unk78 = 1;
            func_800058DC(arg0, func_80243C54);
            return;
        }
        flags = arg0->unk30;
        if (flags & 0x10) {
            (*pp)->unk78 = 1;
            func_800058DC(arg0, D_80243B94);
            return;
        }
        if (flags & 0x80) {
            (*pp)->unk78 = 1;
            func_800058DC(arg0, D_80243B94);
            return;
        }
        if (func_8012A564(arg0, 0x42900000) != 0) {
            (*pp)->unk78 = 1;
            arg0->unk94 = 1;
            c = arg0->unk24->unk2C;
            func_80127430(c->unk4, c->unk8, c->unkC, 0x66D, D_8025BF64, 1.0f);
            func_800058DC(arg0, func_8024339C);
            return;
        }
        func_8012A94C(arg0, 0x40);
    }
}
