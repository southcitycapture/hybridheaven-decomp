#define func_80242A5C func_80242A5C__ctx
#include "context.h"
#undef func_80242A5C

struct func_80242A5C_StructSelf { u8 pad[0x3C]; u16 unk3C; };
struct func_80242A5C_StructSub { u8 pad[8]; f32 unk8; };
struct func_80242A5C_StructNode {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80242A5C_StructSub *unk30;
};
struct func_80242A5C_StructObj {
    struct func_80242A5C_StructNode *unk0;
    u8 pad[0x10];
    struct func_80242A5C_StructNode *unk14;
    struct func_80242A5C_StructNode *unk18;
};
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80242C3C();
extern u8 D_8025C474[];
extern u8 D_8025C4AC[];
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern f32 D_8025C728;
extern f32 D_8025C72C;

void func_80242A5C(struct func_80242A5C_StructSelf *arg0, struct func_80242A5C_StructObj *arg1) {
    arg0->unk3C++;
    func_80243CC0(arg0, (s32)arg1);
    func_80243E48(arg0, arg1);
    if (D_8011AAF4(D_8025C474, 0x2F3, arg0, 0, 2, 0.25f, 59.0f, D_8025C71C, 10.0f, 4294967296.0f, 69.0f, D_8025C720, -10.0f, 0.0f, 55.0f, -1, -1) == 0) {
        func_8011AAF4(D_8025C4AC, 0x2F7, arg0, 0, 1, 0.0f, 0.0f, D_8025C724, 900.0f, 0.0f, -7.0f, D_8025C728, -197.0f, 0.0f, 55.0f, -1, -1);
        arg1->unk18->unk22 = 1;
        arg1->unk14->unk22 = 0;
        arg1->unk0->unk30->unk8 = D_8025C72C;
        ((struct func_80242A5C_StructSub *)((struct func_802415DC_StructA *)D_801BBCD0)->unk2C)->unk8 = arg1->unk0->unk30->unk8;
        func_802441AC();
        arg0->unk3C = 0;
        func_80020718(0x6C5);
        func_800058DC(arg0, func_80242C3C);
    }
}
