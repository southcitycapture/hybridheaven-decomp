#include "common.h"
typedef struct func_8011A7FC_StructInner {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[0x4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[0x4];
    f32 unk44;
} func_8011A7FC_StructInner;
typedef struct func_8011A7FC_StructOuter {
    u8 pad0[0x2C];
    func_8011A7FC_StructInner *unk2C;
} func_8011A7FC_StructOuter;
typedef struct func_8011A7FC_Struct {
    u8 pad0[0xE8];
    func_8011A7FC_StructOuter *unkE8;
    u8 pad1[0x232 - 0xEC];
    s16 unk232;
    u8 pad2[0x254 - 0x234];
    u8 unk254;
    u8 unk255;
    u8 unk256;
    u8 pad3[0x2AD - 0x257];
    u8 unk2AD;
    u8 pad4[0x2B0 - 0x2AE];
    s32 unk2B0;
    u8 unk2B4;
    u8 unk2B5;
} func_8011A7FC_Struct;
extern func_8011A7FC_Struct D_801BBBF0;
typedef struct func_80119F9C_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80119F9C_Inner;
typedef struct func_80119F9C_Outer {
    u8 pad0[0x2C];
    func_80119F9C_Inner *unk2C;
} func_80119F9C_Outer;


extern f64 D_80189E80;
extern f32 D_8002FC20(f32);

#define ROOT ((func_80119F9C_Outer *) D_801BBBF0.unkE8)
#define F(off) (*(f32 *)((u8 *)&D_801BBBF0 + arg0 * 4 + (off)))
#define DX (F(0x2E4) - F(0x2BC))
#define DY (F(0x2F0) - F(0x2C8))
#define DZ (F(0x2FC) - F(0x2D4))

s32 func_8011A1B8(u8 arg0) {
    f32 d, a;

    d = D_8002FC20(DX * DX + DY * DY + DZ * DZ);
    if (d < 0.0f) {
        a = -d;
    } else {
        a = d;
    }
    if (!((f64)a < D_80189E80)) {
        ROOT->unk2C->unk30 = F(0x2BC);
        ROOT->unk2C->unk34 = F(0x2C8);
        ROOT->unk2C->unk38 = F(0x2D4);
        ROOT->unk2C->unk3C = F(0x2E4);
        ROOT->unk2C->unk40 = F(0x2F0);
        ROOT->unk2C->unk44 = F(0x2FC);
        return 0;
    }
    return -1;
}
