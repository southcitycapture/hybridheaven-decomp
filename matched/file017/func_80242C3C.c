#include "common.h"
#define HHCAT2(a, b) a##b
#define HHCAT(a, b) HHCAT2(a, b)
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
typedef struct func_80241C34_StructCam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_80241C34_StructCam;
typedef struct func_80241C34_StructCamOwner {
    u8 pad0[0x2C];
    func_80241C34_StructCam *unk2C;
} func_80241C34_StructCamOwner;
#define CAM (((func_80241C34_StructCamOwner **)((u8 *)&D_801BBBF0 + 0xE0))[0]->unk2C)
extern void func_800058DC(void *, void *);
struct func_80242D80_SB { u8 pad[8]; f32 f8; };
struct func_80242D80_SA { u8 pad[0x30]; struct func_80242D80_SB *p30; };
struct func_80242D80_SC { u8 pad[0x3C]; s16 s3C; u8 pad2[0x56]; f32 f94; };
void func_80242D80(struct func_80242D80_SC *arg0, struct func_80242D80_SA **arg1);
extern void func_80243CC0(void *, s32);


extern f64 D_8025C730;
extern f32 D_8025C738;
extern f32 D_8025C73C;
extern f32 D_8025C740;

struct func_80242C3C_StructSub {
    u8 pad[8];
    f32 unk8;
};
struct func_80242C3C_StructNode {
    u8 pad[0x30];
    struct func_80242C3C_StructSub *unk30;
};
struct func_80242C3C_StructSelf {
    u8 pad[0x94];
    f32 unk94;
};

void func_80242C3C(struct func_80242C3C_StructSelf *arg0, struct func_80242C3C_StructNode **arg1) {
    f32 var_fv0;
    struct func_80242C3C_StructSub *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = (f32)((f64)temp_v0->unk8 + D_8025C730);
    var_fv0 = (*arg1)->unk30->unk8;
    if (D_8025C738 <= var_fv0) {
        arg0->unk94 = D_8025C73C;
        D_801BBBF0.unkF20 = 0x1E;
        D_801BBBF0.unkF21 = 0x1E;
        D_801BBBF0.unkF22 = 0x1E;
        D_801BBBF0.unkF23 = 0x96;
        D_801BBBF0.unkF24 = 0x96;
        D_801BBBF0.unkF25 = 0xFF;
        D_801BBBF0.unkF26 = 0x74;
        D_801BBBF0.unkF27 = 0x7D;
        D_801BBBF0.unkF28 = 0x57;
        D_801BBBF0.unkF29 = 0;
        D_801BBBF0.unkF2A = 0x32;
        D_801BBBF0.unkF2B = 0x32;
        *(s8 *)&D_801BBBF0.unkF2C = -0x32;
        *(s8 *)&D_801BBBF0.unkF2D = 0x7D;
        D_801BBBF0.unkF2E = -0x46;
        D_801BBBF0.unkF32 = 0;
        D_801BBBF0.unkF33 = 0;
        D_801BBBF0.unkF34 = 0;
        D_801BBBF0.unkF35 = 0xB9;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = D_8025C740;
        func_800058DC(arg0, func_80242D80);
        var_fv0 = (*arg1)->unk30->unk8;
    }
    CAM->unk8 = var_fv0;
    func_80243CC0(arg0, (s32)arg1);
}
