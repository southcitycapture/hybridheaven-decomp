#include "context.h"

typedef struct func_80118768_Struct2 {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x1C - 0x14];
    f32 unk1C;
    u8 pad20[0x30 - 0x20];
    f32 unk30;
    u8 pad34[0x38 - 0x34];
    f32 unk38;
} func_80118768_Struct2;
typedef struct func_80118768_Struct1 {
    u8 pad0[0x2C];
    func_80118768_Struct2 *unk2C;
} func_80118768_Struct1;
typedef struct func_80118768_Struct4 {
    u8 pad0[0x22];
    u8 unk22;
} func_80118768_Struct4;
typedef struct func_80118768_Struct0 {
    u8 pad0[0x24];
    func_80118768_Struct4 *unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x40 - 0x34];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80118768_Struct0;
typedef struct func_80118768_Struct3 {
    u8 pad0[0x9E];
    u16 unk9E;
    u8 padA0[0xE8 - 0xA0];
    func_80118768_Struct1 *unkE8;
    u8 padEC[0x380 - 0xEC];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad38C[0xEF0 - 0x38C];
    u16 unkEF0;
} func_80118768_Struct3;

extern u8 D_80189758[];
extern f32 D_801BBBB8;
extern void D_80117F64(void *);
extern void func_800058DC();
extern void func_80117650(f32, f32, f32, f32, f32, f32);
extern void func_80118038(void *, void *);
extern struct func_8011913C_Struct1 *D_801BBCD0;
extern u8 func_801E5010[];
extern u8 func_80379970[];

#define G_80118768 ((func_80118768_Struct3 *) &D_801BBBF0)
#define YAW_80118768 (*(s16 *) D_801BBB90)
#define PITCH_80118768 (*(s16 *) D_801BBB92)

void func_80118768(func_80118768_Struct0 *arg0) {
    f32 sp9C, sp98, sp94, sp90, sp8C, sp88;
    f32 sp84, sp80, sp7C, sp78, sp74, sp70;
    f32 sp6C, sp68, sp64;
    func_80118768_Struct2 *t;

    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    arg0->unk24->unk22 = 0;
    if (G_80118768->unkEF0 & 0x1000) {
        arg0->unk24->unk22 = 1;
        func_80117C0C((s32) arg0);
        func_800058DC(arg0, func_80379970);
        return;
    }
    if (!(G_80118768->unk9E & 4) || (D_801BBBF0.unk18E != 0) || !(arg0->unk30 & 4)) {
        arg0->unk24->unk22 = 1;
        func_80117C0C((s32) arg0);
        func_800058DC(arg0, func_801E5010);
        return;
    }
    D_80117F64(arg0);
    func_80118038(D_801BBB90, D_801BBB92);
    func_801182F4(YAW_80118768, PITCH_80118768, &sp84, &sp80, &sp7C, &sp78, &sp74, &sp70);
    sp6C = 7.5 * func_8001EB64(PITCH_80118768) * func_8001EB64(YAW_80118768) + sp84;
    sp68 = (f32) (((f64) func_8001EAD0(PITCH_80118768) * 7.5) + (f64) sp80);
    sp64 = 7.5 * func_8001EB64(PITCH_80118768) * func_8001EAD0(YAW_80118768) + sp7C;
    if (func_801084C4(sp84, sp80, sp7C, sp6C, sp68, sp64) != 0) {
        sp84 += G_80118768->unk380 - sp6C;
        sp80 += G_80118768->unk384 - sp68;
        sp7C += G_80118768->unk388 - sp64;
    }
    t = G_80118768->unkE8->unk2C;
    if ((f64) func_8002FC20((sp84 - t->unk30) * (sp84 - t->unk30) + (sp7C - t->unk38) * (sp7C - t->unk38)) < 1.5) {
        D_801BBBB8 = 4.0f;
    }
    t = ((func_80118768_Struct1 *) D_801BBCD8)->unk2C;
    sp9C = t->unk30 + ((sp84 - t->unk30) / D_801BBBB8);
    sp98 = sp80;
    sp94 = t->unk38 + ((sp7C - t->unk38) / D_801BBBB8);
    sp90 = sp78;
    sp8C = sp74;
    sp88 = sp70;
    func_80117650(sp9C, sp80, sp94, sp78, sp74, sp70);
    func_8011AAF4(D_80189758, 0x20B, (s32) arg0, 0, 1, 10.0f, sp9C, sp98, sp94, 10.0f, sp90, sp8C, sp88, 0.0f, ((struct func_80117C0C_Struct0 *) D_801BBCD8)->unk2C->unk1C, -1, -1);
    ((func_80118768_Struct1 *) D_801BBCD0)->unk2C->unk12 = (s16) (0x800 - YAW_80118768) & 0x1FFF;
}
