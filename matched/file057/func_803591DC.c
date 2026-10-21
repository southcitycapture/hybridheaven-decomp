#include "context.h"

typedef struct func_803591DC_StructV {
    s32 w[3];
} func_803591DC_StructV;
typedef struct func_803591DC_StructH {
    u8 pad[0xB0];
    func_80358C6C_Vec6 a;
    func_80358C6C_Vec6 b;
} func_803591DC_StructH;
typedef struct func_803591DC_StructO {
    u8 pad[0x5C];
    func_803591DC_StructH *unk5C;
} func_803591DC_StructO;
typedef struct func_803591DC_StructD {
    u8 pad[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad2[0x4C - 0x37];
    u16 unk4C;
    u16 unk4E;
    u8 pad3[0x6C - 0x50];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad4[0x7C - 0x78];
    u8 unk7C;
} func_803591DC_StructD;
typedef struct func_803591DC_StructA {
    u8 pad[0xC];
    func_803591DC_StructO *unkC;
} func_803591DC_StructA;

extern void func_803593F0();
extern void func_80359520();

void func_803591DC(func_803591DC_StructD *arg0, s32 arg1) {
    f32 v;
    func_80358C6C_Out sp;
    u32 t;
    func_803591DC_StructO *o;
    func_803591DC_StructD *p;

    o = ((func_803591DC_StructA *)arg0)->unkC;
    func_80223B2C((s32)o, &sp, o->unk5C->a, o->unk5C->b);
    if (sp.unkC < sp.unk8) {
        v = sp.unk8;
    } else {
        v = sp.unkC;
    }
    v = v * 0.03125;
    p = (func_803591DC_StructD *)D_8038CC10;
    t = ((func_80358964_StructA *)p)->unk30;
    if (t == 0x23) goto c23;
    if (t == 0x24) goto c24;
    if (t != 0x25) goto c25;
    if (1) goto c25;
c23:
    p->unk34 = 0xFF;
    ((func_803591DC_StructD *)D_8038CC10)->unk35 = 0x40;
    ((func_803591DC_StructD *)D_8038CC10)->unk36 = 0;
    if (1) goto end;
c24:
    p->unk34 = 0;
    ((func_803591DC_StructD *)D_8038CC10)->unk35 = 0x80;
    ((func_803591DC_StructD *)D_8038CC10)->unk36 = 0xFF;
    if (1) goto end;
c25:
    p->unk34 = 0xFF;
    ((func_803591DC_StructD *)D_8038CC10)->unk35 = 0xFF;
    ((func_803591DC_StructD *)D_8038CC10)->unk36 = 0;
end:
    t = arg0->unk7C ? 0x14 : 0xA;
#define DD ((func_803591DC_StructD *)D_8038CC10)
    func_801CE330(arg0, 8, arg0->unk6C, arg0->unk70, arg0->unk74, DD->unk34, DD->unk35, DD->unk36, 0xFF, DD->unk34, DD->unk35, DD->unk36, 0, 1, t, v, 0xC);
    func_80020718(0x10B);
    D_8038CC10->unk4C = 1;
    if (arg0->unk7C != 0) {
        func_800058DC(arg0, func_803593F0);
        return;
    }
    arg0->unk4C = arg0->unk4C + 2;
    arg0->unk4E = arg0->unk4E + 2;
    func_800058DC(arg0, func_80359520);
}
