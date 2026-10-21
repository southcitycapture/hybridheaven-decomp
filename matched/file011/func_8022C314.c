#include "context.h"
extern f64 D_8023F980;
struct func_8022C314_Struct {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 unk30 : 2;
    u32 pad30b : 21;
    u8 pad1[0x75 - 0x34];
    u8 unk75;
    u8 pad2[0x8A - 0x76];
    u16 unk8A;
    s16 unk8C;
    u8 pad3[2];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u8 pad4[0x308 - 0x96];
    f32 unk308;
};
void func_8022C314(struct func_8022C314_Struct *arg0) {
    struct func_8022C314_Struct *a;
    struct func_8022C314_Struct *b;
    struct func_8022C314_Struct *o;
    s16 n;
    u8 *p = (u8 *)arg0 - 0x44C;

    if (p == D_801BBBF0) {
        a = (void *)D_801BC3D8;
    } else {
        a = (void *)D_801BC03C;
    }
    if (p == D_801BBBF0) {
        o = *(void **)(D_801BBBF0 + 0x444);
    } else {
        o = *(void **)(D_801BBBF0 + 0x448);
    }
    n = ((arg0->unk92 + arg0->unk94 + arg0->unk90 + (arg0->unk30 == 2)) != 0) ? arg0->unk8C
        : (s16)(((arg0->unk8A - a->unk92 - a->unk94 - a->unk90 - (a->unk30 == 2)) != 0) ? (u16)a->unk8C : a->unk8A);
    if (n > 0) {
        arg0->unk308 = n / 10 + 1;
    } else {
        arg0->unk308 = 1.0f;
    }
    if (o->unk75 == 2) {
        arg0->unk308 = (f32)((f64)arg0->unk308 * D_8023F980);
    }
    if ((f64)arg0->unk308 > 2.0) {
        arg0->unk308 = 2.0f;
    }
}
