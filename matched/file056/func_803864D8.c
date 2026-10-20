#include "context.h"

struct func_803864D8_StructArg0 {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_803864D8_StructInner {
    u8 pad[0x10];
    s16 unk10;
    u8 pad1[2];
    s16 unk14;
    u8 pad2[2];
    f32 unk18;
    f32 unk1C;
    u8 pad3[0x2B];
    u8 unk4B;
};
struct func_803864D8_StructOuter {
    u8 pad[0x30];
    struct func_803864D8_StructInner *unk30;
};
extern f64 D_80389CF0;
extern f64 D_80389CF8;
extern void func_80005700();

void func_803864D8(struct func_803864D8_StructArg0 *arg0, struct func_803864D8_StructOuter **arg1) {
    u16 temp_a2;
    struct func_803864D8_StructInner *temp;

    temp_a2 = arg0->unk3C;
    arg0->unk3C = temp_a2 + 1;
    temp = (*arg1)->unk30;
    temp->unk18 = (f64) temp->unk18 + D_80389CF0;
    temp = (*arg1)->unk30;
    temp->unk1C = (f64) temp->unk1C + D_80389CF8;
    temp = (*arg1)->unk30;
    temp->unk10 = (s16) (temp->unk10 + 0x155) & 0x1FFF;
    temp = (*arg1)->unk30;
    temp->unk14 = (s16) (temp->unk14 + 0x155) & 0x1FFF;
    if ((s32) temp_a2 < 4) {
        temp = (*arg1)->unk30;
        temp->unk4B += 0x32;
        return;
    }
    if ((s32) temp_a2 >= 5) {
        temp = (*arg1)->unk30;
        temp->unk4B -= 0x18;
        if ((*arg1)->unk30->unk4B < 0x18) {
            func_80005700(arg0, arg1);
        }
    }
}
