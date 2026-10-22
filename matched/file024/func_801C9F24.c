#include "context.h"
extern u8 D_80089474[];

struct func_801C9F24_Struct2 { u8 pad[0xB]; u8 unkB; };
struct func_801C9F24_Struct0 { u8 pad[0x30]; struct func_801C9F24_Struct2 *unk30; };
extern s32 func_801CA530();
extern s32 func_801CA590(s32);
extern s32 func_801CA5AC();
extern s32 func_801CA630();
extern u16 D_801BBBFA;
extern s32 D_8001B204();
struct func_801C9F24_Struct3 { u8 pad[0x3C]; u16 unk3C; };
void func_801CA284();
extern u8 D_801CF444[], D_801CF460[], D_801CF480[], D_801CF49C[], D_801CF4A4[], D_801CF4C4[], D_801CF4E0[], D_801CF4FC[], D_801CF518[], D_801CF534[], D_801CF550[], D_801CF56C[], D_801CF588[], D_801CF58C[];

void func_801C9F24(struct func_801C9F24_Struct3 *arg0, struct func_801C9F24_Struct0 **arg1) {
    s32 w;
    s16 sp52;
    s32 v;
    s32 i;

    sp52 = (*arg1)->unk30->unkB;
    if (arg0->unk3C == 0) {
        sp52 = sp52 - 6;
        if (sp52 < 0) {
            sp52 = 0;
            func_8001B204(0, 0x20, 0x1D, D_801CF444, 1, func_801CA530());
            func_8001B204(2, 0x20, 0x39, D_801CF460, 1, func_801CA630());
            func_8001B204(3, 0x20, 0x47, D_801CF480, 1);
            D_8001B204(4, 0x7D0, 0x55, D_801CF49C, 1, func_801CA5AC());
            func_8001B204(5, 0x20, 0x63, D_801CF4A4, 1, (s32)D_801BBBFA >> 6, D_801BBBFA & 0x3F);
            func_8001B204(6, 0x20, 0x71, D_801CF4C4, 1, func_801CA590(0));
            func_8001B204(7, 0x20, 0x7F, D_801CF4E0, 1, func_801CA590(1));
            func_8001B204(8, 0x20, 0x8D, D_801CF4FC, 1, func_801CA590(2));
            func_8001B204(9, 0x20, 0x9B, D_801CF518, 1, func_801CA590(3));
            func_8001B204(0xA, 0x20, 0xA9, D_801CF534, 1, func_801CA590(4));
            func_8001B204(0xB, 0x20, 0xB7, D_801CF550, 1, func_801CA590(5));
            func_8001B204(0xC, 0x20, 0xC5, D_801CF56C, 1, func_801CA590(6));
            func_8001B204(0xF, 0, 0, D_801CF588);
            arg0->unk3C = 0xFF;
            func_800058DC(arg0, func_801CA284);
        }
        v = 0xFF - sp52;
        func_8001A804(5, D_801CF58C, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, v, 0, 0, 0, v);
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unkB = sp52;
        }
    } else if (*(u16 *)(D_80089474 + 4) & 0xF000) {
        arg0->unk3C = 0;
    } else {
        arg0->unk3C = arg0->unk3C - 1;
    }
}
