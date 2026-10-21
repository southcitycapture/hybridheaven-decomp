#include "context.h"
extern void func_80005700();
extern s32 func_8037FFF0();
extern s32 func_80129554();
extern u8 func_80127014[];
typedef struct {
    u8 pad0[0x30];
    u8 x : 1;
    u8 f : 2;
    u8 y : 5;
} func_80222FD8_Struct;

void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1) {
    func_8021E59C_Dev *dev = DEV;
    u8 *a3;
    u8 *v0;
    u8 t;
    u16 h;
    s32 r;
    extern void func_802237B0();

    s32 dc = dev->unkDC;
    s32 p5c = arg0->unk5C;

    if ((s32)arg0 == dc) {
        a3 = (u8 *)&D_801BC03C;
    } else {
        a3 = (u8 *)&D_801BC3D8;
    }
    if ((s32)arg0 != dc) {
        v0 = (u8 *)&D_801BC03C;
    } else {
        v0 = (u8 *)&D_801BC3D8;
    }
    t = *(u16 *)(p5c + 0xE) & 0xFF;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_802237B0(arg0, 0, &D_801BBBF0, a3);
        if ((v0[0x30] & 1) != 1) {
            if (t == 0xF4 || t == 0xF5 || t == 0xF6) {
                r = func_8037FFF0(arg0);
            } else {
                r = func_80129554(arg0, 0xFF, 0x40, a3);
            }
            if (r & 0xFF) {
                ((func_80222FD8_Struct *)a3)->f = 3;
                if (*(s32 *)((u8 *)arg0 + 0x64) != 0) {
                    func_80005700(*(s32 *)((u8 *)arg0 + 0x64));
                    *(s32 *)((u8 *)arg0 + 0x64) = 0;
                }
                func_800058DC(arg0, func_80127014);
            }
        }
    }
}
