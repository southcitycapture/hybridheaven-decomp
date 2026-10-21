#include "context.h"

void func_8037A960(func_8037A320_StructA *arg0, s32 arg1) {
    func_8037A320_StructP *sp[1];
    func_8037A320_StructV *q;
    func_8037A320_StructE *e;
    extern s32 func_80010550();
    extern void func_8037AA80();
    sp[0] = arg0->unk5C;
    if (func_8037B9F0((struct func_8037B9F0_StructB *)arg0) == 0) {
        q = D_801BBCD0->unk2C;
        if (func_801C5A1C(q->unk4, q->unk8 + 1.0, q->unkC, q->unk4, q->unk8 - 7.0, q->unkC) != 0) {
            if (func_80010550(arg1, (s32)sp[0]) != 0) {
                if (D_80388A6C == 1 || D_80388A6C == 2) {
                    e = (func_8037A320_StructE *)sp[0];
                    ((func_8037A320_StructP *)e)->e.w0 = 0x01900075;
                    e = &((func_8037A320_StructP *)e)->e;
                } else {
                    e = (func_8037A320_StructE *)sp[0];
                    ((func_8037A320_StructP *)e)->e.w0 = 0x01900077;
                    e = &((func_8037A320_StructP *)e)->e;
                }
                e->h4 = 0;
                e->h6 = 0;
                func_8013A28C(arg1, *e);
                func_800058DC(arg0, func_8037AA80);
            }
        }
    }
}
