#include "common.h"


struct func_8022F850_Struct {
    s16 unk0;
    u8 pad2[0x18 - 2];
    f32 unk18;
    u8 pad1C[0x24 - 0x1C];
    f32 unk24;
    u8 pad28[0x30 - 0x28];
    u8 unk30;
    u8 pad31[0xA0 - 0x31];
    s16 unkA0;
    u8 padA2[0x2AC - 0xA2];
    s16 unk2AC[6];
    s16 unk2B8[6];
    s16 unk2C4[6];
};

void func_8022F850(struct func_8022F850_Struct *self) {
    u8 i;
    s16 *timer;
    s16 *percent;
    s16 *value;

    i = 0;
    timer = self->unk2AC;
    percent = self->unk2C4;
    value = self->unk2B8;
    do {
        if (*timer > 0) {
            (*timer)--;
            if (*timer == 0) {
                switch (i) {
                case 0:
                    self->unk30 &= 0xFFE1;
                    break;
                case 2:
                    if (self->unk2AC[3] == 0) {
                        self->unk18 = self->unk24;
                        self->unk24 = 0.0f;
                    }
                    break;
                case 3:
                    if (self->unk2AC[2] == 0) {
                        self->unk18 = self->unk24;
                        self->unk24 = 0.0f;
                    }
                    break;
                case 4:
                    if (self->unk2AC[5] == 0) {
                        self->unkA0 = 0;
                    }
                    break;
                case 5:
                    if (self->unk2AC[4] == 0) {
                        self->unkA0 = 0;
                    }
                    break;
                }
                (*percent)++;
                if (*percent >= 0x65) {
                    *percent = 0x64;
                }
                *value = *percent * self->unk0 / 100;
            }
        }
        i++;
        timer++;
        percent++;
        value++;
    } while (i < 6);
}
