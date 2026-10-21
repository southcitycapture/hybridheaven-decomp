#include "context.h"

struct func_802428B8_StructC { u8 pad[8]; f32 unk8; };
struct func_802428B8_StructB { u8 pad[0x30]; struct func_802428B8_StructC *unk30; };
struct func_802428B8_StructA { struct func_802428B8_StructB *unk0; u8 pad[0x10]; u8 *unk14; };
struct func_802428B8_StructD { u8 pad[0x3C]; u16 unk3C; };
struct func_802428B8_StructE { u8 pad[0x2C]; struct func_802428B8_StructC *unk2C; };
extern u8 D_8025C43C[];
extern f64 D_8025C708;
extern f32 D_8025C710;
extern f32 D_8025C714;
extern f32 D_8025C718;
extern u8 func_80242A5C[];

void func_802428B8(struct func_802428B8_StructD *arg0, struct func_802428B8_StructA *arg1) {
    struct func_802428B8_StructC *t;

    arg0->unk3C = arg0->unk3C + 1;
    t = arg1->unk0->unk30;
    t->unk8 = (f32)((f64)t->unk8 + D_8025C708);
    if (arg1->unk0->unk30->unk8 >= 600.0f) {
        func_8011AAF4(D_8025C43C, 0x2D4, arg0, 0, 1, 0.0f, 35.0f, D_8025C710, 43.0f, 0.0f, 46.0f, D_8025C714, 20.0f, 0.0f, 55.0f, -1, -1);
        arg1->unk14[0x22] = 1;
        arg1->unk0->unk30->unk8 = D_8025C718;
        ((struct func_802428B8_StructE *)D_801BBCD0)->unk2C->unk8 = arg1->unk0->unk30->unk8;
        arg0->unk3C = 0;
        func_80020718(0x6C6);
        func_800058DC(arg0, func_80242A5C);
    } else {
        func_801C419C(arg0, 0, 0, 0xB, 55.0f);
    }
    func_80243CC0(arg0, (s32)arg1);
}
