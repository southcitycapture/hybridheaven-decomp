#include "context.h"
extern f64 D_8021AA00;
extern f64 D_8021AA08;
extern f64 D_8021AA10;
extern f32 D_8021AA18;
extern f32 D_8021AA1C;
extern f64 D_8021AA20;
extern f32 D_8021AA28;
extern f32 D_8021AA2C;
extern f64 D_8021AA30;
extern f64 D_8021AA38;
struct func_8020C150_In { u8 pad0[0x18]; f32 unk18; f32 unk1C; };
struct func_8020C150_Out { u8 pad0[0x30]; struct func_8020C150_In *unk30; };
struct func_8020C150_A0 { u8 pad0[0x3C]; u16 unk3C; u8 pad3E[0x90-0x3E]; u8 unk90; u8 pad91[3]; f32 unk94; f32 unk98; f32 unk9C; };

s32 func_8020C150(struct func_8020C150_A0 *arg0, struct func_8020C150_Out **arg1) {
    s32 st;
    struct func_8020C150_In *p;
    if ((st = arg0->unk90) == 2) goto c2;
    if (st != 4) goto def;
    goto c4;
c2:
    {
        p = (*arg1)->unk30;
        p->unk18 = (f32)((f64)p->unk18 + D_8021AA00);
        p = (*arg1)->unk30;
        p->unk1C = p->unk18;
        if (D_8021AA08 <= (f64)p->unk18) {
            arg0->unk90 = 4;
            arg0->unk3C = 0;
            func_80129FB8(arg0->unk94, (f32)((f64)arg0->unk98 + D_8021AA10), arg0->unk9C, 0.0f, D_8021AA18, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x8C, -4, D_8021AA1C, 8, 0);
        }
        goto def;
    }
c4:
    {
        st = (arg0->unk3C++ == 4);
        if (st) {
            func_80129FB8(arg0->unk94, (f32)((f64)arg0->unk98 + D_8021AA20), arg0->unk9C, 0.0f, D_8021AA28, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x8C, -4, D_8021AA2C, 8, 0);
        }
        p = (*arg1)->unk30;
        p->unk18 = (f32)((f64)p->unk18 - D_8021AA30);
        p = (*arg1)->unk30;
        p->unk1C = p->unk18;
        if ((f64)p->unk18 <= D_8021AA38) {
            return 0;
        }
    }
def:
    return 1;
}
