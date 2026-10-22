#include "context.h"

extern f32 D_801FCA08;
extern f32 D_801FCA0C;
extern f32 D_801FCA10;
extern f64 D_801FCA18;
extern f64 D_801FCA20;
extern f64 D_801FCA28;
extern f64 D_801FCA30;
extern f64 D_801FCA38;
extern f64 D_801FCA40;
extern f64 D_801FCA48;
extern f64 D_801FCA50;
extern f32 D_801FCA58;
extern f64 D_801FCA60;
extern f64 D_801FCA68;
extern f64 D_801FCA70;
extern f64 D_801FCA78;
extern f64 D_801FCA80;
extern f64 D_801FCA88;
extern f32 D_801FCA90;
extern f64 D_801FCA98;
extern f64 D_801FCAA0;
extern f64 D_801FCAA8;
extern f64 D_801FCAB0;
extern f64 D_801FCAB8;
extern f64 D_801FCAC0;
extern f64 D_801FCAC8;
extern f64 D_801FCAD0;
extern f64 D_801FCAD8;
extern f64 D_801FCAE0;
extern f64 D_801FCAE8;
extern f64 D_801FCAF0;
extern f64 D_801FCAF8;
extern f64 D_801FCB00;
extern f64 D_801FCB08;
extern f64 D_801FCB10;
extern f64 D_801FCB18;
extern f64 D_801FCB20;
extern f64 D_801FCB28;
extern f64 D_801FCB30;
extern f64 D_801FCB38;
extern f64 D_801FCB40;
extern f64 D_801FCB48;
extern f64 D_801FCB50;
extern f64 D_801FCB58;
extern f64 D_801FCB60;
extern f64 D_801FCB68;
extern f64 D_801FCB70;
extern f64 D_801FCB78;
extern f64 D_801FCB80;
extern f64 D_801FCB88;
extern f64 D_801FCB90;
extern f64 D_801FCB98;
extern f64 D_801FCBA0;
extern f64 D_801FCBA8;
extern f64 D_801FCBB0;
extern f64 D_801FCBB8;
extern f64 D_801FCBC0;
extern f64 D_801FCBC8;
extern f64 D_801FCBD0;
extern f64 D_801FCBD8;
extern f64 D_801FCBE0;
extern f64 D_801FCBE8;
extern f64 D_801FCBF0;
extern f64 D_801FCBF8;

struct func_801F0AC8_S3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F0AC8_S2 {
    u8 pad[0x2C];
    struct func_801F0AC8_S3 *unk2C;
};
struct func_801F0AC8_S1 {
    u8 pad[0xE8];
    struct func_801F0AC8_S2 *unkE8;
};
#define G ((struct func_801F0AC8_S1 *)&D_801BBBF0)

s32 func_801F0AC8(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    u64 t;
    f32 f;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        func_8038BD50(D_801FCA08, 47.0f, -11.2f);
        D_8038BD88(D_801FCA0C, D_801FCA10, 4.4f);
        return 3;
    }
    if (func_801C0B8C(0xC4D69F) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA18) - D_801FCA20) / D_801FCA28) * 0.0f;
        f = (f32) (a + D_801FCA30);
        G->unkE8->unk2C->unk30 = f;
        G->unkE8->unk2C->unk34 = f;
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCA38);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCA40);
        G->unkE8->unk2C->unk40 = (f32) (a + D_801FCA48);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCA50);
        func_8038BE98(D_801FCA58);
        return 2;
    }
    if (func_801C0B8C(0xC1C960) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA60) - D_801FCA68) / D_801FCA70) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + D_801FCA78);
        G->unkE8->unk2C->unk34 = (f32) (a + 10.0);
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCA80);
        G->unkE8->unk2C->unk3C = (f32) (a + -4.5);
        G->unkE8->unk2C->unk40 = (f32) (a + D_801FCA88);
        G->unkE8->unk2C->unk44 = (f32) (a + 2.5);
        func_8038BE98(D_801FCA90);
        return 2;
    }
    if (func_801C0B8C(0xBEBC20) != 0) {
        t = func_801C0B2C();
        a = ((f64) (f32) ((func_80034C24(t) / D_801FCA98) - 12.5) / D_801FCAA0) * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) (a + D_801FCAA8);
        G->unkE8->unk2C->unk34 = (f32) (a + D_801FCAB0);
        G->unkE8->unk2C->unk38 = (f32) (a + D_801FCAB8);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCAC0);
        G->unkE8->unk2C->unk40 = (f32) (a + 16.0);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCAC8);
        return 2;
    }
    if (func_801C0B8C(0xBA2840) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / D_801FCAD0) - D_801FCAD8) / D_801FCAE0;
        G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCAE8) + D_801FCAF0);
        G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCAF8) + D_801FCB00);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCB08) + -6.0);
        G->unkE8->unk2C->unk3C = (f32) (b + D_801FCB10);
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + D_801FCB18);
        return 2;
    }
    if (func_801C0B8C(0xB10080) != 0) {
        t = func_801C0B2C();
        b = (f64) (f32) ((func_80034C24(t) / D_801FCB20) - D_801FCB28) / D_801FCB30;
        a = b * 0.0f;
        G->unkE8->unk2C->unk30 = (f32) ((b * D_801FCB38) + D_801FCB40);
        G->unkE8->unk2C->unk34 = (f32) (a + 2.0);
        G->unkE8->unk2C->unk38 = (f32) ((b * D_801FCB48) + D_801FCB50);
        G->unkE8->unk2C->unk3C = (f32) (a + D_801FCB58);
        G->unkE8->unk2C->unk40 = (f32) (a + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (a + D_801FCB60);
        return 2;
    }
    if (func_801C0B8C(0xA1BE40) != 0) {
        t = func_801C0B2C();
        a = (f64) (f32) ((func_80034C24(t) / D_801FCB68) - D_801FCB70) / 1.0f;
        G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCB78) + D_801FCB80);
        G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCB88) + D_801FCB90);
        b = a * 0.0f;
        G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCB98) + D_801FCBA0);
        G->unkE8->unk2C->unk3C = (f32) (b + D_801FCBA8);
        G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
        G->unkE8->unk2C->unk44 = (f32) (b + D_801FCBB0);
        return 2;
    }
    t = func_801C0B2C();
    a = (f64) (f32) ((func_80034C24(t) / D_801FCBB8) - D_801FCBC0) / 1.5;
    G->unkE8->unk2C->unk30 = (f32) ((a * D_801FCBC8) + D_801FCBD0);
    G->unkE8->unk2C->unk34 = (f32) ((a * D_801FCBD8) + D_801FCBE0);
    b = a * 0.0f;
    G->unkE8->unk2C->unk38 = (f32) ((a * D_801FCBE8) + -6.0);
    G->unkE8->unk2C->unk3C = (f32) (b + D_801FCBF0);
    G->unkE8->unk2C->unk40 = (f32) (b + 15.5);
    G->unkE8->unk2C->unk44 = (f32) (b + D_801FCBF8);
    return 2;
}
