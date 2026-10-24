#include "context.h"

typedef struct func_80366888_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    union {
        struct {
            u32 b0 : 1;
            u32 f1 : 2;
            u32 f2 : 4;
            u32 rest : 25;
        } b;
        u16 h;
    } u30;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80366888_Struct;

extern void func_80225664(void *, void *, s32, s32);

#define G ((func_80366A0C_G *)&D_801BBBF0)

void func_80366888(func_803667C4_StructArg *arg0, s32 arg1) {
    void *sp44;
    func_80366888_Struct *v;
    func_80366888_Struct *o;
    func_80366090_Struct sp30;

    sp44 = arg0->unk5C;
    if ((s32)arg0 == G->unkDC) {
        v = (func_80366888_Struct *)D_801BC03C;
    } else {
        v = (func_80366888_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != G->unkDC) {
        o = (func_80366888_Struct *)D_801BC03C;
    } else {
        o = (func_80366888_Struct *)D_801BC3D8;
    }
    v->unk392 = 0;
    if (G->unk1031 == 0xF) {
        return;
    }
    if (v->unk2 <= 0 || v->u30.b.f1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if ((v->u30.h & 7) == 5) {
        func_8022397C(arg0);
        return;
    }
    if (v->u30.b.f2 != 1 || o->unk2 <= 0 || o->u30.b.f1 != 0) {
        func_80222450(arg0, arg1, 5);
        return;
    }
    func_80225664(&sp30, arg0, 0x01900073, arg1);
    ((u16 *)&sp30)[3] |= 0x100;
    if (func_80011140(arg1, (s32)sp44, sp30, 5) != 0) {
        func_800058DC((s32)arg0, func_80366A0C);
    }
}
