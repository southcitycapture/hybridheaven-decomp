#include "context.h"
extern u8 func_802436A4[];
extern void func_80243538();
struct func_802434C0_Struct { u8 pad0[0x34]; u8 *unk34; u8 pad38[6]; u16 unk3E; u8 pad40[2]; u8 unk42; };
void func_802434C0(struct func_802434C0_Struct *arg0, s32 arg1) {
    u8 *v0 = arg0->unk34;
    u16 v1 = arg0->unk3E;
    arg0->unk42 = arg0->unk42 + 1;
    if (arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        if (v1 < 0x14) {
            *(u16 *)(v0 + 4) = 0x8000;
            func_800058DC((s32)arg0, func_802436A4);
        } else {
            *(u16 *)(v0 + 0xC) = 0x400;
            func_800058DC((s32)arg0, func_80243538);
        }
    }
}
