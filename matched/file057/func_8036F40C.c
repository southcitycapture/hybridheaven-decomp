#include "context.h"

void func_8036F40C(arg0, arg1)
    void *arg0;
    s32 volatile arg1;
{
    func_8036EBB8_StructS *s;
    u8 *a3;
    u8 *b;
    extern s32 func_80010550();
    extern void func_8036F528();

    if (arg0 == D_801BBBF0.unkDC) {
        s = (func_8036EBB8_StructS *)D_801BC03C;
    } else {
        s = (func_8036EBB8_StructS *)D_801BC3D8;
    }
    b = (u8 *)s;
    a3 = ((func_8036EBB8_Actor *)arg0)->unk5C;
    if (s->unk2 <= 0 || s->b1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        if ((*(u16 *)(b + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        b[0x390] = 2;
        b[0x33] = (b[0x33] & 0xFFE7) | 8;
        b[0x32] = (b[0x32] & 0xFF1F) | 0x20;
        func_80011258(arg1, a3 + 0x22, arg0);
        if (func_80010550(arg1, a3) != 0) {
            func_8036F528((s32)arg0, arg1);
        }
        s->unk392 = 0;
    }
}
