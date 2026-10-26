#include "common.h"
#define func_80242F38_StructGlobal SGP(__LINE__)
#define SGP(l) SGQ(l)
#define SGQ(l) SG##l
#define SG348 struct SGT
#define SG407 SGT
#define SG411 SGtd
#define SG412 struct SGT
#define SG413 struct SGT
#define SG584 struct SGT
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern u8 D_801BBBF0[];
typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s16 *);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
typedef struct func_8024381C_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024381C_StructArg;
void func_8024381C(func_8024381C_StructArg *arg0, s32 arg1);
typedef struct func_8024381C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_8024381C_StructLocal;

#undef func_80242F38_StructGlobal
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_80258640[];
extern s16 D_80089354;
extern f32 D_80258700;
extern f32 D_80258704;
extern f32 D_80258708;
extern f32 D_8025870C;
extern f32 D_80258710;
extern f32 D_80258714;
extern f32 D_80258718;

void func_80243678(func_8024381C_StructArg *arg0, s32 arg1) {
    func_8024381C_StructLocal loc;

    G->unkE0->unk2C->unk4 = D_80258700;
    *(f32 *)((u8 *)G->unkE0->unk2C + 8) = 0.0f;
    G->unkE0->unk2C->unkC = D_80258704;
    G->unkE0->unk2C->unk12 = 0x1C00;
    G->f1E8 = D_80258708;
    G->f1EC = 16.0f;
    G->f1F0 = D_8025870C;
    G->f1F4 = D_80258710;
    G->f1F8 = D_80258714;
    G->f1FC = D_80258718;
    func_8011AAF4(D_80258640, 0x164, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
    loc.unk0 = 0x1000;
    loc.unk4 = 0x04100036;
    loc.unk8 = 10.0f;
    func_801C2F0C(4, &loc.unk0);
    arg0->unk3C = 0;
    D_80089354 = 0;
    func_8001E978(arg0, 0, 0, 0, 0x1E, 0, 2, 0);
    func_800058DC(arg0, func_8024381C);
}
