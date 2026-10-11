#include "context.h"
struct func_8038D660_StructA { u8 pad[0xC]; s32 unkC; u8 pad2[0x91-0x10]; u8 unk91; u8 pad3[0xA8-0x92]; u8 unkA8; u8 pad4[0xB0-0xA9]; void *unkB0; };
struct func_8038D660_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
struct func_8038D660_StructB { u8 pad[0x30]; union { u32 w; u16 h; } unk30; };
extern struct func_8038D660_StructG D_801BBBF0;
extern struct func_8038D660_StructB D_801BC3D8;
extern struct func_8038D660_StructB D_801BC03C;
extern u8 func_8022B3E0[];
extern void func_800058DC(void *, void *, void *);
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1) {
    struct func_8038D660_StructB *a1;
    struct func_8038D660_StructB *a2;
    u32 v;
    s32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D660;
        func_800058DC(arg0, func_8022B3E0, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    v = (a2->unk30.w << 11) >> 30;
    if (v != 0 && !(((struct func_8038D4F4_Arg0 *)arg0)->unk9A & 8)) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (v == 0) {
        t = ((struct func_8038D4F4_Arg0 *)arg0)->unk9A;
        if (t & 8) {
            ((struct func_8038D4F4_Arg0 *)arg0)->unk9A = t ^ 8;
            func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        }
    }
}
