#include "context.h"

extern u8 D_801CC8C4;
extern u16 D_80037754;
extern u8 D_801CEBB4[];
extern u8 D_801CEBC4[];
extern u8 D_801CEBD4[];
extern u8 D_801CEBE4[];
extern u8 D_801CEBF4[];
extern u8 D_801CEC04[];
extern u8 D_801CEC14[];
extern void func_801C1DB8();

typedef struct func_801C18FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C18FC_Struct;

void func_801C18FC(func_801C18FC_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_v0 - 1);
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, (s16) ((D_801CC8C4 * 0xA) + 0x76), D_801CEBB4);
        func_8001B204(1, 0x7D0, 0x76, D_801CEBC4);
        func_8001B204(2, 0x7D0, 0x80, D_801CEBD4);
        func_8001B204(3, 0x7D0, 0x8A, D_801CEBE4);
        func_8001B204(4, 0x7D0, 0x94, D_801CEBF4);
        if (D_80037754 == 1) {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC04);
        } else {
            func_8001B204(5, 0x7D0, 0x9E, D_801CEC14, 6);
        }
        func_800058DC((s32) arg0, func_801C1DB8);
    }
}
