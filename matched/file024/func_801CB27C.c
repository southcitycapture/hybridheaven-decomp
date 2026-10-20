#include "context.h"
extern s32 func_8013E620();
void func_801CB550(s32 arg0, s32 arg1);
extern u8 D_801BBC0D;
extern u8 D_801CF788[], D_801CF79C[], D_801CF7C4[], D_801CF7E0[], D_801CF7F8[], D_801CF810[], D_801CF824[], D_801CF840[], D_801CF85C[], D_801CF878[], D_801CF894[], D_801CF8B4[], D_801CF8D0[], D_801CF8F4[], D_801CF910[];

void func_801CB27C(s32 arg0, s32 arg1) {
    s32 sp4C;

    if (D_801BBBF0[0x164] == 0 && D_801BBBF0[0x17E] == 8) {
        sp4C = func_8013E620() & 0xF;
        func_8001B204(0, 0x7D0, 0x50, D_801CF788, 4);
        func_8001A804(0, D_801CF79C, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0x80, 0, 0, 0, 0x80);
        if (D_801BBC0D == 0) goto c0;
        if (D_801BBC0D == 1) goto c1;
        if (D_801BBC0D != 2) goto end;
        goto c2;
    c0:
        func_8001B204(1, 0x7D0, 0x82, D_801CF7C4, 4);
        func_8001B204(2, 0x7D0, 0x96, D_801CF7E0, 4);
        goto end;
    c1:
        if (sp4C & 2) {
            func_8001B204(1, 0x7D0, 0x6E, D_801CF7F8, 4);
            func_8001B204(2, 0x7D0, 0x82, D_801CF810, 4);
            func_8001B204(3, 0x7D0, 0x96, D_801CF824, 4);
            func_8001B204(4, 0x7D0, 0xAA, D_801CF840, 4);
        } else {
            func_8001B204(1, 0x7D0, 0x82, D_801CF85C, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF878, 4);
        }
        goto end;
    c2:
        if (sp4C & 4) {
            func_8001B204(1, 0x7D0, 0x78, D_801CF894, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF8B4, 4);
            func_8001B204(3, 0x7D0, 0xAA, D_801CF8D0, 4);
        } else {
            func_8001B204(1, 0x7D0, 0x82, D_801CF8F4, 4);
            func_8001B204(2, 0x7D0, 0x96, D_801CF910, 4);
        }
    end:
        func_800058DC(arg0, func_801CB550);
    }
}
