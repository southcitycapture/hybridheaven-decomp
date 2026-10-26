#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80254B3C_Ctx LP(HC, __LINE__)
#define func_80254B3C_Args LP(HA, __LINE__)
#define func_80254B3C_Node LP(HN, __LINE__)
#define HC_116 HCa
#define HC_125 HCa
#define HC_126 HCa
#define HC_130 HCa
#define HC_184 HCa
#define HC_222 HCa
#define HC_223 HCb
#define HC_237 HCb
#define HA_117 HAa
#define HA_145 HAa
#define HA_222 HAa
#define HA_224 HAb
#define HA_289 HAb
#define HN_118 HNa
#define HN_225 HNb
#define HN_237 HNb
extern u8 D_801BBBF0[];
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;
typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
void func_8025799C(func_8025799C_A0 *arg0, func_8025799C_A1 *arg1);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
typedef struct func_80255B30_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80255B30_Pos;
typedef struct func_80255B30_G1 { u8 pad0[0x2C]; func_80255B30_Pos *unk2C; } func_80255B30_G1;
typedef struct func_80255B30_G { u8 pad0[0xE0]; func_80255B30_G1 *unkE0; } func_80255B30_G;
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;

extern u8 func_80255CA0[];

void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1) {
    s32 t[1];
    s32 v = arg0->unk92;
    func_80255B30_In *p;
    t[0] = v;
    arg0->unk92 = v + 1;
    func_8025799C(arg0, arg1);
    p = arg1->unk4->unk30;
    if (p->unk4B >= 4) {
        p->unk4B -= 3;
        arg1->unk8->unk30->unk4B -= 3;
    }
    if (t[0] >= 0x78) {
        func_80380F94(arg0->unk98, arg0->unk9C + 45.0f, arg0->unkA0, 0.0f, 0.0f, 0.0f, 7);
        arg0->unk9C = arg0->unk9C + 45.0f;
        arg0->unk40 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk4 - arg0->unk98) / 20.0;
        arg0->unk44 = ((((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk8 + 10.0f) - arg0->unk9C) / 20.0;
        arg0->unk48 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unkC - arg0->unkA0) / 20.0;
        arg0->unk92 = 0;
        func_80020718(0x190);
        func_800058DC(arg0, func_80255CA0);
    }
}
