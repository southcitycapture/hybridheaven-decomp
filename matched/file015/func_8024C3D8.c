#include "common.h"
struct func_8024C5B4_Struct {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    s32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
extern struct func_8024C5B4_Struct D_801BBBF0;
extern s32 D_8025A2D4;
extern s32 D_8025A2D8;
extern void func_800058DC(void *, void *);
extern void func_80006214(void *);
extern s32 func_80133A24(s32);
extern void func_80151430(s32, s32);
typedef struct func_8024BC80_Struct4 {
    s32 w[4];
} func_8024BC80_Struct4;

typedef struct func_8024C3D8_StructC {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 unk28;
    u16 unk2C;
} func_8024C3D8_StructC;
typedef struct func_8024C3D8_StructR {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[9];
    func_8024C3D8_StructC *unk2C;
} func_8024C3D8_StructR;
typedef struct func_8024C3D8_StructP {
    u16 *unk0;
    s32 *unk4;
} func_8024C3D8_StructP;
typedef struct func_8024C3D8_StructG {
    u8 pad[0x984];
    func_8024C3D8_StructP *unk984;
} func_8024C3D8_StructG;
typedef struct func_8024C3D8_StructD {
    u8 pad[0x1E8];
    f32 f[6];
} func_8024C3D8_StructD;
extern func_8024C3D8_StructG D_80171CF0;
extern u8 D_80253980[];
extern func_8024BC80_Struct4 D_802541C4;
extern f32 D_80259728__load;
extern f32 D_8025972C__load;
extern f32 D_80259730__load;
extern f32 D_80259734__load;
extern f32 D_80259738__load;
extern f32 D_8025973C__load;
extern void func_801511C4(s32, void *, s32);
extern void D_801512CC(s32, f32, f32, f32);
void func_8024C5B4(s32 arg0, s32 arg1);
extern func_8024C3D8_StructR *func_80005FAC(s32, void *, void *);

void func_8024C3D8(u8 *arg0, void **arg1) {
    func_8024BC80_Struct4 sp20;
    func_8024C3D8_StructR *r;
    func_8024C3D8_StructC *c;

    if (func_80133A24(0x7D) != 0) {
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[0] = D_80259728__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[1] = D_8025972C__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[2] = D_80259730__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[3] = D_80259734__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[4] = D_80259738__load;
        ((func_8024C3D8_StructD *)&D_801BBBF0)->f[5] = D_8025973C__load;
        func_801511C4(D_8025A2D4, D_80253980, 0xA);
        *(s16 *)(arg0 + 0x92) = 0;
        D_801512CC(D_8025A2D8, -760.3f, 0, -6.1f);
        func_80151430(D_8025A2D8, 0x1800);
        sp20 = D_802541C4;
        func_80006214((void *)D_8025A2D8);
        r = func_80005FAC(D_8025A2D8, arg1[0x30 / 4], &sp20);
        r->unk2C->unk28 = *D_80171CF0.unk984->unk4;
        r->unk2C->unk0 = D_80171CF0.unk984->unk0[0];
        r->unk2C->unk2C = D_80171CF0.unk984->unk0[1];
        r->unk2C->unk4 = 0.0f;
        r->unk2C->unk8 = 0.0f;
        r->unk2C->unkC = 0.0f;
        r->unk2C->unk12 = 0;
        r->unk2C->unk18 = 10.0f;
        r->unk2C->unk1C = 10.0f;
        r->unk2C->unk20 = 10.0f;
        c = r->unk2C;
        c->unk24 = c->unk24 | 0x40015;
        r->unk22 = 1;
        func_80006214(arg0);
        func_800058DC(arg0, (void *)func_8024C5B4);
    }
}
