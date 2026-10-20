#include "context.h"

struct func_802470A0_SB { u8 pad[0x2C]; struct func_802470A0_SC *unk2C; };
struct func_802470A0_SC { u8 pad[0x30]; s32 unk30; f32 unk34; f32 unk38; };
struct func_802470A0_S6 { u8 pad[6]; s16 unk6; s16 unk8; s16 unkA; u8 padC[4]; u32 unk10; };
struct func_802470A0_SO { u8 pad[0x38]; struct func_802470A0_S6 *unk38; u8 pad3C[0x54]; f32 unk90; };
struct func_802470A0_SD { u8 pad[0x30]; struct func_802470A0_SE *unk30; };
struct func_802470A0_SE { u8 pad[0x4D]; u8 unk4D; };
struct func_802470A0_SA { struct func_802470A0_SD *unk0; };

extern f32 func_8012FFDC(f32, f32, f32, s32, f32, f32);
extern void func_801FCA4C(f32, f32, f32, f32, s32);
extern struct func_802470A0_SB *D_801BBCD8;
extern f64 D_8024F138;

void func_802470A0(struct func_802470A0_SO *arg0, struct func_802470A0_SA *arg1) {
    f32 sp2C;
    f32 t;
    struct func_802470A0_SC *c;
    struct func_802470A0_S6 *s;

    s = arg0->unk38;
    t = func_8012FFDC((f32)s->unk6 / 10.0, (f32)s->unk8 / 10.0, (f32)s->unkA / 10.0, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38);
    if (t < D_8024F500) {
        D_8024F500 = t;
        func_801FCA4C((f32)arg0->unk38->unk6 / 10.0, (f32)arg0->unk38->unk8 / 10.0, (f32)arg0->unk38->unkA / 10.0, 500.0f, 0x173);
    }
    sp2C = (arg0->unk38->unk10 >> 16) / 10.0;
    if (func_80133A24(0xBF)) {
        sp2C = -sp2C;
    }
    arg0->unk90 = arg0->unk90 - sp2C * D_8024F138;
    arg1->unk0->unk30->unk4D = (s32)arg0->unk90 % 256;
}
