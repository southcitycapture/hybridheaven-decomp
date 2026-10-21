#include "context.h"

extern void func_801339D0(s32);
extern void func_80126820(s32);
extern void func_80002A04(void);
struct func_80241DB4_Struct {
    u8 pad[0x93];
    u8 unk93;
    f32 unk94;
    u8 pad2[0xA0 - 0x98];
    u16 unkA0;
};
extern struct func_80241DB4_Struct *func_801505AC(s32);
extern u8 D_802469E4[];

struct func_80241DB4_A { u8 pad[0x3C]; u16 unk3C; };

void func_80241DB4(struct func_80241DB4_A *arg0, s32 arg1) {
    s32 pad;
    volatile s32 t;
    u16 o;
    f32 s;
    func_80241068_Struct_Cam *c;
    struct func_80241DB4_Struct *p;

    o = arg0->unk3C;
    t = o;
    arg0->unk3C = o + 1;
    if (t == 0x1A) {
        func_801339D0(0x2A1);
        func_80126820(0x20);
    }
    if (t == 0x1E) {
        p = func_801505AC(6);
        p->unk93 = 1;
        p->unk94 = 0.0f;
    }
    if (t == 0x78) {
        func_80133980(0x2A1);
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 1, 0);
    }
    if (t >= 0x96) {
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 2, 0);
        s = func_8001EAD0(P->unk12);
        func_8011AAF4(D_802469E4, 0x3E1, arg0, 2, 1, 0.0f, (c = P)->unk4 - s * 40.0f, c->unk8 + 20.0f, c->unkC - func_8001EB64(P->unk12) * 40.0f, 0.0f, c->unk4, c->unk8 + 15.0f, c->unkC, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_80002A04();
        func_80133980(0x172);
        p = func_801505AC(7);
        p->unkA0 |= 0x20;
        func_800058DC(arg0, func_80241FD4);
    }
}
